// Fill out your copyright notice in the Description page of Project Settings.


#include "Rendering/CustomSceneViewExtension.h"

#include "PixelShaderUtils.h"
#include "RenderGraphEvent.h"
#include "SceneRenderTargetParameters.h"
#include "SceneTexturesConfig.h"
#include "ShaderPasses/ColourExtractRenderPass.h"

// Yilin notes: this will be used in the renderthread function below
DECLARE_GPU_DRAWCALL_STAT(ColourExtract); // Unreal Insights

// Yilin notes: this registers the sceneview extension!
FCustomSceneViewExtension::FCustomSceneViewExtension(const FAutoRegister& AutoRegister) : FSceneViewExtensionBase(AutoRegister)
{
}

// Yilin notes: for adding variables to the shader during runtime
// type r.MyTest 1 into console (~ key)
static TAutoConsoleVariable<int32> CVarMyTest(
	TEXT("r.MyTest"), //name
	0, // default value
	TEXT("Test My Global Shader, set it to 0 to disable, or to 1, 2 or 3 for fun!"), // help msg
	ECVF_RenderThreadSafe //callback
);

void FCustomSceneViewExtension::PrePostProcessPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View,
                                                                const FPostProcessingInputs& Inputs)
{
	int32 MyTestValue = CVarMyTest.GetValueOnAnyThread();
	if (MyTestValue == 0)
	{
		return;
	}
	FSceneViewExtensionBase::PrePostProcessPass_RenderThread(GraphBuilder, View, Inputs);
	
	//1920 by 1080
	checkSlow(View.bIsViewInfo);
	const FIntRect Viewport = static_cast<const FViewInfo&>(View).ViewRect;
	// Requires RHI
	const FGlobalShaderMap* GlobalShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	
	RDG_GPU_STAT_SCOPE(GraphBuilder, ColourExtract); // Unreal Insights
	RDG_EVENT_SCOPE(GraphBuilder,  "Colour Extract"); // RenderDoc
	
	// Without the helper function
	// This is to get the base colour without shading/lighting
	const FSceneTextureShaderParameters SceneTextures = CreateSceneTextureShaderParameters(
		GraphBuilder, 
		View, 
		ESceneTextureSetupMode::SceneColor | ESceneTextureSetupMode::GBuffers
	);
	// This is colour with lighting, shading and shadows
	const FScreenPassTexture SceneColourTexture(
		(*Inputs.SceneTextures)->SceneColorTexture, 
		Viewport
	);
	
	// Yilin notes: params defined in ...RenderPass.h
	FColourExtractPS::FParameters* Parameters = GraphBuilder.AllocParameters<FColourExtractPS::FParameters>();
	Parameters->SceneColorTexture = SceneColourTexture.Texture;
	Parameters->SceneTextures = SceneTextures;
	// Convert the target colour to Lab colour space here instead of in the shader
	// That will reduce the amount of calculations needed in the shader
	if (MyTestValue == 1)
	{
		Parameters->TargetColour = FVector3f(1.0f, 0.0f, 0.0f);
	}
	else if (MyTestValue == 2) {
		Parameters->TargetColour = FVector3f(0.0f, 1.0f, 0.0f);
	}
	else {
		Parameters->TargetColour = FVector3f(0.0f, 0.0f, 1.0f);
	}
	
	Parameters->View = View.ViewUniformBuffer;
	// This will load the scene colour texture, and render to it
	Parameters->RenderTargets[0] = FRenderTargetBinding((*Inputs.SceneTextures)->SceneColorTexture, ERenderTargetLoadAction::ELoad);
	// reference to the shader
	TShaderMapRef<FColourExtractPS> PixelShader(GlobalShaderMap);
	// the event name will show up in unreal insights and render graph
	FPixelShaderUtils::AddFullscreenPass(GraphBuilder, GlobalShaderMap, FRDGEventName(TEXT("Colour Extract Pass")), PixelShader, Parameters, Viewport);

	/* Yilin notes: u can add multiple passes of diff shaders here
		{
			RDG_EVENT_SCOPE(GraphBuilder,  "level 2");
			// render pass code here
			{
				RDG_EVENT_SCOPE(GraphBuilder,  "level 3");
				// render pass code here
			}
		}
	*/
}

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 5
void FCustomSceneViewExtension::SubscribeToPostProcessingPass(EPostProcessingPass Pass, const FSceneView& View, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
#else
void FCustomSceneViewExtension::SubscribeToPostProcessingPass(EPostProcessingPass Pass,
	FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
#endif
{
	if(Pass == EPostProcessingPass::MotionBlur)
	{
#if false
		InOutPassCallbacks.Add(FAfterPassCallbackDelegate::CreateRaw(this, &FCustomSceneViewExtension::CustomPostProcessFunction));
#endif
	}
}

FScreenPassTexture FCustomSceneViewExtension::CustomPostProcessFunction(FRDGBuilder& GraphBuilder, const FSceneView& SceneView, const FPostProcessMaterialInputs& Inputs)
{
	// Do something here
	return FScreenPassTexture();
}

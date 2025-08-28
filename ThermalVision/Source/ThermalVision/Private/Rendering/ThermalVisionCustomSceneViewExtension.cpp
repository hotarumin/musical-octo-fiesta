// Fill out your copyright notice in the Description page of Project Settings.


#include "Rendering/ThermalVisionCustomSceneViewExtension.h"

#include "PixelShaderUtils.h"
#include "RenderGraphEvent.h"
#include "SceneRenderTargetParameters.h"
#include "SceneTexturesConfig.h"
#include "ShaderPasses/ThermalVisionRenderPass.h"
#include "Engine/Engine.h" 
// Yilin notes: this will be used in the renderthread function below
DECLARE_GPU_DRAWCALL_STAT(ColourExtract); // Unreal Insights

// Yilin notes: this registers the sceneview extension!
FThermalVisionCustomSceneViewExtension::FThermalVisionCustomSceneViewExtension(const FAutoRegister& AutoRegister) : FSceneViewExtensionBase(AutoRegister)
{
}

// Yilin notes: for adding variables to the shader during runtime
// type r.IsThermalVisionOn 1 into console (~ key)
static TAutoConsoleVariable<int32> CVarMyTest(
	TEXT("r.IsThermalVisionOn"), //name
	1, // default value
	TEXT("Test thermal vision Shader, set it to 0 to disable, or to 1 to on!"), // help msg
	ECVF_RenderThreadSafe //callback
);

void FThermalVisionCustomSceneViewExtension::PrePostProcessPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View,
                                                                const FPostProcessingInputs& Inputs)
{
	int32 MyTestValue = CVarMyTest.GetValueOnAnyThread();
	if (MyTestValue == 0)
	{
		return;
	}

	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("The Actor's name is %s"), UEnum::GetValueAsString(Desc.Format));
	//if ((*Inputs.SceneTextures)->CustomDepthTexture->Desc.Format != PF_DepthStencil) return; //necessary check for ue5 (PF_X24_G8 is only to read stencil from a PF_DepthStencil texture)

	FSceneViewExtensionBase::PrePostProcessPass_RenderThread(GraphBuilder, View, Inputs);
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("This is the pre-set text"));
	
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
	FThermalVisionPS::FParameters* Parameters = GraphBuilder.AllocParameters<FThermalVisionPS::FParameters>();
	Parameters->SceneColorTexture = SceneColourTexture.Texture;
	Parameters->SceneTextures = SceneTextures;
	
	Parameters->View = View.ViewUniformBuffer;
	//Parameters->InputStencilTexture = GraphBuilder.CreateSRV(FRDGTextureSRVDesc::CreateWithPixelFormat((*Inputs.SceneTextures)->CustomDepthTexture, PF_X24_G8));

	// This will load the scene colour texture, and render to it
	Parameters->RenderTargets[0] = FRenderTargetBinding((*Inputs.SceneTextures)->SceneColorTexture, ERenderTargetLoadAction::ELoad);
	// reference to the shader
	TShaderMapRef<FThermalVisionPS> PixelShader(GlobalShaderMap);
	// the event name will show up in unreal insights and render graph
	FPixelShaderUtils::AddFullscreenPass(GraphBuilder, GlobalShaderMap, FRDGEventName(TEXT("Thermal Vision Pass")), PixelShader, Parameters, Viewport);

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
void FThermalVisionCustomSceneViewExtension::SubscribeToPostProcessingPass(EPostProcessingPass Pass, const FSceneView& View, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
#else
void FThermalVisionCustomSceneViewExtension::SubscribeToPostProcessingPass(EPostProcessingPass Pass,
	FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
#endif
{
	if(Pass == EPostProcessingPass::MotionBlur)
	{
#if false
		InOutPassCallbacks.Add(FAfterPassCallbackDelegate::CreateRaw(this, &FThermalVisionCustomSceneViewExtension::CustomPostProcessFunction));
#endif
	}
}

FScreenPassTexture FThermalVisionCustomSceneViewExtension::CustomPostProcessFunction(FRDGBuilder& GraphBuilder, const FSceneView& SceneView, const FPostProcessMaterialInputs& Inputs)
{
	// Do something here
	return FScreenPassTexture();
}

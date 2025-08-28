// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "render_target/Public/renderTargetShader/renderTargetShader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCoderenderTargetShader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
RENDER_TARGET_API UClass* Z_Construct_UClass_UrenderTargetShaderLibrary();
RENDER_TARGET_API UClass* Z_Construct_UClass_UrenderTargetShaderLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_render_target();
// End Cross Module References

// Begin Class UrenderTargetShaderLibrary Function ExecuteRTComputeShader
struct Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics
{
	struct renderTargetShaderLibrary_eventExecuteRTComputeShader_Parms
	{
		UTextureRenderTarget2D* RT;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/renderTargetShader/renderTargetShader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::NewProp_RT = { "RT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(renderTargetShaderLibrary_eventExecuteRTComputeShader_Parms, RT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::NewProp_RT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UrenderTargetShaderLibrary, nullptr, "ExecuteRTComputeShader", nullptr, nullptr, Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::renderTargetShaderLibrary_eventExecuteRTComputeShader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::renderTargetShaderLibrary_eventExecuteRTComputeShader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UrenderTargetShaderLibrary::execExecuteRTComputeShader)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RT);
	P_FINISH;
	P_NATIVE_BEGIN;
	UrenderTargetShaderLibrary::ExecuteRTComputeShader(Z_Param_RT);
	P_NATIVE_END;
}
// End Class UrenderTargetShaderLibrary Function ExecuteRTComputeShader

// Begin Class UrenderTargetShaderLibrary
void UrenderTargetShaderLibrary::StaticRegisterNativesUrenderTargetShaderLibrary()
{
	UClass* Class = UrenderTargetShaderLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteRTComputeShader", &UrenderTargetShaderLibrary::execExecuteRTComputeShader },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UrenderTargetShaderLibrary);
UClass* Z_Construct_UClass_UrenderTargetShaderLibrary_NoRegister()
{
	return UrenderTargetShaderLibrary::StaticClass();
}
struct Z_Construct_UClass_UrenderTargetShaderLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a static blueprint library that can be used to invoke our compute shader from blueprints.\n" },
#endif
		{ "IncludePath", "renderTargetShader/renderTargetShader.h" },
		{ "ModuleRelativePath", "Public/renderTargetShader/renderTargetShader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a static blueprint library that can be used to invoke our compute shader from blueprints." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UrenderTargetShaderLibrary_ExecuteRTComputeShader, "ExecuteRTComputeShader" }, // 1291075322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UrenderTargetShaderLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UrenderTargetShaderLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_render_target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UrenderTargetShaderLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UrenderTargetShaderLibrary_Statics::ClassParams = {
	&UrenderTargetShaderLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UrenderTargetShaderLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UrenderTargetShaderLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UrenderTargetShaderLibrary()
{
	if (!Z_Registration_Info_UClass_UrenderTargetShaderLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UrenderTargetShaderLibrary.OuterSingleton, Z_Construct_UClass_UrenderTargetShaderLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UrenderTargetShaderLibrary.OuterSingleton;
}
template<> RENDER_TARGET_API UClass* StaticClass<UrenderTargetShaderLibrary>()
{
	return UrenderTargetShaderLibrary::StaticClass();
}
UrenderTargetShaderLibrary::UrenderTargetShaderLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UrenderTargetShaderLibrary);
UrenderTargetShaderLibrary::~UrenderTargetShaderLibrary() {}
// End Class UrenderTargetShaderLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UrenderTargetShaderLibrary, UrenderTargetShaderLibrary::StaticClass, TEXT("UrenderTargetShaderLibrary"), &Z_Registration_Info_UClass_UrenderTargetShaderLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UrenderTargetShaderLibrary), 1837677430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_3193355755(TEXT("/Script/render_target"),
	Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

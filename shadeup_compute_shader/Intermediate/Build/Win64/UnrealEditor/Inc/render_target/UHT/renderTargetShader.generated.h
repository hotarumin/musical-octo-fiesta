// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "renderTargetShader/renderTargetShader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
#ifdef RENDER_TARGET_renderTargetShader_generated_h
#error "renderTargetShader.generated.h already included, missing '#pragma once' in renderTargetShader.h"
#endif
#define RENDER_TARGET_renderTargetShader_generated_h

#define FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteRTComputeShader);


#define FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUrenderTargetShaderLibrary(); \
	friend struct Z_Construct_UClass_UrenderTargetShaderLibrary_Statics; \
public: \
	DECLARE_CLASS(UrenderTargetShaderLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/render_target"), NO_API) \
	DECLARE_SERIALIZER(UrenderTargetShaderLibrary)


#define FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UrenderTargetShaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UrenderTargetShaderLibrary(UrenderTargetShaderLibrary&&); \
	UrenderTargetShaderLibrary(const UrenderTargetShaderLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UrenderTargetShaderLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UrenderTargetShaderLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UrenderTargetShaderLibrary) \
	NO_API virtual ~UrenderTargetShaderLibrary();


#define FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_65_PROLOG
#define FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_68_INCLASS_NO_PURE_DECLS \
	FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDER_TARGET_API UClass* StaticClass<class UrenderTargetShaderLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_shadeup_compute_shader_Source_render_target_Public_renderTargetShader_renderTargetShader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

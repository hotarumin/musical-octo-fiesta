// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NightVision/Public/NightVisionCustomShaderSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNightVisionCustomShaderSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
NIGHTVISION_API UClass* Z_Construct_UClass_UNightVisionCustomShaderSubsystem();
NIGHTVISION_API UClass* Z_Construct_UClass_UNightVisionCustomShaderSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NightVision();
// End Cross Module References

// Begin Class UNightVisionCustomShaderSubsystem
void UNightVisionCustomShaderSubsystem::StaticRegisterNativesUNightVisionCustomShaderSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNightVisionCustomShaderSubsystem);
UClass* Z_Construct_UClass_UNightVisionCustomShaderSubsystem_NoRegister()
{
	return UNightVisionCustomShaderSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNightVisionCustomShaderSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NightVisionCustomShaderSubsystem.h" },
		{ "ModuleRelativePath", "Public/NightVisionCustomShaderSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNightVisionCustomShaderSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNightVisionCustomShaderSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NightVision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCustomShaderSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNightVisionCustomShaderSubsystem_Statics::ClassParams = {
	&UNightVisionCustomShaderSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCustomShaderSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNightVisionCustomShaderSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNightVisionCustomShaderSubsystem()
{
	if (!Z_Registration_Info_UClass_UNightVisionCustomShaderSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNightVisionCustomShaderSubsystem.OuterSingleton, Z_Construct_UClass_UNightVisionCustomShaderSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNightVisionCustomShaderSubsystem.OuterSingleton;
}
template<> NIGHTVISION_API UClass* StaticClass<UNightVisionCustomShaderSubsystem>()
{
	return UNightVisionCustomShaderSubsystem::StaticClass();
}
UNightVisionCustomShaderSubsystem::UNightVisionCustomShaderSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNightVisionCustomShaderSubsystem);
UNightVisionCustomShaderSubsystem::~UNightVisionCustomShaderSubsystem() {}
// End Class UNightVisionCustomShaderSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_NightVision_Source_NightVision_Public_NightVisionCustomShaderSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNightVisionCustomShaderSubsystem, UNightVisionCustomShaderSubsystem::StaticClass, TEXT("UNightVisionCustomShaderSubsystem"), &Z_Registration_Info_UClass_UNightVisionCustomShaderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNightVisionCustomShaderSubsystem), 361910740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_NightVision_Source_NightVision_Public_NightVisionCustomShaderSubsystem_h_4135921542(TEXT("/Script/NightVision"),
	Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_NightVision_Source_NightVision_Public_NightVisionCustomShaderSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_NightVision_Source_NightVision_Public_NightVisionCustomShaderSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

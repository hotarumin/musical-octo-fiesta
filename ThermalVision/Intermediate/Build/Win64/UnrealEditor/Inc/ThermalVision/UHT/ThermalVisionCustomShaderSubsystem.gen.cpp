// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThermalVision/Public/ThermalVisionCustomShaderSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThermalVisionCustomShaderSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
THERMALVISION_API UClass* Z_Construct_UClass_UThermalVisionCustomShaderSubsystem();
THERMALVISION_API UClass* Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThermalVision();
// End Cross Module References

// Begin Class UThermalVisionCustomShaderSubsystem
void UThermalVisionCustomShaderSubsystem::StaticRegisterNativesUThermalVisionCustomShaderSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThermalVisionCustomShaderSubsystem);
UClass* Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_NoRegister()
{
	return UThermalVisionCustomShaderSubsystem::StaticClass();
}
struct Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ThermalVisionCustomShaderSubsystem.h" },
		{ "ModuleRelativePath", "Public/ThermalVisionCustomShaderSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThermalVisionCustomShaderSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ThermalVision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_Statics::ClassParams = {
	&UThermalVisionCustomShaderSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThermalVisionCustomShaderSubsystem()
{
	if (!Z_Registration_Info_UClass_UThermalVisionCustomShaderSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThermalVisionCustomShaderSubsystem.OuterSingleton, Z_Construct_UClass_UThermalVisionCustomShaderSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThermalVisionCustomShaderSubsystem.OuterSingleton;
}
template<> THERMALVISION_API UClass* StaticClass<UThermalVisionCustomShaderSubsystem>()
{
	return UThermalVisionCustomShaderSubsystem::StaticClass();
}
UThermalVisionCustomShaderSubsystem::UThermalVisionCustomShaderSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThermalVisionCustomShaderSubsystem);
UThermalVisionCustomShaderSubsystem::~UThermalVisionCustomShaderSubsystem() {}
// End Class UThermalVisionCustomShaderSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_ThermalVision_Source_ThermalVision_Public_ThermalVisionCustomShaderSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThermalVisionCustomShaderSubsystem, UThermalVisionCustomShaderSubsystem::StaticClass, TEXT("UThermalVisionCustomShaderSubsystem"), &Z_Registration_Info_UClass_UThermalVisionCustomShaderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThermalVisionCustomShaderSubsystem), 4191655641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_ThermalVision_Source_ThermalVision_Public_ThermalVisionCustomShaderSubsystem_h_3159799089(TEXT("/Script/ThermalVision"),
	Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_ThermalVision_Source_ThermalVision_Public_ThermalVisionCustomShaderSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_65936_Documents_Unreal_Projects_PluginProject_Plugins_ThermalVision_Source_ThermalVision_Public_ThermalVisionCustomShaderSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

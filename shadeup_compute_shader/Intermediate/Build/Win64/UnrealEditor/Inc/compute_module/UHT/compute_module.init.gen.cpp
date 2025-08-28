// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecompute_module_init() {}
	COMPUTE_MODULE_API UFunction* Z_Construct_UDelegateFunction_compute_module_OnMySimpleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_compute_module;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_compute_module()
	{
		if (!Z_Registration_Info_UPackage__Script_compute_module.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_compute_module_OnMySimpleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/compute_module",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x825589C5,
				0xF3B6CD56,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_compute_module.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_compute_module.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_compute_module(Z_Construct_UPackage__Script_compute_module, TEXT("/Script/compute_module"), Z_Registration_Info_UPackage__Script_compute_module, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x825589C5, 0xF3B6CD56));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

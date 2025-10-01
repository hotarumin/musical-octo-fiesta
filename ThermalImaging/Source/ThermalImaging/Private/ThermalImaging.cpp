// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThermalImaging.h"
#include "GameplayTagsManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FThermalImagingModule"

void FThermalImagingModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IModuleInterface::StartupModule();

	// Load thermal tags from plugin config
	UGameplayTagsManager::Get().AddTagIniSearchPath(
		FPaths::Combine(IPluginManager::Get().FindPlugin("ThermalImaging")->GetBaseDir(), TEXT("Config"))
	);
}

void FThermalImagingModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FThermalImagingModule, ThermalImaging)
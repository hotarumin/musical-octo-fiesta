// Copyright Epic Games, Inc. All Rights Reserved.

#include "NightVision.h"

#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FNightVisionModule"

void FNightVisionModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	// Shaders is the folder with a private folder inside
	// Requires Projects
	const FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("NightVision"))->GetBaseDir(), TEXT("Shaders"));
	// Requires RenderCore

	/* Yilin notes :
	* C:/.../Plugins/plugin name/Shaders/private/shadername.usf
	* gets mapped to a virtual path
	* /NightVisionShaders/private/shadername.usf
	*/

	if (!AllShaderSourceDirectoryMappings().Contains(TEXT("/NightVisionShaders")))
	{
		AddShaderSourceDirectoryMapping(TEXT("/NightVisionShaders"), PluginShaderDir);
	}
}

void FNightVisionModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNightVisionModule, NightVision)
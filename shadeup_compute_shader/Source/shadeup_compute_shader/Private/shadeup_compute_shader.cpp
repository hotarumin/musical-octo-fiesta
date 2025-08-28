// Copyright Epic Games, Inc. All Rights Reserved.

#include "shadeup_compute_shader.h"

#define LOCTEXT_NAMESPACE "Fshadeup_compute_shaderModule"

void Fshadeup_compute_shaderModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void Fshadeup_compute_shaderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(Fshadeup_compute_shaderModule, shadeup_compute_shader)
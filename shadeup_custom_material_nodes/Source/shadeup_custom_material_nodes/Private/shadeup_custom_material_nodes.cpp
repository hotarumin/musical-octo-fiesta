// Copyright Epic Games, Inc. All Rights Reserved.

#include "shadeup_custom_material_nodes.h"

#define LOCTEXT_NAMESPACE "Fshadeup_custom_material_nodesModule"

void Fshadeup_custom_material_nodesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void Fshadeup_custom_material_nodesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(Fshadeup_custom_material_nodesModule, shadeup_custom_material_nodes)
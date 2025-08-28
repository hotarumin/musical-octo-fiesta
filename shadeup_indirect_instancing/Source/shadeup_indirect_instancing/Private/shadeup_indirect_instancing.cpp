// Copyright Epic Games, Inc. All Rights Reserved.

#include "shadeup_indirect_instancing.h"

#define LOCTEXT_NAMESPACE "Fshadeup_indirect_instancingModule"

void Fshadeup_indirect_instancingModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void Fshadeup_indirect_instancingModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(Fshadeup_indirect_instancingModule, shadeup_indirect_instancing)
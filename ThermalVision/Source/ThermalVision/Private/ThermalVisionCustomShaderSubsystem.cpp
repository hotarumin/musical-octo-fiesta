// Fill out your copyright notice in the Description page of Project Settings.


#include "ThermalVisionCustomShaderSubsystem.h"

#include "SceneViewExtension.h"

void UThermalVisionCustomShaderSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	CustomSceneViewExtension = FSceneViewExtensions::NewExtension<FThermalVisionCustomSceneViewExtension>();
}

void UThermalVisionCustomShaderSubsystem::Deinitialize()
{
	Super::Deinitialize();

	CustomSceneViewExtension.Reset();
	CustomSceneViewExtension = nullptr;
}

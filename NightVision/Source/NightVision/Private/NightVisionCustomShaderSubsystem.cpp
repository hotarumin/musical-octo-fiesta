// Fill out your copyright notice in the Description page of Project Settings.


#include "NightVisionCustomShaderSubsystem.h"

#include "SceneViewExtension.h"

void UNightVisionCustomShaderSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	CustomSceneViewExtension = FSceneViewExtensions::NewExtension<FNightVisionCustomSceneViewExtension>();
}

void UNightVisionCustomShaderSubsystem::Deinitialize()
{
	Super::Deinitialize();

	CustomSceneViewExtension.Reset();
	CustomSceneViewExtension = nullptr;
}

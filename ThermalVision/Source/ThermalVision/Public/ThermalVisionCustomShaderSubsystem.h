// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "Rendering/ThermalVisionCustomSceneViewExtension.h"
#include "ThermalVisionCustomShaderSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class THERMALVISION_API UThermalVisionCustomShaderSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()

private:
	TSharedPtr< class FThermalVisionCustomSceneViewExtension, ESPMode::ThreadSafe > CustomSceneViewExtension;
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	/*
	UFUNCTION(BlueprintCallable)
	static void ExecuteRTComputeShader(UTextureRenderTarget2D* RT)
	{
		// Create a dispatch parameters struct and fill it the input array with our args
		FrenderTargetShaderDispatchParams Params(RT->SizeX, RT->SizeY, 1);
		Params.RenderTarget = RT->GameThread_GetRenderTargetResource();

		FrenderTargetShaderInterface::Dispatch(Params);
	}
	*/
};

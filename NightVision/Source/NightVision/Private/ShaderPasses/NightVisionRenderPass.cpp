// Fill out your copyright notice in the Description page of Project Settings.

#include "ShaderPasses/NightVisionRenderPass.h"

#include "SceneRenderTargetParameters.h"
#include "SceneTexturesConfig.h"

// Yilin notes: args: 1. - 2. shader class (defined with params in ..RenderPass.cpp) 
// 3. shader location mapped to virtual path set in NightVision.cpp
// 4. function that will be called in the shader 5. the type of shader 
// The location is set as VirtualMappingSetInModuleInitialise/private/NameOfShader.usf
// MainPS is the entry point for the pixel shader - You can have multiple in a file but you have to specify separately
IMPLEMENT_SHADER_TYPE(, FNightVisionPS, TEXT("/NightVisionShaders/private/NightVisionPS.usf"), TEXT("MainPS"), SF_Pixel);
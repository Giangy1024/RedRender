// RedRenderRendering.h

#pragma once

#include "CoreMinimal.h"
#include "RenderGraphUtils.h"

void RenderMyCustomShader(
    FRDGBuilder& GraphBuilder,
    FRDGTextureRef OutputTexture,
    const FLinearColor& InColor,
    float InTime
);

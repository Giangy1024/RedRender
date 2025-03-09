// MyShaderBlueprintLibrary.cpp

#pragma once
#include "MyShaderBlueprintLibrary.h"
#include "MyCustomShader.h"
#include "Engine/TextureRenderTarget2D.h"
#include "RenderingThread.h"
#include "RenderGraphUtils.h"
#include "RHICommandList.h"
#include "RedRenderRendering.h"





void UMyShaderBlueprintLibrary::CallRenderMyCustomShader(UTextureRenderTarget2D* RenderTarget, FLinearColor Color)
{
    if (!RenderTarget)
    {
        UE_LOG(LogTemp, Warning, TEXT("RenderTarget is null!"));
        return;
    }

    ENQUEUE_RENDER_COMMAND(RenderMyCustomShaderCommand)(
        [RenderTarget, Color](FRHICommandListImmediate& RHICmdList)
        {
            FRDGBuilder GraphBuilder(RHICmdList);
            FRDGTextureRef OutputTexture = GraphBuilder.RegisterExternalTexture(CreateRenderTarget(RenderTarget->GetResource()->TextureRHI, TEXT("OutputRenderTarget")));

            // 3) 取一个时间值（你也可以换成别的）
            float TimeValue = FApp::GetCurrentTime(); // 或 GetWorld()->GetTimeSeconds() 之类

            RenderMyCustomShader(GraphBuilder, OutputTexture, Color, TimeValue);

            GraphBuilder.Execute();
        }
        );
}

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

            // 3) ȡһ��ʱ��ֵ����Ҳ���Ի��ɱ�ģ�
            float TimeValue = FApp::GetCurrentTime(); // �� GetWorld()->GetTimeSeconds() ֮��

            RenderMyCustomShader(GraphBuilder, OutputTexture, Color, TimeValue);

            GraphBuilder.Execute();
        }
        );
}

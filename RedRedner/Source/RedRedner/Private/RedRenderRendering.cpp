// RedRenderRendering.cpp


#pragma once
#include "RedRenderRendering.h"
#include "MyCustomShader.h"
#include "GlobalShader.h"
#include "ShaderParameterUtils.h"
#include "ScreenPass.h"
#include "PipelineStateCache.h"


// ���Ҫ�� GScreenVertexDeclaration / FScreenPassVS �ȣ�Ҳ���԰���:
// #include "ScreenRendering.h"



IMPLEMENT_GLOBAL_SHADER(
    FMyCustomShaderPS,
    "/Engine/Private/RedShader.usf",
    "MainPS",   // .usf �����ں���
    SF_Pixel    // ����������ɫ��
);




// �������ط������ĺ������� OutputTexture �л���һ������ɫ
void RenderMyCustomShader(
    FRDGBuilder& GraphBuilder,
    FRDGTextureRef OutputTexture,
    const FLinearColor& InColor,
    float InTime
)
{
    if (!OutputTexture)
    {
        return;
    }

    // 1) ȫ�� ShaderMap
    FGlobalShaderMap* GlobalShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);

    // 2) ������ɫ��ʵ��
    TShaderMapRef<FMyCustomShaderPS> PixelShader(GlobalShaderMap);

    // 3) ��������ɫ���������
    FMyCustomShaderPS::FParameters* PassParameters = GraphBuilder.AllocParameters<FMyCustomShaderPS::FParameters>();
    PassParameters->CustomColor = InColor;
    PassParameters->Time = InTime;
    // ָ��Ҫ�ѽ��д���ĸ� RenderTarget
    PassParameters->RenderTargets[0] = FRenderTargetBinding(OutputTexture, ERenderTargetLoadAction::ENoAction);

    // 4) �ӿ�����
    FScreenPassTextureViewport OutputViewport(OutputTexture);
    FScreenPassTextureViewport InputViewport(OutputTexture);

    // �� �޸Ĳ��֣��������� ViewRect����Ϊ FScreenPassViewInfo �Ѿ��������ó�Ա
    FScreenPassViewInfo MyViewInfo;
    // ����߼�����(������Գ�����ȡ�GammaУ����)�ɼ������������ֶ�

    // 5) ʹ���µ�8�������ذ汾��AddDrawScreenPass
    AddDrawScreenPass(
        GraphBuilder,
        RDG_EVENT_NAME("MyCustomShaderPass"),
        MyViewInfo,               // �� ���봫һ�� FScreenPassViewInfo
        OutputViewport,           // ����ӿ�
        InputViewport,            // �����ӿ�
        PixelShader,              // ������ɫ��
        PassParameters,           // ���� PixelShader �Ĳ���
        EScreenPassDrawFlags::None
    );
}



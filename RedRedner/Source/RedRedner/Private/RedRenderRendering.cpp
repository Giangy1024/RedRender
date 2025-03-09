// RedRenderRendering.cpp


#pragma once
#include "RedRenderRendering.h"
#include "MyCustomShader.h"
#include "GlobalShader.h"
#include "ShaderParameterUtils.h"
#include "ScreenPass.h"
#include "PipelineStateCache.h"


// 如果要用 GScreenVertexDeclaration / FScreenPassVS 等，也可以包含:
// #include "ScreenRendering.h"



IMPLEMENT_GLOBAL_SHADER(
    FMyCustomShaderPS,
    "/Engine/Private/RedShader.usf",
    "MainPS",   // .usf 里的入口函数
    SF_Pixel    // 声明像素着色器
);




// 在其他地方声明的函数：向 OutputTexture 中绘制一个纯颜色
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

    // 1) 全局 ShaderMap
    FGlobalShaderMap* GlobalShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);

    // 2) 像素着色器实例
    TShaderMapRef<FMyCustomShaderPS> PixelShader(GlobalShaderMap);

    // 3) 给像素着色器分配参数
    FMyCustomShaderPS::FParameters* PassParameters = GraphBuilder.AllocParameters<FMyCustomShaderPS::FParameters>();
    PassParameters->CustomColor = InColor;
    PassParameters->Time = InTime;
    // 指定要把结果写到哪个 RenderTarget
    PassParameters->RenderTargets[0] = FRenderTargetBinding(OutputTexture, ERenderTargetLoadAction::ENoAction);

    // 4) 视口描述
    FScreenPassTextureViewport OutputViewport(OutputTexture);
    FScreenPassTextureViewport InputViewport(OutputTexture);

    // ★ 修改部分：不再设置 ViewRect，因为 FScreenPassViewInfo 已经不包含该成员
    FScreenPassViewInfo MyViewInfo;
    // 如需高级功能(比如调试场景深度、Gamma校正等)可继续设置其他字段

    // 5) 使用新的8参数重载版本：AddDrawScreenPass
    AddDrawScreenPass(
        GraphBuilder,
        RDG_EVENT_NAME("MyCustomShaderPass"),
        MyViewInfo,               // ★ 必须传一个 FScreenPassViewInfo
        OutputViewport,           // 输出视口
        InputViewport,            // 输入视口
        PixelShader,              // 像素着色器
        PassParameters,           // 传给 PixelShader 的参数
        EScreenPassDrawFlags::None
    );
}



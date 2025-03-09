// MyCustomShader.h

#pragma once

#include "CoreMinimal.h"
#include "ShaderParameterMacros.h"
#include "ShaderParameterStruct.h"

#include "GlobalShader.h"
#include "ShaderParameterUtils.h"
#include "RHIStaticStates.h"




class FMyCustomShaderPS : public FGlobalShader
{
    DECLARE_GLOBAL_SHADER(FMyCustomShaderPS);
    SHADER_USE_PARAMETER_STRUCT(FMyCustomShaderPS, FGlobalShader);

    

    BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
        SHADER_PARAMETER(FLinearColor, CustomColor)
        SHADER_PARAMETER(float, Time)    // 用来替代 View.GameTime
        RENDER_TARGET_BINDING_SLOTS()  // 告诉 RDG，本 Shader 里要写入多少个 RenderTarget
    END_SHADER_PARAMETER_STRUCT()

public:
    static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
    {
        return true;
    }


};



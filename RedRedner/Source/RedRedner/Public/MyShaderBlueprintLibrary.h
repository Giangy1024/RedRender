// MyShaderBlueprintLibrary.h

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyShaderBlueprintLibrary.generated.h"

UCLASS()
class UMyShaderBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "CustomShader")
    static void CallRenderMyCustomShader(UTextureRenderTarget2D* RenderTarget, FLinearColor Color);
};

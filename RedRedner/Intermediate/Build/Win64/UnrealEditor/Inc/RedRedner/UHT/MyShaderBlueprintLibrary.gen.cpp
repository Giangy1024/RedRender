// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedRedner/Public/MyShaderBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShaderBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
REDREDNER_API UClass* Z_Construct_UClass_UMyShaderBlueprintLibrary();
REDREDNER_API UClass* Z_Construct_UClass_UMyShaderBlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RedRedner();
// End Cross Module References

// Begin Class UMyShaderBlueprintLibrary Function CallRenderMyCustomShader
struct Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics
{
	struct MyShaderBlueprintLibrary_eventCallRenderMyCustomShader_Parms
	{
		UTextureRenderTarget2D* RenderTarget;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomShader" },
		{ "ModuleRelativePath", "Public/MyShaderBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventCallRenderMyCustomShader_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventCallRenderMyCustomShader_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyShaderBlueprintLibrary, nullptr, "CallRenderMyCustomShader", nullptr, nullptr, Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::MyShaderBlueprintLibrary_eventCallRenderMyCustomShader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::MyShaderBlueprintLibrary_eventCallRenderMyCustomShader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyShaderBlueprintLibrary::execCallRenderMyCustomShader)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyShaderBlueprintLibrary::CallRenderMyCustomShader(Z_Param_RenderTarget,Z_Param_Color);
	P_NATIVE_END;
}
// End Class UMyShaderBlueprintLibrary Function CallRenderMyCustomShader

// Begin Class UMyShaderBlueprintLibrary
void UMyShaderBlueprintLibrary::StaticRegisterNativesUMyShaderBlueprintLibrary()
{
	UClass* Class = UMyShaderBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallRenderMyCustomShader", &UMyShaderBlueprintLibrary::execCallRenderMyCustomShader },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyShaderBlueprintLibrary);
UClass* Z_Construct_UClass_UMyShaderBlueprintLibrary_NoRegister()
{
	return UMyShaderBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyShaderBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MyShaderBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyShaderBlueprintLibrary_CallRenderMyCustomShader, "CallRenderMyCustomShader" }, // 2848404344
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyShaderBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RedRedner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::ClassParams = {
	&UMyShaderBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyShaderBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UMyShaderBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyShaderBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyShaderBlueprintLibrary.OuterSingleton;
}
template<> REDREDNER_API UClass* StaticClass<UMyShaderBlueprintLibrary>()
{
	return UMyShaderBlueprintLibrary::StaticClass();
}
UMyShaderBlueprintLibrary::UMyShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyShaderBlueprintLibrary);
UMyShaderBlueprintLibrary::~UMyShaderBlueprintLibrary() {}
// End Class UMyShaderBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_CustomShader_Plugins_RedRedner_Source_RedRedner_Public_MyShaderBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyShaderBlueprintLibrary, UMyShaderBlueprintLibrary::StaticClass, TEXT("UMyShaderBlueprintLibrary"), &Z_Registration_Info_UClass_UMyShaderBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyShaderBlueprintLibrary), 795994968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomShader_Plugins_RedRedner_Source_RedRedner_Public_MyShaderBlueprintLibrary_h_3808557319(TEXT("/Script/RedRedner"),
	Z_CompiledInDeferFile_FID_CustomShader_Plugins_RedRedner_Source_RedRedner_Public_MyShaderBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomShader_Plugins_RedRedner_Source_RedRedner_Public_MyShaderBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

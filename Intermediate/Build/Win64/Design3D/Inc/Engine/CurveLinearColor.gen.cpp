// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/CurveLinearColor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColor() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue();
// End Cross Module References
class UScriptStruct* FRuntimeCurveLinearColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor, Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeCurveLinearColor"), sizeof(FRuntimeCurveLinearColor), Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeCurveLinearColor>()
{
	return FRuntimeCurveLinearColor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeCurveLinearColor(FRuntimeCurveLinearColor::StaticStruct, TEXT("/Script/Engine"), TEXT("RuntimeCurveLinearColor"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRuntimeCurveLinearColor
{
	FScriptStruct_Engine_StaticRegisterNativesFRuntimeCurveLinearColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeCurveLinearColor")),new UScriptStruct::TCppStructOps<FRuntimeCurveLinearColor>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRuntimeCurveLinearColor;
	struct Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorCurves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeCurveLinearColor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve_MetaData[] = {
		{ "Category", "RuntimeFloatCurve" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve = { "ExternalCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeCurveLinearColor, ExternalCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves = { "ColorCurves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ColorCurves, FRuntimeCurveLinearColor), STRUCT_OFFSET(FRuntimeCurveLinearColor, ColorCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RuntimeCurveLinearColor",
		sizeof(FRuntimeCurveLinearColor),
		alignof(FRuntimeCurveLinearColor),
		Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeCurveLinearColor"), sizeof(FRuntimeCurveLinearColor), Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Hash() { return 849336446U; }
	void UCurveLinearColor::StaticRegisterNativesUCurveLinearColor()
	{
		UClass* Class = UCurveLinearColor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClampedLinearColorValue", &UCurveLinearColor::execGetClampedLinearColorValue },
			{ "GetLinearColorValue", &UCurveLinearColor::execGetLinearColorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics
	{
		struct CurveLinearColor_eventGetClampedLinearColorValue_Parms
		{
			float InTime;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveLinearColor_eventGetClampedLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveLinearColor_eventGetClampedLinearColorValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_InTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, nullptr, "GetClampedLinearColorValue", sizeof(CurveLinearColor_eventGetClampedLinearColorValue_Parms), Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics
	{
		struct CurveLinearColor_eventGetLinearColorValue_Parms
		{
			float InTime;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveLinearColor_eventGetLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveLinearColor_eventGetLinearColorValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_InTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, nullptr, "GetLinearColorValue", sizeof(CurveLinearColor_eventGetLinearColorValue_Parms), Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister()
	{
		return UCurveLinearColor::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveLinearColor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue, "GetClampedLinearColorValue" }, // 1419898135
		{ &Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue, "GetLinearColorValue" }, // 1431204862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "FilePath" },
		{ "IncludePath", "Curves/CurveLinearColor.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustMaxAlpha), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustMinAlpha), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustVibrance), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustBrightnessCurve), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustBrightness), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustSaturation), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "359.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
		{ "ToolTip", "Properties for adjusting the color of the gradient" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustHue), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
		{ "ToolTip", "Keyframe data, one curve for red, green, blue, and alpha" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FloatCurves, UCurveLinearColor), STRUCT_OFFSET(UCurveLinearColor, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColor_Statics::ClassParams = {
		&UCurveLinearColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveLinearColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveLinearColor, 3343182155);
	template<> ENGINE_API UClass* StaticClass<UCurveLinearColor>()
	{
		return UCurveLinearColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveLinearColor(Z_Construct_UClass_UCurveLinearColor, &UCurveLinearColor::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveLinearColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveLinearColor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

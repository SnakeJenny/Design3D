// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/CanvasTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWrappedStringElement();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextSizingParameters();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
class UScriptStruct* FWrappedStringElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FWrappedStringElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrappedStringElement, Z_Construct_UPackage__Script_Engine(), TEXT("WrappedStringElement"), sizeof(FWrappedStringElement), Get_Z_Construct_UScriptStruct_FWrappedStringElement_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWrappedStringElement>()
{
	return FWrappedStringElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrappedStringElement(FWrappedStringElement::StaticStruct, TEXT("/Script/Engine"), TEXT("WrappedStringElement"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFWrappedStringElement
{
	FScriptStruct_Engine_StaticRegisterNativesFWrappedStringElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WrappedStringElement")),new UScriptStruct::TCppStructOps<FWrappedStringElement>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFWrappedStringElement;
	struct Z_Construct_UScriptStruct_FWrappedStringElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrappedStringElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "Used by UUIString::WrapString to track information about each line that is generated as the result of wrapping." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrappedStringElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "the size (in pixels) that it will take to render this string" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent = { "LineExtent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrappedStringElement, LineExtent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "the string associated with this line" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrappedStringElement, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WrappedStringElement",
		sizeof(FWrappedStringElement),
		alignof(FWrappedStringElement),
		Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrappedStringElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrappedStringElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrappedStringElement"), sizeof(FWrappedStringElement), Get_Z_Construct_UScriptStruct_FWrappedStringElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWrappedStringElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrappedStringElement_Hash() { return 3099776520U; }
class UScriptStruct* FTextSizingParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextSizingParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextSizingParameters, Z_Construct_UPackage__Script_Engine(), TEXT("TextSizingParameters"), sizeof(FTextSizingParameters), Get_Z_Construct_UScriptStruct_FTextSizingParameters_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextSizingParameters>()
{
	return FTextSizingParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextSizingParameters(FTextSizingParameters::StaticStruct, TEXT("/Script/Engine"), TEXT("TextSizingParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextSizingParameters
{
	FScriptStruct_Engine_StaticRegisterNativesFTextSizingParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextSizingParameters")),new UScriptStruct::TCppStructOps<FTextSizingParameters>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextSizingParameters;
	struct Z_Construct_UScriptStruct_FTextSizingParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingAdjust_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpacingAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawYL_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawYL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawXL_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawXL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "General purpose data structure for grouping all parameters needed when sizing or wrapping a string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextSizingParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "Horizontal spacing adjustment between characters and vertical spacing adjustment between wrapped lines" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust = { "SpacingAdjust", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextSizingParameters, SpacingAdjust), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "the font to use for sizing/wrapping the string" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont = { "DrawFont", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextSizingParameters, DrawFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "A value between 0.0 and 1.0, which represents how much the width/height should be scaled, where 1.0 represents 100% scaling." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextSizingParameters, Scaling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the height of the area available for rendering the string" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL = { "DrawYL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextSizingParameters, DrawYL), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the width of the area available for rendering the string" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL = { "DrawXL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextSizingParameters, DrawXL), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the vertical screen location to begin rendering the string" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY = { "DrawY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextSizingParameters, DrawY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX_MetaData[] = {
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the horizontal screen location to begin rendering the string" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX = { "DrawX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextSizingParameters, DrawX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextSizingParameters",
		sizeof(FTextSizingParameters),
		alignof(FTextSizingParameters),
		Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextSizingParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextSizingParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextSizingParameters"), sizeof(FTextSizingParameters), Get_Z_Construct_UScriptStruct_FTextSizingParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextSizingParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextSizingParameters_Hash() { return 2887879006U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

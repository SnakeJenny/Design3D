// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Styling/SlateColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateColor() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateColorStylingMode();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* ESlateColorStylingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateColorStylingMode"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateColorStylingMode::Type>()
	{
		return ESlateColorStylingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateColorStylingMode(ESlateColorStylingMode_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateColorStylingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Hash() { return 2868399251U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateColorStylingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateColorStylingMode"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateColorStylingMode::UseColor_Specified", (int64)ESlateColorStylingMode::UseColor_Specified },
				{ "ESlateColorStylingMode::UseColor_Specified_Link", (int64)ESlateColorStylingMode::UseColor_Specified_Link },
				{ "ESlateColorStylingMode::UseColor_Foreground", (int64)ESlateColorStylingMode::UseColor_Foreground },
				{ "ESlateColorStylingMode::UseColor_Foreground_Subdued", (int64)ESlateColorStylingMode::UseColor_Foreground_Subdued },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
				{ "ToolTip", "Enumerates types of color values that can be held by Slate color.\n\nShould we use the specified color? If not, then which color from the style should we use." },
				{ "UseColor_Foreground.DisplayName", "Foreground Color" },
				{ "UseColor_Foreground.ToolTip", "Use the widget's foreground color." },
				{ "UseColor_Foreground_Subdued.Hidden", "" },
				{ "UseColor_Foreground_Subdued.ToolTip", "Use the widget's subdued color." },
				{ "UseColor_Specified.DisplayName", "Specified Color" },
				{ "UseColor_Specified.ToolTip", "Color value is stored in this Slate color." },
				{ "UseColor_Specified_Link.Hidden", "" },
				{ "UseColor_Specified_Link.ToolTip", "Color value is stored in the linked color." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ESlateColorStylingMode",
				"ESlateColorStylingMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSlateColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSlateColor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateColor, Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateColor"), sizeof(FSlateColor), Get_Z_Construct_UScriptStruct_FSlateColor_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateColor>()
{
	return FSlateColor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateColor(FSlateColor::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SlateColor"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSlateColor
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSlateColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateColor")),new UScriptStruct::TCppStructOps<FSlateColor>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSlateColor;
	struct Z_Construct_UScriptStruct_FSlateColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorUseRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorUseRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecifiedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecifiedColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "A Slate color can be a directly specified value, or the color can be pulled from a WidgetStyle." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateColor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "The rule for which color to pick." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule = { "ColorUseRule", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateColor, ColorUseRule), Z_Construct_UEnum_SlateCore_ESlateColorStylingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "The current specified color; only meaningful when ColorToUse == UseColor_Specified." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor = { "SpecifiedColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateColor, SpecifiedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateColor",
		sizeof(FSlateColor),
		alignof(FSlateColor),
		Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateColor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateColor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateColor"), sizeof(FSlateColor), Get_Z_Construct_UScriptStruct_FSlateColor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlateColor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateColor_Hash() { return 2930008009U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

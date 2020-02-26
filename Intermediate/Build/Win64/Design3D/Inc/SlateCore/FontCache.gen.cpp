// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Fonts/FontCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontCache() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextShapingMethod();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static UEnum* ETextShapingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ETextShapingMethod, Z_Construct_UPackage__Script_SlateCore(), TEXT("ETextShapingMethod"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ETextShapingMethod>()
	{
		return ETextShapingMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextShapingMethod(ETextShapingMethod_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ETextShapingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ETextShapingMethod_Hash() { return 3167363519U; }
	UEnum* Z_Construct_UEnum_SlateCore_ETextShapingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextShapingMethod"), 0, Get_Z_Construct_UEnum_SlateCore_ETextShapingMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextShapingMethod::Auto", (int64)ETextShapingMethod::Auto },
				{ "ETextShapingMethod::KerningOnly", (int64)ETextShapingMethod::KerningOnly },
				{ "ETextShapingMethod::FullShaping", (int64)ETextShapingMethod::FullShaping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.ToolTip", "Automatically picks the fastest possible shaping method (either KerningOnly or FullShaping) based on the reading direction of the text.\nLeft-to-right text uses the KerningOnly method, and right-to-left text uses the FullShaping method." },
				{ "BlueprintType", "true" },
				{ "FullShaping.ToolTip", "Provides full text shaping, allowing accurate rendering of complex right-to-left or bi-directional glyphs (such as Arabic).\nThis mode will perform ligature replacement for all languages (such as the combined \"fi\" glyph in English)." },
				{ "KerningOnly.ToolTip", "Provides fake shaping using only kerning data.\nThis can be faster than full shaping, but won't render complex right-to-left or bi-directional glyphs (such as Arabic) correctly.\nThis can be useful as an optimization when you know your text block will only show simple glyphs (such as numbers)." },
				{ "ModuleRelativePath", "Public/Fonts/FontCache.h" },
				{ "ToolTip", "Methods that can be used to shape text.\n@note If you change this enum, make sure and update CVarDefaultTextShapingMethod and GetDefaultTextShapingMethod." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ETextShapingMethod",
				"ETextShapingMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

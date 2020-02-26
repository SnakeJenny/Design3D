// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Fonts/SlateFontInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateFontInfo() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontFallback();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFontOutlineSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* EFontFallback_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontFallback, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontFallback"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFontFallback>()
	{
		return EFontFallback_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontFallback(EFontFallback_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFontFallback"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFontFallback_Hash() { return 4215497836U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFontFallback()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontFallback"), 0, Get_Z_Construct_UEnum_SlateCore_EFontFallback_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontFallback::FF_NoFallback", (int64)EFontFallback::FF_NoFallback },
				{ "EFontFallback::FF_LocalizedFallback", (int64)EFontFallback::FF_LocalizedFallback },
				{ "EFontFallback::FF_LastResortFallback", (int64)EFontFallback::FF_LastResortFallback },
				{ "EFontFallback::FF_Max", (int64)EFontFallback::FF_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FF_LastResortFallback.ToolTip", "Fallback to last resort font set" },
				{ "FF_LocalizedFallback.ToolTip", "Fallback to localized font set" },
				{ "FF_Max.ToolTip", "Tries all fallbacks" },
				{ "FF_NoFallback.ToolTip", "No fallback font" },
				{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
				{ "ToolTip", "Sets the maximum font fallback level, for when a character can't be found in the selected font set.\n\nUI code that renders strings from a third party (e.g. player chat in a multiplayer game), should restrict font fallback to localized,\n(or to no fallback, if international font isn't important), to prevent potential performance problems." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EFontFallback",
				"EFontFallback",
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
class UScriptStruct* FSlateFontInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateFontInfo, Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateFontInfo"), sizeof(FSlateFontInfo), Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateFontInfo>()
{
	return FSlateFontInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateFontInfo(FSlateFontInfo::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SlateFontInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateFontInfo")),new UScriptStruct::TCppStructOps<FSlateFontInfo>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo;
	struct Z_Construct_UScriptStruct_FSlateFontInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hinting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FontName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypefaceFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TypefaceFontName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "A representation of a font in Slate." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateFontInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The hinting algorithm to use with the font" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting = { "Hinting", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, Hinting_DEPRECATED), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The name of the font" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName = { "FontName", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, FontName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The font size is a measure in point values.  The conversion of points to Slate Units is done at 96 dpi.  So if\nyou're using a tool like Photoshop to prototype layouts and UI mock ups, be sure to change the default dpi\nmeasurements from 72 dpi to 96 dpi." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "DisplayName", "Typeface" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The name of the font to use from the default typeface (None will use the first entry)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName = { "TypefaceFontName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, TypefaceFontName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Settings for applying an outline to a font" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings = { "OutlineSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, OutlineSettings), Z_Construct_UScriptStruct_FFontOutlineSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData[] = {
		{ "AllowedClasses", "MaterialInterface" },
		{ "Category", "SlateStyleRules" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The material to use when rendering this font" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial = { "FontMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, FontMaterial), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData[] = {
		{ "AllowedClasses", "Font" },
		{ "Category", "SlateStyleRules" },
		{ "DisplayName", "Font Family" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The font object (valid when used from UMG or a Slate widget style asset)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject = { "FontObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, FontObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateFontInfo",
		sizeof(FSlateFontInfo),
		alignof(FSlateFontInfo),
		Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateFontInfo"), sizeof(FSlateFontInfo), Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlateFontInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash() { return 633474151U; }
class UScriptStruct* FFontOutlineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontOutlineSettings, Z_Construct_UPackage__Script_SlateCore(), TEXT("FontOutlineSettings"), sizeof(FFontOutlineSettings), Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FFontOutlineSettings>()
{
	return FFontOutlineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontOutlineSettings(FFontOutlineSettings::StaticStruct, TEXT("/Script/SlateCore"), TEXT("FontOutlineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings
{
	FScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontOutlineSettings")),new UScriptStruct::TCppStructOps<FFontOutlineSettings>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings;
	struct Z_Construct_UScriptStruct_FFontOutlineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyOutlineToDropShadows_MetaData[];
#endif
		static void NewProp_bApplyOutlineToDropShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyOutlineToDropShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSeparateFillAlpha_MetaData[];
#endif
		static void NewProp_bSeparateFillAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeparateFillAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutlineSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Settings for applying an outline to a font" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontOutlineSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The color of the outline for any character in this font" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontOutlineSettings, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData[] = {
		{ "AllowedClasses", "MaterialInterface" },
		{ "Category", "SlateStyleRules" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Optional material to apply to the outline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial = { "OutlineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontOutlineSettings, OutlineMaterial), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "When enabled the outline will be applied to any drop shadow that uses this font" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_SetBit(void* Obj)
	{
		((FFontOutlineSettings*)Obj)->bApplyOutlineToDropShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows = { "bApplyOutlineToDropShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFontOutlineSettings), &Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "When enabled the outline will be completely translucent where the filled area will be.  This allows for a separate fill alpha value\nThe trade off when enabling this is slightly worse quality for completely opaque fills where the inner outline border meets the fill area" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_SetBit(void* Obj)
	{
		((FFontOutlineSettings*)Obj)->bSeparateFillAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha = { "bSeparateFillAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFontOutlineSettings), &Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Size of the outline in slate units (at 1.0 font scale this unit is a pixel)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize = { "OutlineSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontOutlineSettings, OutlineSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"FontOutlineSettings",
		sizeof(FFontOutlineSettings),
		alignof(FFontOutlineSettings),
		Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontOutlineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontOutlineSettings"), sizeof(FFontOutlineSettings), Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash() { return 3664841879U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

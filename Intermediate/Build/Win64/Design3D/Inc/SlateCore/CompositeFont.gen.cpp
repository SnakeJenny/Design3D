// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Fonts/CompositeFont.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeFont() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeSubFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeFallbackFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTypeface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTypefaceEntry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFontData();
	SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EFontLayoutMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontLayoutMethod, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontLayoutMethod"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFontLayoutMethod>()
	{
		return EFontLayoutMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontLayoutMethod(EFontLayoutMethod_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFontLayoutMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Hash() { return 1640746597U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontLayoutMethod"), 0, Get_Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontLayoutMethod::Metrics", (int64)EFontLayoutMethod::Metrics },
				{ "EFontLayoutMethod::BoundingBox", (int64)EFontLayoutMethod::BoundingBox },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BoundingBox.ToolTip", "Layout the font using the values from its bounding box. This typically yields a larger line height for fonts that have valid metrics, however it can also produce much better results for fonts that have broken or incorrect metrics." },
				{ "Metrics.ToolTip", "Layout the font using the metrics data available in the font. This is typically the desired option, however some fonts have broken or incorrect metrics so may yield better results when using the bounding box values to layout the font." },
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EFontLayoutMethod",
				"EFontLayoutMethod",
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
	static UEnum* EFontLoadingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontLoadingPolicy"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFontLoadingPolicy>()
	{
		return EFontLoadingPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontLoadingPolicy(EFontLoadingPolicy_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFontLoadingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Hash() { return 1581645099U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontLoadingPolicy"), 0, Get_Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontLoadingPolicy::LazyLoad", (int64)EFontLoadingPolicy::LazyLoad },
				{ "EFontLoadingPolicy::Stream", (int64)EFontLoadingPolicy::Stream },
				{ "EFontLoadingPolicy::Inline", (int64)EFontLoadingPolicy::Inline },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Inline.ToolTip", "Embed the font data within the asset. This will consume more memory than Streaming, however it is guaranteed to be hitch free (only valid for font data within a Font Face asset)." },
				{ "LazyLoad.ToolTip", "Lazy load the entire font into memory. This will consume more memory than Streaming, however there will be zero file-IO when rendering glyphs within the font, although the initial load may cause a hitch." },
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "Stream.ToolTip", "Stream the font from disk. This will consume less memory than LazyLoad or Inline, however there will be file-IO when rendering glyphs, which may cause hitches under certain circumstances or on certain platforms." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EFontLoadingPolicy",
				"EFontLoadingPolicy",
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
	static UEnum* EFontHinting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontHinting, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontHinting"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFontHinting>()
	{
		return EFontHinting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontHinting(EFontHinting_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFontHinting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFontHinting_Hash() { return 3908218454U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFontHinting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontHinting"), 0, Get_Z_Construct_UEnum_SlateCore_EFontHinting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontHinting::Default", (int64)EFontHinting::Default },
				{ "EFontHinting::Auto", (int64)EFontHinting::Auto },
				{ "EFontHinting::AutoLight", (int64)EFontHinting::AutoLight },
				{ "EFontHinting::Monochrome", (int64)EFontHinting::Monochrome },
				{ "EFontHinting::None", (int64)EFontHinting::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.ToolTip", "Force the use of an automatic hinting algorithm." },
				{ "AutoLight.ToolTip", "Force the use of an automatic light hinting algorithm, optimized for non-monochrome displays." },
				{ "Default.ToolTip", "Use the default hinting specified in the font." },
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "Monochrome.ToolTip", "Force the use of an automatic hinting algorithm optimized for monochrome displays." },
				{ "None.ToolTip", "Do not use hinting." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EFontHinting",
				"EFontHinting",
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
class UScriptStruct* FCompositeFont::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCompositeFont_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeFont, Z_Construct_UPackage__Script_SlateCore(), TEXT("CompositeFont"), sizeof(FCompositeFont), Get_Z_Construct_UScriptStruct_FCompositeFont_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCompositeFont>()
{
	return FCompositeFont::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompositeFont(FCompositeFont::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CompositeFont"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompositeFont")),new UScriptStruct::TCppStructOps<FCompositeFont>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont;
	struct Z_Construct_UScriptStruct_FCompositeFont_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTypefaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubTypefaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubTypefaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackTypeface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FallbackTypeface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTypeface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTypeface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFont_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeFont_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeFont>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Sub-typefaces to use for a specific set of characters" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces = { "SubTypefaces", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompositeFont, SubTypefaces), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_Inner = { "SubTypefaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCompositeSubFont, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The fallback typeface that will be used as a last resort when no other typeface provides a match" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface = { "FallbackTypeface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompositeFont, FallbackTypeface), Z_Construct_UScriptStruct_FCompositeFallbackFont, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The default typeface that will be used when not overridden by a sub-typeface" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface = { "DefaultTypeface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompositeFont, DefaultTypeface), Z_Construct_UScriptStruct_FTypeface, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeFont_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"CompositeFont",
		sizeof(FCompositeFont),
		alignof(FCompositeFont),
		Z_Construct_UScriptStruct_FCompositeFont_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFont_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompositeFont_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompositeFont"), sizeof(FCompositeFont), Get_Z_Construct_UScriptStruct_FCompositeFont_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompositeFont_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompositeFont_Hash() { return 2111008626U; }
class UScriptStruct* FCompositeSubFont::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCompositeSubFont_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeSubFont, Z_Construct_UPackage__Script_SlateCore(), TEXT("CompositeSubFont"), sizeof(FCompositeSubFont), Get_Z_Construct_UScriptStruct_FCompositeSubFont_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCompositeSubFont>()
{
	return FCompositeSubFont::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompositeSubFont(FCompositeSubFont::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CompositeSubFont"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompositeSubFont")),new UScriptStruct::TCppStructOps<FCompositeSubFont>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont;
	struct Z_Construct_UScriptStruct_FCompositeSubFont_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EditorName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cultures_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Cultures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterRanges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterRanges_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSubFont_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeSubFont>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Name of this sub-font. Only used by the editor UI as a convenience to let you state the purpose of the font family." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName = { "EditorName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompositeSubFont, EditorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Optional semi-colon separated list of cultures that this sub-font should be used with (if specified, this sub-font will be favored by those cultures and ignored by others)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures = { "Cultures", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompositeSubFont, Cultures), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Array of character ranges for which this sub-font should be used" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges = { "CharacterRanges", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompositeSubFont, CharacterRanges), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_Inner = { "CharacterRanges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeSubFont_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FCompositeFallbackFont,
		&NewStructOps,
		"CompositeSubFont",
		sizeof(FCompositeSubFont),
		alignof(FCompositeSubFont),
		Z_Construct_UScriptStruct_FCompositeSubFont_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeSubFont()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompositeSubFont_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompositeSubFont"), sizeof(FCompositeSubFont), Get_Z_Construct_UScriptStruct_FCompositeSubFont_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompositeSubFont_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompositeSubFont_Hash() { return 1441668644U; }
class UScriptStruct* FCompositeFallbackFont::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCompositeFallbackFont_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeFallbackFont, Z_Construct_UPackage__Script_SlateCore(), TEXT("CompositeFallbackFont"), sizeof(FCompositeFallbackFont), Get_Z_Construct_UScriptStruct_FCompositeFallbackFont_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCompositeFallbackFont>()
{
	return FCompositeFallbackFont::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompositeFallbackFont(FCompositeFallbackFont::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CompositeFallbackFont"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCompositeFallbackFont
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCompositeFallbackFont()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompositeFallbackFont")),new UScriptStruct::TCppStructOps<FCompositeFallbackFont>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFallbackFont;
	struct Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Typeface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Typeface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeFallbackFont>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Amount to scale this sub-font so that it better matches the size of the default font" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompositeFallbackFont, ScalingFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Typeface data for this sub-font" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface = { "Typeface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompositeFallbackFont, Typeface), Z_Construct_UScriptStruct_FTypeface, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"CompositeFallbackFont",
		sizeof(FCompositeFallbackFont),
		alignof(FCompositeFallbackFont),
		Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeFallbackFont()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompositeFallbackFont_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompositeFallbackFont"), sizeof(FCompositeFallbackFont), Get_Z_Construct_UScriptStruct_FCompositeFallbackFont_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompositeFallbackFont_Hash() { return 2372411545U; }
class UScriptStruct* FTypeface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FTypeface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeface, Z_Construct_UPackage__Script_SlateCore(), TEXT("Typeface"), sizeof(FTypeface), Get_Z_Construct_UScriptStruct_FTypeface_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTypeface>()
{
	return FTypeface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTypeface(FTypeface::StaticStruct, TEXT("/Script/SlateCore"), TEXT("Typeface"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFTypeface
{
	FScriptStruct_SlateCore_StaticRegisterNativesFTypeface()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Typeface")),new UScriptStruct::TCppStructOps<FTypeface>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFTypeface;
	struct Z_Construct_UScriptStruct_FTypeface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fonts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fonts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fonts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeface_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Definition for a typeface (a family of fonts)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypeface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeface>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The fonts contained within this family" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts = { "Fonts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTypeface, Fonts), METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_Inner = { "Fonts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTypefaceEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypeface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypeface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"Typeface",
		sizeof(FTypeface),
		alignof(FTypeface),
		Z_Construct_UScriptStruct_FTypeface_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeface_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypeface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTypeface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Typeface"), sizeof(FTypeface), Get_Z_Construct_UScriptStruct_FTypeface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTypeface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTypeface_Hash() { return 3868757200U; }
class UScriptStruct* FTypefaceEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FTypefaceEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypefaceEntry, Z_Construct_UPackage__Script_SlateCore(), TEXT("TypefaceEntry"), sizeof(FTypefaceEntry), Get_Z_Construct_UScriptStruct_FTypefaceEntry_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTypefaceEntry>()
{
	return FTypefaceEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTypefaceEntry(FTypefaceEntry::StaticStruct, TEXT("/Script/SlateCore"), TEXT("TypefaceEntry"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry
{
	FScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TypefaceEntry")),new UScriptStruct::TCppStructOps<FTypefaceEntry>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry;
	struct Z_Construct_UScriptStruct_FTypefaceEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypefaceEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "A single entry in a typeface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypefaceEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Raw font data for this font" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTypefaceEntry, Font), Z_Construct_UScriptStruct_FFontData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Name used to identify this font within its typeface" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTypefaceEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypefaceEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypefaceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"TypefaceEntry",
		sizeof(FTypefaceEntry),
		alignof(FTypefaceEntry),
		Z_Construct_UScriptStruct_FTypefaceEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypefaceEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTypefaceEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TypefaceEntry"), sizeof(FTypefaceEntry), Get_Z_Construct_UScriptStruct_FTypefaceEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTypefaceEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTypefaceEntry_Hash() { return 3019304494U; }
class UScriptStruct* FFontData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FFontData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontData, Z_Construct_UPackage__Script_SlateCore(), TEXT("FontData"), sizeof(FFontData), Get_Z_Construct_UScriptStruct_FFontData_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FFontData>()
{
	return FFontData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontData(FFontData::StaticStruct, TEXT("/Script/SlateCore"), TEXT("FontData"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFFontData
{
	FScriptStruct_SlateCore_StaticRegisterNativesFFontData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontData")),new UScriptStruct::TCppStructOps<FFontData>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFFontData;
	struct Z_Construct_UScriptStruct_FFontData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FontData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulkDataPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulkDataPtr;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontFaceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontFaceAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubFaceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubFaceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hinting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FontFilename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Payload data describing an individual font in a typeface. Keep this lean as it's also used as a key!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Legacy font data v1. This used to be where font data was stored prior to font bulk data.\nThis can be removed once we no longer support loading packages older than VER_UE4_SLATE_BULK_FONT_DATA." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData = { "FontData", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontData, FontData_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_Inner = { "FontData", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Legacy font data v2. This used to be where font data was stored prior to font face assets.\nThis can be removed once we no longer support loading packages older than FEditorObjectVersion::AddedFontFaceAssets (as can UFontBulkData itself)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr = { "BulkDataPtr", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontData, BulkDataPtr_DEPRECATED), Z_Construct_UClass_UFontBulkData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Font data v3. This points to a font face asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset = { "FontFaceAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontData, FontFaceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The index of the sub-face that should be used.\nThis is typically zero unless using a TTC/OTC font." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex = { "SubFaceIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontData, SubFaceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Enum controlling how this font should be loaded at runtime. See the enum for more explanations of the options.\nThis variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontData, LoadingPolicy), Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The hinting algorithm to use with the font.\nThis variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting = { "Hinting", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontData, Hinting), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The filename of the font to use.\nThis variable is ignored if we have a font face asset, and is set to the .ufont file in a cooked build." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename = { "FontFilename", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontData, FontFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"FontData",
		sizeof(FFontData),
		alignof(FFontData),
		Z_Construct_UScriptStruct_FFontData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontData"), sizeof(FFontData), Get_Z_Construct_UScriptStruct_FFontData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFontData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontData_Hash() { return 3583074132U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

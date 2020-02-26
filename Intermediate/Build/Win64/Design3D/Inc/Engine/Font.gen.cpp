// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Font.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFont() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFontCacheType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontCharacter();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_UFontProviderInterface_NoRegister();
// End Cross Module References
	static UEnum* EFontCacheType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFontCacheType, Z_Construct_UPackage__Script_Engine(), TEXT("EFontCacheType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFontCacheType>()
	{
		return EFontCacheType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontCacheType(EFontCacheType_StaticEnum, TEXT("/Script/Engine"), TEXT("EFontCacheType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFontCacheType_Hash() { return 4232821165U; }
	UEnum* Z_Construct_UEnum_Engine_EFontCacheType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontCacheType"), 0, Get_Z_Construct_UEnum_Engine_EFontCacheType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontCacheType::Offline", (int64)EFontCacheType::Offline },
				{ "EFontCacheType::Runtime", (int64)EFontCacheType::Runtime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "Offline.ToolTip", "The font is using offline caching (this is how UFont traditionally worked)." },
				{ "Runtime.ToolTip", "The font is using runtime caching (this is how Slate fonts work)." },
				{ "ToolTip", "Enumerates supported font caching types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EFontCacheType",
				"EFontCacheType",
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
class UScriptStruct* FFontCharacter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFontCharacter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontCharacter, Z_Construct_UPackage__Script_Engine(), TEXT("FontCharacter"), sizeof(FFontCharacter), Get_Z_Construct_UScriptStruct_FFontCharacter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFontCharacter>()
{
	return FFontCharacter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontCharacter(FFontCharacter::StaticStruct, TEXT("/Script/Engine"), TEXT("FontCharacter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFontCharacter
{
	FScriptStruct_Engine_StaticRegisterNativesFFontCharacter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontCharacter")),new UScriptStruct::TCppStructOps<FFontCharacter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFontCharacter;
	struct Z_Construct_UScriptStruct_FFontCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_USize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_USize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartV_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartU_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartU;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "This struct is serialized using native serialization so any changes to it require a package version bump." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontCharacter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset = { "VerticalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontCharacter, VerticalOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontCharacter, TextureIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize = { "VSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontCharacter, VSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize = { "USize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontCharacter, USize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV = { "StartV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontCharacter, StartV), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU = { "StartU", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontCharacter, StartU), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FontCharacter",
		sizeof(FFontCharacter),
		alignof(FFontCharacter),
		Z_Construct_UScriptStruct_FFontCharacter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontCharacter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontCharacter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontCharacter"), sizeof(FFontCharacter), Get_Z_Construct_UScriptStruct_FFontCharacter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFontCharacter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontCharacter_Hash() { return 1757958264U; }
	void UFont::StaticRegisterNativesUFont()
	{
	}
	UClass* Z_Construct_UClass_UFont_NoRegister()
	{
		return UFont::StaticClass();
	}
	struct Z_Construct_UClass_UFont_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompositeFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegacyFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LegacyFontName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegacyFontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LegacyFontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCharHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxCharHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCharHeight_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kerning_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kerning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leading_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Leading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Descent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ascent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ascent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRemapped_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IsRemapped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Characters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontCacheType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FontCacheType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FontCacheType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFont_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Font" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Font.h" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A font object, for use by Slate, UMG, and Canvas.\n\nA font can either be:\n  * Runtime cached - The font contains a series of TTF files that combine to form a composite font. The glyphs are cached on demand when required at runtime.\n  * Offline cached - The font contains a series of textures containing pre-baked cached glyphs and their associated texture coordinates." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Embedded composite font data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont = { "CompositeFont", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, CompositeFont), Z_Construct_UScriptStruct_FCompositeFont, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName_MetaData[] = {
		{ "Category", "RuntimeFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "The default font name to use for legacy Canvas APIs that don't specify a font name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName = { "LegacyFontName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, LegacyFontName), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize_MetaData[] = {
		{ "Category", "RuntimeFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "The default size of the font used for legacy Canvas APIs that don't specify a font size" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize = { "LegacyFontSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, LegacyFontSize), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Scale to apply to the font." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, ScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "The maximum height of a character in this font.  For multi-fonts, this array will contain a maximum\n              character height for each multi-font, otherwise the array will contain only a single element.  This is\n              cached at load-time or creation time, and is never serialized." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight = { "MaxCharHeight", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, MaxCharHeight), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_Inner = { "MaxCharHeight", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Number of characters in the font, not including multiple instances of the same character (for multi-fonts).\n              This is cached at load-time or creation time, and is never serialized." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters = { "NumCharacters", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, NumCharacters), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Options used when importing this font" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, ImportOptions), Z_Construct_UScriptStruct_FFontImportOptionsData, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Kerning_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Default horizontal spacing between characters when rendering text with this font" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Kerning = { "Kerning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, Kerning), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Kerning_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Kerning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Leading_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Leading = { "Leading", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, Leading), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Leading_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Leading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Descent_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Descent = { "Descent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, Descent), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Descent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Descent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Ascent_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Ascent = { "Ascent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, Ascent), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Ascent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Ascent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_EmScale_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Font metrics." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_EmScale = { "EmScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, EmScale), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_EmScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_EmScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "True if font is 'remapped'.  That is, the character array is not a direct mapping to unicode values.  Instead,\n              all characters are indexed indirectly through the CharRemap array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped = { "IsRemapped", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, IsRemapped), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Textures that store this font's glyph image data //NOTE: Do not expose this to the editor as it has nasty crash potential" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, Textures), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Textures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "List of characters in the font.  For a MultiFont, this will include all characters in all sub-fonts!  Thus,\n              the number of characters in this array isn't necessary the number of characters available in the font" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, Characters), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Characters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Characters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFontCharacter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_MetaData[] = {
		{ "Category", "Font" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "What kind of font caching should we use? This controls which options we see" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType = { "FontCacheType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFont, FontCacheType), Z_Construct_UEnum_Engine_EFontCacheType, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Kerning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Leading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Descent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Ascent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_EmScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Textures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Characters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_Underlying,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFont_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFontProviderInterface_NoRegister, (int32)VTABLE_OFFSET(UFont, IFontProviderInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFont_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFont>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFont_Statics::ClassParams = {
		&UFont::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFont_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFont()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFont_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFont, 3576629511);
	template<> ENGINE_API UClass* StaticClass<UFont>()
	{
		return UFont::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFont(Z_Construct_UClass_UFont, &UFont::StaticClass, TEXT("/Script/Engine"), TEXT("UFont"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFont);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFont)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/FontImportOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontImportOptions() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFontImportCharacterSet();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EFontImportCharacterSet_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFontImportCharacterSet, Z_Construct_UPackage__Script_Engine(), TEXT("EFontImportCharacterSet"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFontImportCharacterSet>()
	{
		return EFontImportCharacterSet_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontImportCharacterSet(EFontImportCharacterSet_StaticEnum, TEXT("/Script/Engine"), TEXT("EFontImportCharacterSet"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFontImportCharacterSet_Hash() { return 1766945052U; }
	UEnum* Z_Construct_UEnum_Engine_EFontImportCharacterSet()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontImportCharacterSet"), 0, Get_Z_Construct_UEnum_Engine_EFontImportCharacterSet_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FontICS_Default", (int64)FontICS_Default },
				{ "FontICS_Ansi", (int64)FontICS_Ansi },
				{ "FontICS_Symbol", (int64)FontICS_Symbol },
				{ "FontICS_MAX", (int64)FontICS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Font character set type for importing TrueType fonts." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EFontImportCharacterSet",
				"EFontImportCharacterSet",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFontImportOptionsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFontImportOptionsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontImportOptionsData, Z_Construct_UPackage__Script_Engine(), TEXT("FontImportOptionsData"), sizeof(FFontImportOptionsData), Get_Z_Construct_UScriptStruct_FFontImportOptionsData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFontImportOptionsData>()
{
	return FFontImportOptionsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontImportOptionsData(FFontImportOptionsData::StaticStruct, TEXT("/Script/Engine"), TEXT("FontImportOptionsData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFontImportOptionsData
{
	FScriptStruct_Engine_StaticRegisterNativesFFontImportOptionsData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontImportOptionsData")),new UScriptStruct::TCppStructOps<FFontImportOptionsData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFontImportOptionsData;
	struct Z_Construct_UScriptStruct_FFontImportOptionsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldScanRadiusScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldScanRadiusScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistanceFieldScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceFieldAlpha_MetaData[];
#endif
		static void NewProp_bUseDistanceFieldAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceFieldAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kerning_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kerning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLegacyMode_MetaData[];
#endif
		static void NewProp_bEnableLegacyMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLegacyMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtendBoxLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtendBoxRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtendBoxBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtendBoxTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_YPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePageMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TexturePageMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePageWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TexturePageWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDropShadow_MetaData[];
#endif
		static void NewProp_bEnableDropShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDropShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeASCIIRange_MetaData[];
#endif
		static void NewProp_bIncludeASCIIRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeASCIIRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatePrintableOnly_MetaData[];
#endif
		static void NewProp_bCreatePrintableOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatePrintableOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharsFileWildcard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharsFileWildcard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharsFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharsFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnicodeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnicodeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chars_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Chars;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaOnly_MetaData[];
#endif
		static void NewProp_bAlphaOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUnderline_MetaData[];
#endif
		static void NewProp_bEnableUnderline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUnderline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableItalic_MetaData[];
#endif
		static void NewProp_bEnableItalic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableItalic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBold_MetaData[];
#endif
		static void NewProp_bEnableBold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAntialiasing_MetaData[];
#endif
		static void NewProp_bEnableAntialiasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAntialiasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FontName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Font import options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontImportOptionsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScanRadiusScale_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Shrinks or expands the scan radius used to determine the silhouette of the font edges." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScanRadiusScale = { "DistanceFieldScanRadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, DistanceFieldScanRadiusScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScanRadiusScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScanRadiusScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScaleFactor_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "editcondition", "bUseDistanceFieldAlpha" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Scale factor determines how big to scale the font bitmap during import when generating distance field values\nNote that higher values give better quality but importing will take much longer." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScaleFactor = { "DistanceFieldScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, DistanceFieldScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScaleFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "If true then the alpha channel of the font textures will store a distance field instead of a color mask" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bUseDistanceFieldAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha = { "bUseDistanceFieldAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Kerning_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "The initial horizontal spacing adjustment between rendered characters.  This setting will be copied directly into the generated Font object's properties." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Kerning = { "Kerning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, Kerning), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Kerning_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Kerning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Enables legacy font import mode.  This results in lower quality antialiasing and larger glyph bounds, but may be useful when debugging problems" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bEnableLegacyMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode = { "bEnableLegacyMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxLeft_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "How much to extend the left of the UV coordinate rectangle for each character in pixels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxLeft = { "ExtendBoxLeft", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxLeft_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxRight_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "How much to extend the right of the UV coordinate rectangle for each character in pixels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxRight = { "ExtendBoxRight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxRight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxBottom_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "How much to extend the bottom of the UV coordinate rectangle for each character in pixels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxBottom = { "ExtendBoxBottom", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxBottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxBottom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxTop_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "How much to extend the top of the UV coordinate rectangle for each character in pixels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxTop = { "ExtendBoxTop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxTop), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxTop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_YPadding_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Vertical padding between each font character on the texture page in pixels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_YPadding = { "YPadding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, YPadding), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_YPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_YPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_XPadding_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Horizontal padding between each font character on the texture page in pixels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_XPadding = { "XPadding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, XPadding), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_XPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_XPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageMaxHeight_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "The maximum vertical size of a texture page for this font in pixels.  The actual height of a texture page may be less than this if the font can fit within a smaller sized texture page." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageMaxHeight = { "TexturePageMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, TexturePageMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageMaxHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageWidth_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Horizontal size of each texture page for this font in pixels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageWidth = { "TexturePageWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, TexturePageWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Enables a very simple, 1-pixel, black colored drop shadow for the generated font" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bEnableDropShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow = { "bEnableDropShadow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Color of the foreground font pixels.  Usually you should leave this white and instead use the UI Styles editor to change the color of the font on the fly" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, ForegroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ForegroundColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "When specifying a range of characters and this is enabled, forces ASCII characters (0 thru 255) to be included as well" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bIncludeASCIIRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange = { "bIncludeASCIIRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Skips generation of glyphs for any characters that are not considered 'printable'" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bCreatePrintableOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly = { "bCreatePrintableOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFileWildcard_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "File mask wildcard that specifies which files within the CharsFilePath to scan for characters in include in the font" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFileWildcard = { "CharsFileWildcard", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, CharsFileWildcard), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFileWildcard_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFileWildcard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFilePath_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Path on disk to a folder where files that contain a list of characters to include in the font" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFilePath = { "CharsFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, CharsFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_UnicodeRange_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Range of Unicode character values to include in the font.  You can specify ranges using hyphens and/or commas (e.g. '400-900')" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_UnicodeRange = { "UnicodeRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, UnicodeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_UnicodeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_UnicodeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Chars_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Explicit list of characters to include in the font" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Chars = { "Chars", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, Chars), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Chars_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Chars_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharacterSet_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Character set for this font" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharacterSet = { "CharacterSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, CharacterSet), Z_Construct_UEnum_Engine_EFontImportCharacterSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharacterSet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharacterSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "if true then forces PF_G8 and only maintains Alpha value and discards color" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bAlphaOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly = { "bAlphaOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Whether the font should be generated with an underline or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bEnableUnderline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline = { "bEnableUnderline", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Whether the font should be generated in italics or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bEnableItalic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic = { "bEnableItalic", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Whether the font should be generated in bold or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bEnableBold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold = { "bEnableBold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Whether the font should be antialiased or not.  Usually you should leave this enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing_SetBit(void* Obj)
	{
		((FFontImportOptionsData*)Obj)->bEnableAntialiasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing = { "bEnableAntialiasing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Height of font (point size)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_FontName_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Name of the typeface for the font to import" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_FontName = { "FontName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontImportOptionsData, FontName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_FontName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_FontName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScanRadiusScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Kerning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_YPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_XPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ForegroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFileWildcard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_UnicodeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Chars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharacterSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_FontName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FontImportOptionsData",
		sizeof(FFontImportOptionsData),
		alignof(FFontImportOptionsData),
		Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontImportOptionsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontImportOptionsData"), sizeof(FFontImportOptionsData), Get_Z_Construct_UScriptStruct_FFontImportOptionsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontImportOptionsData_Hash() { return 3134019425U; }
	void UFontImportOptions::StaticRegisterNativesUFontImportOptions()
	{
	}
	UClass* Z_Construct_UClass_UFontImportOptions_NoRegister()
	{
		return UFontImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UFontImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/FontImportOptions.h" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Holds options for importing fonts." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontImportOptions_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "FontImportOptions" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "The actual data for this object.  We wrap it in a struct so that we can copy it around between objects." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFontImportOptions_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFontImportOptions, Data), Z_Construct_UScriptStruct_FFontImportOptionsData, METADATA_PARAMS(Z_Construct_UClass_UFontImportOptions_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFontImportOptions_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFontImportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontImportOptions_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontImportOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFontImportOptions_Statics::ClassParams = {
		&UFontImportOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFontImportOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFontImportOptions_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFontImportOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFontImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontImportOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFontImportOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFontImportOptions, 601143311);
	template<> ENGINE_API UClass* StaticClass<UFontImportOptions>()
	{
		return UFontImportOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFontImportOptions(Z_Construct_UClass_UFontImportOptions, &UFontImportOptions::StaticClass, TEXT("/Script/Engine"), TEXT("UFontImportOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontImportOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

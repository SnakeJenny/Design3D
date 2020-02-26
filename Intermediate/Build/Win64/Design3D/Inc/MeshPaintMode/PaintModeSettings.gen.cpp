// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaintMode/Private/PaintModeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintModeSettings() {}
// Cross Module References
	MESHPAINTMODE_API UEnum* Z_Construct_UEnum_MeshPaintMode_EPaintMode();
	UPackage* Z_Construct_UPackage__Script_MeshPaintMode();
	MESHPAINTMODE_API UEnum* Z_Construct_UEnum_MeshPaintMode_ETexturePaintIndex();
	MESHPAINTMODE_API UEnum* Z_Construct_UEnum_MeshPaintMode_ETextureWeightTypes();
	MESHPAINTMODE_API UScriptStruct* Z_Construct_UScriptStruct_FTexturePaintSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MESHPAINTMODE_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSettings();
	MESHPAINT_API UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintMode();
	MESHPAINTMODE_API UClass* Z_Construct_UClass_UPaintModeSettings_NoRegister();
	MESHPAINTMODE_API UClass* Z_Construct_UClass_UPaintModeSettings();
	MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings();
// End Cross Module References
	static UEnum* EPaintMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintMode_EPaintMode, Z_Construct_UPackage__Script_MeshPaintMode(), TEXT("EPaintMode"));
		}
		return Singleton;
	}
	template<> MESHPAINTMODE_API UEnum* StaticEnum<EPaintMode>()
	{
		return EPaintMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPaintMode(EPaintMode_StaticEnum, TEXT("/Script/MeshPaintMode"), TEXT("EPaintMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshPaintMode_EPaintMode_Hash() { return 1771821086U; }
	UEnum* Z_Construct_UEnum_MeshPaintMode_EPaintMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshPaintMode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPaintMode"), 0, Get_Z_Construct_UEnum_MeshPaintMode_EPaintMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPaintMode::Vertices", (int64)EPaintMode::Vertices },
				{ "EPaintMode::Textures", (int64)EPaintMode::Textures },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
				{ "ToolTip", "Enum used to switch between vertex and texture painting in the level editor paint mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintMode,
				nullptr,
				"EPaintMode",
				"EPaintMode",
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
	static UEnum* ETexturePaintIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintMode_ETexturePaintIndex, Z_Construct_UPackage__Script_MeshPaintMode(), TEXT("ETexturePaintIndex"));
		}
		return Singleton;
	}
	template<> MESHPAINTMODE_API UEnum* StaticEnum<ETexturePaintIndex>()
	{
		return ETexturePaintIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETexturePaintIndex(ETexturePaintIndex_StaticEnum, TEXT("/Script/MeshPaintMode"), TEXT("ETexturePaintIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshPaintMode_ETexturePaintIndex_Hash() { return 243909076U; }
	UEnum* Z_Construct_UEnum_MeshPaintMode_ETexturePaintIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshPaintMode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETexturePaintIndex"), 0, Get_Z_Construct_UEnum_MeshPaintMode_ETexturePaintIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETexturePaintIndex::TextureOne", (int64)ETexturePaintIndex::TextureOne },
				{ "ETexturePaintIndex::TextureTwo", (int64)ETexturePaintIndex::TextureTwo },
				{ "ETexturePaintIndex::TextureThree", (int64)ETexturePaintIndex::TextureThree },
				{ "ETexturePaintIndex::TextureFour", (int64)ETexturePaintIndex::TextureFour },
				{ "ETexturePaintIndex::TextureFive", (int64)ETexturePaintIndex::TextureFive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintMode,
				nullptr,
				"ETexturePaintIndex",
				"ETexturePaintIndex",
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
	static UEnum* ETextureWeightTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintMode_ETextureWeightTypes, Z_Construct_UPackage__Script_MeshPaintMode(), TEXT("ETextureWeightTypes"));
		}
		return Singleton;
	}
	template<> MESHPAINTMODE_API UEnum* StaticEnum<ETextureWeightTypes>()
	{
		return ETextureWeightTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureWeightTypes(ETextureWeightTypes_StaticEnum, TEXT("/Script/MeshPaintMode"), TEXT("ETextureWeightTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshPaintMode_ETextureWeightTypes_Hash() { return 801396229U; }
	UEnum* Z_Construct_UEnum_MeshPaintMode_ETextureWeightTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshPaintMode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureWeightTypes"), 0, Get_Z_Construct_UEnum_MeshPaintMode_ETextureWeightTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextureWeightTypes::AlphaLerp", (int64)ETextureWeightTypes::AlphaLerp },
				{ "ETextureWeightTypes::RGB", (int64)ETextureWeightTypes::RGB },
				{ "ETextureWeightTypes::ARGB", (int64)ETextureWeightTypes::ARGB },
				{ "ETextureWeightTypes::OneMinusARGB", (int64)ETextureWeightTypes::OneMinusARGB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlphaLerp.DisplayName", "Alpha (Two Textures)" },
				{ "AlphaLerp.ToolTip", "Lerp Between Two Textures using Alpha Value" },
				{ "ARGB.DisplayName", "ARGB (Four Textures)" },
				{ "ARGB.ToolTip", "Weighting Four Textures according to Channels" },
				{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
				{ "OneMinusARGB.DisplayName", "ARGB - 1 (Five Textures)" },
				{ "OneMinusARGB.ToolTip", "Weighting Five Textures according to Channels" },
				{ "RGB.DisplayName", "RGB (Three Textures)" },
				{ "RGB.ToolTip", "Weighting Three Textures according to Channels" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintMode,
				nullptr,
				"ETextureWeightTypes",
				"ETextureWeightTypes",
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
class UScriptStruct* FTexturePaintSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHPAINTMODE_API uint32 Get_Z_Construct_UScriptStruct_FTexturePaintSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturePaintSettings, Z_Construct_UPackage__Script_MeshPaintMode(), TEXT("TexturePaintSettings"), sizeof(FTexturePaintSettings), Get_Z_Construct_UScriptStruct_FTexturePaintSettings_Hash());
	}
	return Singleton;
}
template<> MESHPAINTMODE_API UScriptStruct* StaticStruct<FTexturePaintSettings>()
{
	return FTexturePaintSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTexturePaintSettings(FTexturePaintSettings::StaticStruct, TEXT("/Script/MeshPaintMode"), TEXT("TexturePaintSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MeshPaintMode_StaticRegisterNativesFTexturePaintSettings
{
	FScriptStruct_MeshPaintMode_StaticRegisterNativesFTexturePaintSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TexturePaintSettings")),new UScriptStruct::TCppStructOps<FTexturePaintSettings>);
	}
} ScriptStruct_MeshPaintMode_StaticRegisterNativesFTexturePaintSettings;
	struct Z_Construct_UScriptStruct_FTexturePaintSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaintTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSeamPainting_MetaData[];
#endif
		static void NewProp_bEnableSeamPainting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSeamPainting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteAlpha_MetaData[];
#endif
		static void NewProp_bWriteAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteBlue_MetaData[];
#endif
		static void NewProp_bWriteBlue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteGreen_MetaData[];
#endif
		static void NewProp_bWriteGreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteRed_MetaData[];
#endif
		static void NewProp_bWriteRed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EraseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EraseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Texture painting settings structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturePaintSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintTexture_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Texture to which Painting should be Applied" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintTexture = { "PaintTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturePaintSettings, PaintTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bEnableSeamPainting_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Seam painting flag, True if we should enable dilation to allow the painting of texture seams" },
	};
#endif
	void Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bEnableSeamPainting_SetBit(void* Obj)
	{
		((FTexturePaintSettings*)Obj)->bEnableSeamPainting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bEnableSeamPainting = { "bEnableSeamPainting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTexturePaintSettings), &Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bEnableSeamPainting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bEnableSeamPainting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bEnableSeamPainting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "UV channel which should be used for paint textures" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturePaintSettings, UVChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_UVChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_UVChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteAlpha_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "DisplayName", "Alpha" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Alpha Channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteAlpha_SetBit(void* Obj)
	{
		((FTexturePaintSettings*)Obj)->bWriteAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteAlpha = { "bWriteAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTexturePaintSettings), &Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteBlue_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "DisplayName", "Blue" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Blue Channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteBlue_SetBit(void* Obj)
	{
		((FTexturePaintSettings*)Obj)->bWriteBlue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteBlue = { "bWriteBlue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTexturePaintSettings), &Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteBlue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteBlue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteGreen_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "DisplayName", "Green" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Green Channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteGreen_SetBit(void* Obj)
	{
		((FTexturePaintSettings*)Obj)->bWriteGreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteGreen = { "bWriteGreen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTexturePaintSettings), &Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteGreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteGreen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteRed_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "DisplayName", "Red" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Red Channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteRed_SetBit(void* Obj)
	{
		((FTexturePaintSettings*)Obj)->bWriteRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteRed = { "bWriteRed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTexturePaintSettings), &Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteRed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteRed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_EraseColor_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Color used for Erasing Texture Painting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_EraseColor = { "EraseColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturePaintSettings, EraseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_EraseColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_EraseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintColor_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Color used for Applying Texture Painting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintColor = { "PaintColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturePaintSettings, PaintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bEnableSeamPainting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_UVChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_bWriteRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_EraseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::NewProp_PaintColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintMode,
		nullptr,
		&NewStructOps,
		"TexturePaintSettings",
		sizeof(FTexturePaintSettings),
		alignof(FTexturePaintSettings),
		Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTexturePaintSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTexturePaintSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshPaintMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TexturePaintSettings"), sizeof(FTexturePaintSettings), Get_Z_Construct_UScriptStruct_FTexturePaintSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTexturePaintSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTexturePaintSettings_Hash() { return 2870628711U; }
class UScriptStruct* FVertexPaintSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHPAINTMODE_API uint32 Get_Z_Construct_UScriptStruct_FVertexPaintSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintSettings, Z_Construct_UPackage__Script_MeshPaintMode(), TEXT("VertexPaintSettings"), sizeof(FVertexPaintSettings), Get_Z_Construct_UScriptStruct_FVertexPaintSettings_Hash());
	}
	return Singleton;
}
template<> MESHPAINTMODE_API UScriptStruct* StaticStruct<FVertexPaintSettings>()
{
	return FVertexPaintSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexPaintSettings(FVertexPaintSettings::StaticStruct, TEXT("/Script/MeshPaintMode"), TEXT("VertexPaintSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MeshPaintMode_StaticRegisterNativesFVertexPaintSettings
{
	FScriptStruct_MeshPaintMode_StaticRegisterNativesFVertexPaintSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexPaintSettings")),new UScriptStruct::TCppStructOps<FVertexPaintSettings>);
	}
} ScriptStruct_MeshPaintMode_StaticRegisterNativesFVertexPaintSettings;
	struct Z_Construct_UScriptStruct_FVertexPaintSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintOnSpecificLOD_MetaData[];
#endif
		static void NewProp_bPaintOnSpecificLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintOnSpecificLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EraseTextureWeightIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EraseTextureWeightIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EraseTextureWeightIndex_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintTextureWeightIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintTextureWeightIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintTextureWeightIndex_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureWeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextureWeightType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureWeightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteAlpha_MetaData[];
#endif
		static void NewProp_bWriteAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteBlue_MetaData[];
#endif
		static void NewProp_bWriteBlue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteGreen_MetaData[];
#endif
		static void NewProp_bWriteGreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteRed_MetaData[];
#endif
		static void NewProp_bWriteRed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EraseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EraseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshPaintMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshPaintMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshPaintMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Vertex Painting settings structure used for vertex color and texture blend weight painting" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bPaintOnSpecificLOD" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "LOD Index to which should specifically be painted" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPaintSettings, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_LODIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bPaintOnSpecificLOD_MetaData[] = {
		{ "Category", "Painting" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "When unchecked the painting on the base LOD will be propagate automatically to all other LODs when exiting the mode or changing the selection" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bPaintOnSpecificLOD_SetBit(void* Obj)
	{
		((FVertexPaintSettings*)Obj)->bPaintOnSpecificLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bPaintOnSpecificLOD = { "bPaintOnSpecificLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVertexPaintSettings), &Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bPaintOnSpecificLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bPaintOnSpecificLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bPaintOnSpecificLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseTextureWeightIndex_MetaData[] = {
		{ "Category", "WeightPainting" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Texture Blend Weight index which should be erased during Painting" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseTextureWeightIndex = { "EraseTextureWeightIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPaintSettings, EraseTextureWeightIndex), Z_Construct_UEnum_MeshPaintMode_ETexturePaintIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseTextureWeightIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseTextureWeightIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseTextureWeightIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintTextureWeightIndex_MetaData[] = {
		{ "Category", "WeightPainting" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Texture Blend Weight index which should be applied during Painting" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintTextureWeightIndex = { "PaintTextureWeightIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPaintSettings, PaintTextureWeightIndex), Z_Construct_UEnum_MeshPaintMode_ETexturePaintIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintTextureWeightIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintTextureWeightIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintTextureWeightIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_TextureWeightType_MetaData[] = {
		{ "Category", "WeightPainting" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Texture Blend Weight Painting Mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_TextureWeightType = { "TextureWeightType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPaintSettings, TextureWeightType), Z_Construct_UEnum_MeshPaintMode_ETextureWeightTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_TextureWeightType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_TextureWeightType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_TextureWeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteAlpha_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "DisplayName", "Alpha" },
		{ "EnumCondition", "0" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Alpha Channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteAlpha_SetBit(void* Obj)
	{
		((FVertexPaintSettings*)Obj)->bWriteAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteAlpha = { "bWriteAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVertexPaintSettings), &Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteBlue_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "DisplayName", "Blue" },
		{ "EnumCondition", "0" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Blue Channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteBlue_SetBit(void* Obj)
	{
		((FVertexPaintSettings*)Obj)->bWriteBlue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteBlue = { "bWriteBlue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVertexPaintSettings), &Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteBlue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteBlue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteGreen_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "DisplayName", "Green" },
		{ "EnumCondition", "0" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Green Channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteGreen_SetBit(void* Obj)
	{
		((FVertexPaintSettings*)Obj)->bWriteGreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteGreen = { "bWriteGreen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVertexPaintSettings), &Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteGreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteGreen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteRed_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "DisplayName", "Red" },
		{ "EnumCondition", "0" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Red Channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteRed_SetBit(void* Obj)
	{
		((FVertexPaintSettings*)Obj)->bWriteRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteRed = { "bWriteRed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVertexPaintSettings), &Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteRed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteRed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseColor_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "EnumCondition", "0" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Color used for Erasing Vertex Color Painting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseColor = { "EraseColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPaintSettings, EraseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintColor_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "EnumCondition", "0" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Color used for Applying Vertex Color Painting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintColor = { "PaintColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPaintSettings, PaintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_MeshPaintMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_MeshPaintMode = { "MeshPaintMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPaintSettings, MeshPaintMode), Z_Construct_UEnum_MeshPaint_EMeshPaintMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_MeshPaintMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_MeshPaintMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_MeshPaintMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bPaintOnSpecificLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseTextureWeightIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseTextureWeightIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintTextureWeightIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintTextureWeightIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_TextureWeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_TextureWeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_bWriteRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_EraseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_PaintColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_MeshPaintMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::NewProp_MeshPaintMode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintMode,
		nullptr,
		&NewStructOps,
		"VertexPaintSettings",
		sizeof(FVertexPaintSettings),
		alignof(FVertexPaintSettings),
		Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexPaintSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshPaintMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexPaintSettings"), sizeof(FVertexPaintSettings), Get_Z_Construct_UScriptStruct_FVertexPaintSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexPaintSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexPaintSettings_Hash() { return 1714463892U; }
	void UPaintModeSettings::StaticRegisterNativesUPaintModeSettings()
	{
	}
	UClass* Z_Construct_UClass_UPaintModeSettings_NoRegister()
	{
		return UPaintModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPaintModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePaintSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexturePaintSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexPaintSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexPaintSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaintModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshPaintSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintModeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaintModeSettings.h" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ToolTip", "Paint mode settings class derives from base mesh painting settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_TexturePaintSettings_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_TexturePaintSettings = { "TexturePaintSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaintModeSettings, TexturePaintSettings), Z_Construct_UScriptStruct_FTexturePaintSettings, METADATA_PARAMS(Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_TexturePaintSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_TexturePaintSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_VertexPaintSettings_MetaData[] = {
		{ "Category", "VertexPainting" },
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_VertexPaintSettings = { "VertexPaintSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaintModeSettings, VertexPaintSettings), Z_Construct_UScriptStruct_FVertexPaintSettings, METADATA_PARAMS(Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_VertexPaintSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_VertexPaintSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_PaintMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/PaintModeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_PaintMode = { "PaintMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaintModeSettings, PaintMode), Z_Construct_UEnum_MeshPaintMode_EPaintMode, METADATA_PARAMS(Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_PaintMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_PaintMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_PaintMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaintModeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_TexturePaintSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_VertexPaintSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_PaintMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintModeSettings_Statics::NewProp_PaintMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaintModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaintModeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaintModeSettings_Statics::ClassParams = {
		&UPaintModeSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaintModeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPaintModeSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaintModeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPaintModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaintModeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaintModeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaintModeSettings, 3399153981);
	template<> MESHPAINTMODE_API UClass* StaticClass<UPaintModeSettings>()
	{
		return UPaintModeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaintModeSettings(Z_Construct_UClass_UPaintModeSettings, &UPaintModeSettings::StaticClass, TEXT("/Script/MeshPaintMode"), TEXT("UPaintModeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaintModeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

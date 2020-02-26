// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/TextureFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
// End Cross Module References
	void UTextureFactory::StaticRegisterNativesUTextureFactory()
	{
	}
	UClass* Z_Construct_UClass_UTextureFactory_NoRegister()
	{
		return UTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingExistingSettings_MetaData[];
#endif
		static void NewProp_bUsingExistingSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingExistingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipNormalMapGreenChannel_MetaData[];
#endif
		static void NewProp_bFlipNormalMapGreenChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipNormalMapGreenChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreserveBorder_MetaData[];
#endif
		static void NewProp_bPreserveBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCoverageThresholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaCoverageThresholds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDitherMipMapAlpha_MetaData[];
#endif
		static void NewProp_bDitherMipMapAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDitherMipMapAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwoSided_MetaData[];
#endif
		static void NewProp_bTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaToOpacityMask_MetaData[];
#endif
		static void NewProp_bAlphaToOpacityMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaToOpacityMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaToOpacity_MetaData[];
#endif
		static void NewProp_bAlphaToOpacity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaToOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaToEmissive_MetaData[];
#endif
		static void NewProp_bAlphaToEmissive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaToEmissive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaToRoughness_MetaData[];
#endif
		static void NewProp_bAlphaToRoughness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaToRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRGBToEmissive_MetaData[];
#endif
		static void NewProp_bRGBToEmissive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRGBToEmissive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRGBToBaseColor_MetaData[];
#endif
		static void NewProp_bRGBToBaseColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRGBToBaseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterial_MetaData[];
#endif
		static void NewProp_bCreateMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeferCompression_MetaData[];
#endif
		static void NewProp_bDeferCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeferCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoAlpha_MetaData[];
#endif
		static void NewProp_NoAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NoAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoCompression_MetaData[];
#endif
		static void NewProp_NoCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NoCompression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/TextureFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, we are using the existing settings for a texture that already existed." },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bUsingExistingSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings = { "bUsingExistingSettings", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData[] = {
		{ "Category", "NormalMap" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, the texture's green channel will be inverted. This is useful for some normal maps" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bFlipNormalMapGreenChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel = { "bFlipNormalMapGreenChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_MetaData[] = {
		{ "Category", "PreserveBorder" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, preserve the value of border pixels when creating mip-maps" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bPreserveBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder = { "bPreserveBorder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds_MetaData[] = {
		{ "Category", "PreserveAlphaCoverage" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Channel values to compare to when preserving alpha coverage from a mask for mips" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds = { "AlphaCoverageThresholds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureFactory, AlphaCoverageThresholds), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDitherMipMapAlpha_MetaData[] = {
		{ "Category", "DitherMipMaps" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, mip-map alpha values will be dithered for smooth transitions" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDitherMipMapAlpha_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bDitherMipMapAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDitherMipMapAlpha = { "bDitherMipMapAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDitherMipMapAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDitherMipMapAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDitherMipMapAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "LODGroup" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The group the texture belongs to" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureFactory, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings_MetaData[] = {
		{ "Category", "TextureFactory" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The mip-map generation settings for the texture; Allows customization of the content of the mip-map chain" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings = { "MipGenSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureFactory, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The shading model of the created material" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureFactory, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The blend mode of the created material" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureFactory, Blending), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, the created material will be two-sided" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided = { "bTwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture's alpha to the created material's opacity mask" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bAlphaToOpacityMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask = { "bAlphaToOpacityMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture's alpha to the created material's opacity" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bAlphaToOpacity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity = { "bAlphaToOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture's alpha to the created material's emissive color" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bAlphaToEmissive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive = { "bAlphaToEmissive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture's alpha to the created material's roughness" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bAlphaToRoughness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness = { "bAlphaToRoughness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture to the created material's emissive color" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bRGBToEmissive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive = { "bRGBToEmissive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture to the created material's base color" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bRGBToBaseColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor = { "bRGBToBaseColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_MetaData[] = {
		{ "Category", "TextureFactory" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, a material will automatically be created for the texture" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bCreateMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial = { "bCreateMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Compression settings for the texture" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureFactory, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, compression is deferred until the texture is saved" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bDeferCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression = { "bDeferCompression", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, the texture's alpha channel will be discarded during compression" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->NoAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha = { "NoAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->NoCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression = { "NoCompression", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDitherMipMapAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureFactory_Statics::ClassParams = {
		&UTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureFactory, 970972457);
	template<> UNREALED_API UClass* StaticClass<UTextureFactory>()
	{
		return UTextureFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureFactory(Z_Construct_UClass_UTextureFactory, &UTextureFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTextureFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

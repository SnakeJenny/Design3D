// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxTextureImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxTextureImportData() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation();
// End Cross Module References
	void UFbxTextureImportData::StaticRegisterNativesUFbxTextureImportData()
	{
	}
	UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister()
	{
		return UFbxTextureImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxTextureImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpecularTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseSpecularTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseEmmisiveTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseEmmisiveTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseEmissiveColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseEmissiveColorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseNormalTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseNormalTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDiffuseTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseDiffuseTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseColorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSearchLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialSearchLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialSearchLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertNormalMaps_MetaData[];
#endif
		static void NewProp_bInvertNormalMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertNormalMaps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxTextureImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Texture" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxTextureImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
		{ "ToolTip", "Import data and options used when importing any mesh from FBX" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName_MetaData[] = {
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName = { "BaseSpecularTextureName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTextureImportData, BaseSpecularTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName_MetaData[] = {
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName = { "BaseEmmisiveTextureName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTextureImportData, BaseEmmisiveTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName_MetaData[] = {
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName = { "BaseEmissiveColorName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTextureImportData, BaseEmissiveColorName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName_MetaData[] = {
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName = { "BaseNormalTextureName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTextureImportData, BaseNormalTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName_MetaData[] = {
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName = { "BaseDiffuseTextureName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTextureImportData, BaseDiffuseTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName_MetaData[] = {
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName = { "BaseColorName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTextureImportData, BaseColorName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName_MetaData[] = {
		{ "AllowedClasses", "MaterialInterface" },
		{ "Category", "Material" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
		{ "ToolTip", "Base material to instance from when importing materials." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName = { "BaseMaterialName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTextureImportData, BaseMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Search Location" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify where we should search for matching materials when importing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation = { "MaterialSearchLocation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTextureImportData, MaterialSearchLocation), Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation, METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If importing textures is enabled, this option will cause normal map Y (Green) values to be inverted" },
	};
#endif
	void Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_SetBit(void* Obj)
	{
		((UFbxTextureImportData*)Obj)->bInvertNormalMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps = { "bInvertNormalMaps", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxTextureImportData), &Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxTextureImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxTextureImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxTextureImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxTextureImportData_Statics::ClassParams = {
		&UFbxTextureImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxTextureImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxTextureImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxTextureImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxTextureImportData, 2099528349);
	template<> UNREALED_API UClass* StaticClass<UFbxTextureImportData>()
	{
		return UFbxTextureImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxTextureImportData(Z_Construct_UClass_UFbxTextureImportData, &UFbxTextureImportData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxTextureImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxTextureImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

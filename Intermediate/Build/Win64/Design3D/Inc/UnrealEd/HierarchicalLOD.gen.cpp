// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/HierarchicalLOD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalLOD() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UHierarchicalLODSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UHierarchicalLODSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister();
// End Cross Module References
	void UHierarchicalLODSettings::StaticRegisterNativesUHierarchicalLODSettings()
	{
	}
	UClass* Z_Construct_UClass_UHierarchicalLODSettings_NoRegister()
	{
		return UHierarchicalLODSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHierarchicalLODSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteHLODAssets_MetaData[];
#endif
		static void NewProp_bDeleteHLODAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteHLODAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvalidateHLODClusters_MetaData[];
#endif
		static void NewProp_bInvalidateHLODClusters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvalidateHLODClusters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapsToBuild_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapsToBuild;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapsToBuild_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesForHLODCommandlet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesForHLODCommandlet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesForHLODCommandlet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_DefaultSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceSettingsInAllMaps_MetaData[];
#endif
		static void NewProp_bForceSettingsInAllMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSettingsInAllMaps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHierarchicalLODSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Hierarchical LOD" },
		{ "IncludePath", "HierarchicalLOD.h" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "ToolTip", "Base material used for creating a Constant Material Instance as the Proxy Material" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalLODSettings, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bDeleteHLODAssets_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "DisplayName", "Delete (out-dated) HLOD Assets on Save" },
		{ "editcondition", "bInvalidateHLODClusters" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bDeleteHLODAssets_SetBit(void* Obj)
	{
		((UHierarchicalLODSettings*)Obj)->bDeleteHLODAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bDeleteHLODAssets = { "bDeleteHLODAssets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHierarchicalLODSettings), &Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bDeleteHLODAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bDeleteHLODAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bDeleteHLODAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bInvalidateHLODClusters_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "DisplayName", "Invalidate HLOD Clusters on changes to the Sub Actors" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bInvalidateHLODClusters_SetBit(void* Obj)
	{
		((UHierarchicalLODSettings*)Obj)->bInvalidateHLODClusters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bInvalidateHLODClusters = { "bInvalidateHLODClusters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHierarchicalLODSettings), &Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bInvalidateHLODClusters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bInvalidateHLODClusters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bInvalidateHLODClusters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "DisplayName", "Map UAssets used for building HLOD data through the" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild = { "MapsToBuild", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalLODSettings, MapsToBuild), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_Inner = { "MapsToBuild", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "DisplayName", "Directories containing maps used for building HLOD data through the commandlet" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet = { "DirectoriesForHLODCommandlet", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalLODSettings, DirectoriesForHLODCommandlet), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_Inner = { "DirectoriesForHLODCommandlet", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "editcondition", "bForceSettingsInAllMaps" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "ToolTip", "When set in combination with" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup = { "DefaultSetup", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalLODSettings, DefaultSetup), Z_Construct_UClass_UHierarchicalLODSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "ToolTip", "If enabled will force the project set HLOD level settings to be used across all levels in the project when Building Clusters" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_SetBit(void* Obj)
	{
		((UHierarchicalLODSettings*)Obj)->bForceSettingsInAllMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps = { "bForceSettingsInAllMaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHierarchicalLODSettings), &Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalLODSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bDeleteHLODAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bInvalidateHLODClusters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHierarchicalLODSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalLODSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::ClassParams = {
		&UHierarchicalLODSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHierarchicalLODSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHierarchicalLODSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHierarchicalLODSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHierarchicalLODSettings, 1273733263);
	template<> UNREALED_API UClass* StaticClass<UHierarchicalLODSettings>()
	{
		return UHierarchicalLODSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHierarchicalLODSettings(Z_Construct_UClass_UHierarchicalLODSettings, &UHierarchicalLODSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UHierarchicalLODSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalLODSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

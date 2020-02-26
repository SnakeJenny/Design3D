// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/AssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UAssetManager::StaticRegisterNativesUAssetManager()
	{
	}
	UClass* Z_Construct_UClass_UAssetManager_NoRegister()
	{
		return UAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSpawnedNotifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSpawnedNotifications;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeOnlyOnDiskAssets_MetaData[];
#endif
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateManagementDatabaseAfterScan_MetaData[];
#endif
		static void NewProp_bUpdateManagementDatabaseAfterScan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateManagementDatabaseAfterScan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsManagementDatabaseCurrent_MetaData[];
#endif
		static void NewProp_bIsManagementDatabaseCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsManagementDatabaseCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData[];
#endif
		static void NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryAssetDirectoryCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBulkScanning_MetaData[];
#endif
		static void NewProp_bIsBulkScanning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBulkScanning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCookProductionAssets_MetaData[];
#endif
		static void NewProp_bOnlyCookProductionAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCookProductionAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[];
#endif
		static void NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAcquireMissingChunksOnLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingFromPakFiles_MetaData[];
#endif
		static void NewProp_bIsLoadingFromPakFiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingFromPakFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUseSynchronousLoad_MetaData[];
#endif
		static void NewProp_bShouldUseSynchronousLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUseSynchronousLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldGuessTypeAndName_MetaData[];
#endif
		static void NewProp_bShouldGuessTypeAndName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldGuessTypeAndName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGlobalAsyncScanEnvironment_MetaData[];
#endif
		static void NewProp_bIsGlobalAsyncScanEnvironment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGlobalAsyncScanEnvironment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectReferenceList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectReferenceList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectReferenceList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/AssetManager.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "A singleton UObject that is responsible for loading and unloading PrimaryAssets, and maintaining game-specific asset references\nGames should override this class and change the class reference" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "Number of notifications seen in this update" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications = { "NumberOfSpawnedNotifications", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManager, NumberOfSpawnedNotifications), METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if only on-disk assets should be searched by the asset registry" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the asset management database should be updated after scan completes" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bUpdateManagementDatabaseAfterScan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan = { "bUpdateManagementDatabaseAfterScan", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the asset management database is up to date" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsManagementDatabaseCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent = { "bIsManagementDatabaseCurrent", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if asset data is current, if false it will need to rescan before PIE" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsPrimaryAssetDirectoryCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent = { "bIsPrimaryAssetDirectoryCurrent", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsBulkScanning_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we are currently in bulk scanning mode" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsBulkScanning_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsBulkScanning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsBulkScanning = { "bIsBulkScanning", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsBulkScanning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsBulkScanning_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsBulkScanning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "If true, DevelopmentCook assets will error when they are cooked" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bOnlyCookProductionAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets = { "bOnlyCookProductionAssets", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the chunk install interface should be queries before loading assets" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bShouldAcquireMissingChunksOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad = { "bShouldAcquireMissingChunksOnLoad", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we are loading from pak files" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsLoadingFromPakFiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles = { "bIsLoadingFromPakFiles", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we should always use synchronous loads, this speeds up cooking" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bShouldUseSynchronousLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad = { "bShouldUseSynchronousLoad", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if PrimaryAssetType/Name will be implied for loading assets that don't have it saved on disk. Won't work for all projects" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bShouldGuessTypeAndName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName = { "bShouldGuessTypeAndName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we are running a build that is already scanning assets globally so we can perhaps avoid scanning paths synchronously" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsGlobalAsyncScanEnvironment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment = { "bIsGlobalAsyncScanEnvironment", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "List of UObjects that are being kept from being GCd, derived from the asset type map. Arrays are currently more efficient than Sets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList = { "ObjectReferenceList", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManager, ObjectReferenceList), METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_Inner = { "ObjectReferenceList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsBulkScanning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetManager_Statics::ClassParams = {
		&UAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetManager, 432696085);
	template<> ENGINE_API UClass* StaticClass<UAssetManager>()
	{
		return UAssetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetManager(Z_Construct_UClass_UAssetManager, &UAssetManager::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

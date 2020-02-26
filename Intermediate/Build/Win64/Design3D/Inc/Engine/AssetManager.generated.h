// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetManager_generated_h
#error "AssetManager.generated.h already included, missing '#pragma once' in AssetManager.h"
#endif
#define ENGINE_AssetManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetManager(); \
	friend struct Z_Construct_UClass_UAssetManager_Statics; \
public: \
	DECLARE_CLASS(UAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetManager)


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAssetManager(); \
	friend struct Z_Construct_UClass_UAssetManager_Statics; \
public: \
	DECLARE_CLASS(UAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetManager)


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetManager(UAssetManager&&); \
	NO_API UAssetManager(const UAssetManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetManager(UAssetManager&&); \
	NO_API UAssetManager(const UAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetManager)


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectReferenceList() { return STRUCT_OFFSET(UAssetManager, ObjectReferenceList); } \
	FORCEINLINE static uint32 __PPO__bIsGlobalAsyncScanEnvironment() { return STRUCT_OFFSET(UAssetManager, bIsGlobalAsyncScanEnvironment); } \
	FORCEINLINE static uint32 __PPO__bShouldGuessTypeAndName() { return STRUCT_OFFSET(UAssetManager, bShouldGuessTypeAndName); } \
	FORCEINLINE static uint32 __PPO__bShouldUseSynchronousLoad() { return STRUCT_OFFSET(UAssetManager, bShouldUseSynchronousLoad); } \
	FORCEINLINE static uint32 __PPO__bIsLoadingFromPakFiles() { return STRUCT_OFFSET(UAssetManager, bIsLoadingFromPakFiles); } \
	FORCEINLINE static uint32 __PPO__bShouldAcquireMissingChunksOnLoad() { return STRUCT_OFFSET(UAssetManager, bShouldAcquireMissingChunksOnLoad); } \
	FORCEINLINE static uint32 __PPO__bOnlyCookProductionAssets() { return STRUCT_OFFSET(UAssetManager, bOnlyCookProductionAssets); } \
	FORCEINLINE static uint32 __PPO__bIsBulkScanning() { return STRUCT_OFFSET(UAssetManager, bIsBulkScanning); } \
	FORCEINLINE static uint32 __PPO__bIsPrimaryAssetDirectoryCurrent() { return STRUCT_OFFSET(UAssetManager, bIsPrimaryAssetDirectoryCurrent); } \
	FORCEINLINE static uint32 __PPO__bIsManagementDatabaseCurrent() { return STRUCT_OFFSET(UAssetManager, bIsManagementDatabaseCurrent); } \
	FORCEINLINE static uint32 __PPO__bUpdateManagementDatabaseAfterScan() { return STRUCT_OFFSET(UAssetManager, bUpdateManagementDatabaseAfterScan); } \
	FORCEINLINE static uint32 __PPO__bIncludeOnlyOnDiskAssets() { return STRUCT_OFFSET(UAssetManager, bIncludeOnlyOnDiskAssets); } \
	FORCEINLINE static uint32 __PPO__NumberOfSpawnedNotifications() { return STRUCT_OFFSET(UAssetManager, NumberOfSpawnedNotifications); }


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_29_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

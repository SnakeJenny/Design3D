// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CoreSettings_generated_h
#error "CoreSettings.generated.h already included, missing '#pragma once' in CoreSettings.h"
#endif
#define ENGINE_CoreSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamingSettings(); \
	friend struct Z_Construct_UClass_UStreamingSettings_Statics; \
public: \
	DECLARE_CLASS(UStreamingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStreamingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUStreamingSettings(); \
	friend struct Z_Construct_UClass_UStreamingSettings_Statics; \
public: \
	DECLARE_CLASS(UStreamingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStreamingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamingSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreamingSettings(UStreamingSettings&&); \
	NO_API UStreamingSettings(const UStreamingSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreamingSettings(UStreamingSettings&&); \
	NO_API UStreamingSettings(const UStreamingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamingSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStreamingSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeLimitExceededMultiplier() { return STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMultiplier); } \
	FORCEINLINE static uint32 __PPO__TimeLimitExceededMinTime() { return STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMinTime); } \
	FORCEINLINE static uint32 __PPO__MinBulkDataSizeForAsyncLoading() { return STRUCT_OFFSET(UStreamingSettings, MinBulkDataSizeForAsyncLoading); } \
	FORCEINLINE static uint32 __PPO__AsyncLoadingTimeLimit() { return STRUCT_OFFSET(UStreamingSettings, AsyncLoadingTimeLimit); } \
	FORCEINLINE static uint32 __PPO__PriorityAsyncLoadingExtraTime() { return STRUCT_OFFSET(UStreamingSettings, PriorityAsyncLoadingExtraTime); } \
	FORCEINLINE static uint32 __PPO__LevelStreamingActorsUpdateTimeLimit() { return STRUCT_OFFSET(UStreamingSettings, LevelStreamingActorsUpdateTimeLimit); } \
	FORCEINLINE static uint32 __PPO__PriorityLevelStreamingActorsUpdateExtraTime() { return STRUCT_OFFSET(UStreamingSettings, PriorityLevelStreamingActorsUpdateExtraTime); } \
	FORCEINLINE static uint32 __PPO__LevelStreamingComponentsRegistrationGranularity() { return STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsRegistrationGranularity); } \
	FORCEINLINE static uint32 __PPO__LevelStreamingUnregisterComponentsTimeLimit() { return STRUCT_OFFSET(UStreamingSettings, LevelStreamingUnregisterComponentsTimeLimit); } \
	FORCEINLINE static uint32 __PPO__LevelStreamingComponentsUnregistrationGranularity() { return STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsUnregistrationGranularity); }


#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStreamingSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGarbageCollectionSettings(); \
	friend struct Z_Construct_UClass_UGarbageCollectionSettings_Statics; \
public: \
	DECLARE_CLASS(UGarbageCollectionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGarbageCollectionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUGarbageCollectionSettings(); \
	friend struct Z_Construct_UClass_UGarbageCollectionSettings_Statics; \
public: \
	DECLARE_CLASS(UGarbageCollectionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGarbageCollectionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGarbageCollectionSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGarbageCollectionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGarbageCollectionSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGarbageCollectionSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGarbageCollectionSettings(UGarbageCollectionSettings&&); \
	NO_API UGarbageCollectionSettings(const UGarbageCollectionSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGarbageCollectionSettings(UGarbageCollectionSettings&&); \
	NO_API UGarbageCollectionSettings(const UGarbageCollectionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGarbageCollectionSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGarbageCollectionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGarbageCollectionSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeBetweenPurgingPendingKillObjects() { return STRUCT_OFFSET(UGarbageCollectionSettings, TimeBetweenPurgingPendingKillObjects); } \
	FORCEINLINE static uint32 __PPO__MinGCClusterSize() { return STRUCT_OFFSET(UGarbageCollectionSettings, MinGCClusterSize); } \
	FORCEINLINE static uint32 __PPO__NumRetriesBeforeForcingGC() { return STRUCT_OFFSET(UGarbageCollectionSettings, NumRetriesBeforeForcingGC); } \
	FORCEINLINE static uint32 __PPO__MaxObjectsNotConsideredByGC() { return STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsNotConsideredByGC); } \
	FORCEINLINE static uint32 __PPO__SizeOfPermanentObjectPool() { return STRUCT_OFFSET(UGarbageCollectionSettings, SizeOfPermanentObjectPool); } \
	FORCEINLINE static uint32 __PPO__MaxObjectsInGame() { return STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInGame); } \
	FORCEINLINE static uint32 __PPO__MaxObjectsInEditor() { return STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInEditor); }


#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_147_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGarbageCollectionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

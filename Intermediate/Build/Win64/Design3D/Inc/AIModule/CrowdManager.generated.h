// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_CrowdManager_generated_h
#error "CrowdManager.generated.h already included, missing '#pragma once' in CrowdManager.h"
#endif
#define AIMODULE_CrowdManager_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FCrowdAvoidanceSamplingPattern>();

#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FCrowdAvoidanceConfig>();

#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrowdManager(); \
	friend struct Z_Construct_UClass_UCrowdManager_Statics; \
public: \
	DECLARE_CLASS(UCrowdManager, UCrowdManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UCrowdManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_INCLASS \
private: \
	static void StaticRegisterNativesUCrowdManager(); \
	friend struct Z_Construct_UClass_UCrowdManager_Statics; \
public: \
	DECLARE_CLASS(UCrowdManager, UCrowdManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UCrowdManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdManager(UCrowdManager&&); \
	NO_API UCrowdManager(const UCrowdManager&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdManager(UCrowdManager&&); \
	NO_API UCrowdManager(const UCrowdManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManager)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyNavData() { return STRUCT_OFFSET(UCrowdManager, MyNavData); } \
	FORCEINLINE static uint32 __PPO__AvoidanceConfig() { return STRUCT_OFFSET(UCrowdManager, AvoidanceConfig); } \
	FORCEINLINE static uint32 __PPO__SamplingPatterns() { return STRUCT_OFFSET(UCrowdManager, SamplingPatterns); } \
	FORCEINLINE static uint32 __PPO__MaxAgents() { return STRUCT_OFFSET(UCrowdManager, MaxAgents); } \
	FORCEINLINE static uint32 __PPO__MaxAgentRadius() { return STRUCT_OFFSET(UCrowdManager, MaxAgentRadius); } \
	FORCEINLINE static uint32 __PPO__MaxAvoidedAgents() { return STRUCT_OFFSET(UCrowdManager, MaxAvoidedAgents); } \
	FORCEINLINE static uint32 __PPO__MaxAvoidedWalls() { return STRUCT_OFFSET(UCrowdManager, MaxAvoidedWalls); } \
	FORCEINLINE static uint32 __PPO__NavmeshCheckInterval() { return STRUCT_OFFSET(UCrowdManager, NavmeshCheckInterval); } \
	FORCEINLINE static uint32 __PPO__PathOptimizationInterval() { return STRUCT_OFFSET(UCrowdManager, PathOptimizationInterval); } \
	FORCEINLINE static uint32 __PPO__SeparationDirClamp() { return STRUCT_OFFSET(UCrowdManager, SeparationDirClamp); } \
	FORCEINLINE static uint32 __PPO__PathOffsetRadiusMultiplier() { return STRUCT_OFFSET(UCrowdManager, PathOffsetRadiusMultiplier); }


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_167_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UCrowdManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

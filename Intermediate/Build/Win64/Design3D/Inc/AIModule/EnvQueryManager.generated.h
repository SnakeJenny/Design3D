// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;
#ifdef AIMODULE_EnvQueryManager_generated_h
#error "EnvQueryManager.generated.h already included, missing '#pragma once' in EnvQueryManager.h"
#endif
#define AIMODULE_EnvQueryManager_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FEnvQueryInstanceCache>();

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnvQueryRequest_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__QueryTemplate() { return STRUCT_OFFSET(FEnvQueryRequest, QueryTemplate); } \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(FEnvQueryRequest, Owner); } \
	FORCEINLINE static uint32 __PPO__World() { return STRUCT_OFFSET(FEnvQueryRequest, World); }


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FEnvQueryRequest>();

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunEQSQuery) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UEnvQuery,Z_Param_QueryTemplate); \
		P_GET_OBJECT(UObject,Z_Param_Querier); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RunMode); \
		P_GET_OBJECT(UClass,Z_Param_WrapperClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEnvQueryInstanceBlueprintWrapper**)Z_Param__Result=UEnvQueryManager::RunEQSQuery(Z_Param_WorldContextObject,Z_Param_QueryTemplate,Z_Param_Querier,EEnvQueryRunMode::Type(Z_Param_RunMode),Z_Param_WrapperClass); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunEQSQuery) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UEnvQuery,Z_Param_QueryTemplate); \
		P_GET_OBJECT(UObject,Z_Param_Querier); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RunMode); \
		P_GET_OBJECT(UClass,Z_Param_WrapperClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEnvQueryInstanceBlueprintWrapper**)Z_Param__Result=UEnvQueryManager::RunEQSQuery(Z_Param_WorldContextObject,Z_Param_QueryTemplate,Z_Param_Querier,EEnvQueryRunMode::Type(Z_Param_RunMode),Z_Param_WrapperClass); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryManager(); \
	friend struct Z_Construct_UClass_UEnvQueryManager_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryManager, UAISubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryManager(); \
	friend struct Z_Construct_UClass_UEnvQueryManager_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryManager, UAISubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryManager(UEnvQueryManager&&); \
	NO_API UEnvQueryManager(const UEnvQueryManager&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryManager(UEnvQueryManager&&); \
	NO_API UEnvQueryManager(const UEnvQueryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryManager)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstanceCache() { return STRUCT_OFFSET(UEnvQueryManager, InstanceCache); } \
	FORCEINLINE static uint32 __PPO__LocalContexts() { return STRUCT_OFFSET(UEnvQueryManager, LocalContexts); } \
	FORCEINLINE static uint32 __PPO__GCShieldedWrappers() { return STRUCT_OFFSET(UEnvQueryManager, GCShieldedWrappers); } \
	FORCEINLINE static uint32 __PPO__MaxAllowedTestingTime() { return STRUCT_OFFSET(UEnvQueryManager, MaxAllowedTestingTime); } \
	FORCEINLINE static uint32 __PPO__bTestQueriesUsingBreadth() { return STRUCT_OFFSET(UEnvQueryManager, bTestQueriesUsingBreadth); } \
	FORCEINLINE static uint32 __PPO__QueryCountWarningThreshold() { return STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningThreshold); } \
	FORCEINLINE static uint32 __PPO__QueryCountWarningInterval() { return STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningInterval); }


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_155_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_158_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

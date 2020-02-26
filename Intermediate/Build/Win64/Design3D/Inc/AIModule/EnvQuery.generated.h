// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQuery_generated_h
#error "EnvQuery.generated.h already included, missing '#pragma once' in EnvQuery.h"
#endif
#define AIMODULE_EnvQuery_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQuery(); \
	friend struct Z_Construct_UClass_UEnvQuery_Statics; \
public: \
	DECLARE_CLASS(UEnvQuery, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQuery)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQuery(); \
	friend struct Z_Construct_UClass_UEnvQuery_Statics; \
public: \
	DECLARE_CLASS(UEnvQuery, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQuery)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQuery(UEnvQuery&&); \
	NO_API UEnvQuery(const UEnvQuery&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQuery(UEnvQuery&&); \
	NO_API UEnvQuery(const UEnvQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQuery)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__QueryName() { return STRUCT_OFFSET(UEnvQuery, QueryName); } \
	FORCEINLINE static uint32 __PPO__Options() { return STRUCT_OFFSET(UEnvQuery, Options); }


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_18_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQuery."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

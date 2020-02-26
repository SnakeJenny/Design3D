// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryGenerator_generated_h
#error "EnvQueryGenerator.generated.h already included, missing '#pragma once' in EnvQueryGenerator.h"
#endif
#define AIMODULE_EnvQueryGenerator_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator(); \
	friend struct Z_Construct_UClass_UEnvQueryGenerator_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryGenerator, UEnvQueryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator(); \
	friend struct Z_Construct_UClass_UEnvQueryGenerator_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryGenerator, UEnvQueryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryGenerator(UEnvQueryGenerator&&); \
	NO_API UEnvQueryGenerator(const UEnvQueryGenerator&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryGenerator(UEnvQueryGenerator&&); \
	NO_API UEnvQueryGenerator(const UEnvQueryGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_20_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryGenerator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

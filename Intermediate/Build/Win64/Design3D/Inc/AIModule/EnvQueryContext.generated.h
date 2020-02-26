// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryContext_generated_h
#error "EnvQueryContext.generated.h already included, missing '#pragma once' in EnvQueryContext.h"
#endif
#define AIMODULE_EnvQueryContext_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryContext(); \
	friend struct Z_Construct_UClass_UEnvQueryContext_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryContext, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryContext)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryContext(); \
	friend struct Z_Construct_UClass_UEnvQueryContext_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryContext, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryContext)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryContext(UEnvQueryContext&&); \
	NO_API UEnvQueryContext(const UEnvQueryContext&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryContext(UEnvQueryContext&&); \
	NO_API UEnvQueryContext(const UEnvQueryContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryContext)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_13_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryContext."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

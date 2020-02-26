// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryTest_Pathfinding_generated_h
#error "EnvQueryTest_Pathfinding.generated.h already included, missing '#pragma once' in EnvQueryTest_Pathfinding.h"
#endif
#define AIMODULE_EnvQueryTest_Pathfinding_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Pathfinding(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Pathfinding, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Pathfinding)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Pathfinding(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Pathfinding, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Pathfinding)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryTest_Pathfinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Pathfinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest_Pathfinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Pathfinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryTest_Pathfinding(UEnvQueryTest_Pathfinding&&); \
	NO_API UEnvQueryTest_Pathfinding(const UEnvQueryTest_Pathfinding&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryTest_Pathfinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryTest_Pathfinding(UEnvQueryTest_Pathfinding&&); \
	NO_API UEnvQueryTest_Pathfinding(const UEnvQueryTest_Pathfinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest_Pathfinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Pathfinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Pathfinding)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_30_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryTest_Pathfinding."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryTest_Pathfinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h


#define FOREACH_ENUM_EENVTESTPATHFINDING(op) \
	op(EEnvTestPathfinding::PathExist) \
	op(EEnvTestPathfinding::PathCost) \
	op(EEnvTestPathfinding::PathLength) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

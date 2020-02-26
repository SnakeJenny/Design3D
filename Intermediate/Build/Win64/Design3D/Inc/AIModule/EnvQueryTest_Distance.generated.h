// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryTest_Distance_generated_h
#error "EnvQueryTest_Distance.generated.h already included, missing '#pragma once' in EnvQueryTest_Distance.h"
#endif
#define AIMODULE_EnvQueryTest_Distance_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Distance(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Distance_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Distance, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Distance)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Distance(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Distance_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Distance, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Distance)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryTest_Distance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Distance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest_Distance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Distance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryTest_Distance(UEnvQueryTest_Distance&&); \
	NO_API UEnvQueryTest_Distance(const UEnvQueryTest_Distance&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryTest_Distance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryTest_Distance(UEnvQueryTest_Distance&&); \
	NO_API UEnvQueryTest_Distance(const UEnvQueryTest_Distance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest_Distance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Distance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Distance)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_24_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryTest_Distance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryTest_Distance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h


#define FOREACH_ENUM_EENVTESTDISTANCE(op) \
	op(EEnvTestDistance::Distance3D) \
	op(EEnvTestDistance::Distance2D) \
	op(EEnvTestDistance::DistanceZ) \
	op(EEnvTestDistance::DistanceAbsoluteZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

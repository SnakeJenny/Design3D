// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryGenerator_OnCircle_generated_h
#error "EnvQueryGenerator_OnCircle.generated.h already included, missing '#pragma once' in EnvQueryGenerator_OnCircle.h"
#endif
#define AIMODULE_EnvQueryGenerator_OnCircle_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_OnCircle(); \
	friend struct Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryGenerator_OnCircle, UEnvQueryGenerator_ProjectedPoints, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_OnCircle)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_OnCircle(); \
	friend struct Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryGenerator_OnCircle, UEnvQueryGenerator_ProjectedPoints, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_OnCircle)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryGenerator_OnCircle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_OnCircle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryGenerator_OnCircle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_OnCircle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryGenerator_OnCircle(UEnvQueryGenerator_OnCircle&&); \
	NO_API UEnvQueryGenerator_OnCircle(const UEnvQueryGenerator_OnCircle&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryGenerator_OnCircle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryGenerator_OnCircle(UEnvQueryGenerator_OnCircle&&); \
	NO_API UEnvQueryGenerator_OnCircle(const UEnvQueryGenerator_OnCircle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryGenerator_OnCircle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_OnCircle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_OnCircle)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_25_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryGenerator_OnCircle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryGenerator_OnCircle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h


#define FOREACH_ENUM_EPOINTONCIRCLESPACINGMETHOD(op) \
	op(EPointOnCircleSpacingMethod::BySpaceBetween) \
	op(EPointOnCircleSpacingMethod::ByNumberOfPoints) 

enum class EPointOnCircleSpacingMethod : uint8;
template<> AIMODULE_API UEnum* StaticEnum<EPointOnCircleSpacingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

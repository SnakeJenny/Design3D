// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FVector;
#ifdef AIMODULE_EnvQueryContext_BlueprintBase_generated_h
#error "EnvQueryContext_BlueprintBase.generated.h already included, missing '#pragma once' in EnvQueryContext_BlueprintBase.h"
#endif
#define AIMODULE_EnvQueryContext_BlueprintBase_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_EVENT_PARMS \
	struct EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms \
	{ \
		UObject* QuerierObject; \
		AActor* QuerierActor; \
		TArray<AActor*> ResultingActorsSet; \
	}; \
	struct EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms \
	{ \
		UObject* QuerierObject; \
		AActor* QuerierActor; \
		TArray<FVector> ResultingLocationSet; \
	}; \
	struct EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms \
	{ \
		UObject* QuerierObject; \
		AActor* QuerierActor; \
		AActor* ResultingActor; \
	}; \
	struct EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms \
	{ \
		UObject* QuerierObject; \
		AActor* QuerierActor; \
		FVector ResultingLocation; \
	};


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryContext_BlueprintBase(); \
	friend struct Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryContext_BlueprintBase, UEnvQueryContext, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryContext_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryContext_BlueprintBase(); \
	friend struct Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryContext_BlueprintBase, UEnvQueryContext, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryContext_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryContext_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryContext_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryContext_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryContext_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UEnvQueryContext_BlueprintBase(UEnvQueryContext_BlueprintBase&&); \
	AIMODULE_API UEnvQueryContext_BlueprintBase(const UEnvQueryContext_BlueprintBase&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryContext_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UEnvQueryContext_BlueprintBase(UEnvQueryContext_BlueprintBase&&); \
	AIMODULE_API UEnvQueryContext_BlueprintBase(const UEnvQueryContext_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryContext_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryContext_BlueprintBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryContext_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_14_PROLOG \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_EVENT_PARMS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryContext_BlueprintBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryContext_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

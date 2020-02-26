// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_CrowdFollowingComponent_generated_h
#error "CrowdFollowingComponent.generated.h already included, missing '#pragma once' in CrowdFollowingComponent.h"
#endif
#define AIMODULE_CrowdFollowingComponent_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSuspendCrowdSteering) \
	{ \
		P_GET_UBOOL(Z_Param_bSuspend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuspendCrowdSteering(Z_Param_bSuspend); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSuspendCrowdSteering) \
	{ \
		P_GET_UBOOL(Z_Param_bSuspend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuspendCrowdSteering(Z_Param_bSuspend); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrowdFollowingComponent(); \
	friend struct Z_Construct_UClass_UCrowdFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(UCrowdFollowingComponent, UPathFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UCrowdFollowingComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCrowdFollowingComponent*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUCrowdFollowingComponent(); \
	friend struct Z_Construct_UClass_UCrowdFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(UCrowdFollowingComponent, UPathFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UCrowdFollowingComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCrowdFollowingComponent*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdFollowingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdFollowingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdFollowingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdFollowingComponent(UCrowdFollowingComponent&&); \
	NO_API UCrowdFollowingComponent(const UCrowdFollowingComponent&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdFollowingComponent(UCrowdFollowingComponent&&); \
	NO_API UCrowdFollowingComponent(const UCrowdFollowingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdFollowingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdFollowingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdFollowingComponent)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterMovement() { return STRUCT_OFFSET(UCrowdFollowingComponent, CharacterMovement); }


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_36_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CrowdFollowingComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UCrowdFollowingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class APawn;
#ifdef AIMODULE_BTService_BlueprintBase_generated_h
#error "BTService_BlueprintBase.generated.h already included, missing '#pragma once' in BTService_BlueprintBase.h"
#endif
#define AIMODULE_BTService_BlueprintBase_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsServiceActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsServiceActive(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsServiceActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsServiceActive(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_EVENT_PARMS \
	struct BTService_BlueprintBase_eventReceiveActivation_Parms \
	{ \
		AActor* OwnerActor; \
	}; \
	struct BTService_BlueprintBase_eventReceiveActivationAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
	}; \
	struct BTService_BlueprintBase_eventReceiveDeactivation_Parms \
	{ \
		AActor* OwnerActor; \
	}; \
	struct BTService_BlueprintBase_eventReceiveDeactivationAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
	}; \
	struct BTService_BlueprintBase_eventReceiveSearchStart_Parms \
	{ \
		AActor* OwnerActor; \
	}; \
	struct BTService_BlueprintBase_eventReceiveSearchStartAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
	}; \
	struct BTService_BlueprintBase_eventReceiveTick_Parms \
	{ \
		AActor* OwnerActor; \
		float DeltaSeconds; \
	}; \
	struct BTService_BlueprintBase_eventReceiveTickAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
		float DeltaSeconds; \
	};


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTService_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTService_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTService_BlueprintBase, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTService_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUBTService_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTService_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTService_BlueprintBase, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTService_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTService_BlueprintBase(UBTService_BlueprintBase&&); \
	NO_API UBTService_BlueprintBase(const UBTService_BlueprintBase&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTService_BlueprintBase(UBTService_BlueprintBase&&); \
	NO_API UBTService_BlueprintBase(const UBTService_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_BlueprintBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIOwner() { return STRUCT_OFFSET(UBTService_BlueprintBase, AIOwner); } \
	FORCEINLINE static uint32 __PPO__ActorOwner() { return STRUCT_OFFSET(UBTService_BlueprintBase, ActorOwner); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_23_PROLOG \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_EVENT_PARMS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTService_BlueprintBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTService_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

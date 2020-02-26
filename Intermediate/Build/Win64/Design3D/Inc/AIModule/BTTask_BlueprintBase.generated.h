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
#ifdef AIMODULE_BTTask_BlueprintBase_generated_h
#error "BTTask_BlueprintBase.generated.h already included, missing '#pragma once' in BTTask_BlueprintBase.h"
#endif
#define AIMODULE_BTTask_BlueprintBase_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTaskAborting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTaskAborting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTaskExecuting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTaskExecuting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFinishOnMessageWithId) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MessageName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFinishOnMessageWithId(Z_Param_MessageName,Z_Param_RequestID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFinishOnMessage) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MessageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFinishOnMessage(Z_Param_MessageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAbort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAbort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishExecute) \
	{ \
		P_GET_UBOOL(Z_Param_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishExecute(Z_Param_bSuccess); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTaskAborting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTaskAborting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTaskExecuting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTaskExecuting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFinishOnMessageWithId) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MessageName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFinishOnMessageWithId(Z_Param_MessageName,Z_Param_RequestID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFinishOnMessage) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MessageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFinishOnMessage(Z_Param_MessageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAbort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAbort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishExecute) \
	{ \
		P_GET_UBOOL(Z_Param_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishExecute(Z_Param_bSuccess); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_EVENT_PARMS \
	struct BTTask_BlueprintBase_eventReceiveAbort_Parms \
	{ \
		AActor* OwnerActor; \
	}; \
	struct BTTask_BlueprintBase_eventReceiveAbortAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
	}; \
	struct BTTask_BlueprintBase_eventReceiveExecute_Parms \
	{ \
		AActor* OwnerActor; \
	}; \
	struct BTTask_BlueprintBase_eventReceiveExecuteAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
	}; \
	struct BTTask_BlueprintBase_eventReceiveTick_Parms \
	{ \
		AActor* OwnerActor; \
		float DeltaSeconds; \
	}; \
	struct BTTask_BlueprintBase_eventReceiveTickAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
		float DeltaSeconds; \
	};


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTTask_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_BlueprintBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTTask_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_BlueprintBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_BlueprintBase(UBTTask_BlueprintBase&&); \
	NO_API UBTTask_BlueprintBase(const UBTTask_BlueprintBase&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_BlueprintBase(UBTTask_BlueprintBase&&); \
	NO_API UBTTask_BlueprintBase(const UBTTask_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_BlueprintBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIOwner() { return STRUCT_OFFSET(UBTTask_BlueprintBase, AIOwner); } \
	FORCEINLINE static uint32 __PPO__ActorOwner() { return STRUCT_OFFSET(UBTTask_BlueprintBase, ActorOwner); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_23_PROLOG \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_EVENT_PARMS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTTask_BlueprintBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
#ifdef AIMODULE_BTDecorator_BlueprintBase_generated_h
#error "BTDecorator_BlueprintBase.generated.h already included, missing '#pragma once' in BTDecorator_BlueprintBase.h"
#endif
#define AIMODULE_BTDecorator_BlueprintBase_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDecoratorObserverActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDecoratorObserverActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDecoratorExecutionActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDecoratorExecutionActive(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDecoratorObserverActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDecoratorObserverActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDecoratorExecutionActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDecoratorExecutionActive(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_EVENT_PARMS \
	struct BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms \
	{ \
		AActor* OwnerActor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms \
	{ \
		AActor* OwnerActor; \
		TEnumAsByte<EBTNodeResult::Type> NodeResult; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
		TEnumAsByte<EBTNodeResult::Type> NodeResult; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveExecutionStart_Parms \
	{ \
		AActor* OwnerActor; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveObserverActivated_Parms \
	{ \
		AActor* OwnerActor; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveObserverDeactivated_Parms \
	{ \
		AActor* OwnerActor; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveTick_Parms \
	{ \
		AActor* OwnerActor; \
		float DeltaSeconds; \
	}; \
	struct BTDecorator_BlueprintBase_eventReceiveTickAI_Parms \
	{ \
		AAIController* OwnerController; \
		APawn* ControlledPawn; \
		float DeltaSeconds; \
	};


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTDecorator_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_BlueprintBase, UBTDecorator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_BlueprintBase, UBTDecorator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTDecorator_BlueprintBase(UBTDecorator_BlueprintBase&&); \
	NO_API UBTDecorator_BlueprintBase(const UBTDecorator_BlueprintBase&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTDecorator_BlueprintBase(UBTDecorator_BlueprintBase&&); \
	NO_API UBTDecorator_BlueprintBase(const UBTDecorator_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_BlueprintBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIOwner() { return STRUCT_OFFSET(UBTDecorator_BlueprintBase, AIOwner); } \
	FORCEINLINE static uint32 __PPO__ActorOwner() { return STRUCT_OFFSET(UBTDecorator_BlueprintBase, ActorOwner); } \
	FORCEINLINE static uint32 __PPO__ObservedKeyNames() { return STRUCT_OFFSET(UBTDecorator_BlueprintBase, ObservedKeyNames); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_32_PROLOG \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_EVENT_PARMS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIPerceptionComponent;
class AActor;
class APawn;
class UAISenseEvent;
#ifdef AIMODULE_AISense_Blueprint_generated_h
#error "AISense_Blueprint.generated.h already included, missing '#pragma once' in AISense_Blueprint.h"
#endif
#define AIMODULE_AISense_Blueprint_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllListenerComponents) \
	{ \
		P_GET_TARRAY_REF(UAIPerceptionComponent*,Z_Param_Out_ListenerComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllListenerComponents(Z_Param_Out_ListenerComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllListenerActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ListenerActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllListenerActors(Z_Param_Out_ListenerActors); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllListenerComponents) \
	{ \
		P_GET_TARRAY_REF(UAIPerceptionComponent*,Z_Param_Out_ListenerComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllListenerComponents(Z_Param_Out_ListenerComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllListenerActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ListenerActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllListenerActors(Z_Param_Out_ListenerActors); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_EVENT_PARMS \
	struct AISense_Blueprint_eventK2_OnNewPawn_Parms \
	{ \
		APawn* NewPawn; \
	}; \
	struct AISense_Blueprint_eventOnListenerRegistered_Parms \
	{ \
		AActor* ActorListener; \
		UAIPerceptionComponent* PerceptionComponent; \
	}; \
	struct AISense_Blueprint_eventOnListenerUnregistered_Parms \
	{ \
		AActor* ActorListener; \
		UAIPerceptionComponent* PerceptionComponent; \
	}; \
	struct AISense_Blueprint_eventOnListenerUpdated_Parms \
	{ \
		AActor* ActorListener; \
		UAIPerceptionComponent* PerceptionComponent; \
	}; \
	struct AISense_Blueprint_eventOnUpdate_Parms \
	{ \
		TArray<UAISenseEvent*> EventsToProcess; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AISense_Blueprint_eventOnUpdate_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Blueprint(); \
	friend struct Z_Construct_UClass_UAISense_Blueprint_Statics; \
public: \
	DECLARE_CLASS(UAISense_Blueprint, UAISense, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Blueprint)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Blueprint(); \
	friend struct Z_Construct_UClass_UAISense_Blueprint_Statics; \
public: \
	DECLARE_CLASS(UAISense_Blueprint, UAISense, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Blueprint)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Blueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Blueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Blueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Blueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Blueprint(UAISense_Blueprint&&); \
	NO_API UAISense_Blueprint(const UAISense_Blueprint&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Blueprint(UAISense_Blueprint&&); \
	NO_API UAISense_Blueprint(const UAISense_Blueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Blueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Blueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Blueprint)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ListenerDataType() { return STRUCT_OFFSET(UAISense_Blueprint, ListenerDataType); } \
	FORCEINLINE static uint32 __PPO__ListenerContainer() { return STRUCT_OFFSET(UAISense_Blueprint, ListenerContainer); } \
	FORCEINLINE static uint32 __PPO__UnprocessedEvents() { return STRUCT_OFFSET(UAISense_Blueprint, UnprocessedEvents); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_17_PROLOG \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_EVENT_PARMS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Blueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

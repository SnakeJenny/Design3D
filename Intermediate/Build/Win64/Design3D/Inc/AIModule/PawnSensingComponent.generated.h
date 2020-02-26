// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
#ifdef AIMODULE_PawnSensingComponent_generated_h
#error "PawnSensingComponent.generated.h already included, missing '#pragma once' in PawnSensingComponent.h"
#endif
#define AIMODULE_PawnSensingComponent_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_26_DELEGATE \
struct PawnSensingComponent_eventHearNoiseDelegate_Parms \
{ \
	APawn* Instigator; \
	FVector Location; \
	float Volume; \
}; \
static inline void FHearNoiseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HearNoiseDelegate, APawn* Instigator, FVector const& Location, float Volume) \
{ \
	PawnSensingComponent_eventHearNoiseDelegate_Parms Parms; \
	Parms.Instigator=Instigator; \
	Parms.Location=Location; \
	Parms.Volume=Volume; \
	HearNoiseDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_25_DELEGATE \
struct PawnSensingComponent_eventSeePawnDelegate_Parms \
{ \
	APawn* Pawn; \
}; \
static inline void FSeePawnDelegate_DelegateWrapper(const FMulticastScriptDelegate& SeePawnDelegate, APawn* Pawn) \
{ \
	PawnSensingComponent_eventSeePawnDelegate_Parms Parms; \
	Parms.Pawn=Pawn; \
	SeePawnDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPeripheralVisionCosine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPeripheralVisionCosine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPeripheralVisionAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPeripheralVisionAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPeripheralVisionAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPeripheralVisionAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPeripheralVisionAngle(Z_Param_NewPeripheralVisionAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensingUpdatesEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensingUpdatesEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensingInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensingInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensingInterval(Z_Param_NewSensingInterval); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPeripheralVisionCosine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPeripheralVisionCosine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPeripheralVisionAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPeripheralVisionAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPeripheralVisionAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPeripheralVisionAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPeripheralVisionAngle(Z_Param_NewPeripheralVisionAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensingUpdatesEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensingUpdatesEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensingInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensingInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensingInterval(Z_Param_NewSensingInterval); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnSensingComponent(); \
	friend struct Z_Construct_UClass_UPawnSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnSensingComponent)


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPawnSensingComponent(); \
	friend struct Z_Construct_UClass_UPawnSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnSensingComponent)


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnSensingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnSensingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnSensingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnSensingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnSensingComponent(UPawnSensingComponent&&); \
	NO_API UPawnSensingComponent(const UPawnSensingComponent&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnSensingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnSensingComponent(UPawnSensingComponent&&); \
	NO_API UPawnSensingComponent(const UPawnSensingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnSensingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnSensingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnSensingComponent)


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PeripheralVisionAngle() { return STRUCT_OFFSET(UPawnSensingComponent, PeripheralVisionAngle); } \
	FORCEINLINE static uint32 __PPO__PeripheralVisionCosine() { return STRUCT_OFFSET(UPawnSensingComponent, PeripheralVisionCosine); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_20_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnSensingComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnSensingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

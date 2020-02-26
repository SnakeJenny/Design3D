// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
struct FVector;
class AActor;
class UAITask_MoveTo;
#ifdef AIMODULE_AITask_MoveTo_generated_h
#error "AITask_MoveTo.generated.h already included, missing '#pragma once' in AITask_MoveTo.h"
#endif
#define AIMODULE_AITask_MoveTo_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_14_DELEGATE \
struct _Script_AIModule_eventMoveTaskCompletedSignature_Parms \
{ \
	TEnumAsByte<EPathFollowingResult::Type> Result; \
	AAIController* AIController; \
}; \
static inline void FMoveTaskCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& MoveTaskCompletedSignature, EPathFollowingResult::Type Result, AAIController* AIController) \
{ \
	_Script_AIModule_eventMoveTaskCompletedSignature_Parms Parms; \
	Parms.Result=Result; \
	Parms.AIController=AIController; \
	MoveTaskCompletedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAIMoveTo) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_Controller); \
		P_GET_STRUCT(FVector,Z_Param_GoalLocation); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_StopOnOverlap); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AcceptPartialPath); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bLockAILogic); \
		P_GET_UBOOL(Z_Param_bUseContinuosGoalTracking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAITask_MoveTo**)Z_Param__Result=UAITask_MoveTo::AIMoveTo(Z_Param_Controller,Z_Param_GoalLocation,Z_Param_GoalActor,Z_Param_AcceptanceRadius,EAIOptionFlag::Type(Z_Param_StopOnOverlap),EAIOptionFlag::Type(Z_Param_AcceptPartialPath),Z_Param_bUsePathfinding,Z_Param_bLockAILogic,Z_Param_bUseContinuosGoalTracking); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAIMoveTo) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_Controller); \
		P_GET_STRUCT(FVector,Z_Param_GoalLocation); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_StopOnOverlap); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AcceptPartialPath); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bLockAILogic); \
		P_GET_UBOOL(Z_Param_bUseContinuosGoalTracking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAITask_MoveTo**)Z_Param__Result=UAITask_MoveTo::AIMoveTo(Z_Param_Controller,Z_Param_GoalLocation,Z_Param_GoalActor,Z_Param_AcceptanceRadius,EAIOptionFlag::Type(Z_Param_StopOnOverlap),EAIOptionFlag::Type(Z_Param_AcceptPartialPath),Z_Param_bUsePathfinding,Z_Param_bLockAILogic,Z_Param_bUseContinuosGoalTracking); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_MoveTo(); \
	friend struct Z_Construct_UClass_UAITask_MoveTo_Statics; \
public: \
	DECLARE_CLASS(UAITask_MoveTo, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask_MoveTo)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAITask_MoveTo(); \
	friend struct Z_Construct_UClass_UAITask_MoveTo_Statics; \
public: \
	DECLARE_CLASS(UAITask_MoveTo, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask_MoveTo)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAITask_MoveTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_MoveTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_MoveTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_MoveTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask_MoveTo(UAITask_MoveTo&&); \
	NO_API UAITask_MoveTo(const UAITask_MoveTo&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask_MoveTo(UAITask_MoveTo&&); \
	NO_API UAITask_MoveTo(const UAITask_MoveTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_MoveTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_MoveTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_MoveTo)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnRequestFailed() { return STRUCT_OFFSET(UAITask_MoveTo, OnRequestFailed); } \
	FORCEINLINE static uint32 __PPO__OnMoveFinished() { return STRUCT_OFFSET(UAITask_MoveTo, OnMoveFinished); } \
	FORCEINLINE static uint32 __PPO__MoveRequest() { return STRUCT_OFFSET(UAITask_MoveTo, MoveRequest); }


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_16_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAITask_MoveTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

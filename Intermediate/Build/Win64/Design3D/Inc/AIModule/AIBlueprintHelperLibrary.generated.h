// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FVector;
class AActor;
class UNavigationPath;
struct FRotator;
class UAnimInstance;
class UBlackboardComponent;
class AAIController;
class UObject;
class APawn;
class UBehaviorTree;
class UAIAsyncTaskBlueprintProxy;
#ifdef AIMODULE_AIBlueprintHelperLibrary_generated_h
#error "AIBlueprintHelperLibrary.generated.h already included, missing '#pragma once' in AIBlueprintHelperLibrary.h"
#endif
#define AIMODULE_AIBlueprintHelperLibrary_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(Z_Param_Controller,Z_Param_Out_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToActor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::SimpleMoveToActor(Z_Param_Controller,Z_Param_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPath) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UAIBlueprintHelperLibrary::GetCurrentPath(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAIRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAIBlueprintHelperLibrary::IsValidAIRotation(Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAIDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DirectionVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAIBlueprintHelperLibrary::IsValidAIDirection(Z_Param_DirectionVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAILocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAIBlueprintHelperLibrary::IsValidAILocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockAIResourcesWithAnimation) \
	{ \
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance); \
		P_GET_UBOOL(Z_Param_bUnlockMovement); \
		P_GET_UBOOL(Z_Param_UnlockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(Z_Param_AnimInstance,Z_Param_bUnlockMovement,Z_Param_UnlockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockAIResourcesWithAnimation) \
	{ \
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance); \
		P_GET_UBOOL(Z_Param_bLockMovement); \
		P_GET_UBOOL(Z_Param_LockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(Z_Param_AnimInstance,Z_Param_bLockMovement,Z_Param_LockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboard) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBlackboardComponent**)Z_Param__Result=UAIBlueprintHelperLibrary::GetBlackboard(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAIController) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ControlledActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAIController**)Z_Param__Result=UAIBlueprintHelperLibrary::GetAIController(Z_Param_ControlledActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnAIFromClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_PawnClass); \
		P_GET_OBJECT(UBehaviorTree,Z_Param_BehaviorTree); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL(Z_Param_bNoCollisionFail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=UAIBlueprintHelperLibrary::SpawnAIFromClass(Z_Param_WorldContextObject,Z_Param_PawnClass,Z_Param_BehaviorTree,Z_Param_Location,Z_Param_Rotation,Z_Param_bNoCollisionFail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAIMessage) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Message); \
		P_GET_OBJECT(UObject,Z_Param_MessageSource); \
		P_GET_UBOOL(Z_Param_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::SendAIMessage(Z_Param_Target,Z_Param_Message,Z_Param_MessageSource,Z_Param_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMoveToProxyObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAIAsyncTaskBlueprintProxy**)Z_Param__Result=UAIBlueprintHelperLibrary::CreateMoveToProxyObject(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Destination,Z_Param_TargetActor,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(Z_Param_Controller,Z_Param_Out_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToActor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::SimpleMoveToActor(Z_Param_Controller,Z_Param_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPath) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UAIBlueprintHelperLibrary::GetCurrentPath(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAIRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAIBlueprintHelperLibrary::IsValidAIRotation(Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAIDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DirectionVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAIBlueprintHelperLibrary::IsValidAIDirection(Z_Param_DirectionVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAILocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAIBlueprintHelperLibrary::IsValidAILocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockAIResourcesWithAnimation) \
	{ \
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance); \
		P_GET_UBOOL(Z_Param_bUnlockMovement); \
		P_GET_UBOOL(Z_Param_UnlockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(Z_Param_AnimInstance,Z_Param_bUnlockMovement,Z_Param_UnlockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockAIResourcesWithAnimation) \
	{ \
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance); \
		P_GET_UBOOL(Z_Param_bLockMovement); \
		P_GET_UBOOL(Z_Param_LockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(Z_Param_AnimInstance,Z_Param_bLockMovement,Z_Param_LockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboard) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBlackboardComponent**)Z_Param__Result=UAIBlueprintHelperLibrary::GetBlackboard(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAIController) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ControlledActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAIController**)Z_Param__Result=UAIBlueprintHelperLibrary::GetAIController(Z_Param_ControlledActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnAIFromClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_PawnClass); \
		P_GET_OBJECT(UBehaviorTree,Z_Param_BehaviorTree); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL(Z_Param_bNoCollisionFail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=UAIBlueprintHelperLibrary::SpawnAIFromClass(Z_Param_WorldContextObject,Z_Param_PawnClass,Z_Param_BehaviorTree,Z_Param_Location,Z_Param_Rotation,Z_Param_bNoCollisionFail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAIMessage) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Message); \
		P_GET_OBJECT(UObject,Z_Param_MessageSource); \
		P_GET_UBOOL(Z_Param_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAIBlueprintHelperLibrary::SendAIMessage(Z_Param_Target,Z_Param_Message,Z_Param_MessageSource,Z_Param_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMoveToProxyObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAIAsyncTaskBlueprintProxy**)Z_Param__Result=UAIBlueprintHelperLibrary::CreateMoveToProxyObject(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Destination,Z_Param_TargetActor,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIBlueprintHelperLibrary(); \
	friend struct Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UAIBlueprintHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIBlueprintHelperLibrary)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAIBlueprintHelperLibrary(); \
	friend struct Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UAIBlueprintHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIBlueprintHelperLibrary)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIBlueprintHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIBlueprintHelperLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIBlueprintHelperLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIBlueprintHelperLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIBlueprintHelperLibrary(UAIBlueprintHelperLibrary&&); \
	NO_API UAIBlueprintHelperLibrary(const UAIBlueprintHelperLibrary&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIBlueprintHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIBlueprintHelperLibrary(UAIBlueprintHelperLibrary&&); \
	NO_API UAIBlueprintHelperLibrary(const UAIBlueprintHelperLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIBlueprintHelperLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIBlueprintHelperLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIBlueprintHelperLibrary)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_23_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIBlueprintHelperLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIBlueprintHelperLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

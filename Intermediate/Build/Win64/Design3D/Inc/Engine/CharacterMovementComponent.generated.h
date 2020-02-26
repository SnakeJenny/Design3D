// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
struct FFindFloorResult;
class ACharacter;
struct FNavAvoidanceMask;
struct FRotator;
#ifdef ENGINE_CharacterMovementComponent_generated_h
#error "CharacterMovementComponent.generated.h already included, missing '#pragma once' in CharacterMovementComponent.h"
#endif
#define ENGINE_CharacterMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCharacterMovementComponentPostPhysicsTickFunction>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFindFloorResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFindFloorResult>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleTouched) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ComputeFloorDist) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CapsuleLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SweepDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SweepRadius); \
		P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_ComputeFloorDist(Z_Param_CapsuleLocation,Z_Param_LineDistance,Z_Param_SweepDistance,Z_Param_SweepRadius,Z_Param_Out_FloorResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_FindFloor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CapsuleLocation); \
		P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_FindFloor(Z_Param_CapsuleLocation,Z_Param_Out_FloorResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWalkableFloorZ(Z_Param_InWalkableFloorZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetWalkableFloorZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWalkableFloorAngle(Z_Param_InWalkableFloorAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetWalkableFloorAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWalkable) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWalkable(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValidPerchRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValidPerchRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPerchRadiusThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForce(Z_Param_Force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_UBOOL(Z_Param_bVelocityChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddImpulse(Z_Param_Impulse,Z_Param_bVelocityChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAccumulatedForces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAccumulatedForces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnalogInputModifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnalogInputModifier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxBrakingDeceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxBrakingDeceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetModifiedMaxAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetModifiedMaxAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinAnalogSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinAnalogSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeightWithJumpTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxJumpHeightWithJumpTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxJumpHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Friction); \
		P_GET_UBOOL(Z_Param_bFluid); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BrakingDeceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalcVelocity(Z_Param_DeltaTime,Z_Param_Friction,Z_Param_bFluid,Z_Param_BrakingDeceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetImpartedMovementBaseVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetMovementBase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWalking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWalking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMovementMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewMovementMode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCustomMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMovementMode(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToIgnore(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToAvoidMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToAvoid(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceGroupMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceGroup(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastUpdateVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetLastUpdateRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastUpdateLocation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleTouched) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ComputeFloorDist) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CapsuleLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SweepDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SweepRadius); \
		P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_ComputeFloorDist(Z_Param_CapsuleLocation,Z_Param_LineDistance,Z_Param_SweepDistance,Z_Param_SweepRadius,Z_Param_Out_FloorResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_FindFloor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CapsuleLocation); \
		P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_FindFloor(Z_Param_CapsuleLocation,Z_Param_Out_FloorResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWalkableFloorZ(Z_Param_InWalkableFloorZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetWalkableFloorZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWalkableFloorAngle(Z_Param_InWalkableFloorAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetWalkableFloorAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWalkable) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWalkable(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValidPerchRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValidPerchRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPerchRadiusThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForce(Z_Param_Force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_UBOOL(Z_Param_bVelocityChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddImpulse(Z_Param_Impulse,Z_Param_bVelocityChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAccumulatedForces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAccumulatedForces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnalogInputModifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnalogInputModifier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxBrakingDeceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxBrakingDeceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetModifiedMaxAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetModifiedMaxAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinAnalogSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinAnalogSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeightWithJumpTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxJumpHeightWithJumpTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxJumpHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Friction); \
		P_GET_UBOOL(Z_Param_bFluid); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BrakingDeceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalcVelocity(Z_Param_DeltaTime,Z_Param_Friction,Z_Param_bFluid,Z_Param_BrakingDeceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetImpartedMovementBaseVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetMovementBase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWalking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWalking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMovementMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewMovementMode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCustomMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMovementMode(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToIgnore(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToAvoidMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToAvoid(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceGroupMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceGroup(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastUpdateVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetLastUpdateRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastUpdateLocation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCharacterMovementComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterMovementComponent(UCharacterMovementComponent&&); \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterMovementComponent(UCharacterMovementComponent&&); \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterOwner() { return STRUCT_OFFSET(UCharacterMovementComponent, CharacterOwner); } \
	FORCEINLINE static uint32 __PPO__WalkableFloorAngle() { return STRUCT_OFFSET(UCharacterMovementComponent, WalkableFloorAngle); } \
	FORCEINLINE static uint32 __PPO__WalkableFloorZ() { return STRUCT_OFFSET(UCharacterMovementComponent, WalkableFloorZ); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(UCharacterMovementComponent, Acceleration); } \
	FORCEINLINE static uint32 __PPO__LastUpdateRotation() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateRotation); } \
	FORCEINLINE static uint32 __PPO__LastUpdateLocation() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateLocation); } \
	FORCEINLINE static uint32 __PPO__LastUpdateVelocity() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateVelocity); } \
	FORCEINLINE static uint32 __PPO__ServerLastTransformUpdateTimeStamp() { return STRUCT_OFFSET(UCharacterMovementComponent, ServerLastTransformUpdateTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ServerLastClientGoodMoveAckTime() { return STRUCT_OFFSET(UCharacterMovementComponent, ServerLastClientGoodMoveAckTime); } \
	FORCEINLINE static uint32 __PPO__ServerLastClientAdjustmentTime() { return STRUCT_OFFSET(UCharacterMovementComponent, ServerLastClientAdjustmentTime); } \
	FORCEINLINE static uint32 __PPO__PendingImpulseToApply() { return STRUCT_OFFSET(UCharacterMovementComponent, PendingImpulseToApply); } \
	FORCEINLINE static uint32 __PPO__PendingForceToApply() { return STRUCT_OFFSET(UCharacterMovementComponent, PendingForceToApply); } \
	FORCEINLINE static uint32 __PPO__AnalogInputModifier() { return STRUCT_OFFSET(UCharacterMovementComponent, AnalogInputModifier); } \
	FORCEINLINE static uint32 __PPO__GroundMovementMode() { return STRUCT_OFFSET(UCharacterMovementComponent, GroundMovementMode); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_158_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_161_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UClothingSimulationInteractor;
struct FPoseSnapshot;
class UAnimationAsset;
enum class ETeleportType : uint8;
class UAnimInstance;
class UObject;
#ifdef ENGINE_SkeletalMeshComponent_generated_h
#error "SkeletalMeshComponent.generated.h already included, missing '#pragma once' in SkeletalMeshComponent.h"
#endif
#define ENGINE_SkeletalMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshComponentClothTickFunction>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshComponentEndPhysicsTickFunction>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_50_DELEGATE \
static inline void FOnBoneTransformsFinalized_DelegateWrapper(const FMulticastScriptDelegate& OnBoneTransformsFinalized) \
{ \
	OnBoneTransformsFinalized.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_45_DELEGATE \
static inline void FOnAnimInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnAnimInitialized) \
{ \
	OnAnimInitialized.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentJointAngles) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Swing1Angle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TwistAngle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Swing2Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentJointAngles(Z_Param_InBoneName,Z_Param_Out_Swing1Angle,Z_Param_Out_TwistAngle,Z_Param_Out_Swing2Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularLimits) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing1LimitAngle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TwistLimitAngle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing2LimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularLimits(Z_Param_InBoneName,Z_Param_Swing1LimitAngle,Z_Param_TwistLimitAngle,Z_Param_Swing2LimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakConstraint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BreakConstraint(Z_Param_Impulse,Z_Param_HitLocation,Z_Param_InBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindConstraintBoneName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConstraintIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->FindConstraintBoneName(Z_Param_ConstraintIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintProfileForAll) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintProfileForAll(Z_Param_ProfileName,Z_Param_bDefaultIfNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_JointName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintProfile(Z_Param_JointName,Z_Param_ProfileName,Z_Param_bDefaultIfNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSpring); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllMotorsAngularDriveParams(Z_Param_InSpring,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllMotorsAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllMotorsAngularPositionDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AddPhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AccumulateAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_AddPhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllBodiesPhysicsBlendWeight(Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAllBodiesSimulatePhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllBodiesBelowSimulatePhysics(Z_Param_Out_InBoneName,Z_Param_bNewSimulate,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending) \
	{ \
		P_GET_UBOOL(Z_Param_bNewBlendPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnablePhysicsBlending(Z_Param_bNewBlendPhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsBlendWeight(Z_Param_PhysicsBlendWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllBodiesSimulatePhysics(Z_Param_bNewSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTermBodiesBelow) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParentBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TermBodiesBelow(Z_Param_ParentBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseToAllBodiesBelow) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddImpulseToAllBodiesBelow(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceToAllBodiesBelow) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForceToAllBodiesBelow(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkeletalCenterOfMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSkeletalCenterOfMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneMass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bScaleMass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBoneMass(Z_Param_BoneName,Z_Param_bScaleMass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetClosestPointOnPhysicsAsset) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_GetClosestPointOnPhysicsAsset(Z_Param_Out_WorldPosition,Z_Param_Out_ClosestWorldPosition,Z_Param_Out_Normal,Z_Param_Out_BoneName,Z_Param_Out_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableGravityOnAllBodiesBelow) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableGravity); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableGravityOnAllBodiesBelow(Z_Param_bEnableGravity,Z_Param_BoneName,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBodyGravityEnabled) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBodyGravityEnabled(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableBodyGravity) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableGravity); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableBodyGravity(Z_Param_bEnableGravity,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollisionBelow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNotifyRigidBodyCollisionBelow(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBodyNotifyRigidBodyCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBodyNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClothingSimulationInteractor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClothingSimulationInteractor**)Z_Param__Result=P_THIS->GetClothingSimulationInteractor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeleportDistanceThreshold(Z_Param_Threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTeleportDistanceThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeleportRotationThreshold(Z_Param_Threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTeleportRotationThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowedAnimCurvesEvaluation) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_List); \
		P_GET_UBOOL(Z_Param_bAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowedAnimCurvesEvaluation(Z_Param_Out_List,Z_Param_bAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllowedAnimCurveEvaluation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAllowedAnimCurveEvaluation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowAnimCurveEvaluation) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NameOfCurve); \
		P_GET_UBOOL(Z_Param_bAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllowAnimCurveEvaluation(Z_Param_NameOfCurve,Z_Param_bAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowedAnimCurveEvaluate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAllowedAnimCurveEvaluate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowAnimCurveEvaluation) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowAnimCurveEvaluation(Z_Param_bInAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisableAnimCurves) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDisableAnimCurves(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableAnimCurves) \
	{ \
		P_GET_UBOOL(Z_Param_bInDisableAnimCurves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisableAnimCurves(Z_Param_bInDisableAnimCurves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdateAnimationInEditor) \
	{ \
		P_GET_UBOOL(Z_Param_NewUpdateState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpdateAnimationInEditor(Z_Param_NewUpdateState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindClothFromMasterPoseComponent) \
	{ \
		P_GET_UBOOL(Z_Param_bRestoreSimulationSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindClothFromMasterPoseComponent(Z_Param_bRestoreSimulationSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindClothToMasterPoseComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindClothToMasterPoseComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetClothTeleportMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetClothTeleportMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClothingSimulationSuspended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClothingSimulationSuspended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeClothingSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResumeClothingSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendClothingSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuspendClothingSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceClothNextUpdateTeleportAndReset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceClothNextUpdateTeleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClothMaxDistanceScale(Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetClothMaxDistanceScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapshotPose) \
	{ \
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_Snapshot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnapshotPose(Z_Param_Out_Snapshot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMorphTarget(Z_Param_MorphTargetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMorphTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMorphTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bRemoveZeroWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value,Z_Param_bRemoveZeroWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideAnimationData) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_InAnimToPlay); \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_GET_UBOOL(Z_Param_bIsPlaying); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverrideAnimationData(Z_Param_InAnimToPlay,Z_Param_bIsLooping,Z_Param_bIsPlaying,Z_Param_Position,Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPos); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPosition(Z_Param_InPos,Z_Param_bFireNotifies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimation(Z_Param_NewAnimToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAnimation(Z_Param_NewAnimToPlay,Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EAnimationMode::Type>*)Z_Param__Result=P_THIS->GetAnimationMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InAnimationMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationMode(EAnimationMode::Type(Z_Param_InAnimationMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAnimInstanceDynamics) \
	{ \
		P_GET_ENUM(ETeleportType,Z_Param_InTeleportType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAnimInstanceDynamics(ETeleportType(Z_Param_InTeleportType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasValidAnimationInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasValidAnimationInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubInstanceByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetSubInstanceByName(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPostProcessInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetPostProcessInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetAnimInstanceClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetAnimInstanceClass(Z_Param_NewClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisablePostProcessBlueprint) \
	{ \
		P_GET_UBOOL(Z_Param_bInDisablePostProcess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisablePostProcessBlueprint(Z_Param_bInDisablePostProcess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisablePostProcessBlueprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDisablePostProcessBlueprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDisablePostProcessBlueprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDisablePostProcessBlueprint(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentJointAngles) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Swing1Angle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TwistAngle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Swing2Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentJointAngles(Z_Param_InBoneName,Z_Param_Out_Swing1Angle,Z_Param_Out_TwistAngle,Z_Param_Out_Swing2Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularLimits) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing1LimitAngle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TwistLimitAngle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing2LimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularLimits(Z_Param_InBoneName,Z_Param_Swing1LimitAngle,Z_Param_TwistLimitAngle,Z_Param_Swing2LimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakConstraint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BreakConstraint(Z_Param_Impulse,Z_Param_HitLocation,Z_Param_InBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindConstraintBoneName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConstraintIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->FindConstraintBoneName(Z_Param_ConstraintIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintProfileForAll) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintProfileForAll(Z_Param_ProfileName,Z_Param_bDefaultIfNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_JointName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintProfile(Z_Param_JointName,Z_Param_ProfileName,Z_Param_bDefaultIfNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSpring); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllMotorsAngularDriveParams(Z_Param_InSpring,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllMotorsAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllMotorsAngularPositionDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AddPhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AccumulateAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_AddPhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllBodiesPhysicsBlendWeight(Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAllBodiesSimulatePhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllBodiesBelowSimulatePhysics(Z_Param_Out_InBoneName,Z_Param_bNewSimulate,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending) \
	{ \
		P_GET_UBOOL(Z_Param_bNewBlendPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnablePhysicsBlending(Z_Param_bNewBlendPhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsBlendWeight(Z_Param_PhysicsBlendWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllBodiesSimulatePhysics(Z_Param_bNewSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTermBodiesBelow) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParentBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TermBodiesBelow(Z_Param_ParentBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseToAllBodiesBelow) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddImpulseToAllBodiesBelow(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceToAllBodiesBelow) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForceToAllBodiesBelow(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkeletalCenterOfMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSkeletalCenterOfMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneMass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bScaleMass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBoneMass(Z_Param_BoneName,Z_Param_bScaleMass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetClosestPointOnPhysicsAsset) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_GetClosestPointOnPhysicsAsset(Z_Param_Out_WorldPosition,Z_Param_Out_ClosestWorldPosition,Z_Param_Out_Normal,Z_Param_Out_BoneName,Z_Param_Out_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableGravityOnAllBodiesBelow) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableGravity); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableGravityOnAllBodiesBelow(Z_Param_bEnableGravity,Z_Param_BoneName,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBodyGravityEnabled) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBodyGravityEnabled(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableBodyGravity) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableGravity); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableBodyGravity(Z_Param_bEnableGravity,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollisionBelow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNotifyRigidBodyCollisionBelow(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBodyNotifyRigidBodyCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBodyNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClothingSimulationInteractor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClothingSimulationInteractor**)Z_Param__Result=P_THIS->GetClothingSimulationInteractor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeleportDistanceThreshold(Z_Param_Threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTeleportDistanceThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeleportRotationThreshold(Z_Param_Threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTeleportRotationThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowedAnimCurvesEvaluation) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_List); \
		P_GET_UBOOL(Z_Param_bAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowedAnimCurvesEvaluation(Z_Param_Out_List,Z_Param_bAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllowedAnimCurveEvaluation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAllowedAnimCurveEvaluation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowAnimCurveEvaluation) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NameOfCurve); \
		P_GET_UBOOL(Z_Param_bAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllowAnimCurveEvaluation(Z_Param_NameOfCurve,Z_Param_bAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowedAnimCurveEvaluate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAllowedAnimCurveEvaluate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowAnimCurveEvaluation) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowAnimCurveEvaluation(Z_Param_bInAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisableAnimCurves) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDisableAnimCurves(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableAnimCurves) \
	{ \
		P_GET_UBOOL(Z_Param_bInDisableAnimCurves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisableAnimCurves(Z_Param_bInDisableAnimCurves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdateAnimationInEditor) \
	{ \
		P_GET_UBOOL(Z_Param_NewUpdateState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpdateAnimationInEditor(Z_Param_NewUpdateState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindClothFromMasterPoseComponent) \
	{ \
		P_GET_UBOOL(Z_Param_bRestoreSimulationSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindClothFromMasterPoseComponent(Z_Param_bRestoreSimulationSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindClothToMasterPoseComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindClothToMasterPoseComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetClothTeleportMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetClothTeleportMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClothingSimulationSuspended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClothingSimulationSuspended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeClothingSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResumeClothingSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendClothingSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuspendClothingSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceClothNextUpdateTeleportAndReset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceClothNextUpdateTeleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClothMaxDistanceScale(Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetClothMaxDistanceScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapshotPose) \
	{ \
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_Snapshot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnapshotPose(Z_Param_Out_Snapshot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMorphTarget(Z_Param_MorphTargetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMorphTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMorphTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bRemoveZeroWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value,Z_Param_bRemoveZeroWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideAnimationData) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_InAnimToPlay); \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_GET_UBOOL(Z_Param_bIsPlaying); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverrideAnimationData(Z_Param_InAnimToPlay,Z_Param_bIsLooping,Z_Param_bIsPlaying,Z_Param_Position,Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPos); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPosition(Z_Param_InPos,Z_Param_bFireNotifies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimation(Z_Param_NewAnimToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAnimation(Z_Param_NewAnimToPlay,Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EAnimationMode::Type>*)Z_Param__Result=P_THIS->GetAnimationMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InAnimationMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationMode(EAnimationMode::Type(Z_Param_InAnimationMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAnimInstanceDynamics) \
	{ \
		P_GET_ENUM(ETeleportType,Z_Param_InTeleportType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAnimInstanceDynamics(ETeleportType(Z_Param_InTeleportType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasValidAnimationInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasValidAnimationInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubInstanceByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetSubInstanceByName(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPostProcessInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetPostProcessInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetAnimInstanceClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetAnimInstanceClass(Z_Param_NewClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisablePostProcessBlueprint) \
	{ \
		P_GET_UBOOL(Z_Param_bInDisablePostProcess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisablePostProcessBlueprint(Z_Param_bInDisablePostProcess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisablePostProcessBlueprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDisablePostProcessBlueprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDisablePostProcessBlueprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDisablePostProcessBlueprint(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_USkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USkeletalMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_USkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USkeletalMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshComponent(USkeletalMeshComponent&&); \
	NO_API USkeletalMeshComponent(const USkeletalMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshComponent(USkeletalMeshComponent&&); \
	NO_API USkeletalMeshComponent(const USkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedBoneSpaceTransforms() { return STRUCT_OFFSET(USkeletalMeshComponent, CachedBoneSpaceTransforms); } \
	FORCEINLINE static uint32 __PPO__CachedComponentSpaceTransforms() { return STRUCT_OFFSET(USkeletalMeshComponent, CachedComponentSpaceTransforms); } \
	FORCEINLINE static uint32 __PPO__AnimationMode() { return STRUCT_OFFSET(USkeletalMeshComponent, AnimationMode); } \
	FORCEINLINE static uint32 __PPO__DisallowedAnimCurves() { return STRUCT_OFFSET(USkeletalMeshComponent, DisallowedAnimCurves); } \
	FORCEINLINE static uint32 __PPO__TeleportDistanceThreshold() { return STRUCT_OFFSET(USkeletalMeshComponent, TeleportDistanceThreshold); } \
	FORCEINLINE static uint32 __PPO__TeleportRotationThreshold() { return STRUCT_OFFSET(USkeletalMeshComponent, TeleportRotationThreshold); } \
	FORCEINLINE static uint32 __PPO__LastPoseTickFrame() { return STRUCT_OFFSET(USkeletalMeshComponent, LastPoseTickFrame); } \
	FORCEINLINE static uint32 __PPO__ClothingInteractor() { return STRUCT_OFFSET(USkeletalMeshComponent, ClothingInteractor); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_278_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_281_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h


#define FOREACH_ENUM_EPHYSICSTRANSFORMUPDATEMODE(op) \
	op(EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform) \
	op(EPhysicsTransformUpdateMode::ComponentTransformIsKinematic) 
#define FOREACH_ENUM_EANIMATIONMODE(op) \
	op(EAnimationMode::AnimationBlueprint) \
	op(EAnimationMode::AnimationSingleNode) \
	op(EAnimationMode::AnimationCustomMode) 
#define FOREACH_ENUM_EKINEMATICBONESUPDATETOPHYSICS(op) \
	op(EKinematicBonesUpdateToPhysics::SkipSimulatingBones) \
	op(EKinematicBonesUpdateToPhysics::SkipAllBones) 
#define FOREACH_ENUM_EANIMCURVETYPE(op) \
	op(EAnimCurveType::AttributeCurve) \
	op(EAnimCurveType::MaterialCurve) \
	op(EAnimCurveType::MorphTargetCurve) \
	op(EAnimCurveType::MaxAnimCurveType) 

enum class EAnimCurveType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAnimCurveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

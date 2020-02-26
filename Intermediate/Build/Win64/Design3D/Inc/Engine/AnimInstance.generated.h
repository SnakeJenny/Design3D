// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBranchingPointNotifyPayload;
class UAnimMontage;
enum class ETeleportType : uint8;
struct FMarkerSyncAnimPosition;
struct FVector;
struct FRotator;
enum class EAnimCurveType : uint8;
enum class EMontagePlayReturnType : uint8;
class UAnimSequenceBase;
class USkeletalMeshComponent;
class AActor;
struct FPoseSnapshot;
class APawn;
#ifdef ENGINE_AnimInstance_generated_h
#error "AnimInstance.generated.h already included, missing '#pragma once' in AnimInstance.h"
#endif
#define ENGINE_AnimInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSlotEvaluationPose>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FA2CSPose_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ComponentSpaceFlags() { return STRUCT_OFFSET(FA2CSPose, ComponentSpaceFlags); } \
	typedef FA2Pose Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FA2CSPose>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FA2Pose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FA2Pose>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_83_DELEGATE \
struct _Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms \
{ \
	FName NotifyName; \
	FBranchingPointNotifyPayload BranchingPointPayload; \
}; \
static inline void FPlayMontageAnimNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayMontageAnimNotifyDelegate, FName NotifyName, FBranchingPointNotifyPayload const& BranchingPointPayload) \
{ \
	_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms Parms; \
	Parms.NotifyName=NotifyName; \
	Parms.BranchingPointPayload=BranchingPointPayload; \
	PlayMontageAnimNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_71_DELEGATE \
struct _Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
	bool bInterrupted; \
}; \
static inline void FOnMontageBlendingOutStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageBlendingOutStartedMCDelegate, UAnimMontage* Montage, bool bInterrupted) \
{ \
	_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	Parms.bInterrupted=bInterrupted ? true : false; \
	OnMontageBlendingOutStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_63_DELEGATE \
static inline void FOnAllMontageInstancesEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAllMontageInstancesEndedMCDelegate) \
{ \
	OnAllMontageInstancesEndedMCDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_60_DELEGATE \
struct _Script_Engine_eventOnMontageEndedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
	bool bInterrupted; \
}; \
static inline void FOnMontageEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageEndedMCDelegate, UAnimMontage* Montage, bool bInterrupted) \
{ \
	_Script_Engine_eventOnMontageEndedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	Parms.bInterrupted=bInterrupted ? true : false; \
	OnMontageEndedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_52_DELEGATE \
struct _Script_Engine_eventOnMontageStartedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
}; \
static inline void FOnMontageStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageStartedMCDelegate, UAnimMontage* Montage) \
{ \
	_Script_Engine_eventOnMontageStartedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	OnMontageStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetDynamics) \
	{ \
		P_GET_ENUM(ETeleportType,Z_Param_InTeleportType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetDynamics(ETeleportType(Z_Param_InTeleportType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSyncGroupPosition) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSyncGroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMarkerSyncAnimPosition*)Z_Param__Result=P_THIS->GetSyncGroupPosition(Z_Param_InSyncGroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSyncGroupBetweenMarkers) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSyncGroupName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PreviousMarker); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NextMarker); \
		P_GET_UBOOL(Z_Param_bRespectMarkerOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSyncGroupBetweenMarkers(Z_Param_InSyncGroupName,Z_Param_PreviousMarker,Z_Param_NextMarker,Z_Param_bRespectMarkerOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMarkerBeenHitThisFrame) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SyncGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMarkerBeenHitThisFrame(Z_Param_SyncGroup,Z_Param_MarkerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeToClosestMarker) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SyncGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutMarkerTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTimeToClosestMarker(Z_Param_SyncGroup,Z_Param_MarkerName,Z_Param_Out_OutMarkerTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockAIResources) \
	{ \
		P_GET_UBOOL(Z_Param_bUnlockMovement); \
		P_GET_UBOOL(Z_Param_UnlockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockAIResources(Z_Param_bUnlockMovement,Z_Param_UnlockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockAIResources) \
	{ \
		P_GET_UBOOL(Z_Param_bLockMovement); \
		P_GET_UBOOL(Z_Param_LockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockAIResources(Z_Param_bLockMovement,Z_Param_LockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_BaseRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateDirection(Z_Param_Out_Velocity,Z_Param_Out_BaseRotation); \
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
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentStateName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCurrentStateName(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCurveNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCurveNames(Z_Param_Out_OutNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveCurveNames) \
	{ \
		P_GET_ENUM(EAnimCurveType,Z_Param_CurveType); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActiveCurveNames(EAnimCurveType(Z_Param_CurveType),Z_Param_Out_OutNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurveValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurveValue(Z_Param_CurveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeFraction(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTime(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimLength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimLength(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeRemainingFraction(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeRemaining(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsedFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionTimeElapsedFraction(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionTimeElapsed(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionCrossfadeDuration) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionCrossfadeDuration(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceCurrentStateElapsedTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceCurrentStateElapsedTime(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceStateWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceStateWeight(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceMachineWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceMachineWeight(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFromEndFraction(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFromEnd(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFraction(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTime(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerLength(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRootMotionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRootMotionMode(ERootMotionMode::Type(Z_Param_Value)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentActiveMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentActiveMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyMontagePlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyMontagePlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetPlayRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Montage_GetPlayRate(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetBlendTime) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Montage_GetBlendTime(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetIsStopped) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Montage_GetIsStopped(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_SetPosition(Z_Param_Montage,Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Montage_GetPosition(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetCurrentSection) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->Montage_GetCurrentSection(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_IsPlaying) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Montage_IsPlaying(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_IsActive) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Montage_IsActive(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetPlayRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_SetPlayRate(Z_Param_Montage,Z_Param_NewPlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetNextSection) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionNameToChange); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NextSection); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_SetNextSection(Z_Param_SectionNameToChange,Z_Param_NextSection,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_JumpToSectionsEnd) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_JumpToSectionsEnd(Z_Param_SectionName,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_JumpToSection) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_JumpToSection(Z_Param_SectionName,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Resume) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_Resume(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Pause) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_Pause(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Stop) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendOutTime); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_Stop(Z_Param_InBlendOutTime,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Play) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_ENUM(EMontagePlayReturnType,Z_Param_ReturnValueType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStartMontageAt); \
		P_GET_UBOOL(Z_Param_bStopAllMontages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Montage_Play(Z_Param_MontageToPlay,Z_Param_InPlayRate,EMontagePlayReturnType(Z_Param_ReturnValueType),Z_Param_InTimeToStartMontageAt,Z_Param_bStopAllMontages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingSlotAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingSlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSlotAnimation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendOutTime); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSlotAnimation(Z_Param_InBlendOutTime,Z_Param_SlotNodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTriggerTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStartMontageAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlaySlotAnimationAsDynamicMontage(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStartMontageAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySlotAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->PlaySlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetOwningComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor(); \
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
	DECLARE_FUNCTION(execSavePoseSnapshot) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SnapshotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SavePoseSnapshot(Z_Param_SnapshotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetPawnOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->TryGetPawnOwner(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetDynamics) \
	{ \
		P_GET_ENUM(ETeleportType,Z_Param_InTeleportType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetDynamics(ETeleportType(Z_Param_InTeleportType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSyncGroupPosition) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSyncGroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMarkerSyncAnimPosition*)Z_Param__Result=P_THIS->GetSyncGroupPosition(Z_Param_InSyncGroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSyncGroupBetweenMarkers) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSyncGroupName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PreviousMarker); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NextMarker); \
		P_GET_UBOOL(Z_Param_bRespectMarkerOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSyncGroupBetweenMarkers(Z_Param_InSyncGroupName,Z_Param_PreviousMarker,Z_Param_NextMarker,Z_Param_bRespectMarkerOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMarkerBeenHitThisFrame) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SyncGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMarkerBeenHitThisFrame(Z_Param_SyncGroup,Z_Param_MarkerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeToClosestMarker) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SyncGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutMarkerTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTimeToClosestMarker(Z_Param_SyncGroup,Z_Param_MarkerName,Z_Param_Out_OutMarkerTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockAIResources) \
	{ \
		P_GET_UBOOL(Z_Param_bUnlockMovement); \
		P_GET_UBOOL(Z_Param_UnlockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockAIResources(Z_Param_bUnlockMovement,Z_Param_UnlockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockAIResources) \
	{ \
		P_GET_UBOOL(Z_Param_bLockMovement); \
		P_GET_UBOOL(Z_Param_LockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockAIResources(Z_Param_bLockMovement,Z_Param_LockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_BaseRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateDirection(Z_Param_Out_Velocity,Z_Param_Out_BaseRotation); \
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
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentStateName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCurrentStateName(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCurveNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCurveNames(Z_Param_Out_OutNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveCurveNames) \
	{ \
		P_GET_ENUM(EAnimCurveType,Z_Param_CurveType); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActiveCurveNames(EAnimCurveType(Z_Param_CurveType),Z_Param_Out_OutNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurveValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurveValue(Z_Param_CurveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeFraction(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTime(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimLength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimLength(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeRemainingFraction(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeRemaining(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsedFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionTimeElapsedFraction(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionTimeElapsed(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionCrossfadeDuration) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionCrossfadeDuration(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceCurrentStateElapsedTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceCurrentStateElapsedTime(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceStateWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceStateWeight(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceMachineWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceMachineWeight(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFromEndFraction(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFromEnd(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFraction(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTime(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerLength(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRootMotionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRootMotionMode(ERootMotionMode::Type(Z_Param_Value)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentActiveMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentActiveMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyMontagePlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyMontagePlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetPlayRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Montage_GetPlayRate(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetBlendTime) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Montage_GetBlendTime(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetIsStopped) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Montage_GetIsStopped(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_SetPosition(Z_Param_Montage,Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Montage_GetPosition(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetCurrentSection) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->Montage_GetCurrentSection(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_IsPlaying) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Montage_IsPlaying(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_IsActive) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Montage_IsActive(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetPlayRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_SetPlayRate(Z_Param_Montage,Z_Param_NewPlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetNextSection) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionNameToChange); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NextSection); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_SetNextSection(Z_Param_SectionNameToChange,Z_Param_NextSection,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_JumpToSectionsEnd) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_JumpToSectionsEnd(Z_Param_SectionName,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_JumpToSection) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_JumpToSection(Z_Param_SectionName,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Resume) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_Resume(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Pause) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_Pause(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Stop) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendOutTime); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Montage_Stop(Z_Param_InBlendOutTime,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Play) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_ENUM(EMontagePlayReturnType,Z_Param_ReturnValueType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStartMontageAt); \
		P_GET_UBOOL(Z_Param_bStopAllMontages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Montage_Play(Z_Param_MontageToPlay,Z_Param_InPlayRate,EMontagePlayReturnType(Z_Param_ReturnValueType),Z_Param_InTimeToStartMontageAt,Z_Param_bStopAllMontages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingSlotAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingSlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSlotAnimation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendOutTime); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSlotAnimation(Z_Param_InBlendOutTime,Z_Param_SlotNodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTriggerTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStartMontageAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlaySlotAnimationAsDynamicMontage(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStartMontageAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySlotAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->PlaySlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetOwningComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor(); \
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
	DECLARE_FUNCTION(execSavePoseSnapshot) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SnapshotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SavePoseSnapshot(Z_Param_SnapshotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetPawnOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->TryGetPawnOwner(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_EVENT_PARMS \
	struct AnimInstance_eventBlueprintUpdateAnimation_Parms \
	{ \
		float DeltaTimeX; \
	};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimInstance, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimInstance(); \
	friend struct Z_Construct_UClass_UAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_ARCHIVESERIALIZER \
	DECLARE_WITHIN(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_INCLASS \
private: \
	static void StaticRegisterNativesUAnimInstance(); \
	friend struct Z_Construct_UClass_UAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_ARCHIVESERIALIZER \
	DECLARE_WITHIN(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstance(UAnimInstance&&); \
	NO_API UAnimInstance(const UAnimInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstance(UAnimInstance&&); \
	NO_API UAnimInstance(const UAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_351_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h


#define FOREACH_ENUM_EMONTAGEPLAYRETURNTYPE(op) \
	op(EMontagePlayReturnType::MontageLength) \
	op(EMontagePlayReturnType::Duration) 

enum class EMontagePlayReturnType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EMontagePlayReturnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
class ACharacter;
class UAnimMontage;
struct FRotator;
struct FRootMotionSourceGroup;
struct FVector_NetQuantizeNormal;
class UPrimitiveComponent;
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
#ifdef ENGINE_Character_generated_h
#error "Character.generated.h already included, missing '#pragma once' in Character.h"
#endif
#define ENGINE_Character_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBasedMovementInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBasedMovementInfo>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSimulatedRootMotionReplicatedMove>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRepRootMotionMontage>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_33_DELEGATE \
struct _Script_Engine_eventLandedSignature_Parms \
{ \
	FHitResult Hit; \
}; \
static inline void FLandedSignature_DelegateWrapper(const FMulticastScriptDelegate& LandedSignature, FHitResult const& Hit) \
{ \
	_Script_Engine_eventLandedSignature_Parms Parms; \
	Parms.Hit=Hit; \
	LandedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_32_DELEGATE \
static inline void FCharacterReachedApexSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterReachedApexSignature) \
{ \
	CharacterReachedApexSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_31_DELEGATE \
struct _Script_Engine_eventCharacterMovementUpdatedSignature_Parms \
{ \
	float DeltaSeconds; \
	FVector OldLocation; \
	FVector OldVelocity; \
}; \
static inline void FCharacterMovementUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterMovementUpdatedSignature, float DeltaSeconds, FVector OldLocation, FVector OldVelocity) \
{ \
	_Script_Engine_eventCharacterMovementUpdatedSignature_Parms Parms; \
	Parms.DeltaSeconds=DeltaSeconds; \
	Parms.OldLocation=OldLocation; \
	Parms.OldVelocity=OldVelocity; \
	CharacterMovementUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_30_DELEGATE \
struct _Script_Engine_eventMovementModeChangedSignature_Parms \
{ \
	ACharacter* Character; \
	TEnumAsByte<EMovementMode> PrevMovementMode; \
	uint8 PreviousCustomMode; \
}; \
static inline void FMovementModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedSignature, ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode) \
{ \
	_Script_Engine_eventMovementModeChangedSignature_Parms Parms; \
	Parms.Character=Character; \
	Parms.PrevMovementMode=PrevMovementMode; \
	Parms.PreviousCustomMode=PreviousCustomMode; \
	MovementModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_RPC_WRAPPERS \
	virtual void RootMotionDebugClientPrintOnScreen_Implementation(const FString& InString); \
	virtual void ClientCheatGhost_Implementation(); \
	virtual void ClientCheatFly_Implementation(); \
	virtual void ClientCheatWalk_Implementation(); \
	virtual void OnWalkingOffLedge_Implementation(FVector const& PreviousFloorImpactNormal, FVector const& PreviousFloorContactNormal, FVector const& PreviousLocation, float TimeDelta); \
	virtual void OnJumped_Implementation(); \
	virtual bool CanJumpInternal_Implementation() const; \
	virtual void ClientAdjustRootMotionSourcePosition_Implementation(float TimeStamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustRootMotionPosition_Implementation(float TimeStamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientVeryShortAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAckGoodMove_Implementation(float TimeStamp); \
	virtual bool ServerMoveOld_Validate(float , FVector_NetQuantize10 , uint8 ); \
	virtual void ServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags); \
	virtual bool ServerMoveDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveDualNoBase_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , uint8 ); \
	virtual void ServerMoveDualNoBase_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual bool ServerMoveDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveNoBase_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , uint8 ); \
	virtual void ServerMoveNoBase_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual bool ServerMove_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMove_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
 \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimRootMotionTranslationScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingNetworkedRootMotionMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyRootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyRootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingRootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingRootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RootMotionDebugClientPrintOnScreen_Implementation(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatGhost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientCheatGhost_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatFly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientCheatFly_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientCheatWalk_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnCrouch) \
	{ \
		P_GET_UBOOL(Z_Param_bClientSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnCrouch(Z_Param_bClientSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCrouch) \
	{ \
		P_GET_UBOOL(Z_Param_bClientSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Crouch(Z_Param_bClientSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWalkingOffLedge) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorImpactNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorContactNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWalkingOffLedge_Implementation(Z_Param_Out_PreviousFloorImpactNormal,Z_Param_Out_PreviousFloorContactNormal,Z_Param_Out_PreviousLocation,Z_Param_TimeDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnJumped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnJumped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchCharacter) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bXYOverride); \
		P_GET_UBOOL(Z_Param_bZOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchCharacter(Z_Param_LaunchVelocity,Z_Param_bXYOverride,Z_Param_bZOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimMontage(Z_Param_AnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartSectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->PlayAnimMontage(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsJumpProvidingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsJumpProvidingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJumpInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanJumpInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJumping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJumping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsCrouched) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsCrouched(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetBaseRotationOffsetRotator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseTranslationOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetBaseTranslationOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplayLastTransformUpdateTimeStamp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplayLastTransformUpdateTimeStamp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedBasedMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCacheInitialMeshOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MeshRelativeLocation); \
		P_GET_STRUCT(FRotator,Z_Param_MeshRelativeRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CacheInitialMeshOffset(Z_Param_MeshRelativeLocation,Z_Param_MeshRelativeRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FRootMotionSourceGroup,Z_Param_ServerRootMotion); \
		P_GET_UBOOL(Z_Param_bHasAnimRootMotion); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustRootMotionSourcePosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerRootMotion,Z_Param_bHasAnimRootMotion,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustRootMotionPosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAckGoodMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAckGoodMove_Implementation(Z_Param_TimeStamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveOld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldTimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldMoveFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveOld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveOld_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveOld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDualHybridRootMotion_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDualNoBase) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveDualNoBase_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDualNoBase_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveDualNoBase_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDual_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveNoBase) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveNoBase_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveNoBase_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveNoBase_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMove_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMove_Validate")); \
			return; \
		} \
		P_THIS->ServerMove_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimRootMotionTranslationScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingNetworkedRootMotionMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyRootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyRootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingRootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingRootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RootMotionDebugClientPrintOnScreen_Implementation(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatGhost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientCheatGhost_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatFly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientCheatFly_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientCheatWalk_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnCrouch) \
	{ \
		P_GET_UBOOL(Z_Param_bClientSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnCrouch(Z_Param_bClientSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCrouch) \
	{ \
		P_GET_UBOOL(Z_Param_bClientSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Crouch(Z_Param_bClientSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWalkingOffLedge) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorImpactNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorContactNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWalkingOffLedge_Implementation(Z_Param_Out_PreviousFloorImpactNormal,Z_Param_Out_PreviousFloorContactNormal,Z_Param_Out_PreviousLocation,Z_Param_TimeDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnJumped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnJumped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchCharacter) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bXYOverride); \
		P_GET_UBOOL(Z_Param_bZOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchCharacter(Z_Param_LaunchVelocity,Z_Param_bXYOverride,Z_Param_bZOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimMontage(Z_Param_AnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartSectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->PlayAnimMontage(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsJumpProvidingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsJumpProvidingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJumpInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanJumpInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJumping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJumping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsCrouched) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsCrouched(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetBaseRotationOffsetRotator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseTranslationOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetBaseTranslationOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplayLastTransformUpdateTimeStamp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplayLastTransformUpdateTimeStamp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedBasedMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCacheInitialMeshOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MeshRelativeLocation); \
		P_GET_STRUCT(FRotator,Z_Param_MeshRelativeRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CacheInitialMeshOffset(Z_Param_MeshRelativeLocation,Z_Param_MeshRelativeRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FRootMotionSourceGroup,Z_Param_ServerRootMotion); \
		P_GET_UBOOL(Z_Param_bHasAnimRootMotion); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustRootMotionSourcePosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerRootMotion,Z_Param_bHasAnimRootMotion,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustRootMotionPosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAckGoodMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAckGoodMove_Implementation(Z_Param_TimeStamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveOld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldTimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldMoveFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveOld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveOld_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveOld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDualHybridRootMotion_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDualNoBase) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveDualNoBase_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDualNoBase_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveDualNoBase_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDual_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveNoBase) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveNoBase_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveNoBase_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveNoBase_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMove_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMove_Validate")); \
			return; \
		} \
		P_THIS->ServerMove_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_EVENT_PARMS \
	struct Character_eventCanJumpInternal_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Character_eventCanJumpInternal_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Character_eventClientAckGoodMove_Parms \
	{ \
		float TimeStamp; \
	}; \
	struct Character_eventClientAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		FVector NewVel; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct Character_eventClientAdjustRootMotionPosition_Parms \
	{ \
		float TimeStamp; \
		float ServerMontageTrackPosition; \
		FVector ServerLoc; \
		FVector_NetQuantizeNormal ServerRotation; \
		float ServerVelZ; \
		UPrimitiveComponent* ServerBase; \
		FName ServerBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct Character_eventClientAdjustRootMotionSourcePosition_Parms \
	{ \
		float TimeStamp; \
		FRootMotionSourceGroup ServerRootMotion; \
		bool bHasAnimRootMotion; \
		float ServerMontageTrackPosition; \
		FVector ServerLoc; \
		FVector_NetQuantizeNormal ServerRotation; \
		float ServerVelZ; \
		UPrimitiveComponent* ServerBase; \
		FName ServerBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct Character_eventClientVeryShortAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct Character_eventK2_OnEndCrouch_Parms \
	{ \
		float HalfHeightAdjust; \
		float ScaledHalfHeightAdjust; \
	}; \
	struct Character_eventK2_OnMovementModeChanged_Parms \
	{ \
		TEnumAsByte<EMovementMode> PrevMovementMode; \
		TEnumAsByte<EMovementMode> NewMovementMode; \
		uint8 PrevCustomMode; \
		uint8 NewCustomMode; \
	}; \
	struct Character_eventK2_OnStartCrouch_Parms \
	{ \
		float HalfHeightAdjust; \
		float ScaledHalfHeightAdjust; \
	}; \
	struct Character_eventK2_UpdateCustomMovement_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct Character_eventOnLanded_Parms \
	{ \
		FHitResult Hit; \
	}; \
	struct Character_eventOnLaunched_Parms \
	{ \
		FVector LaunchVelocity; \
		bool bXYOverride; \
		bool bZOverride; \
	}; \
	struct Character_eventOnWalkingOffLedge_Parms \
	{ \
		FVector PreviousFloorImpactNormal; \
		FVector PreviousFloorContactNormal; \
		FVector PreviousLocation; \
		float TimeDelta; \
	}; \
	struct Character_eventRootMotionDebugClientPrintOnScreen_Parms \
	{ \
		FString InString; \
	}; \
	struct Character_eventServerMove_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveDualNoBase_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveNoBase_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveOld_Parms \
	{ \
		float OldTimeStamp; \
		FVector_NetQuantize10 OldAccel; \
		uint8 OldMoveFlags; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend struct Z_Construct_UClass_ACharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACharacter)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_INCLASS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend struct Z_Construct_UClass_ACharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACharacter)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter(ACharacter&&); \
	NO_API ACharacter(const ACharacter&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter(ACharacter&&); \
	NO_API ACharacter(const ACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACharacter, Mesh); } \
	FORCEINLINE static uint32 __PPO__CharacterMovement() { return STRUCT_OFFSET(ACharacter, CharacterMovement); } \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ACharacter, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__BasedMovement() { return STRUCT_OFFSET(ACharacter, BasedMovement); } \
	FORCEINLINE static uint32 __PPO__ReplicatedBasedMovement() { return STRUCT_OFFSET(ACharacter, ReplicatedBasedMovement); } \
	FORCEINLINE static uint32 __PPO__AnimRootMotionTranslationScale() { return STRUCT_OFFSET(ACharacter, AnimRootMotionTranslationScale); } \
	FORCEINLINE static uint32 __PPO__BaseTranslationOffset() { return STRUCT_OFFSET(ACharacter, BaseTranslationOffset); } \
	FORCEINLINE static uint32 __PPO__BaseRotationOffset() { return STRUCT_OFFSET(ACharacter, BaseRotationOffset); } \
	FORCEINLINE static uint32 __PPO__ReplicatedServerLastTransformUpdateTimeStamp() { return STRUCT_OFFSET(ACharacter, ReplicatedServerLastTransformUpdateTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ReplayLastTransformUpdateTimeStamp() { return STRUCT_OFFSET(ACharacter, ReplayLastTransformUpdateTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ReplicatedMovementMode() { return STRUCT_OFFSET(ACharacter, ReplicatedMovementMode); } \
	FORCEINLINE static uint32 __PPO__bInBaseReplication() { return STRUCT_OFFSET(ACharacter, bInBaseReplication); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_209_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

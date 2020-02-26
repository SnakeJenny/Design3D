// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraAnimInst;
class UCameraAnim;
struct FRotator;
struct FLinearColor;
class UCameraShake;
class AEmitterCameraLensEffectBase;
struct FVector;
class UCameraModifier;
class APlayerController;
class AActor;
#ifdef ENGINE_PlayerCameraManager_generated_h
#error "PlayerCameraManager.generated.h already included, missing '#pragma once' in PlayerCameraManager.h"
#endif
#define ENGINE_PlayerCameraManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FViewTargetTransitionParams>();

#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTViewTarget_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__PlayerState() { return STRUCT_OFFSET(FTViewTarget, PlayerState); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTViewTarget>();

#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraCacheEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraCacheEntry>();

#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_RPC_WRAPPERS \
	virtual void OnPhotographyMultiPartCaptureEnd_Implementation(); \
	virtual void OnPhotographyMultiPartCaptureStart_Implementation(); \
	virtual void OnPhotographySessionEnd_Implementation(); \
	virtual void OnPhotographySessionStart_Implementation(); \
	virtual void PhotographyCameraModify_Implementation(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation); \
 \
	DECLARE_FUNCTION(execStopAllCameraAnims) \
	{ \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllCameraAnims(Z_Param_bImmediate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCameraAnimInst) \
	{ \
		P_GET_OBJECT(UCameraAnimInst,Z_Param_AnimInst); \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCameraAnimInst(Z_Param_AnimInst,Z_Param_bImmediate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraAnim) \
	{ \
		P_GET_OBJECT(UCameraAnim,Z_Param_Anim); \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllInstancesOfCameraAnim(Z_Param_Anim,Z_Param_bImmediate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayCameraAnim) \
	{ \
		P_GET_OBJECT(UCameraAnim,Z_Param_Anim); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_UBOOL(Z_Param_bLoop); \
		P_GET_UBOOL(Z_Param_bRandomStartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlaySpace); \
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraAnimInst**)Z_Param__Result=P_THIS->PlayCameraAnim(Z_Param_Anim,Z_Param_Rate,Z_Param_Scale,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_bLoop,Z_Param_bRandomStartTime,Z_Param_Duration,ECameraAnimPlaySpace::Type(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetManualCameraFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFadeAmount); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_GET_UBOOL(Z_Param_bInFadeAudio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetManualCameraFade(Z_Param_InFadeAmount,Z_Param_Color,Z_Param_bInFadeAudio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCameraFade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCameraFade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCameraFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FromAlpha); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ToAlpha); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_GET_UBOOL(Z_Param_bShouldFadeAudio); \
		P_GET_UBOOL(Z_Param_bHoldWhenFinished); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCameraFade(Z_Param_FromAlpha,Z_Param_ToAlpha,Z_Param_Duration,Z_Param_Color,Z_Param_bShouldFadeAudio,Z_Param_bHoldWhenFinished); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllCameraShakes) \
	{ \
		P_GET_UBOOL(Z_Param_bImmediately); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllCameraShakes(Z_Param_bImmediately); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraShake) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Shake); \
		P_GET_UBOOL(Z_Param_bImmediately); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllInstancesOfCameraShake(Z_Param_Shake,Z_Param_bImmediately); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCameraShake) \
	{ \
		P_GET_OBJECT(UCameraShake,Z_Param_ShakeInstance); \
		P_GET_UBOOL(Z_Param_bImmediately); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCameraShake(Z_Param_ShakeInstance,Z_Param_bImmediately); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayCameraShake) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ShakeClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlaySpace); \
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraShake**)Z_Param__Result=P_THIS->PlayCameraShake(Z_Param_ShakeClass,Z_Param_Scale,ECameraAnimPlaySpace::Type(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCameraLensEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCameraLensEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCameraLensEffect) \
	{ \
		P_GET_OBJECT(AEmitterCameraLensEffectBase,Z_Param_Emitter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCameraLensEffect(Z_Param_Emitter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCameraLensEffect) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AEmitterCameraLensEffectBase**)Z_Param__Result=P_THIS->AddCameraLensEffect(Z_Param_LensEffectEmitterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFOVAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFOVAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCameraModifier) \
	{ \
		P_GET_OBJECT(UCameraModifier,Z_Param_ModifierToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveCameraModifier(Z_Param_ModifierToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindCameraModifierByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ModifierClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraModifier**)Z_Param__Result=P_THIS->FindCameraModifierByClass(Z_Param_ModifierClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddNewCameraModifier) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ModifierClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraModifier**)Z_Param__Result=P_THIS->AddNewCameraModifier(Z_Param_ModifierClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPhotographyMultiPartCaptureEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPhotographyMultiPartCaptureStart_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPhotographySessionEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPhotographySessionEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPhotographySessionStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPhotographySessionStart_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhotographyCameraModify) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewCameraLocation); \
		P_GET_STRUCT(FVector,Z_Param_PreviousCameraLocation); \
		P_GET_STRUCT(FVector,Z_Param_OriginalCameraLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ResultCameraLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PhotographyCameraModify_Implementation(Z_Param_NewCameraLocation,Z_Param_PreviousCameraLocation,Z_Param_OriginalCameraLocation,Z_Param_Out_ResultCameraLocation); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPhotographyMultiPartCaptureEnd_Implementation(); \
	virtual void OnPhotographyMultiPartCaptureStart_Implementation(); \
	virtual void OnPhotographySessionEnd_Implementation(); \
	virtual void OnPhotographySessionStart_Implementation(); \
	virtual void PhotographyCameraModify_Implementation(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation); \
 \
	DECLARE_FUNCTION(execStopAllCameraAnims) \
	{ \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllCameraAnims(Z_Param_bImmediate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCameraAnimInst) \
	{ \
		P_GET_OBJECT(UCameraAnimInst,Z_Param_AnimInst); \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCameraAnimInst(Z_Param_AnimInst,Z_Param_bImmediate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraAnim) \
	{ \
		P_GET_OBJECT(UCameraAnim,Z_Param_Anim); \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllInstancesOfCameraAnim(Z_Param_Anim,Z_Param_bImmediate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayCameraAnim) \
	{ \
		P_GET_OBJECT(UCameraAnim,Z_Param_Anim); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_UBOOL(Z_Param_bLoop); \
		P_GET_UBOOL(Z_Param_bRandomStartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlaySpace); \
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraAnimInst**)Z_Param__Result=P_THIS->PlayCameraAnim(Z_Param_Anim,Z_Param_Rate,Z_Param_Scale,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_bLoop,Z_Param_bRandomStartTime,Z_Param_Duration,ECameraAnimPlaySpace::Type(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetManualCameraFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFadeAmount); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_GET_UBOOL(Z_Param_bInFadeAudio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetManualCameraFade(Z_Param_InFadeAmount,Z_Param_Color,Z_Param_bInFadeAudio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCameraFade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCameraFade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCameraFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FromAlpha); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ToAlpha); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_GET_UBOOL(Z_Param_bShouldFadeAudio); \
		P_GET_UBOOL(Z_Param_bHoldWhenFinished); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCameraFade(Z_Param_FromAlpha,Z_Param_ToAlpha,Z_Param_Duration,Z_Param_Color,Z_Param_bShouldFadeAudio,Z_Param_bHoldWhenFinished); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllCameraShakes) \
	{ \
		P_GET_UBOOL(Z_Param_bImmediately); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllCameraShakes(Z_Param_bImmediately); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraShake) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Shake); \
		P_GET_UBOOL(Z_Param_bImmediately); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllInstancesOfCameraShake(Z_Param_Shake,Z_Param_bImmediately); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCameraShake) \
	{ \
		P_GET_OBJECT(UCameraShake,Z_Param_ShakeInstance); \
		P_GET_UBOOL(Z_Param_bImmediately); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCameraShake(Z_Param_ShakeInstance,Z_Param_bImmediately); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayCameraShake) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ShakeClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlaySpace); \
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraShake**)Z_Param__Result=P_THIS->PlayCameraShake(Z_Param_ShakeClass,Z_Param_Scale,ECameraAnimPlaySpace::Type(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCameraLensEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCameraLensEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCameraLensEffect) \
	{ \
		P_GET_OBJECT(AEmitterCameraLensEffectBase,Z_Param_Emitter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCameraLensEffect(Z_Param_Emitter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCameraLensEffect) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AEmitterCameraLensEffectBase**)Z_Param__Result=P_THIS->AddCameraLensEffect(Z_Param_LensEffectEmitterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFOVAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFOVAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCameraModifier) \
	{ \
		P_GET_OBJECT(UCameraModifier,Z_Param_ModifierToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveCameraModifier(Z_Param_ModifierToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindCameraModifierByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ModifierClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraModifier**)Z_Param__Result=P_THIS->FindCameraModifierByClass(Z_Param_ModifierClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddNewCameraModifier) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ModifierClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraModifier**)Z_Param__Result=P_THIS->AddNewCameraModifier(Z_Param_ModifierClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPhotographyMultiPartCaptureEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPhotographyMultiPartCaptureStart_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPhotographySessionEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPhotographySessionEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPhotographySessionStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPhotographySessionStart_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhotographyCameraModify) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewCameraLocation); \
		P_GET_STRUCT(FVector,Z_Param_PreviousCameraLocation); \
		P_GET_STRUCT(FVector,Z_Param_OriginalCameraLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ResultCameraLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PhotographyCameraModify_Implementation(Z_Param_NewCameraLocation,Z_Param_PreviousCameraLocation,Z_Param_OriginalCameraLocation,Z_Param_Out_ResultCameraLocation); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_EVENT_PARMS \
	struct PlayerCameraManager_eventBlueprintUpdateCamera_Parms \
	{ \
		AActor* CameraTarget; \
		FVector NewCameraLocation; \
		FRotator NewCameraRotation; \
		float NewCameraFOV; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PlayerCameraManager_eventBlueprintUpdateCamera_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PlayerCameraManager_eventPhotographyCameraModify_Parms \
	{ \
		FVector NewCameraLocation; \
		FVector PreviousCameraLocation; \
		FVector OriginalCameraLocation; \
		FVector ResultCameraLocation; \
	};


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCameraManager(); \
	friend struct Z_Construct_UClass_APlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraManager)


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCameraManager(); \
	friend struct Z_Construct_UClass_APlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraManager)


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraManager(APlayerCameraManager&&); \
	NO_API APlayerCameraManager(const APlayerCameraManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraManager(APlayerCameraManager&&); \
	NO_API APlayerCameraManager(const APlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraManager)


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransformComponent() { return STRUCT_OFFSET(APlayerCameraManager, TransformComponent); } \
	FORCEINLINE static uint32 __PPO__CameraCachePrivate() { return STRUCT_OFFSET(APlayerCameraManager, CameraCachePrivate); } \
	FORCEINLINE static uint32 __PPO__LastFrameCameraCachePrivate() { return STRUCT_OFFSET(APlayerCameraManager, LastFrameCameraCachePrivate); } \
	FORCEINLINE static uint32 __PPO__ModifierList() { return STRUCT_OFFSET(APlayerCameraManager, ModifierList); } \
	FORCEINLINE static uint32 __PPO__CameraLensEffects() { return STRUCT_OFFSET(APlayerCameraManager, CameraLensEffects); } \
	FORCEINLINE static uint32 __PPO__CachedCameraShakeMod() { return STRUCT_OFFSET(APlayerCameraManager, CachedCameraShakeMod); } \
	FORCEINLINE static uint32 __PPO__AnimInstPool() { return STRUCT_OFFSET(APlayerCameraManager, AnimInstPool); } \
	FORCEINLINE static uint32 __PPO__PostProcessBlendCache() { return STRUCT_OFFSET(APlayerCameraManager, PostProcessBlendCache); } \
	FORCEINLINE static uint32 __PPO__FreeAnims() { return STRUCT_OFFSET(APlayerCameraManager, FreeAnims); } \
	FORCEINLINE static uint32 __PPO__AnimCameraActor() { return STRUCT_OFFSET(APlayerCameraManager, AnimCameraActor); } \
	FORCEINLINE static uint32 __PPO__ServerUpdateCameraTimeout() { return STRUCT_OFFSET(APlayerCameraManager, ServerUpdateCameraTimeout); }


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_171_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_174_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayerCameraManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h


#define FOREACH_ENUM_EVIEWTARGETBLENDFUNCTION(op) \
	op(VTBlend_Linear) \
	op(VTBlend_Cubic) \
	op(VTBlend_EaseIn) \
	op(VTBlend_EaseOut) \
	op(VTBlend_EaseInOut) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

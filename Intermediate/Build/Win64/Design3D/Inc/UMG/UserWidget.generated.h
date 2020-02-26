// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
class UWidgetAnimation;
class UUMGSequencePlayer;
struct FMargin;
struct FSlateColor;
struct FLinearColor;
enum class EWidgetAnimationEvent : uint8;
class APawn;
class APlayerController;
struct FVector2D;
struct FAnchors;
struct FFocusEvent;
struct FGeometry;
struct FAnalogInputEvent;
struct FEventReply;
struct FPointerEvent;
class UDragDropOperation;
struct FCharacterEvent;
struct FKeyEvent;
struct FMotionEvent;
struct FPaintContext;
#ifdef UMG_UserWidget_generated_h
#error "UserWidget.generated.h already included, missing '#pragma once' in UserWidget.h"
#endif
#define UMG_UserWidget_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedSlotBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FNamedSlotBinding>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaintContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FPaintContext>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationEventBinding_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FAnimationEventBinding>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_200_DELEGATE \
static inline void FOnInputAction_DelegateWrapper(const FScriptDelegate& OnInputAction) \
{ \
	OnInputAction.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_198_DELEGATE \
static inline void FOnConstructEvent_DelegateWrapper(const FMulticastScriptDelegate& OnConstructEvent) \
{ \
	OnConstructEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_RPC_WRAPPERS \
	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation); \
	virtual void OnAnimationStarted_Implementation(const UWidgetAnimation* Animation); \
 \
	DECLARE_FUNCTION(execSetInputActionBlocking) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldBlock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionBlocking(Z_Param_bShouldBlock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionPriority(Z_Param_NewPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListeningForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsListeningForInputAction(Z_Param_ActionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterInputComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterInputComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForAllInputActions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListeningForAllInputActions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListeningForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_GET_UBOOL(Z_Param_bConsume); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListenForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType),Z_Param_bConsume,FOnInputAction(Z_Param_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySound(Z_Param_SoundToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimationPlayingForward) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnimationPlayingForward(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverseAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReverseAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackSpeed) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackSpeed(Z_Param_InAnimation,Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumLoopsToPlay) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumLoopsToPlay(Z_Param_InAnimation,Z_Param_NumLoopsToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyAnimationPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyAnimationPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimationPlaying) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnimationPlaying(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationCurrentTime) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationCurrentTime(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->PauseAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimationReverse) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationReverse(Z_Param_InAnimation,Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimationForward) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationForward(Z_Param_InAnimation,Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimationTimeRange) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartAtTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndAtTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlayMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationTimeRange(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_EndAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartAtTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlayMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimation(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForegroundColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForegroundColor(Z_Param_InForegroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAnimationFinished_Implementation(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAnimationStarted_Implementation(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToAnimationEvent) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_GET_ENUM(EWidgetAnimationEvent,Z_Param_AnimationEvent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_UserTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToAnimationEvent(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate),EWidgetAnimationEvent(Z_Param_AnimationEvent),Z_Param_UserTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindAllFromAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindAllFromAnimationFinished(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindFromAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindFromAnimationFinished(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToAnimationFinished(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindAllFromAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindAllFromAnimationStarted(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindFromAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindFromAnimationStarted(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToAnimationStarted(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimationsAndLatentActions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimationsAndLatentActions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelLatentActions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelLatentActions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPlayerPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_LocalPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwningPlayer(Z_Param_LocalPlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlignmentInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetAlignmentInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnchorsInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAnchors*)Z_Param__Result=P_THIS->GetAnchorsInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlignmentInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Alignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAlignmentInViewport(Z_Param_Alignment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnchorsInViewport) \
	{ \
		P_GET_STRUCT(FAnchors,Z_Param_Anchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnchorsInViewport(Z_Param_Anchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredSizeInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredSizeInViewport(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPositionInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_UBOOL(Z_Param_bRemoveDPIScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPositionInViewport(Z_Param_Position,Z_Param_bRemoveDPIScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToPlayerScreen) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddToPlayerScreen(Z_Param_ZOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToViewport) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToViewport(Z_Param_ZOrder); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputActionBlocking) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldBlock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionBlocking(Z_Param_bShouldBlock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionPriority(Z_Param_NewPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListeningForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsListeningForInputAction(Z_Param_ActionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterInputComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterInputComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForAllInputActions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListeningForAllInputActions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListeningForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_GET_UBOOL(Z_Param_bConsume); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListenForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType),Z_Param_bConsume,FOnInputAction(Z_Param_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySound(Z_Param_SoundToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimationPlayingForward) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnimationPlayingForward(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverseAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReverseAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackSpeed) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackSpeed(Z_Param_InAnimation,Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumLoopsToPlay) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumLoopsToPlay(Z_Param_InAnimation,Z_Param_NumLoopsToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyAnimationPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyAnimationPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimationPlaying) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnimationPlaying(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationCurrentTime) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationCurrentTime(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->PauseAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAllAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimationReverse) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationReverse(Z_Param_InAnimation,Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimationForward) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationForward(Z_Param_InAnimation,Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimationTimeRange) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartAtTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndAtTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlayMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationTimeRange(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_EndAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartAtTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlayMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimation(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForegroundColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForegroundColor(Z_Param_InForegroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAnimationFinished_Implementation(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAnimationStarted_Implementation(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToAnimationEvent) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_GET_ENUM(EWidgetAnimationEvent,Z_Param_AnimationEvent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_UserTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToAnimationEvent(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate),EWidgetAnimationEvent(Z_Param_AnimationEvent),Z_Param_UserTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindAllFromAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindAllFromAnimationFinished(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindFromAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindFromAnimationFinished(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToAnimationFinished(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindAllFromAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindAllFromAnimationStarted(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindFromAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindFromAnimationStarted(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToAnimationStarted(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimationsAndLatentActions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimationsAndLatentActions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelLatentActions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelLatentActions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPlayerPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_LocalPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwningPlayer(Z_Param_LocalPlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlignmentInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetAlignmentInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnchorsInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAnchors*)Z_Param__Result=P_THIS->GetAnchorsInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlignmentInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Alignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAlignmentInViewport(Z_Param_Alignment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnchorsInViewport) \
	{ \
		P_GET_STRUCT(FAnchors,Z_Param_Anchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnchorsInViewport(Z_Param_Anchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredSizeInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredSizeInViewport(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPositionInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_UBOOL(Z_Param_bRemoveDPIScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPositionInViewport(Z_Param_Position,Z_Param_bRemoveDPIScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToPlayerScreen) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddToPlayerScreen(Z_Param_ZOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToViewport) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToViewport(Z_Param_ZOrder); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_EVENT_PARMS \
	struct UserWidget_eventIsInteractable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventIsInteractable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnAddedToFocusPath_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnAnalogValueChanged_Parms \
	{ \
		FGeometry MyGeometry; \
		FAnalogInputEvent InAnalogInputEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnAnimationFinished_Parms \
	{ \
		const UWidgetAnimation* Animation; \
	}; \
	struct UserWidget_eventOnAnimationStarted_Parms \
	{ \
		const UWidgetAnimation* Animation; \
	}; \
	struct UserWidget_eventOnDragCancelled_Parms \
	{ \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragDetected_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragEnter_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragLeave_Parms \
	{ \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragOver_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventOnDragOver_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnDrop_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnFocusLost_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnFocusReceived_Parms \
	{ \
		FGeometry MyGeometry; \
		FFocusEvent InFocusEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyChar_Parms \
	{ \
		FGeometry MyGeometry; \
		FCharacterEvent InCharacterEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyUp_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMotionDetected_Parms \
	{ \
		FGeometry MyGeometry; \
		FMotionEvent InMotionEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonDoubleClick_Parms \
	{ \
		FGeometry InMyGeometry; \
		FPointerEvent InMouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonUp_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseEnter_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
	}; \
	struct UserWidget_eventOnMouseLeave_Parms \
	{ \
		FPointerEvent MouseEvent; \
	}; \
	struct UserWidget_eventOnMouseMove_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseWheel_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnPaint_Parms \
	{ \
		FPaintContext Context; \
	}; \
	struct UserWidget_eventOnPreviewKeyDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnPreviewMouseButtonDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnRemovedFromFocusPath_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnTouchEnded_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchForceChanged_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchGesture_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent GestureEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchMoved_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchStarted_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventPreConstruct_Parms \
	{ \
		bool IsDesignTime; \
	}; \
	struct UserWidget_eventTick_Parms \
	{ \
		FGeometry MyGeometry; \
		float InDeltaTime; \
	};


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUserWidget, NO_API)


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserWidget(); \
	friend struct Z_Construct_UClass_UUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUserWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserWidget) \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UUserWidget*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_INCLASS \
private: \
	static void StaticRegisterNativesUUserWidget(); \
	friend struct Z_Construct_UClass_UUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUserWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserWidget) \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UUserWidget*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserWidget(UUserWidget&&); \
	NO_API UUserWidget(const UUserWidget&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserWidget(UUserWidget&&); \
	NO_API UUserWidget(const UUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget)


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NamedSlotBindings() { return STRUCT_OFFSET(UUserWidget, NamedSlotBindings); } \
	FORCEINLINE static uint32 __PPO__TickFrequency() { return STRUCT_OFFSET(UUserWidget, TickFrequency); } \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(UUserWidget, InputComponent); } \
	FORCEINLINE static uint32 __PPO__AnimationCallbacks() { return STRUCT_OFFSET(UUserWidget, AnimationCallbacks); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_205_PROLOG \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_EVENT_PARMS


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h


#define FOREACH_ENUM_EDESIGNPREVIEWSIZEMODE(op) \
	op(EDesignPreviewSizeMode::FillScreen) \
	op(EDesignPreviewSizeMode::Custom) \
	op(EDesignPreviewSizeMode::CustomOnScreen) \
	op(EDesignPreviewSizeMode::Desired) \
	op(EDesignPreviewSizeMode::DesiredOnScreen) 

enum class EDesignPreviewSizeMode : uint8;
template<> UMG_API UEnum* StaticEnum<EDesignPreviewSizeMode>();

#define FOREACH_ENUM_EUMGSEQUENCEPLAYMODE(op) \
	op(EUMGSequencePlayMode::Forward) \
	op(EUMGSequencePlayMode::Reverse) \
	op(EUMGSequencePlayMode::PingPong) 
#define FOREACH_ENUM_EWIDGETANIMATIONEVENT(op) \
	op(EWidgetAnimationEvent::Started) \
	op(EWidgetAnimationEvent::Finished) 

enum class EWidgetAnimationEvent : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetAnimationEvent>();

#define FOREACH_ENUM_EWIDGETTICKFREQUENCY(op) \
	op(EWidgetTickFrequency::Never) \
	op(EWidgetTickFrequency::Auto) 

enum class EWidgetTickFrequency : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetTickFrequency>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

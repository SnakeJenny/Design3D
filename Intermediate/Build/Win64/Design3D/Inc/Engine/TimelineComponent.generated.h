// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FVector;
class UCurveLinearColor;
class UCurveVector;
class UCurveFloat;
#ifdef ENGINE_TimelineComponent_generated_h
#error "TimelineComponent.generated.h already included, missing '#pragma once' in TimelineComponent.h"
#endif
#define ENGINE_TimelineComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeline_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__LengthMode() { return STRUCT_OFFSET(FTimeline, LengthMode); } \
	FORCEINLINE static uint32 __PPO__Length() { return STRUCT_OFFSET(FTimeline, Length); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(FTimeline, PlayRate); } \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(FTimeline, Position); } \
	FORCEINLINE static uint32 __PPO__Events() { return STRUCT_OFFSET(FTimeline, Events); } \
	FORCEINLINE static uint32 __PPO__InterpVectors() { return STRUCT_OFFSET(FTimeline, InterpVectors); } \
	FORCEINLINE static uint32 __PPO__InterpFloats() { return STRUCT_OFFSET(FTimeline, InterpFloats); } \
	FORCEINLINE static uint32 __PPO__InterpLinearColors() { return STRUCT_OFFSET(FTimeline, InterpLinearColors); } \
	FORCEINLINE static uint32 __PPO__TimelinePostUpdateFunc() { return STRUCT_OFFSET(FTimeline, TimelinePostUpdateFunc); } \
	FORCEINLINE static uint32 __PPO__TimelineFinishedFunc() { return STRUCT_OFFSET(FTimeline, TimelineFinishedFunc); } \
	FORCEINLINE static uint32 __PPO__PropertySetObject() { return STRUCT_OFFSET(FTimeline, PropertySetObject); } \
	FORCEINLINE static uint32 __PPO__DirectionPropertyName() { return STRUCT_OFFSET(FTimeline, DirectionPropertyName); } \
	FORCEINLINE static uint32 __PPO__DirectionProperty() { return STRUCT_OFFSET(FTimeline, DirectionProperty); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeline>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineLinearColorTrack>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineFloatTrack>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineVectorTrack>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineEventEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineEventEntry>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_21_DELEGATE \
struct _Script_Engine_eventOnTimelineLinearColor_Parms \
{ \
	FLinearColor Output; \
}; \
static inline void FOnTimelineLinearColor_DelegateWrapper(const FScriptDelegate& OnTimelineLinearColor, FLinearColor Output) \
{ \
	_Script_Engine_eventOnTimelineLinearColor_Parms Parms; \
	Parms.Output=Output; \
	OnTimelineLinearColor.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_19_DELEGATE \
struct _Script_Engine_eventOnTimelineVector_Parms \
{ \
	FVector Output; \
}; \
static inline void FOnTimelineVector_DelegateWrapper(const FScriptDelegate& OnTimelineVector, FVector Output) \
{ \
	_Script_Engine_eventOnTimelineVector_Parms Parms; \
	Parms.Output=Output; \
	OnTimelineVector.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_17_DELEGATE \
struct _Script_Engine_eventOnTimelineFloat_Parms \
{ \
	float Output; \
}; \
static inline void FOnTimelineFloat_DelegateWrapper(const FScriptDelegate& OnTimelineFloat, float Output) \
{ \
	_Script_Engine_eventOnTimelineFloat_Parms Parms; \
	Parms.Output=Output; \
	OnTimelineFloat.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_15_DELEGATE \
static inline void FOnTimelineEvent_DelegateWrapper(const FScriptDelegate& OnTimelineEvent) \
{ \
	OnTimelineEvent.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Timeline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Timeline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearColorCurve) \
	{ \
		P_GET_OBJECT(UCurveLinearColor,Z_Param_NewLinearColorCurve); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LinearColorTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearColorCurve(Z_Param_NewLinearColorCurve,Z_Param_LinearColorTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorCurve) \
	{ \
		P_GET_OBJECT(UCurveVector,Z_Param_NewVectorCurve); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VectorTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVectorCurve(Z_Param_NewVectorCurve,Z_Param_VectorTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatCurve) \
	{ \
		P_GET_OBJECT(UCurveFloat,Z_Param_NewFloatCurve); \
		P_GET_PROPERTY(UNameProperty,Z_Param_FloatTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFloatCurve(Z_Param_NewFloatCurve,Z_Param_FloatTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIgnoreTimeDilation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIgnoreTimeDilation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreTimeDilation) \
	{ \
		P_GET_UBOOL(Z_Param_bNewIgnoreTimeDilation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIgnoreTimeDilation(Z_Param_bNewIgnoreTimeDilation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimelineLengthMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewLengthMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimelineLengthMode(ETimelineLengthMode(Z_Param_NewLengthMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimelineLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimelineLength(Z_Param_NewLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimelineLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimelineLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNewTime(Z_Param_NewTime); \
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
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_NewRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLooping(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_GET_UBOOL(Z_Param_bFireEvents); \
		P_GET_UBOOL(Z_Param_bFireUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackPosition(Z_Param_NewPosition,Z_Param_bFireEvents,Z_Param_bFireUpdate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReversing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReversing(); \
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
	DECLARE_FUNCTION(execReverseFromEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReverseFromEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFromStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFromStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Timeline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Timeline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearColorCurve) \
	{ \
		P_GET_OBJECT(UCurveLinearColor,Z_Param_NewLinearColorCurve); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LinearColorTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearColorCurve(Z_Param_NewLinearColorCurve,Z_Param_LinearColorTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorCurve) \
	{ \
		P_GET_OBJECT(UCurveVector,Z_Param_NewVectorCurve); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VectorTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVectorCurve(Z_Param_NewVectorCurve,Z_Param_VectorTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatCurve) \
	{ \
		P_GET_OBJECT(UCurveFloat,Z_Param_NewFloatCurve); \
		P_GET_PROPERTY(UNameProperty,Z_Param_FloatTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFloatCurve(Z_Param_NewFloatCurve,Z_Param_FloatTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIgnoreTimeDilation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIgnoreTimeDilation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreTimeDilation) \
	{ \
		P_GET_UBOOL(Z_Param_bNewIgnoreTimeDilation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIgnoreTimeDilation(Z_Param_bNewIgnoreTimeDilation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimelineLengthMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewLengthMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimelineLengthMode(ETimelineLengthMode(Z_Param_NewLengthMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimelineLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimelineLength(Z_Param_NewLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimelineLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimelineLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNewTime(Z_Param_NewTime); \
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
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_NewRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLooping(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_GET_UBOOL(Z_Param_bFireEvents); \
		P_GET_UBOOL(Z_Param_bFireUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackPosition(Z_Param_NewPosition,Z_Param_bFireEvents,Z_Param_bFireUpdate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReversing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReversing(); \
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
	DECLARE_FUNCTION(execReverseFromEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReverseFromEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFromStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFromStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimelineComponent(); \
	friend struct Z_Construct_UClass_UTimelineComponent_Statics; \
public: \
	DECLARE_CLASS(UTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_INCLASS \
private: \
	static void StaticRegisterNativesUTimelineComponent(); \
	friend struct Z_Construct_UClass_UTimelineComponent_Statics; \
public: \
	DECLARE_CLASS(UTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineComponent(UTimelineComponent&&); \
	ENGINE_API UTimelineComponent(const UTimelineComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineComponent(UTimelineComponent&&); \
	ENGINE_API UTimelineComponent(const UTimelineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TheTimeline() { return STRUCT_OFFSET(UTimelineComponent, TheTimeline); }


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_390_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_393_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TimelineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTimelineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h


#define FOREACH_ENUM_ETIMELINEDIRECTION(op) \
	op(ETimelineDirection::Forward) \
	op(ETimelineDirection::Backward) 
#define FOREACH_ENUM_ETIMELINELENGTHMODE(op) \
	op(TL_TimelineLength) \
	op(TL_LastKeyFrame) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

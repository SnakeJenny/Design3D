// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FKey;
struct FVector;
struct FHitResult;
class UDamageType;
class AController;
class UPrimitiveComponent;
class APawn;
class UActorComponent;
struct FRotator;
class UChildActorComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
enum class EDetachmentRule : uint8;
enum class EAttachmentRule : uint8;
class USceneComponent;
struct FTransform;
class UObject;
class APlayerController;
#ifdef ENGINE_Actor_generated_h
#error "Actor.generated.h already included, missing '#pragma once' in Actor.h"
#endif
#define ENGINE_Actor_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_56_DELEGATE \
struct _Script_Engine_eventActorEndPlaySignature_Parms \
{ \
	AActor* Actor; \
	TEnumAsByte<EEndPlayReason::Type> EndPlayReason; \
}; \
static inline void FActorEndPlaySignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndPlaySignature, AActor* Actor, EEndPlayReason::Type EndPlayReason) \
{ \
	_Script_Engine_eventActorEndPlaySignature_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.EndPlayReason=EndPlayReason; \
	ActorEndPlaySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_55_DELEGATE \
struct _Script_Engine_eventActorDestroyedSignature_Parms \
{ \
	AActor* DestroyedActor; \
}; \
static inline void FActorDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorDestroyedSignature, AActor* DestroyedActor) \
{ \
	_Script_Engine_eventActorDestroyedSignature_Parms Parms; \
	Parms.DestroyedActor=DestroyedActor; \
	ActorDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_53_DELEGATE \
struct _Script_Engine_eventActorEndTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	AActor* TouchedActor; \
}; \
static inline void FActorEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndTouchOverSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorEndTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedActor=TouchedActor; \
	ActorEndTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_52_DELEGATE \
struct _Script_Engine_eventActorBeginTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	AActor* TouchedActor; \
}; \
static inline void FActorBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginTouchOverSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorBeginTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedActor=TouchedActor; \
	ActorBeginTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_51_DELEGATE \
struct _Script_Engine_eventActorOnInputTouchEndSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	AActor* TouchedActor; \
}; \
static inline void FActorOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorOnInputTouchEndSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedActor=TouchedActor; \
	ActorOnInputTouchEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_50_DELEGATE \
struct _Script_Engine_eventActorOnInputTouchBeginSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	AActor* TouchedActor; \
}; \
static inline void FActorOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorOnInputTouchBeginSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedActor=TouchedActor; \
	ActorOnInputTouchBeginSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_49_DELEGATE \
struct _Script_Engine_eventActorOnReleasedSignature_Parms \
{ \
	AActor* TouchedActor; \
	FKey ButtonReleased; \
}; \
static inline void FActorOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnReleasedSignature, AActor* TouchedActor, FKey ButtonReleased) \
{ \
	_Script_Engine_eventActorOnReleasedSignature_Parms Parms; \
	Parms.TouchedActor=TouchedActor; \
	Parms.ButtonReleased=ButtonReleased; \
	ActorOnReleasedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_48_DELEGATE \
struct _Script_Engine_eventActorOnClickedSignature_Parms \
{ \
	AActor* TouchedActor; \
	FKey ButtonPressed; \
}; \
static inline void FActorOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnClickedSignature, AActor* TouchedActor, FKey ButtonPressed) \
{ \
	_Script_Engine_eventActorOnClickedSignature_Parms Parms; \
	Parms.TouchedActor=TouchedActor; \
	Parms.ButtonPressed=ButtonPressed; \
	ActorOnClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_47_DELEGATE \
struct _Script_Engine_eventActorEndCursorOverSignature_Parms \
{ \
	AActor* TouchedActor; \
}; \
static inline void FActorEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndCursorOverSignature, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorEndCursorOverSignature_Parms Parms; \
	Parms.TouchedActor=TouchedActor; \
	ActorEndCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_46_DELEGATE \
struct _Script_Engine_eventActorBeginCursorOverSignature_Parms \
{ \
	AActor* TouchedActor; \
}; \
static inline void FActorBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginCursorOverSignature, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorBeginCursorOverSignature_Parms Parms; \
	Parms.TouchedActor=TouchedActor; \
	ActorBeginCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_44_DELEGATE \
struct _Script_Engine_eventActorHitSignature_Parms \
{ \
	AActor* SelfActor; \
	AActor* OtherActor; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FActorHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorHitSignature, AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_Engine_eventActorHitSignature_Parms Parms; \
	Parms.SelfActor=SelfActor; \
	Parms.OtherActor=OtherActor; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	ActorHitSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_43_DELEGATE \
struct _Script_Engine_eventActorEndOverlapSignature_Parms \
{ \
	AActor* OverlappedActor; \
	AActor* OtherActor; \
}; \
static inline void FActorEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndOverlapSignature, AActor* OverlappedActor, AActor* OtherActor) \
{ \
	_Script_Engine_eventActorEndOverlapSignature_Parms Parms; \
	Parms.OverlappedActor=OverlappedActor; \
	Parms.OtherActor=OtherActor; \
	ActorEndOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_42_DELEGATE \
struct _Script_Engine_eventActorBeginOverlapSignature_Parms \
{ \
	AActor* OverlappedActor; \
	AActor* OtherActor; \
}; \
static inline void FActorBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginOverlapSignature, AActor* OverlappedActor, AActor* OtherActor) \
{ \
	_Script_Engine_eventActorBeginOverlapSignature_Parms Parms; \
	Parms.OverlappedActor=OverlappedActor; \
	Parms.OtherActor=OtherActor; \
	ActorBeginOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_41_DELEGATE \
struct _Script_Engine_eventTakeRadialDamageSignature_Parms \
{ \
	AActor* DamagedActor; \
	float Damage; \
	const UDamageType* DamageType; \
	FVector Origin; \
	FHitResult HitInfo; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FTakeRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakeRadialDamageSignature, AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_Engine_eventTakeRadialDamageSignature_Parms Parms; \
	Parms.DamagedActor=DamagedActor; \
	Parms.Damage=Damage; \
	Parms.DamageType=DamageType; \
	Parms.Origin=Origin; \
	Parms.HitInfo=HitInfo; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	TakeRadialDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_40_DELEGATE \
struct _Script_Engine_eventTakePointDamageSignature_Parms \
{ \
	AActor* DamagedActor; \
	float Damage; \
	AController* InstigatedBy; \
	FVector HitLocation; \
	UPrimitiveComponent* FHitComponent; \
	FName BoneName; \
	FVector ShotFromDirection; \
	const UDamageType* DamageType; \
	AActor* DamageCauser; \
}; \
static inline void FTakePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakePointDamageSignature, AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) \
{ \
	_Script_Engine_eventTakePointDamageSignature_Parms Parms; \
	Parms.DamagedActor=DamagedActor; \
	Parms.Damage=Damage; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.HitLocation=HitLocation; \
	Parms.FHitComponent=FHitComponent; \
	Parms.BoneName=BoneName; \
	Parms.ShotFromDirection=ShotFromDirection; \
	Parms.DamageType=DamageType; \
	Parms.DamageCauser=DamageCauser; \
	TakePointDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_39_DELEGATE \
struct _Script_Engine_eventTakeAnyDamageSignature_Parms \
{ \
	AActor* DamagedActor; \
	float Damage; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FTakeAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakeAnyDamageSignature, AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_Engine_eventTakeAnyDamageSignature_Parms Parms; \
	Parms.DamagedActor=DamagedActor; \
	Parms.Damage=Damage; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	TakeAnyDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeNoise) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeNoise(Z_Param_Loudness,Z_Param_NoiseInstigator,Z_Param_NoiseLocation,Z_Param_MaxRange,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentsByTag) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsByTag(Z_Param_ComponentClass,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentsByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsByClass(Z_Param_ComponentClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=P_THIS->GetComponentByClass(Z_Param_ComponentClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorEyesViewPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorEyesViewPoint(Z_Param_Out_OutLocation,Z_Param_Out_OutRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrestreamTextures) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_bEnableStreaming); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceNetUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceNetUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasRecentlyRendered) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasRecentlyRendered(Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickGroup) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewTickGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTickGroup(ETickingGroup(Z_Param_NewTickGroup)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAttachedActors(Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachParentSocketName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAttachParentSocketName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachParentActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetAttachParentActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TeleportTo) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DestLocation); \
		P_GET_STRUCT(FRotator,Z_Param_DestRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_TeleportTo(Z_Param_DestLocation,Z_Param_DestRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetParentActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UChildActorComponent**)Z_Param__Result=P_THIS->GetParentComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllChildActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ChildActors); \
		P_GET_UBOOL(Z_Param_bIncludeDescendants); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllChildActors(Z_Param_Out_ChildActors,Z_Param_bIncludeDescendants); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChildActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsChildActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushNetDormancy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushNetDormancy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNetDormancy) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewDormancy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNetDormancy(ENetDormancy(Z_Param_NewDormancy)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingActor(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwner) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwner(Z_Param_NewOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorTickInterval) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActorTickInterval(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorTickInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TickInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorTickInterval(Z_Param_TickInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorTickEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorTickEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorTickEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorTickEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLifeSpan) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLifeSpan(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLifeSpan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLifespan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLifeSpan(Z_Param_InLifespan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OverlappingComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOverlappingComponents(Z_Param_Out_OverlappingComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OverlappingActors); \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOverlappingActors(Z_Param_Out_OverlappingActors,Z_Param_ClassFilter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorBeingDestroyed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorBeingDestroyed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameTimeSinceCreation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGameTimeSinceCreation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeMIDForMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->MakeMIDForMaterial(Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickableWhenPaused) \
	{ \
		P_GET_UBOOL(Z_Param_bTickableWhenPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTickableWhenPaused(Z_Param_bTickableWhenPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTickableWhenPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTickableWhenPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTickPrerequisiteComponent(Z_Param_PrerequisiteComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTickPrerequisiteActor(Z_Param_PrerequisiteActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTickPrerequisiteComponent(Z_Param_PrerequisiteComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTickPrerequisiteActor(Z_Param_PrerequisiteActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorTimeDilation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActorTimeDilation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorHasTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ActorHasTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DetachFromActor) \
	{ \
		P_GET_ENUM(EDetachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EDetachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EDetachmentRule,Z_Param_ScaleRule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DetachFromActor(EDetachmentRule(Z_Param_LocationRule),EDetachmentRule(Z_Param_RotationRule),EDetachmentRule(Z_Param_ScaleRule)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachRootComponentFromParent) \
	{ \
		P_GET_UBOOL(Z_Param_bMaintainWorldPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetachRootComponentFromParent(Z_Param_bMaintainWorldPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapRootComponentTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InParentActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnapRootComponentTo(Z_Param_InParentActor,Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ParentActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AttachToActor(Z_Param_ParentActor,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachRootComponentToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InParentActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AttachLocationType); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AttachRootComponentToActor(Z_Param_InParentActor,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachLocationType),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachToComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AttachToComponent(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachRootComponentTo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AttachLocationType); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AttachRootComponentTo(Z_Param_InParent,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachLocationType),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DestroyComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DestroyComponent(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddComponent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TemplateName); \
		P_GET_UBOOL(Z_Param_bManualAttachment); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform); \
		P_GET_OBJECT(UObject,Z_Param_ComponentTemplateContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=P_THIS->AddComponent(Z_Param_TemplateName,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform,Z_Param_ComponentTemplateContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAuthority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAuthority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DestroyActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DestroyActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorEnableCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetActorEnableCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorEnableCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewActorEnableCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorEnableCollision(Z_Param_bNewActorEnableCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorHiddenInGame) \
	{ \
		P_GET_UBOOL(Z_Param_bNewHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorHiddenInGame(Z_Param_bNewHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRelativeScale3D) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorRelativeScale3D(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRelativeScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewRelativeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorRelativeScale3D(Z_Param_NewRelativeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetActorRelativeTransform(Z_Param_Out_NewRelativeTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorRelativeRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRelativeRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetActorRelativeRotation(Z_Param_NewRelativeRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorRelativeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewRelativeLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetActorRelativeLocation(Z_Param_NewRelativeLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorLocalTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorLocalTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorLocalRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorLocalRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorLocalOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorLocalOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorWorldTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorWorldRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorWorldRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorWorldOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorWorldOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalDotProductTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHorizontalDotProductTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDotProductTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDotProductTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVerticalDistanceTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVerticalDistanceTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalDistanceTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHorizontalDistanceTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSquaredDistanceTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSquaredDistanceTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorScale3D) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorScale3D(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewScale3D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorScale3D(Z_Param_NewScale3D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bTeleportPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorRotation(Z_Param_NewRotation,Z_Param_bTeleportPhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRootComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->K2_GetRootComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorBounds) \
	{ \
		P_GET_UBOOL(Z_Param_bOnlyCollidingComponents); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorBounds(Z_Param_bOnlyCollidingComponents,Z_Param_Out_Origin,Z_Param_Out_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorForwardVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetActorRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->K2_GetActorRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetActorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->K2_GetActorLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigatorController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->GetInstigatorController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->GetInstigator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputVectorAxisValue) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_InputAxisKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInputVectorAxisValue(Z_Param_InputAxisKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAxisKeyValue) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_InputAxisKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInputAxisKeyValue(Z_Param_InputAxisKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAxisValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InputAxisName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInputAxisValue(Z_Param_InputAxisName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableInput) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableInput(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableInput) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableInput(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Instigator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Instigator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttachmentReplication) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttachmentReplication(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRemoteRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENetRole>*)Z_Param__Result=P_THIS->GetRemoteRole(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENetRole>*)Z_Param__Result=P_THIS->GetLocalRole(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplicateMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bInReplicateMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReplicateMovement(Z_Param_bInReplicateMovement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplicates) \
	{ \
		P_GET_UBOOL(Z_Param_bInReplicates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReplicates(Z_Param_bInReplicates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Owner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Owner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTearOff) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TearOff(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicateMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicateMovement(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeNoise) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeNoise(Z_Param_Loudness,Z_Param_NoiseInstigator,Z_Param_NoiseLocation,Z_Param_MaxRange,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentsByTag) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsByTag(Z_Param_ComponentClass,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentsByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsByClass(Z_Param_ComponentClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=P_THIS->GetComponentByClass(Z_Param_ComponentClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorEyesViewPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorEyesViewPoint(Z_Param_Out_OutLocation,Z_Param_Out_OutRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrestreamTextures) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_bEnableStreaming); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceNetUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceNetUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasRecentlyRendered) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasRecentlyRendered(Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickGroup) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewTickGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTickGroup(ETickingGroup(Z_Param_NewTickGroup)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAttachedActors(Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachParentSocketName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAttachParentSocketName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachParentActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetAttachParentActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TeleportTo) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DestLocation); \
		P_GET_STRUCT(FRotator,Z_Param_DestRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_TeleportTo(Z_Param_DestLocation,Z_Param_DestRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetParentActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UChildActorComponent**)Z_Param__Result=P_THIS->GetParentComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllChildActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ChildActors); \
		P_GET_UBOOL(Z_Param_bIncludeDescendants); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllChildActors(Z_Param_Out_ChildActors,Z_Param_bIncludeDescendants); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChildActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsChildActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushNetDormancy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushNetDormancy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNetDormancy) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewDormancy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNetDormancy(ENetDormancy(Z_Param_NewDormancy)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingActor(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwner) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwner(Z_Param_NewOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorTickInterval) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActorTickInterval(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorTickInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TickInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorTickInterval(Z_Param_TickInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorTickEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorTickEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorTickEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorTickEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLifeSpan) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLifeSpan(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLifeSpan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLifespan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLifeSpan(Z_Param_InLifespan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OverlappingComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOverlappingComponents(Z_Param_Out_OverlappingComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OverlappingActors); \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOverlappingActors(Z_Param_Out_OverlappingActors,Z_Param_ClassFilter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorBeingDestroyed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorBeingDestroyed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameTimeSinceCreation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGameTimeSinceCreation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeMIDForMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->MakeMIDForMaterial(Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickableWhenPaused) \
	{ \
		P_GET_UBOOL(Z_Param_bTickableWhenPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTickableWhenPaused(Z_Param_bTickableWhenPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTickableWhenPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTickableWhenPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTickPrerequisiteComponent(Z_Param_PrerequisiteComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTickPrerequisiteActor(Z_Param_PrerequisiteActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTickPrerequisiteComponent(Z_Param_PrerequisiteComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTickPrerequisiteActor(Z_Param_PrerequisiteActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorTimeDilation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActorTimeDilation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorHasTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ActorHasTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DetachFromActor) \
	{ \
		P_GET_ENUM(EDetachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EDetachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EDetachmentRule,Z_Param_ScaleRule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DetachFromActor(EDetachmentRule(Z_Param_LocationRule),EDetachmentRule(Z_Param_RotationRule),EDetachmentRule(Z_Param_ScaleRule)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachRootComponentFromParent) \
	{ \
		P_GET_UBOOL(Z_Param_bMaintainWorldPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetachRootComponentFromParent(Z_Param_bMaintainWorldPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapRootComponentTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InParentActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnapRootComponentTo(Z_Param_InParentActor,Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ParentActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AttachToActor(Z_Param_ParentActor,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachRootComponentToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InParentActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AttachLocationType); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AttachRootComponentToActor(Z_Param_InParentActor,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachLocationType),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachToComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AttachToComponent(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachRootComponentTo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AttachLocationType); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AttachRootComponentTo(Z_Param_InParent,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachLocationType),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DestroyComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DestroyComponent(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddComponent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TemplateName); \
		P_GET_UBOOL(Z_Param_bManualAttachment); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform); \
		P_GET_OBJECT(UObject,Z_Param_ComponentTemplateContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=P_THIS->AddComponent(Z_Param_TemplateName,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform,Z_Param_ComponentTemplateContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAuthority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAuthority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DestroyActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DestroyActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorEnableCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetActorEnableCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorEnableCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewActorEnableCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorEnableCollision(Z_Param_bNewActorEnableCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorHiddenInGame) \
	{ \
		P_GET_UBOOL(Z_Param_bNewHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorHiddenInGame(Z_Param_bNewHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRelativeScale3D) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorRelativeScale3D(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRelativeScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewRelativeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorRelativeScale3D(Z_Param_NewRelativeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetActorRelativeTransform(Z_Param_Out_NewRelativeTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorRelativeRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRelativeRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetActorRelativeRotation(Z_Param_NewRelativeRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorRelativeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewRelativeLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetActorRelativeLocation(Z_Param_NewRelativeLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorLocalTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorLocalTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorLocalRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorLocalRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorLocalOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorLocalOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorWorldTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorWorldRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorWorldRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddActorWorldOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_AddActorWorldOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalDotProductTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHorizontalDotProductTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDotProductTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDotProductTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVerticalDistanceTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVerticalDistanceTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalDistanceTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHorizontalDistanceTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSquaredDistanceTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSquaredDistanceTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceTo(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorScale3D) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorScale3D(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewScale3D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorScale3D(Z_Param_NewScale3D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bTeleportPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorRotation(Z_Param_NewRotation,Z_Param_bTeleportPhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRootComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->K2_GetRootComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorBounds) \
	{ \
		P_GET_UBOOL(Z_Param_bOnlyCollidingComponents); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorBounds(Z_Param_bOnlyCollidingComponents,Z_Param_Out_Origin,Z_Param_Out_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorForwardVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetActorRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->K2_GetActorRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetActorLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetActorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->K2_GetActorLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigatorController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->GetInstigatorController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->GetInstigator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputVectorAxisValue) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_InputAxisKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInputVectorAxisValue(Z_Param_InputAxisKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAxisKeyValue) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_InputAxisKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInputAxisKeyValue(Z_Param_InputAxisKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAxisValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InputAxisName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInputAxisValue(Z_Param_InputAxisName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableInput) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableInput(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableInput) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableInput(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Instigator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Instigator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttachmentReplication) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttachmentReplication(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRemoteRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENetRole>*)Z_Param__Result=P_THIS->GetRemoteRole(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENetRole>*)Z_Param__Result=P_THIS->GetLocalRole(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplicateMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bInReplicateMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReplicateMovement(Z_Param_bInReplicateMovement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplicates) \
	{ \
		P_GET_UBOOL(Z_Param_bInReplicates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReplicates(Z_Param_bInReplicates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Owner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Owner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTearOff) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TearOff(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicateMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicateMovement(); \
		P_NATIVE_END; \
	}


#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFolderPath) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NewFolderPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFolderPath(Z_Param_Out_NewFolderPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFolderPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetFolderPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorLabel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewActorLabel); \
		P_GET_UBOOL(Z_Param_bMarkDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorLabel(Z_Param_NewActorLabel,Z_Param_bMarkDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorLabel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetActorLabel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSelectable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSelectable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEditable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTemporarilyHiddenInEditor) \
	{ \
		P_GET_UBOOL(Z_Param_bIncludeParent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTemporarilyHiddenInEditor(Z_Param_bIncludeParent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsTemporarilyHiddenInEditor) \
	{ \
		P_GET_UBOOL(Z_Param_bIsHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsTemporarilyHiddenInEditor(Z_Param_bIsHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHiddenEd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHiddenEd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHiddenEdAtStartup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHiddenEdAtStartup(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFolderPath) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NewFolderPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFolderPath(Z_Param_Out_NewFolderPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFolderPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetFolderPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorLabel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewActorLabel); \
		P_GET_UBOOL(Z_Param_bMarkDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorLabel(Z_Param_NewActorLabel,Z_Param_bMarkDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorLabel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetActorLabel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSelectable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSelectable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEditable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTemporarilyHiddenInEditor) \
	{ \
		P_GET_UBOOL(Z_Param_bIncludeParent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTemporarilyHiddenInEditor(Z_Param_bIncludeParent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsTemporarilyHiddenInEditor) \
	{ \
		P_GET_UBOOL(Z_Param_bIsHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsTemporarilyHiddenInEditor(Z_Param_bIsHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHiddenEd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHiddenEd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHiddenEdAtStartup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHiddenEdAtStartup(); \
		P_NATIVE_END; \
	}


#else
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_EVENT_PARMS \
	struct Actor_eventK2_OnBecomeViewTarget_Parms \
	{ \
		APlayerController* PC; \
	}; \
	struct Actor_eventK2_OnEndViewTarget_Parms \
	{ \
		APlayerController* PC; \
	}; \
	struct Actor_eventReceiveActorBeginOverlap_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct Actor_eventReceiveActorEndOverlap_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct Actor_eventReceiveActorOnClicked_Parms \
	{ \
		FKey ButtonPressed; \
	}; \
	struct Actor_eventReceiveActorOnInputTouchBegin_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	}; \
	struct Actor_eventReceiveActorOnInputTouchEnd_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	}; \
	struct Actor_eventReceiveActorOnInputTouchEnter_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	}; \
	struct Actor_eventReceiveActorOnInputTouchLeave_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	}; \
	struct Actor_eventReceiveActorOnReleased_Parms \
	{ \
		FKey ButtonReleased; \
	}; \
	struct Actor_eventReceiveAnyDamage_Parms \
	{ \
		float Damage; \
		const UDamageType* DamageType; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
	}; \
	struct Actor_eventReceiveEndPlay_Parms \
	{ \
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason; \
	}; \
	struct Actor_eventReceiveHit_Parms \
	{ \
		UPrimitiveComponent* MyComp; \
		AActor* Other; \
		UPrimitiveComponent* OtherComp; \
		bool bSelfMoved; \
		FVector HitLocation; \
		FVector HitNormal; \
		FVector NormalImpulse; \
		FHitResult Hit; \
	}; \
	struct Actor_eventReceivePointDamage_Parms \
	{ \
		float Damage; \
		const UDamageType* DamageType; \
		FVector HitLocation; \
		FVector HitNormal; \
		UPrimitiveComponent* HitComponent; \
		FName BoneName; \
		FVector ShotFromDirection; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
		FHitResult HitInfo; \
	}; \
	struct Actor_eventReceiveRadialDamage_Parms \
	{ \
		float DamageReceived; \
		const UDamageType* DamageType; \
		FVector Origin; \
		FHitResult HitInfo; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
	}; \
	struct Actor_eventReceiveTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AActor, NO_API)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActor(); \
	friend struct Z_Construct_UClass_AActor_Statics; \
public: \
	DECLARE_CLASS(AActor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_AActor, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AActor) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_INCLASS \
private: \
	static void StaticRegisterNativesAActor(); \
	friend struct Z_Construct_UClass_AActor_Statics; \
public: \
	DECLARE_CLASS(AActor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_AActor, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AActor) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActor(AActor&&); \
	NO_API AActor(const AActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActor(AActor&&); \
	NO_API AActor(const AActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActor)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RemoteRole() { return STRUCT_OFFSET(AActor, RemoteRole); } \
	FORCEINLINE static uint32 __PPO__AttachmentReplication() { return STRUCT_OFFSET(AActor, AttachmentReplication); } \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(AActor, Owner); } \
	FORCEINLINE static uint32 __PPO__NetDriverName() { return STRUCT_OFFSET(AActor, NetDriverName); } \
	FORCEINLINE static uint32 __PPO__RootComponent() { return STRUCT_OFFSET(AActor, RootComponent); } \
	FORCEINLINE static uint32 __PPO__ControllingMatineeActors() { return STRUCT_OFFSET(AActor, ControllingMatineeActors); } \
	FORCEINLINE static uint32 __PPO__ParentComponent() { return STRUCT_OFFSET(AActor, ParentComponent); } \
	FORCEINLINE static uint32 __PPO__InstanceComponents() { return STRUCT_OFFSET(AActor, InstanceComponents); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_108_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

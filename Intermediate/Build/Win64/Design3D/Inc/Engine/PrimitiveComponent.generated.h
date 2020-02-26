// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
class AActor;
struct FHitResult;
struct FVector;
class APawn;
class UPhysicalMaterial;
enum class ERendererStencilMask : uint8;
struct FBox;
struct FWalkableSlopeOverride;
class UMaterialInterface;
class UMaterialInstanceDynamic;
#ifdef ENGINE_PrimitiveComponent_generated_h
#error "PrimitiveComponent.generated.h already included, missing '#pragma once' in PrimitiveComponent.h"
#endif
#define ENGINE_PrimitiveComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_2244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ComponentTransform() { return STRUCT_OFFSET(FPrimitiveComponentInstanceData, ComponentTransform); } \
	FORCEINLINE static uint32 __PPO__VisibilityId() { return STRUCT_OFFSET(FPrimitiveComponentInstanceData, VisibilityId); } \
	FORCEINLINE static uint32 __PPO__LODParent() { return STRUCT_OFFSET(FPrimitiveComponentInstanceData, LODParent); } \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimitiveComponentInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpriteCategoryInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpriteCategoryInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_164_DELEGATE \
struct _Script_Engine_eventComponentEndTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentEndTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentEndTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_163_DELEGATE \
struct _Script_Engine_eventComponentBeginTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentBeginTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentBeginTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_162_DELEGATE \
struct _Script_Engine_eventComponentOnInputTouchEndSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentOnInputTouchEndSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentOnInputTouchEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_161_DELEGATE \
struct _Script_Engine_eventComponentOnInputTouchBeginSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentOnInputTouchBeginSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentOnInputTouchBeginSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_160_DELEGATE \
struct _Script_Engine_eventComponentOnReleasedSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
	FKey ButtonReleased; \
}; \
static inline void FComponentOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnReleasedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonReleased) \
{ \
	_Script_Engine_eventComponentOnReleasedSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	Parms.ButtonReleased=ButtonReleased; \
	ComponentOnReleasedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_159_DELEGATE \
struct _Script_Engine_eventComponentOnClickedSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
	FKey ButtonPressed; \
}; \
static inline void FComponentOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnClickedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonPressed) \
{ \
	_Script_Engine_eventComponentOnClickedSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	Parms.ButtonPressed=ButtonPressed; \
	ComponentOnClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_158_DELEGATE \
struct _Script_Engine_eventComponentEndCursorOverSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndCursorOverSignature, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentEndCursorOverSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentEndCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_157_DELEGATE \
struct _Script_Engine_eventComponentBeginCursorOverSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginCursorOverSignature, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentBeginCursorOverSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentBeginCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_155_DELEGATE \
struct _Script_Engine_eventComponentCollisionSettingsChangedSignature_Parms \
{ \
	UPrimitiveComponent* ChangedComponent; \
}; \
static inline void FComponentCollisionSettingsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentCollisionSettingsChangedSignature, UPrimitiveComponent* ChangedComponent) \
{ \
	_Script_Engine_eventComponentCollisionSettingsChangedSignature_Parms Parms; \
	Parms.ChangedComponent=ChangedComponent; \
	ComponentCollisionSettingsChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_153_DELEGATE \
struct _Script_Engine_eventComponentSleepSignature_Parms \
{ \
	UPrimitiveComponent* SleepingComponent; \
	FName BoneName; \
}; \
static inline void FComponentSleepSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentSleepSignature, UPrimitiveComponent* SleepingComponent, FName BoneName) \
{ \
	_Script_Engine_eventComponentSleepSignature_Parms Parms; \
	Parms.SleepingComponent=SleepingComponent; \
	Parms.BoneName=BoneName; \
	ComponentSleepSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_151_DELEGATE \
struct _Script_Engine_eventComponentWakeSignature_Parms \
{ \
	UPrimitiveComponent* WakingComponent; \
	FName BoneName; \
}; \
static inline void FComponentWakeSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentWakeSignature, UPrimitiveComponent* WakingComponent, FName BoneName) \
{ \
	_Script_Engine_eventComponentWakeSignature_Parms Parms; \
	Parms.WakingComponent=WakingComponent; \
	Parms.BoneName=BoneName; \
	ComponentWakeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_149_DELEGATE \
struct _Script_Engine_eventComponentEndOverlapSignature_Parms \
{ \
	UPrimitiveComponent* OverlappedComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	int32 OtherBodyIndex; \
}; \
static inline void FComponentEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) \
{ \
	_Script_Engine_eventComponentEndOverlapSignature_Parms Parms; \
	Parms.OverlappedComponent=OverlappedComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherBodyIndex=OtherBodyIndex; \
	ComponentEndOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_147_DELEGATE \
struct _Script_Engine_eventComponentBeginOverlapSignature_Parms \
{ \
	UPrimitiveComponent* OverlappedComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	int32 OtherBodyIndex; \
	bool bFromSweep; \
	FHitResult SweepResult; \
}; \
static inline void FComponentBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult) \
{ \
	_Script_Engine_eventComponentBeginOverlapSignature_Parms Parms; \
	Parms.OverlappedComponent=OverlappedComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherBodyIndex=OtherBodyIndex; \
	Parms.bFromSweep=bFromSweep ? true : false; \
	Parms.SweepResult=SweepResult; \
	ComponentBeginOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_145_DELEGATE \
struct _Script_Engine_eventComponentHitSignature_Parms \
{ \
	UPrimitiveComponent* HitComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FComponentHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentHitSignature, UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_Engine_eventComponentHitSignature_Parms Parms; \
	Parms.HitComponent=HitComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	ComponentHitSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanCharacterStepUp) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanCharacterStepUp(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCullDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCullDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCullDistance(Z_Param_NewCullDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysMaterialOverride) \
	{ \
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_NewPhysMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysMaterialOverride(Z_Param_NewPhysMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewResponse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionResponseToAllChannels(ECollisionResponse(Z_Param_NewResponse)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewResponse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel),ECollisionResponse(Z_Param_NewResponse)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyRigidBodyAwake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllUseCCD) \
	{ \
		P_GET_UBOOL(Z_Param_InUseCCD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllUseCCD(Z_Param_InUseCCD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseCCD) \
	{ \
		P_GET_UBOOL(Z_Param_InUseCCD); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseCCD(Z_Param_InUseCCD,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleByMomentOfInertia) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputVector); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ScaleByMomentOfInertia(Z_Param_InputVector,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInertiaTensor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInertiaTensor(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMassOverrideInKg) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MassInKg); \
		P_GET_UBOOL(Z_Param_bOverrideMass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMassOverrideInKg(Z_Param_BoneName,Z_Param_MassInKg,Z_Param_bOverrideMass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMassScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMassScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllMassScale(Z_Param_InMassScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMassScale) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMassScale(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMassScale) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMassScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMassScale(Z_Param_BoneName,Z_Param_InMassScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngularDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAngularDamping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDamping(Z_Param_InDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLinearDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLinearDamping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearDamping(Z_Param_InDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGravityEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsGravityEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableGravity) \
	{ \
		P_GET_UBOOL(Z_Param_bGravityEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableGravity(Z_Param_bGravityEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWakeAllRigidBodies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WakeAllRigidBodies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllPhysicsAngularVelocityInRadians(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllPhysicsAngularVelocityInDegrees(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionObjectType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetCollisionObjectType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionResponse>*)Z_Param__Result=P_THIS->GetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_IsPhysicsCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_IsQueryCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_IsCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionEnabled::Type>*)Z_Param__Result=P_THIS->GetCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestPointOnCollision) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPointOnBody); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetClosestPointOnCollision(Z_Param_Out_Point,Z_Param_Out_OutPointOnBody,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderInMainPass) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderInMainPass(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask) \
	{ \
		P_GET_ENUM(ERendererStencilMask,Z_Param_WriteMaskBit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomDepthStencilWriteMask(ERendererStencilMask(Z_Param_WriteMaskBit)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomDepthStencilValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderCustomDepth) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderCustomDepth(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SphereOverlapComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InSphereCentre); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSphereRadius); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_UBOOL(Z_Param_bPersistentShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SphereOverlapComponent(Z_Param_InSphereCentre,Z_Param_InSphereRadius,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_bPersistentShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_BoxOverlapComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InBoxCentre); \
		P_GET_STRUCT(FBox,Z_Param_InBox); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_UBOOL(Z_Param_bPersistentShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_BoxOverlapComponent(Z_Param_InBoxCentre,Z_Param_InBox,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_bPersistentShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SphereTraceComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceStart); \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_UBOOL(Z_Param_bPersistentShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SphereTraceComponent(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_SphereRadius,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_bPersistentShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_LineTraceComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceStart); \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_UBOOL(Z_Param_bPersistentShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_LineTraceComponent(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_bPersistentShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionObjectType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionObjectType(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionProfileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCollisionProfileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionProfileName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InCollisionProfileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionProfileName(Z_Param_InCollisionProfileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionEnabled(ECollisionEnabled::Type(Z_Param_NewType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReceivesDecals) \
	{ \
		P_GET_UBOOL(Z_Param_bNewReceivesDecals); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReceivesDecals(Z_Param_bNewReceivesDecals); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTranslucentSortPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewTranslucentSortPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTranslucentSortPriority(Z_Param_NewTranslucentSortPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSingleSampleShadowFromStationaryLights); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSingleSampleShadowFromStationaryLights(Z_Param_bNewSingleSampleShadowFromStationaryLights); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastShadow) \
	{ \
		P_GET_UBOOL(Z_Param_NewCastShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastShadow(Z_Param_NewCastShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnlyOwnerSee) \
	{ \
		P_GET_UBOOL(Z_Param_bNewOnlyOwnerSee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnlyOwnerSee(Z_Param_bNewOnlyOwnerSee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerNoSee) \
	{ \
		P_GET_UBOOL(Z_Param_bNewOwnerNoSee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwnerNoSee(Z_Param_bNewOwnerNoSee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPutRigidBodyToSleep) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PutRigidBodyToSleep(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWakeRigidBody) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WakeRigidBody(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCenterOfMass) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CenterOfMassOffset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCenterOfMass(Z_Param_CenterOfMassOffset,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfMass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenterOfMass(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsAngularVelocityInRadians(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsAngularVelocityInDegrees(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocity) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsAngularVelocity(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsMaxAngularVelocityInRadians(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsMaxAngularVelocityInDegrees(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsMaxAngularVelocity(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsAngularVelocityInDegrees(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsAngularVelocityInRadians(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsAngularVelocity(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllPhysicsLinearVelocity(Z_Param_NewVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsLinearVelocityAtPoint(Z_Param_Point,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsLinearVelocity(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsLinearVelocity(Z_Param_NewVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTorqueInDegrees(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTorqueInRadians(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorque) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTorque(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadialForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRadialForce(Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtLocationLocal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForceAtLocationLocal(Z_Param_Force,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForceAtLocation(Z_Param_Force,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForce(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadialImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRadialImpulse(Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseAtLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddImpulseAtLocation(Z_Param_Impulse,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAngularImpulseInDegrees(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAngularImpulseInRadians(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAngularImpulse(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddImpulse(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintMode(EDOFMode::Type(Z_Param_ConstraintMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSimulatePhysics(Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride) \
	{ \
		P_GET_STRUCT_REF(FWalkableSlopeOverride,Z_Param_Out_NewOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWalkableSlopeOverride(Z_Param_Out_NewOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FWalkableSlopeOverride*)Z_Param__Result=P_THIS->GetWalkableSlopeOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FaceIndex); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterialFromCollisionFaceIndex(Z_Param_FaceIndex,Z_Param_Out_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_SourceMaterial); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateDynamicMaterialInstance(Z_Param_ElementIndex,Z_Param_SourceMaterial,Z_Param_OptionalName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateAndSetMaterialInstanceDynamicFromMaterial(Z_Param_ElementIndex,Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateAndSetMaterialInstanceDynamic(Z_Param_ElementIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialByName(Z_Param_MaterialSlotName,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterial(Z_Param_ElementIndex,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_ElementIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoundsScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBoundsScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoundsScale(Z_Param_NewBoundsScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutOverlappingComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOverlappingComponents(Z_Param_Out_OutOverlappingComponents); \
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
	DECLARE_FUNCTION(execIsOverlappingActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingActor(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingComponent(Z_Param_OtherComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMoveIgnoreComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->CopyArrayOfMoveIgnoreComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_UBOOL(Z_Param_bShouldIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IgnoreComponentWhenMoving(Z_Param_Component,Z_Param_bShouldIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMoveIgnoreActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMoveIgnoreActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->CopyArrayOfMoveIgnoreActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bShouldIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IgnoreActorWhenMoving(Z_Param_Actor,Z_Param_bShouldIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGenerateOverlapEvents) \
	{ \
		P_GET_UBOOL(Z_Param_bInGenerateOverlapEvents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGenerateOverlapEvents(Z_Param_bInGenerateOverlapEvents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGenerateOverlapEvents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGenerateOverlapEvents(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanCharacterStepUp) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanCharacterStepUp(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCullDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCullDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCullDistance(Z_Param_NewCullDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysMaterialOverride) \
	{ \
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_NewPhysMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysMaterialOverride(Z_Param_NewPhysMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewResponse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionResponseToAllChannels(ECollisionResponse(Z_Param_NewResponse)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewResponse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel),ECollisionResponse(Z_Param_NewResponse)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyRigidBodyAwake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllUseCCD) \
	{ \
		P_GET_UBOOL(Z_Param_InUseCCD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllUseCCD(Z_Param_InUseCCD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseCCD) \
	{ \
		P_GET_UBOOL(Z_Param_InUseCCD); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseCCD(Z_Param_InUseCCD,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleByMomentOfInertia) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputVector); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ScaleByMomentOfInertia(Z_Param_InputVector,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInertiaTensor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInertiaTensor(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMassOverrideInKg) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MassInKg); \
		P_GET_UBOOL(Z_Param_bOverrideMass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMassOverrideInKg(Z_Param_BoneName,Z_Param_MassInKg,Z_Param_bOverrideMass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMassScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMassScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllMassScale(Z_Param_InMassScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMassScale) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMassScale(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMassScale) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMassScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMassScale(Z_Param_BoneName,Z_Param_InMassScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngularDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAngularDamping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDamping(Z_Param_InDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLinearDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLinearDamping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearDamping(Z_Param_InDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGravityEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsGravityEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableGravity) \
	{ \
		P_GET_UBOOL(Z_Param_bGravityEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableGravity(Z_Param_bGravityEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWakeAllRigidBodies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WakeAllRigidBodies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllPhysicsAngularVelocityInRadians(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllPhysicsAngularVelocityInDegrees(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionObjectType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetCollisionObjectType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionResponse>*)Z_Param__Result=P_THIS->GetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_IsPhysicsCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_IsQueryCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_IsCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionEnabled::Type>*)Z_Param__Result=P_THIS->GetCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestPointOnCollision) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPointOnBody); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetClosestPointOnCollision(Z_Param_Out_Point,Z_Param_Out_OutPointOnBody,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderInMainPass) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderInMainPass(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask) \
	{ \
		P_GET_ENUM(ERendererStencilMask,Z_Param_WriteMaskBit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomDepthStencilWriteMask(ERendererStencilMask(Z_Param_WriteMaskBit)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomDepthStencilValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderCustomDepth) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderCustomDepth(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SphereOverlapComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InSphereCentre); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSphereRadius); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_UBOOL(Z_Param_bPersistentShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SphereOverlapComponent(Z_Param_InSphereCentre,Z_Param_InSphereRadius,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_bPersistentShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_BoxOverlapComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InBoxCentre); \
		P_GET_STRUCT(FBox,Z_Param_InBox); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_UBOOL(Z_Param_bPersistentShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_BoxOverlapComponent(Z_Param_InBoxCentre,Z_Param_InBox,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_bPersistentShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SphereTraceComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceStart); \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_UBOOL(Z_Param_bPersistentShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_SphereTraceComponent(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_SphereRadius,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_bPersistentShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_LineTraceComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceStart); \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_UBOOL(Z_Param_bPersistentShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_LineTraceComponent(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_bPersistentShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionObjectType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionObjectType(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionProfileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCollisionProfileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionProfileName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InCollisionProfileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionProfileName(Z_Param_InCollisionProfileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionEnabled(ECollisionEnabled::Type(Z_Param_NewType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReceivesDecals) \
	{ \
		P_GET_UBOOL(Z_Param_bNewReceivesDecals); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReceivesDecals(Z_Param_bNewReceivesDecals); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTranslucentSortPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewTranslucentSortPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTranslucentSortPriority(Z_Param_NewTranslucentSortPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSingleSampleShadowFromStationaryLights); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSingleSampleShadowFromStationaryLights(Z_Param_bNewSingleSampleShadowFromStationaryLights); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastShadow) \
	{ \
		P_GET_UBOOL(Z_Param_NewCastShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastShadow(Z_Param_NewCastShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnlyOwnerSee) \
	{ \
		P_GET_UBOOL(Z_Param_bNewOnlyOwnerSee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnlyOwnerSee(Z_Param_bNewOnlyOwnerSee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerNoSee) \
	{ \
		P_GET_UBOOL(Z_Param_bNewOwnerNoSee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwnerNoSee(Z_Param_bNewOwnerNoSee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPutRigidBodyToSleep) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PutRigidBodyToSleep(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWakeRigidBody) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WakeRigidBody(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCenterOfMass) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CenterOfMassOffset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCenterOfMass(Z_Param_CenterOfMassOffset,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfMass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenterOfMass(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsAngularVelocityInRadians(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsAngularVelocityInDegrees(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocity) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsAngularVelocity(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsMaxAngularVelocityInRadians(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsMaxAngularVelocityInDegrees(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsMaxAngularVelocity(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsAngularVelocityInDegrees(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsAngularVelocityInRadians(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsAngularVelocity(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllPhysicsLinearVelocity(Z_Param_NewVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsLinearVelocityAtPoint(Z_Param_Point,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPhysicsLinearVelocity(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPhysicsLinearVelocity(Z_Param_NewVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTorqueInDegrees(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTorqueInRadians(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorque) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTorque(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadialForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRadialForce(Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtLocationLocal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForceAtLocationLocal(Z_Param_Force,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForceAtLocation(Z_Param_Force,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForce(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadialImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRadialImpulse(Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseAtLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddImpulseAtLocation(Z_Param_Impulse,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAngularImpulseInDegrees(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAngularImpulseInRadians(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAngularImpulse(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddImpulse(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintMode(EDOFMode::Type(Z_Param_ConstraintMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSimulatePhysics(Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride) \
	{ \
		P_GET_STRUCT_REF(FWalkableSlopeOverride,Z_Param_Out_NewOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWalkableSlopeOverride(Z_Param_Out_NewOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FWalkableSlopeOverride*)Z_Param__Result=P_THIS->GetWalkableSlopeOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FaceIndex); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterialFromCollisionFaceIndex(Z_Param_FaceIndex,Z_Param_Out_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_SourceMaterial); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateDynamicMaterialInstance(Z_Param_ElementIndex,Z_Param_SourceMaterial,Z_Param_OptionalName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateAndSetMaterialInstanceDynamicFromMaterial(Z_Param_ElementIndex,Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateAndSetMaterialInstanceDynamic(Z_Param_ElementIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialByName(Z_Param_MaterialSlotName,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterial(Z_Param_ElementIndex,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_ElementIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoundsScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBoundsScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoundsScale(Z_Param_NewBoundsScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutOverlappingComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOverlappingComponents(Z_Param_Out_OutOverlappingComponents); \
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
	DECLARE_FUNCTION(execIsOverlappingActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingActor(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingComponent(Z_Param_OtherComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMoveIgnoreComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->CopyArrayOfMoveIgnoreComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_UBOOL(Z_Param_bShouldIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IgnoreComponentWhenMoving(Z_Param_Component,Z_Param_bShouldIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMoveIgnoreActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMoveIgnoreActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->CopyArrayOfMoveIgnoreActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bShouldIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IgnoreActorWhenMoving(Z_Param_Actor,Z_Param_bShouldIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGenerateOverlapEvents) \
	{ \
		P_GET_UBOOL(Z_Param_bInGenerateOverlapEvents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGenerateOverlapEvents(Z_Param_bInGenerateOverlapEvents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGenerateOverlapEvents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGenerateOverlapEvents(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPrimitiveComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_INCLASS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrimitiveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimitiveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveComponent(UPrimitiveComponent&&); \
	NO_API UPrimitiveComponent(const UPrimitiveComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveComponent(UPrimitiveComponent&&); \
	NO_API UPrimitiveComponent(const UPrimitiveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimitiveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LODParentPrimitive() { return STRUCT_OFFSET(UPrimitiveComponent, LODParentPrimitive); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_171_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPrimitiveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h


#define FOREACH_ENUM_ERENDERERSTENCILMASK(op) \
	op(ERendererStencilMask::ERSM_Default) \
	op(ERendererStencilMask::ERSM_255) \
	op(ERendererStencilMask::ERSM_1) \
	op(ERendererStencilMask::ERSM_2) \
	op(ERendererStencilMask::ERSM_4) \
	op(ERendererStencilMask::ERSM_8) \
	op(ERendererStencilMask::ERSM_16) \
	op(ERendererStencilMask::ERSM_32) \
	op(ERendererStencilMask::ERSM_64) \
	op(ERendererStencilMask::ERSM_128) 

enum class ERendererStencilMask : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERendererStencilMask>();

#define FOREACH_ENUM_EHASCUSTOMNAVIGABLEGEOMETRY(op) \
	op(EHasCustomNavigableGeometry::No) \
	op(EHasCustomNavigableGeometry::Yes) \
	op(EHasCustomNavigableGeometry::EvenIfNotCollidable) \
	op(EHasCustomNavigableGeometry::DontExport) 
#define FOREACH_ENUM_ECANBECHARACTERBASE(op) \
	op(ECB_No) \
	op(ECB_Yes) \
	op(ECB_Owner) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

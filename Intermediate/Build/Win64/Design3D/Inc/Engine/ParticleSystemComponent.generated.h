// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
struct FVector;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UParticleSystem;
class AActor;
struct FLinearColor;
class USceneComponent;
enum class EAttachmentRule : uint8;
#ifdef ENGINE_ParticleSystemComponent_generated_h
#error "ParticleSystemComponent.generated.h already included, missing '#pragma once' in ParticleSystemComponent.h"
#endif
#define ENGINE_ParticleSystemComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleSysParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleSysParam>();

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_93_DELEGATE \
struct _Script_Engine_eventOnSystemFinished_Parms \
{ \
	UParticleSystemComponent* PSystem; \
}; \
static inline void FOnSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSystemFinished, UParticleSystemComponent* PSystem) \
{ \
	_Script_Engine_eventOnSystemFinished_Parms Parms; \
	Parms.PSystem=PSystem; \
	OnSystemFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateParticleEvent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InEventName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InEmitterTime); \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_GET_STRUCT(FVector,Z_Param_InDirection); \
		P_GET_STRUCT(FVector,Z_Param_InVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateParticleEvent(Z_Param_InEventName,Z_Param_InEmitterTime,Z_Param_InLocation,Z_Param_InDirection,Z_Param_InVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNamedMaterial) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetNamedMaterial(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNamedDynamicMaterialInstance) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_SourceMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateNamedDynamicMaterialInstance(Z_Param_InName,Z_Param_SourceMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseToPool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseToPool(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrailSourceData) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InFirstSocketName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSecondSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InWidthMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrailSourceData(Z_Param_InFirstSocketName,Z_Param_InSecondSocketName,ETrailWidthMode(Z_Param_InWidthMode),Z_Param_InWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndTrails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndTrails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginTrails) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InFirstSocketName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSecondSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InWidthMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginTrails(Z_Param_InFirstSocketName,Z_Param_InSecondSocketName,ETrailWidthMode(Z_Param_InWidthMode),Z_Param_InWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumActiveParticles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumActiveParticles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTemplate) \
	{ \
		P_GET_OBJECT(UParticleSystem,Z_Param_NewTemplate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTemplate(Z_Param_NewTemplate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(AActor,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FVector,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVectorParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFloatParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmitterEnable) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_EmitterName); \
		P_GET_UBOOL(Z_Param_bNewEnableState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmitterEnable(Z_Param_EmitterName,Z_Param_bNewEnableState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamTargetStrength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutTargetStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetStrength(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTargetStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamTargetTangent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetTangent(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTangentPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamTargetPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTargetPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetPoint(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTargetPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamSourceStrength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSourceStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourceStrength(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutSourceStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamSourceTangent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourceTangent(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutTangentPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamSourcePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSourcePoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourcePoint(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutSourcePoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamEndPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamEndPoint(Z_Param_EmitterIndex,Z_Param_Out_OutEndPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamTargetStrength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTargetStrength); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamTargetStrength(Z_Param_EmitterIndex,Z_Param_NewTargetStrength,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamTargetTangent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewTangentPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamTargetTangent(Z_Param_EmitterIndex,Z_Param_NewTangentPoint,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamTargetPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewTargetPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamTargetPoint(Z_Param_EmitterIndex,Z_Param_NewTargetPoint,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamSourceStrength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSourceStrength); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamSourceStrength(Z_Param_EmitterIndex,Z_Param_NewSourceStrength,Z_Param_SourceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamSourceTangent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewTangentPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamSourceTangent(Z_Param_EmitterIndex,Z_Param_NewTangentPoint,Z_Param_SourceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamSourcePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewSourcePoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamSourcePoint(Z_Param_EmitterIndex,Z_Param_NewSourcePoint,Z_Param_SourceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamEndPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewEndPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamEndPoint(Z_Param_EmitterIndex,Z_Param_NewEndPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoAttachmentParameters) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoAttachmentParameters(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoAttachParams) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoAttachParams(Z_Param_Parent,Z_Param_SocketName,EAttachLocation::Type(Z_Param_LocationType)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateParticleEvent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InEventName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InEmitterTime); \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_GET_STRUCT(FVector,Z_Param_InDirection); \
		P_GET_STRUCT(FVector,Z_Param_InVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateParticleEvent(Z_Param_InEventName,Z_Param_InEmitterTime,Z_Param_InLocation,Z_Param_InDirection,Z_Param_InVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNamedMaterial) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetNamedMaterial(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNamedDynamicMaterialInstance) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_SourceMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateNamedDynamicMaterialInstance(Z_Param_InName,Z_Param_SourceMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseToPool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseToPool(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrailSourceData) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InFirstSocketName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSecondSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InWidthMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrailSourceData(Z_Param_InFirstSocketName,Z_Param_InSecondSocketName,ETrailWidthMode(Z_Param_InWidthMode),Z_Param_InWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndTrails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndTrails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginTrails) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InFirstSocketName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSecondSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InWidthMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginTrails(Z_Param_InFirstSocketName,Z_Param_InSecondSocketName,ETrailWidthMode(Z_Param_InWidthMode),Z_Param_InWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumActiveParticles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumActiveParticles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTemplate) \
	{ \
		P_GET_OBJECT(UParticleSystem,Z_Param_NewTemplate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTemplate(Z_Param_NewTemplate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(AActor,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FVector,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVectorParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFloatParameter(Z_Param_ParameterName,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmitterEnable) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_EmitterName); \
		P_GET_UBOOL(Z_Param_bNewEnableState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmitterEnable(Z_Param_EmitterName,Z_Param_bNewEnableState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamTargetStrength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutTargetStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetStrength(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTargetStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamTargetTangent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetTangent(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTangentPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamTargetPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTargetPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetPoint(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTargetPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamSourceStrength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSourceStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourceStrength(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutSourceStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamSourceTangent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourceTangent(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutTangentPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamSourcePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSourcePoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourcePoint(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutSourcePoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeamEndPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBeamEndPoint(Z_Param_EmitterIndex,Z_Param_Out_OutEndPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamTargetStrength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTargetStrength); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamTargetStrength(Z_Param_EmitterIndex,Z_Param_NewTargetStrength,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamTargetTangent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewTangentPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamTargetTangent(Z_Param_EmitterIndex,Z_Param_NewTangentPoint,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamTargetPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewTargetPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamTargetPoint(Z_Param_EmitterIndex,Z_Param_NewTargetPoint,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamSourceStrength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSourceStrength); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamSourceStrength(Z_Param_EmitterIndex,Z_Param_NewSourceStrength,Z_Param_SourceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamSourceTangent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewTangentPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamSourceTangent(Z_Param_EmitterIndex,Z_Param_NewTangentPoint,Z_Param_SourceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamSourcePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewSourcePoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamSourcePoint(Z_Param_EmitterIndex,Z_Param_NewSourcePoint,Z_Param_SourceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBeamEndPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EmitterIndex); \
		P_GET_STRUCT(FVector,Z_Param_NewEndPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBeamEndPoint(Z_Param_EmitterIndex,Z_Param_NewEndPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoAttachmentParameters) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoAttachmentParameters(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoAttachParams) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoAttachParams(Z_Param_Parent,Z_Param_SocketName,EAttachLocation::Type(Z_Param_LocationType)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleSystemComponent(); \
	friend struct Z_Construct_UClass_UParticleSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UParticleSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleSystemComponent) \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemComponent(); \
	friend struct Z_Construct_UClass_UParticleSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UParticleSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleSystemComponent) \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleSystemComponent(UParticleSystemComponent&&); \
	NO_API UParticleSystemComponent(const UParticleSystemComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleSystemComponent(UParticleSystemComponent&&); \
	NO_API UParticleSystemComponent(const UParticleSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemComponent)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_330_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleSystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h


#define FOREACH_ENUM_EPARTICLEEVENTTYPE(op) \
	op(EPET_Any) \
	op(EPET_Spawn) \
	op(EPET_Death) \
	op(EPET_Collision) \
	op(EPET_Burst) \
	op(EPET_Blueprint) 
#define FOREACH_ENUM_PARTICLEREPLAYSTATE(op) \
	op(PRS_Disabled) \
	op(PRS_Capturing) \
	op(PRS_Replaying) 
#define FOREACH_ENUM_EPARTICLESYSPARAMTYPE(op) \
	op(PSPT_None) \
	op(PSPT_Scalar) \
	op(PSPT_ScalarRand) \
	op(PSPT_Vector) \
	op(PSPT_VectorRand) \
	op(PSPT_Color) \
	op(PSPT_Actor) \
	op(PSPT_Material) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

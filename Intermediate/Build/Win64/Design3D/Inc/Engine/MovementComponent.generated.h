// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EPlaneConstraintAxisSetting : uint8;
struct FRotator;
struct FHitResult;
class USceneComponent;
class APhysicsVolume;
#ifdef ENGINE_MovementComponent_generated_h
#error "MovementComponent.generated.h already included, missing '#pragma once' in MovementComponent.h"
#endif
#define ENGINE_MovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnapUpdatedComponentToPlane) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnapUpdatedComponentToPlane(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstrainNormalToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainNormalToPlane(Z_Param_Normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstrainLocationToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainLocationToPlane(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstrainDirectionToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainDirectionToPlane(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaneConstraintOrigin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPlaneConstraintOrigin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaneConstraintNormal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPlaneConstraintNormal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintOrigin) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_PlaneOrigin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintOrigin(Z_Param_PlaneOrigin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintFromVectors) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Forward); \
		P_GET_STRUCT(FVector,Z_Param_Up); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintFromVectors(Z_Param_Forward,Z_Param_Up); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintNormal(Z_Param_PlaneNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaneConstraintAxisSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EPlaneConstraintAxisSetting*)Z_Param__Result=P_THIS->GetPlaneConstraintAxisSetting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintAxisSetting) \
	{ \
		P_GET_ENUM(EPlaneConstraintAxisSetting,Z_Param_NewAxisSetting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting(Z_Param_NewAxisSetting)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_MoveUpdatedComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Delta); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_MoveUpdatedComponent(Z_Param_Delta,Z_Param_NewRotation,Z_Param_Out_OutHit,Z_Param_bSweep,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdatedComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewUpdatedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpdatedComponent(Z_Param_NewUpdatedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysicsVolumeChanged) \
	{ \
		P_GET_OBJECT(APhysicsVolume,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PhysicsVolumeChanged(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APhysicsVolume**)Z_Param__Result=P_THIS->GetPhysicsVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovementImmediately) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovementImmediately(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsExceedingMaxSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsExceedingMaxSpeed(Z_Param_MaxSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetModifiedMaxSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetModifiedMaxSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetMaxSpeedModifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetMaxSpeedModifier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGravityZ(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnapUpdatedComponentToPlane) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnapUpdatedComponentToPlane(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstrainNormalToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainNormalToPlane(Z_Param_Normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstrainLocationToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainLocationToPlane(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstrainDirectionToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainDirectionToPlane(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaneConstraintOrigin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPlaneConstraintOrigin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaneConstraintNormal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPlaneConstraintNormal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintOrigin) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_PlaneOrigin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintOrigin(Z_Param_PlaneOrigin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintFromVectors) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Forward); \
		P_GET_STRUCT(FVector,Z_Param_Up); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintFromVectors(Z_Param_Forward,Z_Param_Up); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintNormal(Z_Param_PlaneNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaneConstraintAxisSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EPlaneConstraintAxisSetting*)Z_Param__Result=P_THIS->GetPlaneConstraintAxisSetting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaneConstraintAxisSetting) \
	{ \
		P_GET_ENUM(EPlaneConstraintAxisSetting,Z_Param_NewAxisSetting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting(Z_Param_NewAxisSetting)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_MoveUpdatedComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Delta); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->K2_MoveUpdatedComponent(Z_Param_Delta,Z_Param_NewRotation,Z_Param_Out_OutHit,Z_Param_bSweep,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdatedComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewUpdatedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpdatedComponent(Z_Param_NewUpdatedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysicsVolumeChanged) \
	{ \
		P_GET_OBJECT(APhysicsVolume,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PhysicsVolumeChanged(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APhysicsVolume**)Z_Param__Result=P_THIS->GetPhysicsVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovementImmediately) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovementImmediately(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsExceedingMaxSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsExceedingMaxSpeed(Z_Param_MaxSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetModifiedMaxSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetModifiedMaxSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetMaxSpeedModifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetMaxSpeedModifier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGravityZ(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovementComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementComponent(); \
	friend struct Z_Construct_UClass_UMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMovementComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUMovementComponent(); \
	friend struct Z_Construct_UClass_UMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMovementComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementComponent(UMovementComponent&&); \
	NO_API UMovementComponent(const UMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementComponent(UMovementComponent&&); \
	NO_API UMovementComponent(const UMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneConstraintNormal() { return STRUCT_OFFSET(UMovementComponent, PlaneConstraintNormal); } \
	FORCEINLINE static uint32 __PPO__PlaneConstraintOrigin() { return STRUCT_OFFSET(UMovementComponent, PlaneConstraintOrigin); } \
	FORCEINLINE static uint32 __PPO__PlaneConstraintAxisSetting() { return STRUCT_OFFSET(UMovementComponent, PlaneConstraintAxisSetting); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_53_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h


#define FOREACH_ENUM_EPLANECONSTRAINTAXISSETTING(op) \
	op(EPlaneConstraintAxisSetting::Custom) \
	op(EPlaneConstraintAxisSetting::X) \
	op(EPlaneConstraintAxisSetting::Y) \
	op(EPlaneConstraintAxisSetting::Z) \
	op(EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting) 

enum class EPlaneConstraintAxisSetting : uint8;
template<> ENGINE_API UEnum* StaticEnum<EPlaneConstraintAxisSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

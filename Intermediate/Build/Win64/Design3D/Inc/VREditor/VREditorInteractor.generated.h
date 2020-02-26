// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerType : uint8;
enum class EControllerHand : uint8;
class AVREditorTeleporter;
struct FLinearColor;
struct FVector;
struct FVector2D;
class UMotionControllerComponent;
class AActor;
class UVREditorMode;
#ifdef VREDITOR_VREditorInteractor_generated_h
#error "VREditorInteractor.generated.h already included, missing '#pragma once' in VREditorInteractor.h"
#endif
#define VREDITOR_VREditorInteractor_generated_h

#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_RPC_WRAPPERS \
	virtual float GetSlideDelta_Implementation() const; \
	virtual void SetupComponent_Implementation(AActor* OwningActor); \
	virtual void Init_Implementation(UVREditorMode* InVRMode); \
 \
	DECLARE_FUNCTION(execGetSelectAndMoveTriggerValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSelectAndMoveTriggerValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClickingOnUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClickingOnUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoveringOverUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHoveringOverUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryOverrideControllerType) \
	{ \
		P_GET_ENUM(EControllerType,Z_Param_InControllerType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryOverrideControllerType(EControllerType(Z_Param_InControllerType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControllerType) \
	{ \
		P_GET_ENUM(EControllerType,Z_Param_InControllerType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControllerType(EControllerType(Z_Param_InControllerType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EControllerType*)Z_Param__Result=P_THIS->GetControllerType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerSide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EControllerHand*)Z_Param__Result=P_THIS->GetControllerSide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AVREditorTeleporter**)Z_Param__Result=P_THIS->GetTeleportActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceLaserColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceLaserColor(Z_Param_Out_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLaserEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLaserEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLaserStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLaserStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastTrackpadPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetLastTrackpadPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackpadPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetTrackpadPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTouchingTrackpad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTouchingTrackpad(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceShowLaser) \
	{ \
		P_GET_UBOOL(Z_Param_bInForceShow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceShowLaser(Z_Param_bInForceShow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlideDelta) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSlideDelta_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControllerHandSide) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InControllerHandSide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControllerHandSide(Z_Param_InControllerHandSide); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionControllerComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetMotionControllerComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDDeviceType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetHMDDeviceType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupComponent) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OwningActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupComponent_Implementation(Z_Param_OwningActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_OBJECT(UVREditorMode,Z_Param_InVRMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init_Implementation(Z_Param_InVRMode); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetSlideDelta_Implementation() const; \
	virtual void SetupComponent_Implementation(AActor* OwningActor); \
	virtual void Init_Implementation(UVREditorMode* InVRMode); \
 \
	DECLARE_FUNCTION(execGetSelectAndMoveTriggerValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSelectAndMoveTriggerValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClickingOnUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClickingOnUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoveringOverUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHoveringOverUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryOverrideControllerType) \
	{ \
		P_GET_ENUM(EControllerType,Z_Param_InControllerType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryOverrideControllerType(EControllerType(Z_Param_InControllerType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControllerType) \
	{ \
		P_GET_ENUM(EControllerType,Z_Param_InControllerType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControllerType(EControllerType(Z_Param_InControllerType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EControllerType*)Z_Param__Result=P_THIS->GetControllerType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerSide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EControllerHand*)Z_Param__Result=P_THIS->GetControllerSide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AVREditorTeleporter**)Z_Param__Result=P_THIS->GetTeleportActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceLaserColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceLaserColor(Z_Param_Out_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLaserEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLaserEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLaserStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLaserStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastTrackpadPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetLastTrackpadPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackpadPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetTrackpadPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTouchingTrackpad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTouchingTrackpad(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceShowLaser) \
	{ \
		P_GET_UBOOL(Z_Param_bInForceShow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceShowLaser(Z_Param_bInForceShow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlideDelta) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSlideDelta_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControllerHandSide) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InControllerHandSide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControllerHandSide(Z_Param_InControllerHandSide); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionControllerComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetMotionControllerComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDDeviceType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetHMDDeviceType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupComponent) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OwningActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupComponent_Implementation(Z_Param_OwningActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_OBJECT(UVREditorMode,Z_Param_InVRMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init_Implementation(Z_Param_InVRMode); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_EVENT_PARMS \
	struct VREditorInteractor_eventGetSlideDelta_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VREditorInteractor_eventGetSlideDelta_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VREditorInteractor_eventInit_Parms \
	{ \
		UVREditorMode* InVRMode; \
	}; \
	struct VREditorInteractor_eventSetupComponent_Parms \
	{ \
		AActor* OwningActor; \
	};


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_CALLBACK_WRAPPERS
#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorInteractor(); \
	friend struct Z_Construct_UClass_UVREditorInteractor_Statics; \
public: \
	DECLARE_CLASS(UVREditorInteractor, UViewportInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorInteractor)


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUVREditorInteractor(); \
	friend struct Z_Construct_UClass_UVREditorInteractor_Statics; \
public: \
	DECLARE_CLASS(UVREditorInteractor, UViewportInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorInteractor)


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREditorInteractor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorInteractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorInteractor(UVREditorInteractor&&); \
	NO_API UVREditorInteractor(const UVREditorInteractor&); \
public:


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorInteractor(UVREditorInteractor&&); \
	NO_API UVREditorInteractor(const UVREditorInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorInteractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorInteractor)


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MotionControllerComponent() { return STRUCT_OFFSET(UVREditorInteractor, MotionControllerComponent); } \
	FORCEINLINE static uint32 __PPO__HandMeshComponent() { return STRUCT_OFFSET(UVREditorInteractor, HandMeshComponent); } \
	FORCEINLINE static uint32 __PPO__LaserSplineComponent() { return STRUCT_OFFSET(UVREditorInteractor, LaserSplineComponent); } \
	FORCEINLINE static uint32 __PPO__LaserSplineMeshComponents() { return STRUCT_OFFSET(UVREditorInteractor, LaserSplineMeshComponents); } \
	FORCEINLINE static uint32 __PPO__LaserPointerMID() { return STRUCT_OFFSET(UVREditorInteractor, LaserPointerMID); } \
	FORCEINLINE static uint32 __PPO__TranslucentLaserPointerMID() { return STRUCT_OFFSET(UVREditorInteractor, TranslucentLaserPointerMID); } \
	FORCEINLINE static uint32 __PPO__HoverMeshComponent() { return STRUCT_OFFSET(UVREditorInteractor, HoverMeshComponent); } \
	FORCEINLINE static uint32 __PPO__HoverPointLightComponent() { return STRUCT_OFFSET(UVREditorInteractor, HoverPointLightComponent); } \
	FORCEINLINE static uint32 __PPO__HandMeshMID() { return STRUCT_OFFSET(UVREditorInteractor, HandMeshMID); } \
	FORCEINLINE static uint32 __PPO__ControllerType() { return STRUCT_OFFSET(UVREditorInteractor, ControllerType); } \
	FORCEINLINE static uint32 __PPO__OverrideControllerType() { return STRUCT_OFFSET(UVREditorInteractor, OverrideControllerType); } \
	FORCEINLINE static uint32 __PPO__ControllerMotionSource() { return STRUCT_OFFSET(UVREditorInteractor, ControllerMotionSource); } \
	FORCEINLINE static uint32 __PPO__VRMode() { return STRUCT_OFFSET(UVREditorInteractor, VRMode); }


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_40_PROLOG \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_EVENT_PARMS


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_CALLBACK_WRAPPERS \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_INCLASS \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_CALLBACK_WRAPPERS \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_Public_VREditorInteractor_h


#define FOREACH_ENUM_ETOUCHSWIPEDIRECTION(op) \
	op(None) \
	op(Left) \
	op(Right) \
	op(Up) \
	op(Down) 
#define FOREACH_ENUM_ECONTROLLERTYPE(op) \
	op(EControllerType::Laser) \
	op(EControllerType::AssistingLaser) \
	op(EControllerType::UI) \
	op(EControllerType::Navigation) \
	op(EControllerType::Unknown) 

enum class EControllerType : uint8;
template<> VREDITOR_API UEnum* StaticEnum<EControllerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

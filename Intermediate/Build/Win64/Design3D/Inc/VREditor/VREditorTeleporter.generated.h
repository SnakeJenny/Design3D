// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class UVREditorInteractor;
struct FLinearColor;
class UVREditorMode;
#ifdef VREDITOR_VREditorTeleporter_generated_h
#error "VREditorTeleporter.generated.h already included, missing '#pragma once' in VREditorTeleporter.h"
#endif
#define VREDITOR_VREditorTeleporter_generated_h

#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_RPC_WRAPPERS \
	virtual float GetSlideDelta_Implementation(UVREditorInteractor* Interactor, bool Axis); \
	virtual void TeleportDone_Implementation(); \
	virtual void StartTeleport_Implementation(); \
	virtual void Shutdown_Implementation(); \
	virtual void Init_Implementation(UVREditorMode* InMode); \
 \
	DECLARE_FUNCTION(execGetInteractorTryingTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UViewportInteractor**)Z_Param__Result=P_THIS->GetInteractorTryingTeleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoTeleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAiming) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAiming(Z_Param_Interactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlideDelta) \
	{ \
		P_GET_OBJECT(UVREditorInteractor,Z_Param_Interactor); \
		P_GET_UBOOL(Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSlideDelta_Implementation(Z_Param_Interactor,Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColor(Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_bVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(Z_Param_bVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TeleportDone_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVREditorMode**)Z_Param__Result=P_THIS->GetVRMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTeleporting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTeleporting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shutdown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_OBJECT(UVREditorMode,Z_Param_InMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init_Implementation(Z_Param_InMode); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetSlideDelta_Implementation(UVREditorInteractor* Interactor, bool Axis); \
	virtual void TeleportDone_Implementation(); \
	virtual void StartTeleport_Implementation(); \
	virtual void Shutdown_Implementation(); \
	virtual void Init_Implementation(UVREditorMode* InMode); \
 \
	DECLARE_FUNCTION(execGetInteractorTryingTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UViewportInteractor**)Z_Param__Result=P_THIS->GetInteractorTryingTeleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoTeleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAiming) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAiming(Z_Param_Interactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlideDelta) \
	{ \
		P_GET_OBJECT(UVREditorInteractor,Z_Param_Interactor); \
		P_GET_UBOOL(Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSlideDelta_Implementation(Z_Param_Interactor,Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColor(Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_bVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(Z_Param_bVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TeleportDone_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVREditorMode**)Z_Param__Result=P_THIS->GetVRMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTeleporting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTeleporting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shutdown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_OBJECT(UVREditorMode,Z_Param_InMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init_Implementation(Z_Param_InMode); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_EVENT_PARMS \
	struct VREditorTeleporter_eventGetSlideDelta_Parms \
	{ \
		UVREditorInteractor* Interactor; \
		bool Axis; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VREditorTeleporter_eventGetSlideDelta_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VREditorTeleporter_eventInit_Parms \
	{ \
		UVREditorMode* InMode; \
	};


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_CALLBACK_WRAPPERS
#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorTeleporter(); \
	friend struct Z_Construct_UClass_AVREditorTeleporter_Statics; \
public: \
	DECLARE_CLASS(AVREditorTeleporter, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorTeleporter)


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAVREditorTeleporter(); \
	friend struct Z_Construct_UClass_AVREditorTeleporter_Statics; \
public: \
	DECLARE_CLASS(AVREditorTeleporter, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorTeleporter)


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVREditorTeleporter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorTeleporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorTeleporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorTeleporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorTeleporter(AVREditorTeleporter&&); \
	NO_API AVREditorTeleporter(const AVREditorTeleporter&); \
public:


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorTeleporter(AVREditorTeleporter&&); \
	NO_API AVREditorTeleporter(const AVREditorTeleporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorTeleporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorTeleporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorTeleporter)


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VRMode() { return STRUCT_OFFSET(AVREditorTeleporter, VRMode); } \
	FORCEINLINE static uint32 __PPO__TeleportDirectionMeshComponent() { return STRUCT_OFFSET(AVREditorTeleporter, TeleportDirectionMeshComponent); } \
	FORCEINLINE static uint32 __PPO__HMDMeshComponent() { return STRUCT_OFFSET(AVREditorTeleporter, HMDMeshComponent); } \
	FORCEINLINE static uint32 __PPO__LeftMotionControllerMeshComponent() { return STRUCT_OFFSET(AVREditorTeleporter, LeftMotionControllerMeshComponent); } \
	FORCEINLINE static uint32 __PPO__RightMotionControllerMeshComponent() { return STRUCT_OFFSET(AVREditorTeleporter, RightMotionControllerMeshComponent); } \
	FORCEINLINE static uint32 __PPO__TeleportMID() { return STRUCT_OFFSET(AVREditorTeleporter, TeleportMID); } \
	FORCEINLINE static uint32 __PPO__InteractorTryingTeleport() { return STRUCT_OFFSET(AVREditorTeleporter, InteractorTryingTeleport); }


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_18_PROLOG \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_EVENT_PARMS


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_CALLBACK_WRAPPERS \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_INCLASS \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_CALLBACK_WRAPPERS \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AVREditorTeleporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

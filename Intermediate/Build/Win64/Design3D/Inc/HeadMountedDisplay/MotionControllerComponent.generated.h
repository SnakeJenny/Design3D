// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
class UStaticMesh;
#ifdef HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h
#error "MotionControllerComponent.generated.h already included, missing '#pragma once' in MotionControllerComponent.h"
#endif
#define HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_UBOOL_REF(Z_Param_Out_bValueFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetParameterValue(Z_Param_InName,Z_Param_Out_bValueFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAssociatedPlayerIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAssociatedPlayerIndex(Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackingMotionSource) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackingMotionSource(Z_Param_NewSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingSource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EControllerHand*)Z_Param__Result=P_THIS->GetTrackingSource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackingSource) \
	{ \
		P_GET_ENUM(EControllerHand,Z_Param_NewSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackingSource(EControllerHand(Z_Param_NewSource)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDisplayMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_NewDisplayMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomDisplayMesh(Z_Param_NewDisplayMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisplayModelSource) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewDisplayModelSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisplayModelSource(Z_Param_NewDisplayModelSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowDeviceModel) \
	{ \
		P_GET_UBOOL(Z_Param_bShowControllerModel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowDeviceModel(Z_Param_bShowControllerModel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTracked(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_UBOOL_REF(Z_Param_Out_bValueFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetParameterValue(Z_Param_InName,Z_Param_Out_bValueFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAssociatedPlayerIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAssociatedPlayerIndex(Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackingMotionSource) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackingMotionSource(Z_Param_NewSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingSource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EControllerHand*)Z_Param__Result=P_THIS->GetTrackingSource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackingSource) \
	{ \
		P_GET_ENUM(EControllerHand,Z_Param_NewSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackingSource(EControllerHand(Z_Param_NewSource)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDisplayMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_NewDisplayMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomDisplayMesh(Z_Param_NewDisplayMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisplayModelSource) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewDisplayModelSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisplayModelSource(Z_Param_NewDisplayModelSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowDeviceModel) \
	{ \
		P_GET_UBOOL(Z_Param_bShowControllerModel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowDeviceModel(Z_Param_bShowControllerModel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTracked(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_EVENT_PARMS
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMotionControllerComponent, NO_API)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionControllerComponent(UMotionControllerComponent&&); \
	NO_API UMotionControllerComponent(const UMotionControllerComponent&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionControllerComponent(UMotionControllerComponent&&); \
	NO_API UMotionControllerComponent(const UMotionControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayComponent() { return STRUCT_OFFSET(UMotionControllerComponent, DisplayComponent); }


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_19_PROLOG \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_EVENT_PARMS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MotionControllerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UMotionControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

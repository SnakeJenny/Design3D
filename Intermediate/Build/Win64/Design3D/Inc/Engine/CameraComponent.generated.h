// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
struct FMinimalViewInfo;
#ifdef ENGINE_CameraComponent_generated_h
#error "CameraComponent.generated.h already included, missing '#pragma once' in CameraComponent.h"
#endif
#define ENGINE_CameraComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBlendable(Z_Param_InBlendableObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_DesiredView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCameraView(Z_Param_DeltaTime,Z_Param_Out_DesiredView); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPostProcessBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPostProcessBlendWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPostProcessBlendWeight(Z_Param_InPostProcessBlendWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProjectionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InProjectionMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProjectionMode(ECameraProjectionMode::Type(Z_Param_InProjectionMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseFieldOfViewForLOD) \
	{ \
		P_GET_UBOOL(Z_Param_bInUseFieldOfViewForLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseFieldOfViewForLOD(Z_Param_bInUseFieldOfViewForLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintAspectRatio) \
	{ \
		P_GET_UBOOL(Z_Param_bInConstrainAspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintAspectRatio(Z_Param_bInConstrainAspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAspectRatio) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAspectRatio(Z_Param_InAspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoFarClipPlane) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoFarClipPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrthoFarClipPlane(Z_Param_InOrthoFarClipPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoNearClipPlane) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoNearClipPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrthoNearClipPlane(Z_Param_InOrthoNearClipPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrthoWidth(Z_Param_InOrthoWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFieldOfView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFieldOfView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFieldOfView(Z_Param_InFieldOfView); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBlendable(Z_Param_InBlendableObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_DesiredView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCameraView(Z_Param_DeltaTime,Z_Param_Out_DesiredView); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPostProcessBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPostProcessBlendWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPostProcessBlendWeight(Z_Param_InPostProcessBlendWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProjectionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InProjectionMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProjectionMode(ECameraProjectionMode::Type(Z_Param_InProjectionMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseFieldOfViewForLOD) \
	{ \
		P_GET_UBOOL(Z_Param_bInUseFieldOfViewForLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseFieldOfViewForLOD(Z_Param_bInUseFieldOfViewForLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintAspectRatio) \
	{ \
		P_GET_UBOOL(Z_Param_bInConstrainAspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintAspectRatio(Z_Param_bInConstrainAspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAspectRatio) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAspectRatio(Z_Param_InAspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoFarClipPlane) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoFarClipPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrthoFarClipPlane(Z_Param_InOrthoFarClipPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoNearClipPlane) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoNearClipPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrthoNearClipPlane(Z_Param_InOrthoNearClipPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrthoWidth(Z_Param_InOrthoWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFieldOfView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFieldOfView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFieldOfView(Z_Param_InFieldOfView); \
		P_NATIVE_END; \
	}


#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFilmbackText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetFilmbackText(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFilmbackText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetFilmbackText(); \
		P_NATIVE_END; \
	}


#else
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCameraComponent, NO_API)


#else
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraComponent(); \
	friend struct Z_Construct_UClass_UCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraComponent) \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCameraComponent(); \
	friend struct Z_Construct_UClass_UCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraComponent) \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraComponent(UCameraComponent&&); \
	NO_API UCameraComponent(const UCameraComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraComponent(UCameraComponent&&); \
	NO_API UCameraComponent(const UCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraComponent)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

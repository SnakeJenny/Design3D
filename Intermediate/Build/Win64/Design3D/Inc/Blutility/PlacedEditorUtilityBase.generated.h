// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FRotator;
#ifdef BLUTILITY_PlacedEditorUtilityBase_generated_h
#error "PlacedEditorUtilityBase.generated.h already included, missing '#pragma once' in PlacedEditorUtilityBase.h"
#endif
#define BLUTILITY_PlacedEditorUtilityBase_generated_h

#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActorReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorSelectionState) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bShouldBeSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorSelectionState(Z_Param_Actor,Z_Param_bShouldBeSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearActorSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearActorSelectionSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CameraLocation); \
		P_GET_STRUCT(FRotator,Z_Param_CameraRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevelViewportCameraInfo(Z_Param_CameraLocation,Z_Param_CameraRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLevelViewportCameraInfo(Z_Param_Out_CameraLocation,Z_Param_Out_CameraRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSelectionSet(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActorReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorSelectionState) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bShouldBeSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorSelectionState(Z_Param_Actor,Z_Param_bShouldBeSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearActorSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearActorSelectionSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CameraLocation); \
		P_GET_STRUCT(FRotator,Z_Param_CameraRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevelViewportCameraInfo(Z_Param_CameraLocation,Z_Param_CameraRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLevelViewportCameraInfo(Z_Param_Out_CameraLocation,Z_Param_Out_CameraRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSelectionSet(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlacedEditorUtilityBase(); \
	friend struct Z_Construct_UClass_APlacedEditorUtilityBase_Statics; \
public: \
	DECLARE_CLASS(APlacedEditorUtilityBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(APlacedEditorUtilityBase)


#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlacedEditorUtilityBase(); \
	friend struct Z_Construct_UClass_APlacedEditorUtilityBase_Statics; \
public: \
	DECLARE_CLASS(APlacedEditorUtilityBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(APlacedEditorUtilityBase)


#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlacedEditorUtilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlacedEditorUtilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlacedEditorUtilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlacedEditorUtilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlacedEditorUtilityBase(APlacedEditorUtilityBase&&); \
	NO_API APlacedEditorUtilityBase(const APlacedEditorUtilityBase&); \
public:


#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlacedEditorUtilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlacedEditorUtilityBase(APlacedEditorUtilityBase&&); \
	NO_API APlacedEditorUtilityBase(const APlacedEditorUtilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlacedEditorUtilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlacedEditorUtilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlacedEditorUtilityBase)


#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_14_PROLOG
#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_RPC_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_INCLASS \
	Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlacedEditorUtilityBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class APlacedEditorUtilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

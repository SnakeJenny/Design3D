// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorAvatarActor_generated_h
#error "VREditorAvatarActor.generated.h already included, missing '#pragma once' in VREditorAvatarActor.h"
#endif
#define VREDITOR_VREditorAvatarActor_generated_h

#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorAvatarActor(); \
	friend struct Z_Construct_UClass_AVREditorAvatarActor_Statics; \
public: \
	DECLARE_CLASS(AVREditorAvatarActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorAvatarActor)


#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAVREditorAvatarActor(); \
	friend struct Z_Construct_UClass_AVREditorAvatarActor_Statics; \
public: \
	DECLARE_CLASS(AVREditorAvatarActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorAvatarActor)


#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVREditorAvatarActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorAvatarActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorAvatarActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorAvatarActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorAvatarActor(AVREditorAvatarActor&&); \
	NO_API AVREditorAvatarActor(const AVREditorAvatarActor&); \
public:


#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorAvatarActor(AVREditorAvatarActor&&); \
	NO_API AVREditorAvatarActor(const AVREditorAvatarActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorAvatarActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorAvatarActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorAvatarActor)


#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeadMeshComponent() { return STRUCT_OFFSET(AVREditorAvatarActor, HeadMeshComponent); } \
	FORCEINLINE static uint32 __PPO__WorldMovementGridMeshComponent() { return STRUCT_OFFSET(AVREditorAvatarActor, WorldMovementGridMeshComponent); } \
	FORCEINLINE static uint32 __PPO__WorldMovementGridMID() { return STRUCT_OFFSET(AVREditorAvatarActor, WorldMovementGridMID); } \
	FORCEINLINE static uint32 __PPO__WorldMovementGridOpacity() { return STRUCT_OFFSET(AVREditorAvatarActor, WorldMovementGridOpacity); } \
	FORCEINLINE static uint32 __PPO__bIsDrawingWorldMovementPostProcess() { return STRUCT_OFFSET(AVREditorAvatarActor, bIsDrawingWorldMovementPostProcess); } \
	FORCEINLINE static uint32 __PPO__WorldMovementPostProcessMaterial() { return STRUCT_OFFSET(AVREditorAvatarActor, WorldMovementPostProcessMaterial); } \
	FORCEINLINE static uint32 __PPO__ScaleProgressMeshComponent() { return STRUCT_OFFSET(AVREditorAvatarActor, ScaleProgressMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentScaleProgressMeshComponent() { return STRUCT_OFFSET(AVREditorAvatarActor, CurrentScaleProgressMeshComponent); } \
	FORCEINLINE static uint32 __PPO__UserScaleIndicatorText() { return STRUCT_OFFSET(AVREditorAvatarActor, UserScaleIndicatorText); } \
	FORCEINLINE static uint32 __PPO__FixedUserScaleMID() { return STRUCT_OFFSET(AVREditorAvatarActor, FixedUserScaleMID); } \
	FORCEINLINE static uint32 __PPO__TranslucentFixedUserScaleMID() { return STRUCT_OFFSET(AVREditorAvatarActor, TranslucentFixedUserScaleMID); } \
	FORCEINLINE static uint32 __PPO__CurrentUserScaleMID() { return STRUCT_OFFSET(AVREditorAvatarActor, CurrentUserScaleMID); } \
	FORCEINLINE static uint32 __PPO__TranslucentCurrentUserScaleMID() { return STRUCT_OFFSET(AVREditorAvatarActor, TranslucentCurrentUserScaleMID); } \
	FORCEINLINE static uint32 __PPO__PostProcessComponent() { return STRUCT_OFFSET(AVREditorAvatarActor, PostProcessComponent); } \
	FORCEINLINE static uint32 __PPO__VRMode() { return STRUCT_OFFSET(AVREditorAvatarActor, VRMode); }


#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_15_PROLOG
#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_INCLASS \
	Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorAvatarActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AVREditorAvatarActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_VREditorAvatarActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

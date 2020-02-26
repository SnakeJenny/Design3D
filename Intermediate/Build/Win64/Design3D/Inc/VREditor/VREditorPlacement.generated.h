// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorPlacement_generated_h
#error "VREditorPlacement.generated.h already included, missing '#pragma once' in VREditorPlacement.h"
#endif
#define VREDITOR_VREditorPlacement_generated_h

#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorPlacement(); \
	friend struct Z_Construct_UClass_UVREditorPlacement_Statics; \
public: \
	DECLARE_CLASS(UVREditorPlacement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorPlacement)


#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVREditorPlacement(); \
	friend struct Z_Construct_UClass_UVREditorPlacement_Statics; \
public: \
	DECLARE_CLASS(UVREditorPlacement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorPlacement)


#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREditorPlacement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorPlacement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorPlacement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorPlacement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorPlacement(UVREditorPlacement&&); \
	NO_API UVREditorPlacement(const UVREditorPlacement&); \
public:


#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorPlacement(UVREditorPlacement&&); \
	NO_API UVREditorPlacement(const UVREditorPlacement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorPlacement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorPlacement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorPlacement)


#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VRMode() { return STRUCT_OFFSET(UVREditorPlacement, VRMode); } \
	FORCEINLINE static uint32 __PPO__ViewportWorldInteraction() { return STRUCT_OFFSET(UVREditorPlacement, ViewportWorldInteraction); } \
	FORCEINLINE static uint32 __PPO__FloatingUIAssetDraggedFrom() { return STRUCT_OFFSET(UVREditorPlacement, FloatingUIAssetDraggedFrom); } \
	FORCEINLINE static uint32 __PPO__PlacingMaterialOrTextureAsset() { return STRUCT_OFFSET(UVREditorPlacement, PlacingMaterialOrTextureAsset); }


#define Engine_Source_Editor_VREditor_VREditorPlacement_h_20_PROLOG
#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorPlacement_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorPlacement_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_VREditorPlacement_h_23_INCLASS \
	Engine_Source_Editor_VREditor_VREditorPlacement_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_VREditorPlacement_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorPlacement_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorPlacement_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorPlacement_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorPlacement_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorPlacement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_VREditorPlacement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

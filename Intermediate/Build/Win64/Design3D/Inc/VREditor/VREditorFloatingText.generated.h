// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorFloatingText_generated_h
#error "VREditorFloatingText.generated.h already included, missing '#pragma once' in VREditorFloatingText.h"
#endif
#define VREDITOR_VREditorFloatingText_generated_h

#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloatingText(); \
	friend struct Z_Construct_UClass_AFloatingText_Statics; \
public: \
	DECLARE_CLASS(AFloatingText, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AFloatingText)


#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFloatingText(); \
	friend struct Z_Construct_UClass_AFloatingText_Statics; \
public: \
	DECLARE_CLASS(AFloatingText, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AFloatingText)


#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloatingText(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloatingText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloatingText(AFloatingText&&); \
	NO_API AFloatingText(const AFloatingText&); \
public:


#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloatingText(AFloatingText&&); \
	NO_API AFloatingText(const AFloatingText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingText); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloatingText)


#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(AFloatingText, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__FirstLineComponent() { return STRUCT_OFFSET(AFloatingText, FirstLineComponent); } \
	FORCEINLINE static uint32 __PPO__JointSphereComponent() { return STRUCT_OFFSET(AFloatingText, JointSphereComponent); } \
	FORCEINLINE static uint32 __PPO__SecondLineComponent() { return STRUCT_OFFSET(AFloatingText, SecondLineComponent); } \
	FORCEINLINE static uint32 __PPO__TextComponent() { return STRUCT_OFFSET(AFloatingText, TextComponent); } \
	FORCEINLINE static uint32 __PPO__MaskedTextMaterial() { return STRUCT_OFFSET(AFloatingText, MaskedTextMaterial); } \
	FORCEINLINE static uint32 __PPO__TranslucentTextMaterial() { return STRUCT_OFFSET(AFloatingText, TranslucentTextMaterial); } \
	FORCEINLINE static uint32 __PPO__LineMaterial() { return STRUCT_OFFSET(AFloatingText, LineMaterial); } \
	FORCEINLINE static uint32 __PPO__LineMaterialMID() { return STRUCT_OFFSET(AFloatingText, LineMaterialMID); }


#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_13_PROLOG
#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_INCLASS \
	Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorFloatingText_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AFloatingText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_VREditorFloatingText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

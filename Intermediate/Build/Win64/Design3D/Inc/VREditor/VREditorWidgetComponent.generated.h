// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorWidgetComponent_generated_h
#error "VREditorWidgetComponent.generated.h already included, missing '#pragma once' in VREditorWidgetComponent.h"
#endif
#define VREDITOR_VREditorWidgetComponent_generated_h

#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorWidgetComponent(); \
	friend struct Z_Construct_UClass_UVREditorWidgetComponent_Statics; \
public: \
	DECLARE_CLASS(UVREditorWidgetComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorWidgetComponent)


#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVREditorWidgetComponent(); \
	friend struct Z_Construct_UClass_UVREditorWidgetComponent_Statics; \
public: \
	DECLARE_CLASS(UVREditorWidgetComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorWidgetComponent)


#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREditorWidgetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorWidgetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorWidgetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorWidgetComponent(UVREditorWidgetComponent&&); \
	NO_API UVREditorWidgetComponent(const UVREditorWidgetComponent&); \
public:


#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorWidgetComponent(UVREditorWidgetComponent&&); \
	NO_API UVREditorWidgetComponent(const UVREditorWidgetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorWidgetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorWidgetComponent)


#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DrawingPolicy() { return STRUCT_OFFSET(UVREditorWidgetComponent, DrawingPolicy); } \
	FORCEINLINE static uint32 __PPO__bIsHovering() { return STRUCT_OFFSET(UVREditorWidgetComponent, bIsHovering); } \
	FORCEINLINE static uint32 __PPO__bHasEverDrawn() { return STRUCT_OFFSET(UVREditorWidgetComponent, bHasEverDrawn); }


#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_20_PROLOG
#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_INCLASS \
	Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorWidgetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_VREditorWidgetComponent_h


#define FOREACH_ENUM_EVREDITORWIDGETDRAWINGPOLICY(op) \
	op(EVREditorWidgetDrawingPolicy::Always) \
	op(EVREditorWidgetDrawingPolicy::Hovering) 

enum class EVREditorWidgetDrawingPolicy : uint8;
template<> VREDITOR_API UEnum* StaticEnum<EVREditorWidgetDrawingPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

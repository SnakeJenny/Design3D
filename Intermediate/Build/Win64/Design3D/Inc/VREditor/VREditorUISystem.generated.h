// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorUISystem_generated_h
#error "VREditorUISystem.generated.h already included, missing '#pragma once' in VREditorUISystem.h"
#endif
#define VREDITOR_VREditorUISystem_generated_h

#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRButton_Statics; \
	VREDITOR_API static class UScriptStruct* StaticStruct();


template<> VREDITOR_API UScriptStruct* StaticStruct<struct FVRButton>();

#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorUISystem(); \
	friend struct Z_Construct_UClass_UVREditorUISystem_Statics; \
public: \
	DECLARE_CLASS(UVREditorUISystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorUISystem)


#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUVREditorUISystem(); \
	friend struct Z_Construct_UClass_UVREditorUISystem_Statics; \
public: \
	DECLARE_CLASS(UVREditorUISystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorUISystem)


#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREditorUISystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorUISystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorUISystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorUISystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorUISystem(UVREditorUISystem&&); \
	NO_API UVREditorUISystem(const UVREditorUISystem&); \
public:


#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorUISystem(UVREditorUISystem&&); \
	NO_API UVREditorUISystem(const UVREditorUISystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorUISystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorUISystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorUISystem)


#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VRMode() { return STRUCT_OFFSET(UVREditorUISystem, VRMode); } \
	FORCEINLINE static uint32 __PPO__FloatingUIs() { return STRUCT_OFFSET(UVREditorUISystem, FloatingUIs); } \
	FORCEINLINE static uint32 __PPO__PreviewWindowInfo() { return STRUCT_OFFSET(UVREditorUISystem, PreviewWindowInfo); } \
	FORCEINLINE static uint32 __PPO__InfoDisplayPanel() { return STRUCT_OFFSET(UVREditorUISystem, InfoDisplayPanel); } \
	FORCEINLINE static uint32 __PPO__QuickRadialMenu() { return STRUCT_OFFSET(UVREditorUISystem, QuickRadialMenu); } \
	FORCEINLINE static uint32 __PPO__DraggingUI() { return STRUCT_OFFSET(UVREditorUISystem, DraggingUI); } \
	FORCEINLINE static uint32 __PPO__ColorPickerUI() { return STRUCT_OFFSET(UVREditorUISystem, ColorPickerUI); } \
	FORCEINLINE static uint32 __PPO__LaserInteractor() { return STRUCT_OFFSET(UVREditorUISystem, LaserInteractor); } \
	FORCEINLINE static uint32 __PPO__UIInteractor() { return STRUCT_OFFSET(UVREditorUISystem, UIInteractor); } \
	FORCEINLINE static uint32 __PPO__VRButtons() { return STRUCT_OFFSET(UVREditorUISystem, VRButtons); } \
	FORCEINLINE static uint32 __PPO__RadialMenuHandler() { return STRUCT_OFFSET(UVREditorUISystem, RadialMenuHandler); }


#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_96_PROLOG
#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_INCLASS \
	Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorUISystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_UI_VREditorUISystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

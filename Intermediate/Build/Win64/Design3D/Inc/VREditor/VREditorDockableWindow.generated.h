// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorDockableWindow_generated_h
#error "VREditorDockableWindow.generated.h already included, missing '#pragma once' in VREditorDockableWindow.h"
#endif
#define VREDITOR_VREditorDockableWindow_generated_h

#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorDockableWindow(); \
	friend struct Z_Construct_UClass_AVREditorDockableWindow_Statics; \
public: \
	DECLARE_CLASS(AVREditorDockableWindow, AVREditorFloatingUI, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorDockableWindow) \
	virtual UObject* _getUObject() const override { return const_cast<AVREditorDockableWindow*>(this); }


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAVREditorDockableWindow(); \
	friend struct Z_Construct_UClass_AVREditorDockableWindow_Statics; \
public: \
	DECLARE_CLASS(AVREditorDockableWindow, AVREditorFloatingUI, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorDockableWindow) \
	virtual UObject* _getUObject() const override { return const_cast<AVREditorDockableWindow*>(this); }


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVREditorDockableWindow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorDockableWindow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorDockableWindow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorDockableWindow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorDockableWindow(AVREditorDockableWindow&&); \
	NO_API AVREditorDockableWindow(const AVREditorDockableWindow&); \
public:


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorDockableWindow(AVREditorDockableWindow&&); \
	NO_API AVREditorDockableWindow(const AVREditorDockableWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorDockableWindow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorDockableWindow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorDockableWindow)


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DockButtonMeshComponent() { return STRUCT_OFFSET(AVREditorDockableWindow, DockButtonMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SelectionBarMeshComponent() { return STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CloseButtonMeshComponent() { return STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonMeshComponent); } \
	FORCEINLINE static uint32 __PPO__DockButtonMID() { return STRUCT_OFFSET(AVREditorDockableWindow, DockButtonMID); } \
	FORCEINLINE static uint32 __PPO__SelectionBarMID() { return STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarMID); } \
	FORCEINLINE static uint32 __PPO__SelectionBarTranslucentMID() { return STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarTranslucentMID); } \
	FORCEINLINE static uint32 __PPO__CloseButtonMID() { return STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonMID); } \
	FORCEINLINE static uint32 __PPO__CloseButtonTranslucentMID() { return STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonTranslucentMID); } \
	FORCEINLINE static uint32 __PPO__DragOperationComponent() { return STRUCT_OFFSET(AVREditorDockableWindow, DragOperationComponent); }


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_18_PROLOG
#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_INCLASS \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AVREditorDockableWindow>();

#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDockableWindowDragOperation(); \
	friend struct Z_Construct_UClass_UDockableWindowDragOperation_Statics; \
public: \
	DECLARE_CLASS(UDockableWindowDragOperation, UViewportDragOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UDockableWindowDragOperation)


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUDockableWindowDragOperation(); \
	friend struct Z_Construct_UClass_UDockableWindowDragOperation_Statics; \
public: \
	DECLARE_CLASS(UDockableWindowDragOperation, UViewportDragOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UDockableWindowDragOperation)


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDockableWindowDragOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDockableWindowDragOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDockableWindowDragOperation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDockableWindowDragOperation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDockableWindowDragOperation(UDockableWindowDragOperation&&); \
	NO_API UDockableWindowDragOperation(const UDockableWindowDragOperation&); \
public:


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDockableWindowDragOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDockableWindowDragOperation(UDockableWindowDragOperation&&); \
	NO_API UDockableWindowDragOperation(const UDockableWindowDragOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDockableWindowDragOperation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDockableWindowDragOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDockableWindowDragOperation)


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_144_PROLOG
#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_INCLASS \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UDockableWindowDragOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

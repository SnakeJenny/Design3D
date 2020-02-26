// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorBaseUserWidget_generated_h
#error "VREditorBaseUserWidget.generated.h already included, missing '#pragma once' in VREditorBaseUserWidget.h"
#endif
#define VREDITOR_VREditorBaseUserWidget_generated_h

#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorBaseUserWidget(); \
	friend struct Z_Construct_UClass_UVREditorBaseUserWidget_Statics; \
public: \
	DECLARE_CLASS(UVREditorBaseUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorBaseUserWidget)


#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVREditorBaseUserWidget(); \
	friend struct Z_Construct_UClass_UVREditorBaseUserWidget_Statics; \
public: \
	DECLARE_CLASS(UVREditorBaseUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorBaseUserWidget)


#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREditorBaseUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorBaseUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorBaseUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorBaseUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorBaseUserWidget(UVREditorBaseUserWidget&&); \
	NO_API UVREditorBaseUserWidget(const UVREditorBaseUserWidget&); \
public:


#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorBaseUserWidget(UVREditorBaseUserWidget&&); \
	NO_API UVREditorBaseUserWidget(const UVREditorBaseUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorBaseUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorBaseUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorBaseUserWidget)


#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(UVREditorBaseUserWidget, Owner); }


#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_16_PROLOG
#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_INCLASS \
	Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorBaseUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

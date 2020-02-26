// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorBaseActor_generated_h
#error "VREditorBaseActor.generated.h already included, missing '#pragma once' in VREditorBaseActor.h"
#endif
#define VREDITOR_VREditorBaseActor_generated_h

#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorBaseActor(); \
	friend struct Z_Construct_UClass_AVREditorBaseActor_Statics; \
public: \
	DECLARE_CLASS(AVREditorBaseActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorBaseActor)


#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAVREditorBaseActor(); \
	friend struct Z_Construct_UClass_AVREditorBaseActor_Statics; \
public: \
	DECLARE_CLASS(AVREditorBaseActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorBaseActor)


#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVREditorBaseActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorBaseActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorBaseActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorBaseActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorBaseActor(AVREditorBaseActor&&); \
	NO_API AVREditorBaseActor(const AVREditorBaseActor&); \
public:


#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorBaseActor(AVREditorBaseActor&&); \
	NO_API AVREditorBaseActor(const AVREditorBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorBaseActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorBaseActor)


#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VRMode() { return STRUCT_OFFSET(AVREditorBaseActor, VRMode); }


#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_13_PROLOG
#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_INCLASS \
	Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VREditorBaseActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AVREditorBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_VREditorBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

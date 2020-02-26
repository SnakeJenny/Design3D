// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundCueGraphNode_generated_h
#error "SoundCueGraphNode.generated.h already included, missing '#pragma once' in SoundCueGraphNode.h"
#endif
#define AUDIOEDITOR_SoundCueGraphNode_generated_h

#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundCueGraphNode(); \
	friend struct Z_Construct_UClass_USoundCueGraphNode_Statics; \
public: \
	DECLARE_CLASS(USoundCueGraphNode, USoundCueGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundCueGraphNode)


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraphNode(); \
	friend struct Z_Construct_UClass_USoundCueGraphNode_Statics; \
public: \
	DECLARE_CLASS(USoundCueGraphNode, USoundCueGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundCueGraphNode)


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundCueGraphNode(USoundCueGraphNode&&); \
	AUDIOEDITOR_API USoundCueGraphNode(const USoundCueGraphNode&); \
public:


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundCueGraphNode(USoundCueGraphNode&&); \
	AUDIOEDITOR_API USoundCueGraphNode(const USoundCueGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphNode)


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_13_PROLOG
#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_INCLASS \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundCueGraphNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundCueGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

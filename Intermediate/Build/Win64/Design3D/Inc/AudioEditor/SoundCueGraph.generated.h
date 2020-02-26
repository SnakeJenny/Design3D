// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundCueGraph_generated_h
#error "SoundCueGraph.generated.h already included, missing '#pragma once' in SoundCueGraph.h"
#endif
#define AUDIOEDITOR_SoundCueGraph_generated_h

#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundCueGraph(); \
	friend struct Z_Construct_UClass_USoundCueGraph_Statics; \
public: \
	DECLARE_CLASS(USoundCueGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundCueGraph)


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraph(); \
	friend struct Z_Construct_UClass_USoundCueGraph_Statics; \
public: \
	DECLARE_CLASS(USoundCueGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundCueGraph)


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundCueGraph(USoundCueGraph&&); \
	AUDIOEDITOR_API USoundCueGraph(const USoundCueGraph&); \
public:


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundCueGraph(USoundCueGraph&&); \
	AUDIOEDITOR_API USoundCueGraph(const USoundCueGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraph)


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_10_PROLOG
#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_INCLASS \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundCueGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundCueGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

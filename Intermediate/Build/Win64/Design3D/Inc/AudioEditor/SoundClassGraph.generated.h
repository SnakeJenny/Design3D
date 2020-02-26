// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundClassGraph_generated_h
#error "SoundClassGraph.generated.h already included, missing '#pragma once' in SoundClassGraph.h"
#endif
#define AUDIOEDITOR_SoundClassGraph_generated_h

#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_RPC_WRAPPERS
#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundClassGraph(); \
	friend struct Z_Construct_UClass_USoundClassGraph_Statics; \
public: \
	DECLARE_CLASS(USoundClassGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundClassGraph)


#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClassGraph(); \
	friend struct Z_Construct_UClass_USoundClassGraph_Statics; \
public: \
	DECLARE_CLASS(USoundClassGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundClassGraph)


#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundClassGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClassGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundClassGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClassGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundClassGraph(USoundClassGraph&&); \
	AUDIOEDITOR_API USoundClassGraph(const USoundClassGraph&); \
public:


#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundClassGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundClassGraph(USoundClassGraph&&); \
	AUDIOEDITOR_API USoundClassGraph(const USoundClassGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundClassGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClassGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClassGraph)


#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_12_PROLOG
#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_INCLASS \
	Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundClassGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundClassGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

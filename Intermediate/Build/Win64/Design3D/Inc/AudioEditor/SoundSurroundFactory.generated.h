// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundSurroundFactory_generated_h
#error "SoundSurroundFactory.generated.h already included, missing '#pragma once' in SoundSurroundFactory.h"
#endif
#define AUDIOEDITOR_SoundSurroundFactory_generated_h

#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_RPC_WRAPPERS
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSurroundFactory(); \
	friend struct Z_Construct_UClass_USoundSurroundFactory_Statics; \
public: \
	DECLARE_CLASS(USoundSurroundFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundSurroundFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSurroundFactory(); \
	friend struct Z_Construct_UClass_USoundSurroundFactory_Statics; \
public: \
	DECLARE_CLASS(USoundSurroundFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundSurroundFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSurroundFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSurroundFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSurroundFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSurroundFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundSurroundFactory(USoundSurroundFactory&&); \
	AUDIOEDITOR_API USoundSurroundFactory(const USoundSurroundFactory&); \
public:


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSurroundFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundSurroundFactory(USoundSurroundFactory&&); \
	AUDIOEDITOR_API USoundSurroundFactory(const USoundSurroundFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSurroundFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSurroundFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSurroundFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_27_PROLOG
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_RPC_WRAPPERS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_INCLASS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSurroundFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundSurroundFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSurroundFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

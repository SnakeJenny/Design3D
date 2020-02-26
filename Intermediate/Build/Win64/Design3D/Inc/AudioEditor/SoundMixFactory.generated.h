// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundMixFactory_generated_h
#error "SoundMixFactory.generated.h already included, missing '#pragma once' in SoundMixFactory.h"
#endif
#define AUDIOEDITOR_SoundMixFactory_generated_h

#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_RPC_WRAPPERS
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundMixFactory(); \
	friend struct Z_Construct_UClass_USoundMixFactory_Statics; \
public: \
	DECLARE_CLASS(USoundMixFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundMixFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSoundMixFactory(); \
	friend struct Z_Construct_UClass_USoundMixFactory_Statics; \
public: \
	DECLARE_CLASS(USoundMixFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundMixFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundMixFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMixFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundMixFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMixFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundMixFactory(USoundMixFactory&&); \
	AUDIOEDITOR_API USoundMixFactory(const USoundMixFactory&); \
public:


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundMixFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundMixFactory(USoundMixFactory&&); \
	AUDIOEDITOR_API USoundMixFactory(const USoundMixFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundMixFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMixFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMixFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_14_PROLOG
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_RPC_WRAPPERS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_INCLASS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundMixFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundMixFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

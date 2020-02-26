// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundClassFactory_generated_h
#error "SoundClassFactory.generated.h already included, missing '#pragma once' in SoundClassFactory.h"
#endif
#define AUDIOEDITOR_SoundClassFactory_generated_h

#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_RPC_WRAPPERS
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundClassFactory(); \
	friend struct Z_Construct_UClass_USoundClassFactory_Statics; \
public: \
	DECLARE_CLASS(USoundClassFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundClassFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClassFactory(); \
	friend struct Z_Construct_UClass_USoundClassFactory_Statics; \
public: \
	DECLARE_CLASS(USoundClassFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundClassFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundClassFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClassFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundClassFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClassFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundClassFactory(USoundClassFactory&&); \
	AUDIOEDITOR_API USoundClassFactory(const USoundClassFactory&); \
public:


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundClassFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundClassFactory(USoundClassFactory&&); \
	AUDIOEDITOR_API USoundClassFactory(const USoundClassFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundClassFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClassFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClassFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_14_PROLOG
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_RPC_WRAPPERS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_INCLASS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundClassFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundClassFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

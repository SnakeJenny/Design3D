// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundSourceBusFactory_generated_h
#error "SoundSourceBusFactory.generated.h already included, missing '#pragma once' in SoundSourceBusFactory.h"
#endif
#define AUDIOEDITOR_SoundSourceBusFactory_generated_h

#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSourceBusFactory(); \
	friend struct Z_Construct_UClass_USoundSourceBusFactory_Statics; \
public: \
	DECLARE_CLASS(USoundSourceBusFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundSourceBusFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSourceBusFactory(); \
	friend struct Z_Construct_UClass_USoundSourceBusFactory_Statics; \
public: \
	DECLARE_CLASS(USoundSourceBusFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundSourceBusFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSourceBusFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBusFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSourceBusFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBusFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundSourceBusFactory(USoundSourceBusFactory&&); \
	AUDIOEDITOR_API USoundSourceBusFactory(const USoundSourceBusFactory&); \
public:


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSourceBusFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundSourceBusFactory(USoundSourceBusFactory&&); \
	AUDIOEDITOR_API USoundSourceBusFactory(const USoundSourceBusFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSourceBusFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBusFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBusFactory)


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_11_PROLOG
#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_INCLASS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSourceBusFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundSourceBusFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeMixer_generated_h
#error "SoundNodeMixer.generated.h already included, missing '#pragma once' in SoundNodeMixer.h"
#endif
#define ENGINE_SoundNodeMixer_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeMixer(); \
	friend struct Z_Construct_UClass_USoundNodeMixer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeMixer, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeMixer)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeMixer(); \
	friend struct Z_Construct_UClass_USoundNodeMixer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeMixer, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeMixer)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeMixer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeMixer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeMixer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeMixer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeMixer(USoundNodeMixer&&); \
	ENGINE_API USoundNodeMixer(const USoundNodeMixer&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeMixer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeMixer(USoundNodeMixer&&); \
	ENGINE_API USoundNodeMixer(const USoundNodeMixer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeMixer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeMixer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeMixer)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeMixer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeMixer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

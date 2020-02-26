// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundEffectPreset_generated_h
#error "SoundEffectPreset.generated.h already included, missing '#pragma once' in SoundEffectPreset.h"
#endif
#define ENGINE_SoundEffectPreset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundEffectPreset(); \
	friend struct Z_Construct_UClass_USoundEffectPreset_Statics; \
public: \
	DECLARE_CLASS(USoundEffectPreset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundEffectPreset) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSoundEffectPreset(); \
	friend struct Z_Construct_UClass_USoundEffectPreset_Statics; \
public: \
	DECLARE_CLASS(USoundEffectPreset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundEffectPreset) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundEffectPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundEffectPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundEffectPreset(USoundEffectPreset&&); \
	NO_API USoundEffectPreset(const USoundEffectPreset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundEffectPreset(USoundEffectPreset&&); \
	NO_API USoundEffectPreset(const USoundEffectPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundEffectPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectPreset)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundEffectPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

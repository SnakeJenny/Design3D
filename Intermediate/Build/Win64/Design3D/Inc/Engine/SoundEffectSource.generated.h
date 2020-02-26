// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundEffectSource_generated_h
#error "SoundEffectSource.generated.h already included, missing '#pragma once' in SoundEffectSource.h"
#endif
#define ENGINE_SoundEffectSource_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSourceEffectChainEntry>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundEffectSourcePreset(); \
	friend struct Z_Construct_UClass_USoundEffectSourcePreset_Statics; \
public: \
	DECLARE_CLASS(USoundEffectSourcePreset, USoundEffectPreset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundEffectSourcePreset)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSoundEffectSourcePreset(); \
	friend struct Z_Construct_UClass_USoundEffectSourcePreset_Statics; \
public: \
	DECLARE_CLASS(USoundEffectSourcePreset, USoundEffectPreset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundEffectSourcePreset)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundEffectSourcePreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectSourcePreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundEffectSourcePreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectSourcePreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundEffectSourcePreset(USoundEffectSourcePreset&&); \
	NO_API USoundEffectSourcePreset(const USoundEffectSourcePreset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundEffectSourcePreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundEffectSourcePreset(USoundEffectSourcePreset&&); \
	NO_API USoundEffectSourcePreset(const USoundEffectSourcePreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundEffectSourcePreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectSourcePreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectSourcePreset)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundEffectSourcePreset>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundEffectSourcePresetChain(); \
	friend struct Z_Construct_UClass_USoundEffectSourcePresetChain_Statics; \
public: \
	DECLARE_CLASS(USoundEffectSourcePresetChain, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundEffectSourcePresetChain)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUSoundEffectSourcePresetChain(); \
	friend struct Z_Construct_UClass_USoundEffectSourcePresetChain_Statics; \
public: \
	DECLARE_CLASS(USoundEffectSourcePresetChain, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundEffectSourcePresetChain)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundEffectSourcePresetChain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectSourcePresetChain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundEffectSourcePresetChain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectSourcePresetChain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundEffectSourcePresetChain(USoundEffectSourcePresetChain&&); \
	NO_API USoundEffectSourcePresetChain(const USoundEffectSourcePresetChain&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundEffectSourcePresetChain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundEffectSourcePresetChain(USoundEffectSourcePresetChain&&); \
	NO_API USoundEffectSourcePresetChain(const USoundEffectSourcePresetChain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundEffectSourcePresetChain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectSourcePresetChain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectSourcePresetChain)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_35_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundEffectSourcePresetChain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

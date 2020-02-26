// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundMix_generated_h
#error "SoundMix.generated.h already included, missing '#pragma once' in SoundMix.h"
#endif
#define ENGINE_SoundMix_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundClassAdjuster>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioEQEffect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioEQEffect>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundMix(); \
	friend struct Z_Construct_UClass_USoundMix_Statics; \
public: \
	DECLARE_CLASS(USoundMix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundMix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_INCLASS \
private: \
	static void StaticRegisterNativesUSoundMix(); \
	friend struct Z_Construct_UClass_USoundMix_Statics; \
public: \
	DECLARE_CLASS(USoundMix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundMix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundMix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundMix(USoundMix&&); \
	ENGINE_API USoundMix(const USoundMix&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundMix(USoundMix&&); \
	ENGINE_API USoundMix(const USoundMix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundMix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_136_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_139_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundMix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundMix>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

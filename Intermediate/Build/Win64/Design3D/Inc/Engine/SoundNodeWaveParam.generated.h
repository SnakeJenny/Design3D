// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeWaveParam_generated_h
#error "SoundNodeWaveParam.generated.h already included, missing '#pragma once' in SoundNodeWaveParam.h"
#endif
#define ENGINE_SoundNodeWaveParam_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeWaveParam(); \
	friend struct Z_Construct_UClass_USoundNodeWaveParam_Statics; \
public: \
	DECLARE_CLASS(USoundNodeWaveParam, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeWaveParam)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeWaveParam(); \
	friend struct Z_Construct_UClass_USoundNodeWaveParam_Statics; \
public: \
	DECLARE_CLASS(USoundNodeWaveParam, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeWaveParam)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeWaveParam(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeWaveParam) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeWaveParam); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeWaveParam); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeWaveParam(USoundNodeWaveParam&&); \
	ENGINE_API USoundNodeWaveParam(const USoundNodeWaveParam&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeWaveParam(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeWaveParam(USoundNodeWaveParam&&); \
	ENGINE_API USoundNodeWaveParam(const USoundNodeWaveParam&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeWaveParam); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeWaveParam); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeWaveParam)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeWaveParam."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeWaveParam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

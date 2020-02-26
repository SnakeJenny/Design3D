// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeAttenuation_generated_h
#error "SoundNodeAttenuation.generated.h already included, missing '#pragma once' in SoundNodeAttenuation.h"
#endif
#define ENGINE_SoundNodeAttenuation_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeAttenuation(); \
	friend struct Z_Construct_UClass_USoundNodeAttenuation_Statics; \
public: \
	DECLARE_CLASS(USoundNodeAttenuation, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeAttenuation)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeAttenuation(); \
	friend struct Z_Construct_UClass_USoundNodeAttenuation_Statics; \
public: \
	DECLARE_CLASS(USoundNodeAttenuation, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeAttenuation)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeAttenuation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeAttenuation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeAttenuation(USoundNodeAttenuation&&); \
	ENGINE_API USoundNodeAttenuation(const USoundNodeAttenuation&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeAttenuation(USoundNodeAttenuation&&); \
	ENGINE_API USoundNodeAttenuation(const USoundNodeAttenuation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeAttenuation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeAttenuation)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeAttenuation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeAttenuation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

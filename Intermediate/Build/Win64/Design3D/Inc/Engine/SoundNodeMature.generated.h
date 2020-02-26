// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeMature_generated_h
#error "SoundNodeMature.generated.h already included, missing '#pragma once' in SoundNodeMature.h"
#endif
#define ENGINE_SoundNodeMature_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeMature(); \
	friend struct Z_Construct_UClass_USoundNodeMature_Statics; \
public: \
	DECLARE_CLASS(USoundNodeMature, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeMature)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeMature(); \
	friend struct Z_Construct_UClass_USoundNodeMature_Statics; \
public: \
	DECLARE_CLASS(USoundNodeMature, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeMature)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeMature(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeMature) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeMature); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeMature); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeMature(USoundNodeMature&&); \
	ENGINE_API USoundNodeMature(const USoundNodeMature&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeMature(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeMature(USoundNodeMature&&); \
	ENGINE_API USoundNodeMature(const USoundNodeMature&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeMature); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeMature); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeMature)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeMature."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeMature>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

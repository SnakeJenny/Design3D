// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeBranch_generated_h
#error "SoundNodeBranch.generated.h already included, missing '#pragma once' in SoundNodeBranch.h"
#endif
#define ENGINE_SoundNodeBranch_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeBranch(); \
	friend struct Z_Construct_UClass_USoundNodeBranch_Statics; \
public: \
	DECLARE_CLASS(USoundNodeBranch, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeBranch)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeBranch(); \
	friend struct Z_Construct_UClass_USoundNodeBranch_Statics; \
public: \
	DECLARE_CLASS(USoundNodeBranch, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeBranch)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeBranch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeBranch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeBranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeBranch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeBranch(USoundNodeBranch&&); \
	ENGINE_API USoundNodeBranch(const USoundNodeBranch&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeBranch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeBranch(USoundNodeBranch&&); \
	ENGINE_API USoundNodeBranch(const USoundNodeBranch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeBranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeBranch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeBranch)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeBranch."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeBranch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

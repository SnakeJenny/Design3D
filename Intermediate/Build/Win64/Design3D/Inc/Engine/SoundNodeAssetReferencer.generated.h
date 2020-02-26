// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeAssetReferencer_generated_h
#error "SoundNodeAssetReferencer.generated.h already included, missing '#pragma once' in SoundNodeAssetReferencer.h"
#endif
#define ENGINE_SoundNodeAssetReferencer_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeAssetReferencer(); \
	friend struct Z_Construct_UClass_USoundNodeAssetReferencer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeAssetReferencer, USoundNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundNodeAssetReferencer)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeAssetReferencer(); \
	friend struct Z_Construct_UClass_USoundNodeAssetReferencer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeAssetReferencer, USoundNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundNodeAssetReferencer)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeAssetReferencer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeAssetReferencer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeAssetReferencer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeAssetReferencer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundNodeAssetReferencer(USoundNodeAssetReferencer&&); \
	NO_API USoundNodeAssetReferencer(const USoundNodeAssetReferencer&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeAssetReferencer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundNodeAssetReferencer(USoundNodeAssetReferencer&&); \
	NO_API USoundNodeAssetReferencer(const USoundNodeAssetReferencer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeAssetReferencer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeAssetReferencer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeAssetReferencer)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeAssetReferencer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeEnveloper_generated_h
#error "SoundNodeEnveloper.generated.h already included, missing '#pragma once' in SoundNodeEnveloper.h"
#endif
#define ENGINE_SoundNodeEnveloper_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeEnveloper, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeEnveloper(); \
	friend struct Z_Construct_UClass_USoundNodeEnveloper_Statics; \
public: \
	DECLARE_CLASS(USoundNodeEnveloper, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeEnveloper) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeEnveloper(); \
	friend struct Z_Construct_UClass_USoundNodeEnveloper_Statics; \
public: \
	DECLARE_CLASS(USoundNodeEnveloper, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeEnveloper) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeEnveloper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeEnveloper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeEnveloper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeEnveloper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeEnveloper(USoundNodeEnveloper&&); \
	ENGINE_API USoundNodeEnveloper(const USoundNodeEnveloper&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeEnveloper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeEnveloper(USoundNodeEnveloper&&); \
	ENGINE_API USoundNodeEnveloper(const USoundNodeEnveloper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeEnveloper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeEnveloper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeEnveloper)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeEnveloper."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeEnveloper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

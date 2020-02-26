// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerVolume_generated_h
#error "TriggerVolume.generated.h already included, missing '#pragma once' in TriggerVolume.h"
#endif
#define ENGINE_TriggerVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerVolume(); \
	friend struct Z_Construct_UClass_ATriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ATriggerVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ATriggerVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATriggerVolume(); \
	friend struct Z_Construct_UClass_ATriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ATriggerVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ATriggerVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerVolume(ATriggerVolume&&); \
	NO_API ATriggerVolume(const ATriggerVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerVolume(ATriggerVolume&&); \
	NO_API ATriggerVolume(const ATriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

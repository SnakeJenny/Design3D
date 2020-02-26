// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerCapsule_generated_h
#error "TriggerCapsule.generated.h already included, missing '#pragma once' in TriggerCapsule.h"
#endif
#define ENGINE_TriggerCapsule_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerCapsule(); \
	friend struct Z_Construct_UClass_ATriggerCapsule_Statics; \
public: \
	DECLARE_CLASS(ATriggerCapsule, ATriggerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ATriggerCapsule)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATriggerCapsule(); \
	friend struct Z_Construct_UClass_ATriggerCapsule_Statics; \
public: \
	DECLARE_CLASS(ATriggerCapsule, ATriggerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ATriggerCapsule)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerCapsule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerCapsule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerCapsule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerCapsule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerCapsule(ATriggerCapsule&&); \
	NO_API ATriggerCapsule(const ATriggerCapsule&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerCapsule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerCapsule(ATriggerCapsule&&); \
	NO_API ATriggerCapsule(const ATriggerCapsule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerCapsule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerCapsule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerCapsule)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerCapsule."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATriggerCapsule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

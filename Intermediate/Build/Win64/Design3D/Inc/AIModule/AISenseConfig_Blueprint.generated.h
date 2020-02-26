// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_Blueprint_generated_h
#error "AISenseConfig_Blueprint.generated.h already included, missing '#pragma once' in AISenseConfig_Blueprint.h"
#endif
#define AIMODULE_AISenseConfig_Blueprint_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Blueprint(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Blueprint_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig_Blueprint, UAISenseConfig, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Blueprint)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Blueprint(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Blueprint_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig_Blueprint, UAISenseConfig, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Blueprint)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISenseConfig_Blueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Blueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISenseConfig_Blueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Blueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISenseConfig_Blueprint(UAISenseConfig_Blueprint&&); \
	NO_API UAISenseConfig_Blueprint(const UAISenseConfig_Blueprint&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISenseConfig_Blueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISenseConfig_Blueprint(UAISenseConfig_Blueprint&&); \
	NO_API UAISenseConfig_Blueprint(const UAISenseConfig_Blueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISenseConfig_Blueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Blueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Blueprint)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_14_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISenseConfig_Blueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseConfig_Blueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

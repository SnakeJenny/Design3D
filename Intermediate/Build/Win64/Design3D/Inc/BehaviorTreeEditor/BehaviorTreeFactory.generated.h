// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_BehaviorTreeFactory_generated_h
#error "BehaviorTreeFactory.generated.h already included, missing '#pragma once' in BehaviorTreeFactory.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeFactory_generated_h

#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorTreeFactory(); \
	friend struct Z_Construct_UClass_UBehaviorTreeFactory_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeFactory)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeFactory(); \
	friend struct Z_Construct_UClass_UBehaviorTreeFactory_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeFactory)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeFactory(UBehaviorTreeFactory&&); \
	NO_API UBehaviorTreeFactory(const UBehaviorTreeFactory&); \
public:


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeFactory(UBehaviorTreeFactory&&); \
	NO_API UBehaviorTreeFactory(const UBehaviorTreeFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeFactory)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_10_PROLOG
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_INCLASS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BehaviorTreeFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UBehaviorTreeFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

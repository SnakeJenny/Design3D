// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraphNode_Logic_generated_h
#error "BehaviorTreeDecoratorGraphNode_Logic.generated.h already included, missing '#pragma once' in BehaviorTreeDecoratorGraphNode_Logic.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraphNode_Logic_generated_h

#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_RPC_WRAPPERS
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorTreeDecoratorGraphNode_Logic(); \
	friend struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeDecoratorGraphNode_Logic, UBehaviorTreeDecoratorGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeDecoratorGraphNode_Logic)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeDecoratorGraphNode_Logic(); \
	friend struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeDecoratorGraphNode_Logic, UBehaviorTreeDecoratorGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeDecoratorGraphNode_Logic)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeDecoratorGraphNode_Logic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeDecoratorGraphNode_Logic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeDecoratorGraphNode_Logic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeDecoratorGraphNode_Logic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeDecoratorGraphNode_Logic(UBehaviorTreeDecoratorGraphNode_Logic&&); \
	NO_API UBehaviorTreeDecoratorGraphNode_Logic(const UBehaviorTreeDecoratorGraphNode_Logic&); \
public:


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeDecoratorGraphNode_Logic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeDecoratorGraphNode_Logic(UBehaviorTreeDecoratorGraphNode_Logic&&); \
	NO_API UBehaviorTreeDecoratorGraphNode_Logic(const UBehaviorTreeDecoratorGraphNode_Logic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeDecoratorGraphNode_Logic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeDecoratorGraphNode_Logic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeDecoratorGraphNode_Logic)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_22_PROLOG
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_RPC_WRAPPERS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_INCLASS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BehaviorTreeDecoratorGraphNode_Logic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UBehaviorTreeDecoratorGraphNode_Logic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h


#define FOREACH_ENUM_EDECORATORLOGICMODE(op) \
	op(EDecoratorLogicMode::Sink) \
	op(EDecoratorLogicMode::And) \
	op(EDecoratorLogicMode::Or) \
	op(EDecoratorLogicMode::Not) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

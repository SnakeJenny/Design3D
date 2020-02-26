// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationStateMachineGraph_generated_h
#error "AnimationStateMachineGraph.generated.h already included, missing '#pragma once' in AnimationStateMachineGraph.h"
#endif
#define ANIMGRAPH_AnimationStateMachineGraph_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationStateMachineGraph(); \
	friend struct Z_Construct_UClass_UAnimationStateMachineGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationStateMachineGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationStateMachineGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationStateMachineGraph(); \
	friend struct Z_Construct_UClass_UAnimationStateMachineGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationStateMachineGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationStateMachineGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationStateMachineGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateMachineGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationStateMachineGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateMachineGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimationStateMachineGraph(UAnimationStateMachineGraph&&); \
	ANIMGRAPH_API UAnimationStateMachineGraph(const UAnimationStateMachineGraph&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationStateMachineGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimationStateMachineGraph(UAnimationStateMachineGraph&&); \
	ANIMGRAPH_API UAnimationStateMachineGraph(const UAnimationStateMachineGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationStateMachineGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateMachineGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateMachineGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_10_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationStateMachineGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationStateMachineGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimationStateMachineGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationTransitionGraph_generated_h
#error "AnimationTransitionGraph.generated.h already included, missing '#pragma once' in AnimationTransitionGraph.h"
#endif
#define ANIMGRAPH_AnimationTransitionGraph_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationTransitionGraph(); \
	friend struct Z_Construct_UClass_UAnimationTransitionGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationTransitionGraph, UAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationTransitionGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationTransitionGraph(); \
	friend struct Z_Construct_UClass_UAnimationTransitionGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationTransitionGraph, UAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationTransitionGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationTransitionGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationTransitionGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationTransitionGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationTransitionGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimationTransitionGraph(UAnimationTransitionGraph&&); \
	ANIMGRAPH_API UAnimationTransitionGraph(const UAnimationTransitionGraph&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationTransitionGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimationTransitionGraph(UAnimationTransitionGraph&&); \
	ANIMGRAPH_API UAnimationTransitionGraph(const UAnimationTransitionGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationTransitionGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationTransitionGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationTransitionGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_10_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationTransitionGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationTransitionGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimationTransitionGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

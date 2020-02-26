// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationGraph_generated_h
#error "AnimationGraph.generated.h already included, missing '#pragma once' in AnimationGraph.h"
#endif
#define ANIMGRAPH_AnimationGraph_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationGraph(); \
	friend struct Z_Construct_UClass_UAnimationGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationGraph(); \
	friend struct Z_Construct_UClass_UAnimationGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimationGraph(UAnimationGraph&&); \
	ANIMGRAPH_API UAnimationGraph(const UAnimationGraph&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimationGraph(UAnimationGraph&&); \
	ANIMGRAPH_API UAnimationGraph(const UAnimationGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationGraph)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_15_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimationGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

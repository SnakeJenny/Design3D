// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_K2Node_TransitionRuleGetter_generated_h
#error "K2Node_TransitionRuleGetter.generated.h already included, missing '#pragma once' in K2Node_TransitionRuleGetter.h"
#endif
#define ANIMGRAPH_K2Node_TransitionRuleGetter_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_TransitionRuleGetter(); \
	friend struct Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics; \
public: \
	DECLARE_CLASS(UK2Node_TransitionRuleGetter, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node_TransitionRuleGetter)


#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_TransitionRuleGetter(); \
	friend struct Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics; \
public: \
	DECLARE_CLASS(UK2Node_TransitionRuleGetter, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node_TransitionRuleGetter)


#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UK2Node_TransitionRuleGetter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_TransitionRuleGetter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UK2Node_TransitionRuleGetter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_TransitionRuleGetter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UK2Node_TransitionRuleGetter(UK2Node_TransitionRuleGetter&&); \
	ANIMGRAPH_API UK2Node_TransitionRuleGetter(const UK2Node_TransitionRuleGetter&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UK2Node_TransitionRuleGetter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UK2Node_TransitionRuleGetter(UK2Node_TransitionRuleGetter&&); \
	ANIMGRAPH_API UK2Node_TransitionRuleGetter(const UK2Node_TransitionRuleGetter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UK2Node_TransitionRuleGetter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_TransitionRuleGetter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_TransitionRuleGetter)


#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_37_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class K2Node_TransitionRuleGetter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UK2Node_TransitionRuleGetter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_K2Node_TransitionRuleGetter_h


#define FOREACH_ENUM_ETRANSITIONGETTER(op) \
	op(ETransitionGetter::AnimationAsset_GetCurrentTime) \
	op(ETransitionGetter::AnimationAsset_GetLength) \
	op(ETransitionGetter::AnimationAsset_GetCurrentTimeFraction) \
	op(ETransitionGetter::AnimationAsset_GetTimeFromEnd) \
	op(ETransitionGetter::AnimationAsset_GetTimeFromEndFraction) \
	op(ETransitionGetter::CurrentState_ElapsedTime) \
	op(ETransitionGetter::CurrentState_GetBlendWeight) \
	op(ETransitionGetter::CurrentTransitionDuration) \
	op(ETransitionGetter::ArbitraryState_GetBlendWeight) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

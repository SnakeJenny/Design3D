// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationGraphSchema_generated_h
#error "AnimationGraphSchema.generated.h already included, missing '#pragma once' in AnimationGraphSchema.h"
#endif
#define ANIMGRAPH_AnimationGraphSchema_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationGraphSchema(); \
	friend struct Z_Construct_UClass_UAnimationGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UAnimationGraphSchema, UEdGraphSchema_K2, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationGraphSchema)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationGraphSchema(); \
	friend struct Z_Construct_UClass_UAnimationGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UAnimationGraphSchema, UEdGraphSchema_K2, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationGraphSchema)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationGraphSchema); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimationGraphSchema(UAnimationGraphSchema&&); \
	ANIMGRAPH_API UAnimationGraphSchema(const UAnimationGraphSchema&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimationGraphSchema(UAnimationGraphSchema&&); \
	ANIMGRAPH_API UAnimationGraphSchema(const UAnimationGraphSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationGraphSchema); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationGraphSchema)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_16_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationGraphSchema."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimationGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

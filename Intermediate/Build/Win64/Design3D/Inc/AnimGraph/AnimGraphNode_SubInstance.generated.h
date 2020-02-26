// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_SubInstance_generated_h
#error "AnimGraphNode_SubInstance.generated.h already included, missing '#pragma once' in AnimGraphNode_SubInstance.h"
#endif
#define ANIMGRAPH_AnimGraphNode_SubInstance_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SubInstance(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_SubInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_SubInstance, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_SubInstance)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SubInstance(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_SubInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_SubInstance, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_SubInstance)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SubInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SubInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SubInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SubInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_SubInstance(UAnimGraphNode_SubInstance&&); \
	ANIMGRAPH_API UAnimGraphNode_SubInstance(const UAnimGraphNode_SubInstance&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SubInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_SubInstance(UAnimGraphNode_SubInstance&&); \
	ANIMGRAPH_API UAnimGraphNode_SubInstance(const UAnimGraphNode_SubInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SubInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SubInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SubInstance)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KnownExposableProperties() { return STRUCT_OFFSET(UAnimGraphNode_SubInstance, KnownExposableProperties); } \
	FORCEINLINE static uint32 __PPO__ExposedPropertyNames() { return STRUCT_OFFSET(UAnimGraphNode_SubInstance, ExposedPropertyNames); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_17_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_SubInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

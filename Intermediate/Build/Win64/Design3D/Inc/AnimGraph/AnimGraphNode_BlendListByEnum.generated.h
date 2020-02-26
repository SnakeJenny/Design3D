// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_BlendListByEnum_generated_h
#error "AnimGraphNode_BlendListByEnum.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendListByEnum.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendListByEnum_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_BlendListByEnum, ANIMGRAPH_API)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendListByEnum(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_BlendListByEnum, UAnimGraphNode_BlendListBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendListByEnum) \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_BlendListByEnum*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendListByEnum(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_BlendListByEnum, UAnimGraphNode_BlendListBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendListByEnum) \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_BlendListByEnum*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListByEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendListByEnum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendListByEnum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendListByEnum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListByEnum(UAnimGraphNode_BlendListByEnum&&); \
	ANIMGRAPH_API UAnimGraphNode_BlendListByEnum(const UAnimGraphNode_BlendListByEnum&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListByEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListByEnum(UAnimGraphNode_BlendListByEnum&&); \
	ANIMGRAPH_API UAnimGraphNode_BlendListByEnum(const UAnimGraphNode_BlendListByEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendListByEnum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendListByEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendListByEnum)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoundEnum() { return STRUCT_OFFSET(UAnimGraphNode_BlendListByEnum, BoundEnum); } \
	FORCEINLINE static uint32 __PPO__VisibleEnumEntries() { return STRUCT_OFFSET(UAnimGraphNode_BlendListByEnum, VisibleEnumEntries); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_15_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_BlendListByEnum."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_BlendListByEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListByEnum_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

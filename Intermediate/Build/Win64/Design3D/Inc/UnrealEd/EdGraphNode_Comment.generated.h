// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EdGraphNode_Comment_generated_h
#error "EdGraphNode_Comment.generated.h already included, missing '#pragma once' in EdGraphNode_Comment.h"
#endif
#define UNREALED_EdGraphNode_Comment_generated_h

#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphNode_Comment(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Comment_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode_Comment, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEdGraphNode_Comment)


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode_Comment(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Comment_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode_Comment, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEdGraphNode_Comment)


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEdGraphNode_Comment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Comment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEdGraphNode_Comment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Comment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEdGraphNode_Comment(UEdGraphNode_Comment&&); \
	UNREALED_API UEdGraphNode_Comment(const UEdGraphNode_Comment&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEdGraphNode_Comment(UEdGraphNode_Comment&&); \
	UNREALED_API UEdGraphNode_Comment(const UEdGraphNode_Comment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEdGraphNode_Comment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Comment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Comment)


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_31_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_35_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEdGraphNode_Comment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h


#define FOREACH_ENUM_ECOMMENTBOXMODE(op) \
	op(ECommentBoxMode::GroupMovement) \
	op(ECommentBoxMode::NoGroupMovement) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

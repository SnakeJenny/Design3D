// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BookMark_generated_h
#error "BookMark.generated.h already included, missing '#pragma once' in BookMark.h"
#endif
#define ENGINE_BookMark_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBookmarkBaseJumpToSettings Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBookmarkJumpToSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBookMark(); \
	friend struct Z_Construct_UClass_UBookMark_Statics; \
public: \
	DECLARE_CLASS(UBookMark, UBookmarkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBookMark)


#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBookMark(); \
	friend struct Z_Construct_UClass_UBookMark_Statics; \
public: \
	DECLARE_CLASS(UBookMark, UBookmarkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBookMark)


#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBookMark(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBookMark) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBookMark); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBookMark); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBookMark(UBookMark&&); \
	ENGINE_API UBookMark(const UBookMark&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBookMark(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBookMark(UBookMark&&); \
	ENGINE_API UBookMark(const UBookMark&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBookMark); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBookMark); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBookMark)


#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BookMark."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBookMark>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

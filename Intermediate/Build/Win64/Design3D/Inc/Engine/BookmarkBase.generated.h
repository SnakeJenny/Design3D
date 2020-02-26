// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BookmarkBase_generated_h
#error "BookmarkBase.generated.h already included, missing '#pragma once' in BookmarkBase.h"
#endif
#define ENGINE_BookmarkBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBookmarkBaseJumpToSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBookmarkBase(); \
	friend struct Z_Construct_UClass_UBookmarkBase_Statics; \
public: \
	DECLARE_CLASS(UBookmarkBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBookmarkBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUBookmarkBase(); \
	friend struct Z_Construct_UClass_UBookmarkBase_Statics; \
public: \
	DECLARE_CLASS(UBookmarkBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBookmarkBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBookmarkBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBookmarkBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBookmarkBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBookmarkBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBookmarkBase(UBookmarkBase&&); \
	NO_API UBookmarkBase(const UBookmarkBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBookmarkBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBookmarkBase(UBookmarkBase&&); \
	NO_API UBookmarkBase(const UBookmarkBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBookmarkBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBookmarkBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBookmarkBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBookmarkBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

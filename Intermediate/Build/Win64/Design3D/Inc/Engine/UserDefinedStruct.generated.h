// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_UserDefinedStruct_generated_h
#error "UserDefinedStruct.generated.h already included, missing '#pragma once' in UserDefinedStruct.h"
#endif
#define ENGINE_UserDefinedStruct_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UUserDefinedStruct, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedStruct(); \
	friend struct Z_Construct_UClass_UUserDefinedStruct_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedStruct, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedStruct) \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedStruct(); \
	friend struct Z_Construct_UClass_UUserDefinedStruct_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedStruct, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedStruct) \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDefinedStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedStruct) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedStruct); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedStruct); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedStruct(UUserDefinedStruct&&); \
	NO_API UUserDefinedStruct(const UUserDefinedStruct&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDefinedStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedStruct(UUserDefinedStruct&&); \
	NO_API UUserDefinedStruct(const UUserDefinedStruct&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedStruct); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedStruct)


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_50_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_53_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UserDefinedStruct."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UUserDefinedStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h


#define FOREACH_ENUM_EUSERDEFINEDSTRUCTURESTATUS(op) \
	op(UDSS_UpToDate) \
	op(UDSS_Dirty) \
	op(UDSS_Error) \
	op(UDSS_Duplicate) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

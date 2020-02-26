// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Selection_generated_h
#error "Selection.generated.h already included, missing '#pragma once' in Selection.h"
#endif
#define ENGINE_Selection_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USelection, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelection(); \
	friend struct Z_Construct_UClass_USelection_Statics; \
public: \
	DECLARE_CLASS(USelection, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USelection) \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSelection(); \
	friend struct Z_Construct_UClass_USelection_Statics; \
public: \
	DECLARE_CLASS(USelection, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USelection) \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelection(USelection&&); \
	NO_API USelection(const USelection&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelection(USelection&&); \
	NO_API USelection(const USelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelection)


#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Selection_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Selection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USelection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Selection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

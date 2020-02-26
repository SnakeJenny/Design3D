// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATINEE_MatineeOptions_generated_h
#error "MatineeOptions.generated.h already included, missing '#pragma once' in MatineeOptions.h"
#endif
#define MATINEE_MatineeOptions_generated_h

#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_RPC_WRAPPERS
#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatineeOptions(); \
	friend struct Z_Construct_UClass_UMatineeOptions_Statics; \
public: \
	DECLARE_CLASS(UMatineeOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Matinee"), NO_API) \
	DECLARE_SERIALIZER(UMatineeOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMatineeOptions(); \
	friend struct Z_Construct_UClass_UMatineeOptions_Statics; \
public: \
	DECLARE_CLASS(UMatineeOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Matinee"), NO_API) \
	DECLARE_SERIALIZER(UMatineeOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeOptions(UMatineeOptions&&); \
	NO_API UMatineeOptions(const UMatineeOptions&); \
public:


#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeOptions(UMatineeOptions&&); \
	NO_API UMatineeOptions(const UMatineeOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeOptions)


#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_15_PROLOG
#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_RPC_WRAPPERS \
	Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_INCLASS \
	Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Matinee_Classes_MatineeOptions_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MatineeOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATINEE_API UClass* StaticClass<class UMatineeOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Matinee_Classes_MatineeOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

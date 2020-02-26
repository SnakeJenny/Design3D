// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CookCommandlet_generated_h
#error "CookCommandlet.generated.h already included, missing '#pragma once' in CookCommandlet.h"
#endif
#define UNREALED_CookCommandlet_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookCommandlet(); \
	friend struct Z_Construct_UClass_UCookCommandlet_Statics; \
public: \
	DECLARE_CLASS(UCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCookCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCookCommandlet(); \
	friend struct Z_Construct_UClass_UCookCommandlet_Statics; \
public: \
	DECLARE_CLASS(UCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCookCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookCommandlet(UCookCommandlet&&); \
	NO_API UCookCommandlet(const UCookCommandlet&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookCommandlet(UCookCommandlet&&); \
	NO_API UCookCommandlet(const UCookCommandlet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookCommandlet)


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_23_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CookCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCookCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

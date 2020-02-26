// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ObjectLibraryFactory_generated_h
#error "ObjectLibraryFactory.generated.h already included, missing '#pragma once' in ObjectLibraryFactory.h"
#endif
#define UNREALED_ObjectLibraryFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectLibraryFactory(); \
	friend struct Z_Construct_UClass_UObjectLibraryFactory_Statics; \
public: \
	DECLARE_CLASS(UObjectLibraryFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UObjectLibraryFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUObjectLibraryFactory(); \
	friend struct Z_Construct_UClass_UObjectLibraryFactory_Statics; \
public: \
	DECLARE_CLASS(UObjectLibraryFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UObjectLibraryFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UObjectLibraryFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectLibraryFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UObjectLibraryFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectLibraryFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UObjectLibraryFactory(UObjectLibraryFactory&&); \
	UNREALED_API UObjectLibraryFactory(const UObjectLibraryFactory&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UObjectLibraryFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UObjectLibraryFactory(UObjectLibraryFactory&&); \
	UNREALED_API UObjectLibraryFactory(const UObjectLibraryFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UObjectLibraryFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectLibraryFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectLibraryFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_10_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ObjectLibraryFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UObjectLibraryFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

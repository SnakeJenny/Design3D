// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DataTableFactory_generated_h
#error "DataTableFactory.generated.h already included, missing '#pragma once' in DataTableFactory.h"
#endif
#define UNREALED_DataTableFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataTableFactory(); \
	friend struct Z_Construct_UClass_UDataTableFactory_Statics; \
public: \
	DECLARE_CLASS(UDataTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UDataTableFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDataTableFactory(); \
	friend struct Z_Construct_UClass_UDataTableFactory_Statics; \
public: \
	DECLARE_CLASS(UDataTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UDataTableFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableFactory(UDataTableFactory&&); \
	NO_API UDataTableFactory(const UDataTableFactory&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableFactory(UDataTableFactory&&); \
	NO_API UDataTableFactory(const UDataTableFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_12_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataTableFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDataTableFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

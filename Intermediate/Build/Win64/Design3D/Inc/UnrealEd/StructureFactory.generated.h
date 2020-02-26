// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_StructureFactory_generated_h
#error "StructureFactory.generated.h already included, missing '#pragma once' in StructureFactory.h"
#endif
#define UNREALED_StructureFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructureFactory(); \
	friend struct Z_Construct_UClass_UStructureFactory_Statics; \
public: \
	DECLARE_CLASS(UStructureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UStructureFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUStructureFactory(); \
	friend struct Z_Construct_UClass_UStructureFactory_Statics; \
public: \
	DECLARE_CLASS(UStructureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UStructureFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UStructureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UStructureFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructureFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UStructureFactory(UStructureFactory&&); \
	UNREALED_API UStructureFactory(const UStructureFactory&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UStructureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UStructureFactory(UStructureFactory&&); \
	UNREALED_API UStructureFactory(const UStructureFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UStructureFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructureFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructureFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_10_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StructureFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UStructureFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_BlueprintFactory_generated_h
#error "BlueprintFactory.generated.h already included, missing '#pragma once' in BlueprintFactory.h"
#endif
#define UNREALED_BlueprintFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintFactory(); \
	friend struct Z_Construct_UClass_UBlueprintFactory_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFactory(); \
	friend struct Z_Construct_UClass_UBlueprintFactory_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintFactory(UBlueprintFactory&&); \
	NO_API UBlueprintFactory(const UBlueprintFactory&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintFactory(UBlueprintFactory&&); \
	NO_API UBlueprintFactory(const UBlueprintFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_15_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UBlueprintFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

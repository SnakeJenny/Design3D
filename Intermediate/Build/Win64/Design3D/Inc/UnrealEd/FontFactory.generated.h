// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FontFactory_generated_h
#error "FontFactory.generated.h already included, missing '#pragma once' in FontFactory.h"
#endif
#define UNREALED_FontFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFontFactory(); \
	friend struct Z_Construct_UClass_UFontFactory_Statics; \
public: \
	DECLARE_CLASS(UFontFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFontFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFontFactory(); \
	friend struct Z_Construct_UClass_UFontFactory_Statics; \
public: \
	DECLARE_CLASS(UFontFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFontFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFontFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFontFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFontFactory(UFontFactory&&); \
	NO_API UFontFactory(const UFontFactory&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFontFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFontFactory(UFontFactory&&); \
	NO_API UFontFactory(const UFontFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFontFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_14_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FontFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFontFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

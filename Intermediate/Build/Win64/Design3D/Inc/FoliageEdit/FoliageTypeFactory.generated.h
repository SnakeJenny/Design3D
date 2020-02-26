// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGEEDIT_FoliageTypeFactory_generated_h
#error "FoliageTypeFactory.generated.h already included, missing '#pragma once' in FoliageTypeFactory.h"
#endif
#define FOLIAGEEDIT_FoliageTypeFactory_generated_h

#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_RPC_WRAPPERS
#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoliageTypeFactory(); \
	friend struct Z_Construct_UClass_UFoliageTypeFactory_Statics; \
public: \
	DECLARE_CLASS(UFoliageTypeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoliageEdit"), NO_API) \
	DECLARE_SERIALIZER(UFoliageTypeFactory)


#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageTypeFactory(); \
	friend struct Z_Construct_UClass_UFoliageTypeFactory_Statics; \
public: \
	DECLARE_CLASS(UFoliageTypeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoliageEdit"), NO_API) \
	DECLARE_SERIALIZER(UFoliageTypeFactory)


#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageTypeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageTypeFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageTypeFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageTypeFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageTypeFactory(UFoliageTypeFactory&&); \
	NO_API UFoliageTypeFactory(const UFoliageTypeFactory&); \
public:


#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageTypeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageTypeFactory(UFoliageTypeFactory&&); \
	NO_API UFoliageTypeFactory(const UFoliageTypeFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageTypeFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageTypeFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageTypeFactory)


#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_14_PROLOG
#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_RPC_WRAPPERS \
	Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_INCLASS \
	Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FoliageTypeFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGEEDIT_API UClass* StaticClass<class UFoliageTypeFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_FoliageEdit_Private_FoliageTypeFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

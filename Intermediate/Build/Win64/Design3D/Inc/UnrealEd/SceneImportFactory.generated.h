// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SceneImportFactory_generated_h
#error "SceneImportFactory.generated.h already included, missing '#pragma once' in SceneImportFactory.h"
#endif
#define UNREALED_SceneImportFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneImportFactory(); \
	friend struct Z_Construct_UClass_USceneImportFactory_Statics; \
public: \
	DECLARE_CLASS(USceneImportFactory, UFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USceneImportFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSceneImportFactory(); \
	friend struct Z_Construct_UClass_USceneImportFactory_Statics; \
public: \
	DECLARE_CLASS(USceneImportFactory, UFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USceneImportFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USceneImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USceneImportFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneImportFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API USceneImportFactory(USceneImportFactory&&); \
	UNREALED_API USceneImportFactory(const USceneImportFactory&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USceneImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API USceneImportFactory(USceneImportFactory&&); \
	UNREALED_API USceneImportFactory(const USceneImportFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USceneImportFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneImportFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneImportFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_13_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USceneImportFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

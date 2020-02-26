// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxSceneImportOptions_generated_h
#error "FbxSceneImportOptions.generated.h already included, missing '#pragma once' in FbxSceneImportOptions.h"
#endif
#define UNREALED_FbxSceneImportOptions_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFbxSceneImportOptions(); \
	friend struct Z_Construct_UClass_UFbxSceneImportOptions_Statics; \
public: \
	DECLARE_CLASS(UFbxSceneImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxSceneImportOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSceneImportOptions(); \
	friend struct Z_Construct_UClass_UFbxSceneImportOptions_Statics; \
public: \
	DECLARE_CLASS(UFbxSceneImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxSceneImportOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSceneImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSceneImportOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UFbxSceneImportOptions(UFbxSceneImportOptions&&); \
	UNREALED_API UFbxSceneImportOptions(const UFbxSceneImportOptions&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSceneImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UFbxSceneImportOptions(UFbxSceneImportOptions&&); \
	UNREALED_API UFbxSceneImportOptions(const UFbxSceneImportOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSceneImportOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportOptions)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_22_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxSceneImportOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxSceneImportOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h


#define FOREACH_ENUM_EFBXSCENEOPTIONSCREATEHIERARCHYTYPE(op) \
	op(FBXSOCHT_CreateLevelActors) \
	op(FBXSOCHT_CreateActorComponents) \
	op(FBXSOCHT_CreateBlueprint) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

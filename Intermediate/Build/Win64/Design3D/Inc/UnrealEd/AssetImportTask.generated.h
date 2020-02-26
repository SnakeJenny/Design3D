// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AssetImportTask_generated_h
#error "AssetImportTask.generated.h already included, missing '#pragma once' in AssetImportTask.h"
#endif
#define UNREALED_AssetImportTask_generated_h

#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetImportTask(); \
	friend struct Z_Construct_UClass_UAssetImportTask_Statics; \
public: \
	DECLARE_CLASS(UAssetImportTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAssetImportTask)


#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAssetImportTask(); \
	friend struct Z_Construct_UClass_UAssetImportTask_Statics; \
public: \
	DECLARE_CLASS(UAssetImportTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAssetImportTask)


#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetImportTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetImportTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetImportTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetImportTask(UAssetImportTask&&); \
	NO_API UAssetImportTask(const UAssetImportTask&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetImportTask(UAssetImportTask&&); \
	NO_API UAssetImportTask(const UAssetImportTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetImportTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetImportTask)


#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_17_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetImportTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

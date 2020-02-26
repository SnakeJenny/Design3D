// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetExportTask_generated_h
#error "AssetExportTask.generated.h already included, missing '#pragma once' in AssetExportTask.h"
#endif
#define ENGINE_AssetExportTask_generated_h

#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetExportTask(); \
	friend struct Z_Construct_UClass_UAssetExportTask_Statics; \
public: \
	DECLARE_CLASS(UAssetExportTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetExportTask)


#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAssetExportTask(); \
	friend struct Z_Construct_UClass_UAssetExportTask_Statics; \
public: \
	DECLARE_CLASS(UAssetExportTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetExportTask)


#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetExportTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetExportTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetExportTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetExportTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetExportTask(UAssetExportTask&&); \
	NO_API UAssetExportTask(const UAssetExportTask&); \
public:


#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetExportTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetExportTask(UAssetExportTask&&); \
	NO_API UAssetExportTask(const UAssetExportTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetExportTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetExportTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetExportTask)


#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetExportTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_AssetExportTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

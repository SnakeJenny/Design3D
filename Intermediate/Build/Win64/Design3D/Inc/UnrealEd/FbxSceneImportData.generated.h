// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxSceneImportData_generated_h
#error "FbxSceneImportData.generated.h already included, missing '#pragma once' in FbxSceneImportData.h"
#endif
#define UNREALED_FbxSceneImportData_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITORONLY_DATA
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxSceneImportData, NO_API)


#else
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ARCHIVESERIALIZER
#endif
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFbxSceneImportData(); \
	friend struct Z_Construct_UClass_UFbxSceneImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxSceneImportData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFbxSceneImportData) \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ARCHIVESERIALIZER


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSceneImportData(); \
	friend struct Z_Construct_UClass_UFbxSceneImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxSceneImportData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFbxSceneImportData) \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ARCHIVESERIALIZER


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxSceneImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxSceneImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFbxSceneImportData(UFbxSceneImportData&&); \
	NO_API UFbxSceneImportData(const UFbxSceneImportData&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxSceneImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFbxSceneImportData(UFbxSceneImportData&&); \
	NO_API UFbxSceneImportData(const UFbxSceneImportData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxSceneImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_26_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxSceneImportData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxSceneImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h


#define FOREACH_ENUM_EFBXSCENEREIMPORTSTATUSFLAGS(op) \
	op(EFbxSceneReimportStatusFlags::None) \
	op(EFbxSceneReimportStatusFlags::Added) \
	op(EFbxSceneReimportStatusFlags::Removed) \
	op(EFbxSceneReimportStatusFlags::Same) \
	op(EFbxSceneReimportStatusFlags::FoundContentBrowserAsset) \
	op(EFbxSceneReimportStatusFlags::ReimportAsset) 

enum class EFbxSceneReimportStatusFlags : uint8;
template<> UNREALED_API UEnum* StaticEnum<EFbxSceneReimportStatusFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxMeshImportData_generated_h
#error "FbxMeshImportData.generated.h already included, missing '#pragma once' in FbxMeshImportData.h"
#endif
#define UNREALED_FbxMeshImportData_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FImportMeshLodSectionsData>();

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFbxMeshImportData(); \
	friend struct Z_Construct_UClass_UFbxMeshImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxMeshImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFbxMeshImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUFbxMeshImportData(); \
	friend struct Z_Construct_UClass_UFbxMeshImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxMeshImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFbxMeshImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxMeshImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxMeshImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxMeshImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFbxMeshImportData(UFbxMeshImportData&&); \
	NO_API UFbxMeshImportData(const UFbxMeshImportData&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFbxMeshImportData(UFbxMeshImportData&&); \
	NO_API UFbxMeshImportData(const UFbxMeshImportData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxMeshImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxMeshImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxMeshImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_60_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxMeshImportData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxMeshImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h


#define FOREACH_ENUM_EVERTEXCOLORIMPORTOPTION(op) \
	op(EVertexColorImportOption::Replace) \
	op(EVertexColorImportOption::Ignore) \
	op(EVertexColorImportOption::Override) 
#define FOREACH_ENUM_EFBXNORMALGENERATIONMETHOD(op) \
	op(EFBXNormalGenerationMethod::BuiltIn) \
	op(EFBXNormalGenerationMethod::MikkTSpace) 
#define FOREACH_ENUM_EFBXNORMALIMPORTMETHOD(op) \
	op(FBXNIM_ComputeNormals) \
	op(FBXNIM_ImportNormals) \
	op(FBXNIM_ImportNormalsAndTangents) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

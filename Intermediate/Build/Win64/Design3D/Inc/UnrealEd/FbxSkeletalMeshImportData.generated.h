// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxSkeletalMeshImportData_generated_h
#error "FbxSkeletalMeshImportData.generated.h already included, missing '#pragma once' in FbxSkeletalMeshImportData.h"
#endif
#define UNREALED_FbxSkeletalMeshImportData_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFbxSkeletalMeshImportData(); \
	friend struct Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxSkeletalMeshImportData, UFbxMeshImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxSkeletalMeshImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSkeletalMeshImportData(); \
	friend struct Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxSkeletalMeshImportData, UFbxMeshImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxSkeletalMeshImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSkeletalMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSkeletalMeshImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSkeletalMeshImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSkeletalMeshImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UFbxSkeletalMeshImportData(UFbxSkeletalMeshImportData&&); \
	UNREALED_API UFbxSkeletalMeshImportData(const UFbxSkeletalMeshImportData&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSkeletalMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UFbxSkeletalMeshImportData(UFbxSkeletalMeshImportData&&); \
	UNREALED_API UFbxSkeletalMeshImportData(const UFbxSkeletalMeshImportData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSkeletalMeshImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSkeletalMeshImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSkeletalMeshImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxSkeletalMeshImportData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxSkeletalMeshImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h


#define FOREACH_ENUM_EFBXIMPORTCONTENTTYPE(op) \
	op(FBXICT_All) \
	op(FBXICT_Geometry) \
	op(FBXICT_SkinningWeights) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

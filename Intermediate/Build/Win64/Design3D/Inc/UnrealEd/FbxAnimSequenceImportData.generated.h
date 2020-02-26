// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxAnimSequenceImportData_generated_h
#error "FbxAnimSequenceImportData.generated.h already included, missing '#pragma once' in FbxAnimSequenceImportData.h"
#endif
#define UNREALED_FbxAnimSequenceImportData_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxAnimSequenceImportData, NO_API)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFbxAnimSequenceImportData(); \
	friend struct Z_Construct_UClass_UFbxAnimSequenceImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxAnimSequenceImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFbxAnimSequenceImportData) \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ARCHIVESERIALIZER


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUFbxAnimSequenceImportData(); \
	friend struct Z_Construct_UClass_UFbxAnimSequenceImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxAnimSequenceImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFbxAnimSequenceImportData) \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ARCHIVESERIALIZER


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxAnimSequenceImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxAnimSequenceImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxAnimSequenceImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxAnimSequenceImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFbxAnimSequenceImportData(UFbxAnimSequenceImportData&&); \
	NO_API UFbxAnimSequenceImportData(const UFbxAnimSequenceImportData&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxAnimSequenceImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFbxAnimSequenceImportData(UFbxAnimSequenceImportData&&); \
	NO_API UFbxAnimSequenceImportData(const UFbxAnimSequenceImportData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxAnimSequenceImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxAnimSequenceImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxAnimSequenceImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_36_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxAnimSequenceImportData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxAnimSequenceImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h


#define FOREACH_ENUM_EFBXANIMATIONLENGTHIMPORTTYPE(op) \
	op(FBXALIT_ExportedTime) \
	op(FBXALIT_AnimatedKey) \
	op(FBXALIT_SetRange) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

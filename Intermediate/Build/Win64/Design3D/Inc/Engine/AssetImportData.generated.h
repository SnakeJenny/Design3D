// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetImportData_generated_h
#error "AssetImportData.generated.h already included, missing '#pragma once' in AssetImportData.h"
#endif
#define ENGINE_AssetImportData_generated_h

#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetImportInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAssetImportInfo>();

#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_ExtractFilenames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->K2_ExtractFilenames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetFirstFilename) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->K2_GetFirstFilename(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_ExtractFilenames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->K2_ExtractFilenames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetFirstFilename) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->K2_GetFirstFilename(); \
		P_NATIVE_END; \
	}


#else
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAssetImportData, NO_API)


#else
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetImportData(); \
	friend struct Z_Construct_UClass_UAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UAssetImportData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetImportData) \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUAssetImportData(); \
	friend struct Z_Construct_UClass_UAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UAssetImportData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetImportData) \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetImportData(UAssetImportData&&); \
	NO_API UAssetImportData(const UAssetImportData&); \
public:


#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetImportData(UAssetImportData&&); \
	NO_API UAssetImportData(const UAssetImportData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetImportData)


#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_67_PROLOG
#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_INCLASS \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_71_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AssetImportData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

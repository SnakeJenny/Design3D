// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPackage;
class UWorld;
#ifdef UNREALED_FileHelpers_generated_h
#error "FileHelpers.generated.h already included, missing '#pragma once' in FileHelpers.h"
#endif
#define UNREALED_FileHelpers_generated_h

#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnloadPackages) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToUnload); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutAnyPackagesUnloaded); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::UnloadPackages(Z_Param_Out_PackagesToUnload,Z_Param_Out_bOutAnyPackagesUnloaded,Z_Param_Out_OutErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportScene) \
	{ \
		P_GET_UBOOL(Z_Param_bExportSelectedActorsOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::ExportScene(Z_Param_bExportSelectedActorsOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportScene) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::ImportScene(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirtyContentPackages) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_OutDirtyPackages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::GetDirtyContentPackages(Z_Param_Out_OutDirtyPackages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirtyMapPackages) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_OutDirtyPackages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::GetDirtyMapPackages(Z_Param_Out_OutDirtyPackages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCurrentLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveCurrentLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveDirtyPackagesWithDialog) \
	{ \
		P_GET_UBOOL(Z_Param_bSaveMapPackages); \
		P_GET_UBOOL(Z_Param_bSaveContentPackages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveDirtyPackagesWithDialog(Z_Param_bSaveMapPackages,Z_Param_bSaveContentPackages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveDirtyPackages) \
	{ \
		P_GET_UBOOL(Z_Param_bSaveMapPackages); \
		P_GET_UBOOL(Z_Param_bSaveContentPackages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveDirtyPackages(Z_Param_bSaveMapPackages,Z_Param_bSaveContentPackages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePackagesWithDialog) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToSave); \
		P_GET_UBOOL(Z_Param_bOnlyDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SavePackagesWithDialog(Z_Param_Out_PackagesToSave,Z_Param_bOnlyDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePackages) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToSave); \
		P_GET_UBOOL(Z_Param_bOnlyDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SavePackages(Z_Param_Out_PackagesToSave,Z_Param_bOnlyDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveMap) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveMap(Z_Param_World,Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::LoadMap(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMapWithDialog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::LoadMapWithDialog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewMapFromTemplate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToTemplateLevel); \
		P_GET_UBOOL(Z_Param_bSaveExistingMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::NewMapFromTemplate(Z_Param_PathToTemplateLevel,Z_Param_bSaveExistingMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewBlankMap) \
	{ \
		P_GET_UBOOL(Z_Param_bSaveExistingMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::NewBlankMap(Z_Param_bSaveExistingMap); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnloadPackages) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToUnload); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutAnyPackagesUnloaded); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::UnloadPackages(Z_Param_Out_PackagesToUnload,Z_Param_Out_bOutAnyPackagesUnloaded,Z_Param_Out_OutErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportScene) \
	{ \
		P_GET_UBOOL(Z_Param_bExportSelectedActorsOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::ExportScene(Z_Param_bExportSelectedActorsOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportScene) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::ImportScene(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirtyContentPackages) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_OutDirtyPackages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::GetDirtyContentPackages(Z_Param_Out_OutDirtyPackages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirtyMapPackages) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_OutDirtyPackages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLoadingAndSavingUtils::GetDirtyMapPackages(Z_Param_Out_OutDirtyPackages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCurrentLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveCurrentLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveDirtyPackagesWithDialog) \
	{ \
		P_GET_UBOOL(Z_Param_bSaveMapPackages); \
		P_GET_UBOOL(Z_Param_bSaveContentPackages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveDirtyPackagesWithDialog(Z_Param_bSaveMapPackages,Z_Param_bSaveContentPackages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveDirtyPackages) \
	{ \
		P_GET_UBOOL(Z_Param_bSaveMapPackages); \
		P_GET_UBOOL(Z_Param_bSaveContentPackages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveDirtyPackages(Z_Param_bSaveMapPackages,Z_Param_bSaveContentPackages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePackagesWithDialog) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToSave); \
		P_GET_UBOOL(Z_Param_bOnlyDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SavePackagesWithDialog(Z_Param_Out_PackagesToSave,Z_Param_bOnlyDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePackages) \
	{ \
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToSave); \
		P_GET_UBOOL(Z_Param_bOnlyDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SavePackages(Z_Param_Out_PackagesToSave,Z_Param_bOnlyDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveMap) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveMap(Z_Param_World,Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::LoadMap(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMapWithDialog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::LoadMapWithDialog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewMapFromTemplate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToTemplateLevel); \
		P_GET_UBOOL(Z_Param_bSaveExistingMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::NewMapFromTemplate(Z_Param_PathToTemplateLevel,Z_Param_bSaveExistingMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewBlankMap) \
	{ \
		P_GET_UBOOL(Z_Param_bSaveExistingMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::NewBlankMap(Z_Param_bSaveExistingMap); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLoadingAndSavingUtils(); \
	friend struct Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics; \
public: \
	DECLARE_CLASS(UEditorLoadingAndSavingUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorLoadingAndSavingUtils)


#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUEditorLoadingAndSavingUtils(); \
	friend struct Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics; \
public: \
	DECLARE_CLASS(UEditorLoadingAndSavingUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorLoadingAndSavingUtils)


#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLoadingAndSavingUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingAndSavingUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLoadingAndSavingUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingAndSavingUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLoadingAndSavingUtils(UEditorLoadingAndSavingUtils&&); \
	NO_API UEditorLoadingAndSavingUtils(const UEditorLoadingAndSavingUtils&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLoadingAndSavingUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLoadingAndSavingUtils(UEditorLoadingAndSavingUtils&&); \
	NO_API UEditorLoadingAndSavingUtils(const UEditorLoadingAndSavingUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLoadingAndSavingUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingAndSavingUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingAndSavingUtils)


#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_37_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorLoadingAndSavingUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_FileHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

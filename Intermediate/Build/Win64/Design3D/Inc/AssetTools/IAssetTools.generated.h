// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAssetImportTask;
class UAutomatedAssetImportData;
struct FSoftObjectPath;
struct FAssetRenameData;
class UFactory;
class IAssetTools;
#ifdef ASSETTOOLS_IAssetTools_generated_h
#error "IAssetTools.generated.h already included, missing '#pragma once' in IAssetTools.h"
#endif
#define ASSETTOOLS_IAssetTools_generated_h

#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


template<> ASSETTOOLS_API UScriptStruct* StaticStruct<struct FAdvancedCopyParams>();

#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetRenameData_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


template<> ASSETTOOLS_API UScriptStruct* StaticStruct<struct FAssetRenameData>();

#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenEditorForAssets) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Assets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenEditorForAssets(Z_Param_Out_Assets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateUniqueAssetName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InBasePackageName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSuffix); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPackageName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutAssetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateUniqueAssetName(Z_Param_InBasePackageName,Z_Param_InSuffix,Z_Param_Out_OutPackageName,Z_Param_Out_OutAssetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportAssetsWithDialog) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetsToExport); \
		P_GET_UBOOL(Z_Param_bPromptForIndividualFilenames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExportAssetsWithDialog(Z_Param_Out_AssetsToExport,Z_Param_bPromptForIndividualFilenames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportAssets) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetsToExport); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExportPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExportAssets(Z_Param_Out_AssetsToExport,Z_Param_ExportPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportAssetTasks) \
	{ \
		P_GET_TARRAY_REF(UAssetImportTask*,Z_Param_Out_ImportTasks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ImportAssetTasks(Z_Param_Out_ImportTasks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportAssetsAutomated) \
	{ \
		P_GET_OBJECT(UAutomatedAssetImportData,Z_Param_ImportData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->ImportAssetsAutomated(Z_Param_ImportData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportAssetsWithDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->ImportAssetsWithDialog(Z_Param_DestinationPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSoftReferencesToObject) \
	{ \
		P_GET_STRUCT(FSoftObjectPath,Z_Param_TargetObject); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ReferencingObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindSoftReferencesToObject(Z_Param_TargetObject,Z_Param_Out_ReferencingObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameAssetsWithDialog) \
	{ \
		P_GET_TARRAY_REF(FAssetRenameData,Z_Param_Out_AssetsAndNames); \
		P_GET_UBOOL(Z_Param_bAutoCheckout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameAssetsWithDialog(Z_Param_Out_AssetsAndNames,Z_Param_bAutoCheckout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameAssets) \
	{ \
		P_GET_TARRAY_REF(FAssetRenameData,Z_Param_Out_AssetsAndNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RenameAssets(Z_Param_Out_AssetsAndNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackagePath); \
		P_GET_OBJECT(UObject,Z_Param_OriginalObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->DuplicateAsset(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_OriginalObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateAssetWithDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackagePath); \
		P_GET_OBJECT(UObject,Z_Param_OriginalObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->DuplicateAssetWithDialog(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_OriginalObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAssetWithDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackagePath); \
		P_GET_OBJECT(UClass,Z_Param_AssetClass); \
		P_GET_OBJECT(UFactory,Z_Param_Factory); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CallingContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->CreateAssetWithDialog(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_AssetClass,Z_Param_Factory,Z_Param_CallingContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackagePath); \
		P_GET_OBJECT(UClass,Z_Param_AssetClass); \
		P_GET_OBJECT(UFactory,Z_Param_Factory); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CallingContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->CreateAsset(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_AssetClass,Z_Param_Factory,Z_Param_CallingContext); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenEditorForAssets) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Assets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenEditorForAssets(Z_Param_Out_Assets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateUniqueAssetName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InBasePackageName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSuffix); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPackageName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutAssetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateUniqueAssetName(Z_Param_InBasePackageName,Z_Param_InSuffix,Z_Param_Out_OutPackageName,Z_Param_Out_OutAssetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportAssetsWithDialog) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetsToExport); \
		P_GET_UBOOL(Z_Param_bPromptForIndividualFilenames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExportAssetsWithDialog(Z_Param_Out_AssetsToExport,Z_Param_bPromptForIndividualFilenames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportAssets) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetsToExport); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExportPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExportAssets(Z_Param_Out_AssetsToExport,Z_Param_ExportPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportAssetTasks) \
	{ \
		P_GET_TARRAY_REF(UAssetImportTask*,Z_Param_Out_ImportTasks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ImportAssetTasks(Z_Param_Out_ImportTasks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportAssetsAutomated) \
	{ \
		P_GET_OBJECT(UAutomatedAssetImportData,Z_Param_ImportData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->ImportAssetsAutomated(Z_Param_ImportData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportAssetsWithDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->ImportAssetsWithDialog(Z_Param_DestinationPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSoftReferencesToObject) \
	{ \
		P_GET_STRUCT(FSoftObjectPath,Z_Param_TargetObject); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ReferencingObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindSoftReferencesToObject(Z_Param_TargetObject,Z_Param_Out_ReferencingObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameAssetsWithDialog) \
	{ \
		P_GET_TARRAY_REF(FAssetRenameData,Z_Param_Out_AssetsAndNames); \
		P_GET_UBOOL(Z_Param_bAutoCheckout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameAssetsWithDialog(Z_Param_Out_AssetsAndNames,Z_Param_bAutoCheckout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameAssets) \
	{ \
		P_GET_TARRAY_REF(FAssetRenameData,Z_Param_Out_AssetsAndNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RenameAssets(Z_Param_Out_AssetsAndNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackagePath); \
		P_GET_OBJECT(UObject,Z_Param_OriginalObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->DuplicateAsset(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_OriginalObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateAssetWithDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackagePath); \
		P_GET_OBJECT(UObject,Z_Param_OriginalObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->DuplicateAssetWithDialog(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_OriginalObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAssetWithDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackagePath); \
		P_GET_OBJECT(UClass,Z_Param_AssetClass); \
		P_GET_OBJECT(UFactory,Z_Param_Factory); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CallingContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->CreateAssetWithDialog(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_AssetClass,Z_Param_Factory,Z_Param_CallingContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackagePath); \
		P_GET_OBJECT(UClass,Z_Param_AssetClass); \
		P_GET_OBJECT(UFactory,Z_Param_Factory); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CallingContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->CreateAsset(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_AssetClass,Z_Param_Factory,Z_Param_CallingContext); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETTOOLS_API UAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETTOOLS_API, UAssetTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETTOOLS_API UAssetTools(UAssetTools&&); \
	ASSETTOOLS_API UAssetTools(const UAssetTools&); \
public:


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETTOOLS_API UAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETTOOLS_API UAssetTools(UAssetTools&&); \
	ASSETTOOLS_API UAssetTools(const UAssetTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETTOOLS_API, UAssetTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetTools)


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetTools(); \
	friend struct Z_Construct_UClass_UAssetTools_Statics; \
public: \
	DECLARE_CLASS(UAssetTools, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AssetTools"), ASSETTOOLS_API) \
	DECLARE_SERIALIZER(UAssetTools)


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetTools() {} \
public: \
	typedef UAssetTools UClassType; \
	typedef IAssetTools ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_INCLASS_IINTERFACE \
protected: \
	virtual ~IAssetTools() {} \
public: \
	typedef UAssetTools UClassType; \
	typedef IAssetTools ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_143_PROLOG
#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_RPC_WRAPPERS \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_146_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTOOLS_API UClass* StaticClass<class UAssetTools>();

#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAssetTools) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TScriptInterface<IAssetTools>*)Z_Param__Result=UAssetToolsHelpers::GetAssetTools(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAssetTools) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TScriptInterface<IAssetTools>*)Z_Param__Result=UAssetToolsHelpers::GetAssetTools(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetToolsHelpers(); \
	friend struct Z_Construct_UClass_UAssetToolsHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsHelpers)


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_INCLASS \
private: \
	static void StaticRegisterNativesUAssetToolsHelpers(); \
	friend struct Z_Construct_UClass_UAssetToolsHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsHelpers)


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetToolsHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetToolsHelpers(UAssetToolsHelpers&&); \
	NO_API UAssetToolsHelpers(const UAssetToolsHelpers&); \
public:


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetToolsHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetToolsHelpers(UAssetToolsHelpers&&); \
	NO_API UAssetToolsHelpers(const UAssetToolsHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsHelpers)


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_405_PROLOG
#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_RPC_WRAPPERS \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_INCLASS \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_AssetTools_Public_IAssetTools_h_408_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTOOLS_API UClass* StaticClass<class UAssetToolsHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_AssetTools_Public_IAssetTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

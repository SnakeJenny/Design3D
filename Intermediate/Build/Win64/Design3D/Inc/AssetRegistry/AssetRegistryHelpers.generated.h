// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FARFilter;
struct FTagAndValue;
struct FAssetData;
class UObject;
struct FSoftObjectPath;
class IAssetRegistry;
#ifdef ASSETREGISTRY_AssetRegistryHelpers_generated_h
#error "AssetRegistryHelpers.generated.h already included, missing '#pragma once' in AssetRegistryHelpers.h"
#endif
#define ASSETREGISTRY_AssetRegistryHelpers_generated_h

#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTagAndValue_Statics; \
	ASSETREGISTRY_API static class UScriptStruct* StaticStruct();


template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<struct FTagAndValue>();

#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFilterTagsAndValues) \
	{ \
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_InFilter); \
		P_GET_TARRAY_REF(FTagAndValue,Z_Param_Out_InTagsAndValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FARFilter*)Z_Param__Result=UAssetRegistryHelpers::SetFilterTagsAndValues(Z_Param_Out_InFilter,Z_Param_Out_InTagsAndValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTagValue) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InTagName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutTagValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::GetTagValue(Z_Param_Out_InAssetData,Z_Param_Out_InTagName,Z_Param_Out_OutTagValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExportTextName) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAssetRegistryHelpers::GetExportTextName(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAssetLoaded) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsAssetLoaded(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAsset) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UAssetRegistryHelpers::GetAsset(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClass) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UAssetRegistryHelpers::GetClass(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToSoftObjectPath) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSoftObjectPath*)Z_Param__Result=UAssetRegistryHelpers::ToSoftObjectPath(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullName) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAssetRegistryHelpers::GetFullName(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRedirector) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsRedirector(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUAsset) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsUAsset(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsValid(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAssetData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InAsset); \
		P_GET_UBOOL(Z_Param_bAllowBlueprintClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=UAssetRegistryHelpers::CreateAssetData(Z_Param_InAsset,Z_Param_bAllowBlueprintClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetRegistry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TScriptInterface<IAssetRegistry>*)Z_Param__Result=UAssetRegistryHelpers::GetAssetRegistry(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFilterTagsAndValues) \
	{ \
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_InFilter); \
		P_GET_TARRAY_REF(FTagAndValue,Z_Param_Out_InTagsAndValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FARFilter*)Z_Param__Result=UAssetRegistryHelpers::SetFilterTagsAndValues(Z_Param_Out_InFilter,Z_Param_Out_InTagsAndValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTagValue) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InTagName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutTagValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::GetTagValue(Z_Param_Out_InAssetData,Z_Param_Out_InTagName,Z_Param_Out_OutTagValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExportTextName) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAssetRegistryHelpers::GetExportTextName(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAssetLoaded) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsAssetLoaded(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAsset) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UAssetRegistryHelpers::GetAsset(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClass) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UAssetRegistryHelpers::GetClass(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToSoftObjectPath) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSoftObjectPath*)Z_Param__Result=UAssetRegistryHelpers::ToSoftObjectPath(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullName) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAssetRegistryHelpers::GetFullName(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRedirector) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsRedirector(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUAsset) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsUAsset(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsValid(Z_Param_Out_InAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAssetData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InAsset); \
		P_GET_UBOOL(Z_Param_bAllowBlueprintClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=UAssetRegistryHelpers::CreateAssetData(Z_Param_InAsset,Z_Param_bAllowBlueprintClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetRegistry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TScriptInterface<IAssetRegistry>*)Z_Param__Result=UAssetRegistryHelpers::GetAssetRegistry(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetRegistryHelpers(); \
	friend struct Z_Construct_UClass_UAssetRegistryHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAssetRegistryHelpers)


#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAssetRegistryHelpers(); \
	friend struct Z_Construct_UClass_UAssetRegistryHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAssetRegistryHelpers)


#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetRegistryHelpers(UAssetRegistryHelpers&&); \
	NO_API UAssetRegistryHelpers(const UAssetRegistryHelpers&); \
public:


#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetRegistryHelpers(UAssetRegistryHelpers&&); \
	NO_API UAssetRegistryHelpers(const UAssetRegistryHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryHelpers)


#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_23_PROLOG
#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_INCLASS \
	Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETREGISTRY_API UClass* StaticClass<class UAssetRegistryHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AssetRegistry_Public_AssetRegistryHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetTools/Public/AssetToolsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetToolsSettings() {}
// Cross Module References
	ASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAdvancedCopyMap();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsSettings_NoRegister();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
class UScriptStruct* FAdvancedCopyMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FAdvancedCopyMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvancedCopyMap, Z_Construct_UPackage__Script_AssetTools(), TEXT("AdvancedCopyMap"), sizeof(FAdvancedCopyMap), Get_Z_Construct_UScriptStruct_FAdvancedCopyMap_Hash());
	}
	return Singleton;
}
template<> ASSETTOOLS_API UScriptStruct* StaticStruct<FAdvancedCopyMap>()
{
	return FAdvancedCopyMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdvancedCopyMap(FAdvancedCopyMap::StaticStruct, TEXT("/Script/AssetTools"), TEXT("AdvancedCopyMap"), false, nullptr, nullptr);
static struct FScriptStruct_AssetTools_StaticRegisterNativesFAdvancedCopyMap
{
	FScriptStruct_AssetTools_StaticRegisterNativesFAdvancedCopyMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdvancedCopyMap")),new UScriptStruct::TCppStructOps<FAdvancedCopyMap>);
	}
} ScriptStruct_AssetTools_StaticRegisterNativesFAdvancedCopyMap;
	struct Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedCopyCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedCopyCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToCopy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassToCopy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvancedCopyMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization_MetaData[] = {
		{ "Category", "Asset Tools" },
		{ "MetaClass", "AdvancedCopyCustomization" },
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
		{ "ToolTip", "The set of dependency and destination rules to use for advanced copy" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization = { "AdvancedCopyCustomization", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvancedCopyMap, AdvancedCopyCustomization), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy_MetaData[] = {
		{ "Category", "Asset Tools" },
		{ "MetaClass", "Object" },
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
		{ "ToolTip", "When copying this class, use a particular set of dependency and destination rules" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy = { "ClassToCopy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvancedCopyMap, ClassToCopy), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		&NewStructOps,
		"AdvancedCopyMap",
		sizeof(FAdvancedCopyMap),
		alignof(FAdvancedCopyMap),
		Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdvancedCopyMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdvancedCopyMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdvancedCopyMap"), sizeof(FAdvancedCopyMap), Get_Z_Construct_UScriptStruct_FAdvancedCopyMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdvancedCopyMap_Hash() { return 1846834700U; }
	void UAssetToolsSettings::StaticRegisterNativesUAssetToolsSettings()
	{
	}
	UClass* Z_Construct_UClass_UAssetToolsSettings_NoRegister()
	{
		return UAssetToolsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetToolsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedCopyCustomizations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdvancedCopyCustomizations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedCopyCustomizations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetToolsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetToolsSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Tools" },
		{ "IncludePath", "AssetToolsSettings.h" },
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_MetaData[] = {
		{ "Category", "Asset Tools" },
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
		{ "TitleProperty", "ClassToCopy" },
		{ "ToolTip", "List of rules to use when advanced copying assets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations = { "AdvancedCopyCustomizations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetToolsSettings, AdvancedCopyCustomizations), METADATA_PARAMS(Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_Inner = { "AdvancedCopyCustomizations", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdvancedCopyMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetToolsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetToolsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetToolsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetToolsSettings_Statics::ClassParams = {
		&UAssetToolsSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetToolsSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAssetToolsSettings_Statics::PropPointers),
		0,
		0x001002A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetToolsSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetToolsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetToolsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetToolsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetToolsSettings, 2549145199);
	template<> ASSETTOOLS_API UClass* StaticClass<UAssetToolsSettings>()
	{
		return UAssetToolsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetToolsSettings(Z_Construct_UClass_UAssetToolsSettings, &UAssetToolsSettings::StaticClass, TEXT("/Script/AssetTools"), TEXT("UAssetToolsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetToolsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

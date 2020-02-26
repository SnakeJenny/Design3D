// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintNativeCodeGen/Private/BlueprintNativeCodeGenManifest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintNativeCodeGenManifest() {}
// Cross Module References
	BLUEPRINTNATIVECODEGEN_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest();
	UPackage* Z_Construct_UPackage__Script_BlueprintNativeCodeGen();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompilerNativizationOptions();
	BLUEPRINTNATIVECODEGEN_API UScriptStruct* Z_Construct_UScriptStruct_FUnconvertedDependencyRecord();
	BLUEPRINTNATIVECODEGEN_API UScriptStruct* Z_Construct_UScriptStruct_FConvertedAssetRecord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FBlueprintNativeCodeGenManifest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTNATIVECODEGEN_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest, Z_Construct_UPackage__Script_BlueprintNativeCodeGen(), TEXT("BlueprintNativeCodeGenManifest"), sizeof(FBlueprintNativeCodeGenManifest), Get_Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTNATIVECODEGEN_API UScriptStruct* StaticStruct<FBlueprintNativeCodeGenManifest>()
{
	return FBlueprintNativeCodeGenManifest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintNativeCodeGenManifest(FBlueprintNativeCodeGenManifest::StaticStruct, TEXT("/Script/BlueprintNativeCodeGen"), TEXT("BlueprintNativeCodeGenManifest"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFBlueprintNativeCodeGenManifest
{
	FScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFBlueprintNativeCodeGenManifest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintNativeCodeGenManifest")),new UScriptStruct::TCppStructOps<FBlueprintNativeCodeGenManifest>);
	}
} ScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFBlueprintNativeCodeGenManifest;
	struct Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativizationOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NativizationOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnconvertedDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UnconvertedDependencies;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UnconvertedDependencies_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnconvertedDependencies_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvertedAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConvertedAssets;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConvertedAssets_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConvertedAssets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModuleDependencies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModuleDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManifestChunkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ManifestChunkId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
		{ "ToolTip", "FBlueprintNativeCodeGenManifest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintNativeCodeGenManifest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_NativizationOptions_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_NativizationOptions = { "NativizationOptions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintNativeCodeGenManifest, NativizationOptions), Z_Construct_UScriptStruct_FCompilerNativizationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_NativizationOptions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_NativizationOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies = { "UnconvertedDependencies", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintNativeCodeGenManifest, UnconvertedDependencies), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies_Key_KeyProp = { "UnconvertedDependencies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies_ValueProp = { "UnconvertedDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUnconvertedDependencyRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets = { "ConvertedAssets", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintNativeCodeGenManifest, ConvertedAssets), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets_Key_KeyProp = { "ConvertedAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets_ValueProp = { "ConvertedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FConvertedAssetRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ModuleDependencies_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ModuleDependencies = { "ModuleDependencies", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintNativeCodeGenManifest, ModuleDependencies), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ModuleDependencies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ModuleDependencies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ModuleDependencies_Inner = { "ModuleDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_OutputDir_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
		{ "ToolTip", "Target plugin directory (relative to the project's directory)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_OutputDir = { "OutputDir", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintNativeCodeGenManifest, OutputDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_OutputDir_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_OutputDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_PluginName_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintNativeCodeGenManifest, PluginName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_PluginName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_PluginName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ManifestChunkId_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
		{ "ToolTip", "To uniquely identify related manifests (split between child cook processes), so the files remain distinct." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ManifestChunkId = { "ManifestChunkId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintNativeCodeGenManifest, ManifestChunkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ManifestChunkId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ManifestChunkId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_NativizationOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_UnconvertedDependencies_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ConvertedAssets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ModuleDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ModuleDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_OutputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_PluginName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::NewProp_ManifestChunkId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintNativeCodeGen,
		nullptr,
		&NewStructOps,
		"BlueprintNativeCodeGenManifest",
		sizeof(FBlueprintNativeCodeGenManifest),
		alignof(FBlueprintNativeCodeGenManifest),
		Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintNativeCodeGen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintNativeCodeGenManifest"), sizeof(FBlueprintNativeCodeGenManifest), Get_Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintNativeCodeGenManifest_Hash() { return 3062233851U; }
class UScriptStruct* FUnconvertedDependencyRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTNATIVECODEGEN_API uint32 Get_Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnconvertedDependencyRecord, Z_Construct_UPackage__Script_BlueprintNativeCodeGen(), TEXT("UnconvertedDependencyRecord"), sizeof(FUnconvertedDependencyRecord), Get_Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTNATIVECODEGEN_API UScriptStruct* StaticStruct<FUnconvertedDependencyRecord>()
{
	return FUnconvertedDependencyRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUnconvertedDependencyRecord(FUnconvertedDependencyRecord::StaticStruct, TEXT("/Script/BlueprintNativeCodeGen"), TEXT("UnconvertedDependencyRecord"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFUnconvertedDependencyRecord
{
	FScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFUnconvertedDependencyRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UnconvertedDependencyRecord")),new UScriptStruct::TCppStructOps<FUnconvertedDependencyRecord>);
	}
} ScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFUnconvertedDependencyRecord;
	struct Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedWrapperPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GeneratedWrapperPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
		{ "ToolTip", "FUnconvertedDependencyRecord" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnconvertedDependencyRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::NewProp_GeneratedWrapperPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::NewProp_GeneratedWrapperPath = { "GeneratedWrapperPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnconvertedDependencyRecord, GeneratedWrapperPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::NewProp_GeneratedWrapperPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::NewProp_GeneratedWrapperPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::NewProp_GeneratedWrapperPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintNativeCodeGen,
		nullptr,
		&NewStructOps,
		"UnconvertedDependencyRecord",
		sizeof(FUnconvertedDependencyRecord),
		alignof(FUnconvertedDependencyRecord),
		Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnconvertedDependencyRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintNativeCodeGen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UnconvertedDependencyRecord"), sizeof(FUnconvertedDependencyRecord), Get_Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUnconvertedDependencyRecord_Hash() { return 2902893770U; }
class UScriptStruct* FConvertedAssetRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTNATIVECODEGEN_API uint32 Get_Z_Construct_UScriptStruct_FConvertedAssetRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConvertedAssetRecord, Z_Construct_UPackage__Script_BlueprintNativeCodeGen(), TEXT("ConvertedAssetRecord"), sizeof(FConvertedAssetRecord), Get_Z_Construct_UScriptStruct_FConvertedAssetRecord_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTNATIVECODEGEN_API UScriptStruct* StaticStruct<FConvertedAssetRecord>()
{
	return FConvertedAssetRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConvertedAssetRecord(FConvertedAssetRecord::StaticStruct, TEXT("/Script/BlueprintNativeCodeGen"), TEXT("ConvertedAssetRecord"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFConvertedAssetRecord
{
	FScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFConvertedAssetRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConvertedAssetRecord")),new UScriptStruct::TCppStructOps<FConvertedAssetRecord>);
	}
} ScriptStruct_BlueprintNativeCodeGen_StaticRegisterNativesFConvertedAssetRecord;
	struct Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedCppPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GeneratedCppPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedHeaderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GeneratedHeaderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetObjPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
		{ "ToolTip", "FCodeGenAssetRecord" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConvertedAssetRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedCppPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedCppPath = { "GeneratedCppPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvertedAssetRecord, GeneratedCppPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedCppPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedCppPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedHeaderPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedHeaderPath = { "GeneratedHeaderPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvertedAssetRecord, GeneratedHeaderPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedHeaderPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedHeaderPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_TargetObjPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
		{ "ToolTip", "cannot use a FSoftObjectPath, as the json serializer has problems\nwith some asset paths (for example, I had a folder named 'Folder()')" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_TargetObjPath = { "TargetObjPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvertedAssetRecord, TargetObjPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_TargetObjPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_TargetObjPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_AssetType_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNativeCodeGenManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvertedAssetRecord, AssetType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_AssetType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_AssetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedCppPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_GeneratedHeaderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_TargetObjPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::NewProp_AssetType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintNativeCodeGen,
		nullptr,
		&NewStructOps,
		"ConvertedAssetRecord",
		sizeof(FConvertedAssetRecord),
		alignof(FConvertedAssetRecord),
		Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConvertedAssetRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConvertedAssetRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintNativeCodeGen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConvertedAssetRecord"), sizeof(FConvertedAssetRecord), Get_Z_Construct_UScriptStruct_FConvertedAssetRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConvertedAssetRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConvertedAssetRecord_Hash() { return 1987505706U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

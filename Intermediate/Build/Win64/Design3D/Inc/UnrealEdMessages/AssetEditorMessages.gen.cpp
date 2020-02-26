// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEdMessages/Classes/AssetEditorMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetEditorMessages() {}
// Cross Module References
	UNREALEDMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset();
	UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
// End Cross Module References
class UScriptStruct* FAssetEditorRequestOpenAsset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALEDMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset, Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("AssetEditorRequestOpenAsset"), sizeof(FAssetEditorRequestOpenAsset), Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Hash());
	}
	return Singleton;
}
template<> UNREALEDMESSAGES_API UScriptStruct* StaticStruct<FAssetEditorRequestOpenAsset>()
{
	return FAssetEditorRequestOpenAsset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetEditorRequestOpenAsset(FAssetEditorRequestOpenAsset::StaticStruct, TEXT("/Script/UnrealEdMessages"), TEXT("AssetEditorRequestOpenAsset"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset
{
	FScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetEditorRequestOpenAsset")),new UScriptStruct::TCppStructOps<FAssetEditorRequestOpenAsset>);
	}
} ScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset;
	struct Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AssetEditorMessages.h" },
		{ "ToolTip", "Implements a message for opening an asset in the asset browser." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorRequestOpenAsset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Classes/AssetEditorMessages.h" },
		{ "ToolTip", "Holds the name of the asset to open." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetEditorRequestOpenAsset, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEdMessages,
		nullptr,
		&NewStructOps,
		"AssetEditorRequestOpenAsset",
		sizeof(FAssetEditorRequestOpenAsset),
		alignof(FAssetEditorRequestOpenAsset),
		Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEdMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetEditorRequestOpenAsset"), sizeof(FAssetEditorRequestOpenAsset), Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Hash() { return 4099501708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

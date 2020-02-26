// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kismet/Public/BlueprintActionMenuItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintActionMenuItem() {}
// Cross Module References
	KISMET_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintActionMenuItem();
	UPackage* Z_Construct_UPackage__Script_Kismet();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
// End Cross Module References
class UScriptStruct* FBlueprintActionMenuItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KISMET_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintActionMenuItem, Z_Construct_UPackage__Script_Kismet(), TEXT("BlueprintActionMenuItem"), sizeof(FBlueprintActionMenuItem), Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Hash());
	}
	return Singleton;
}
template<> KISMET_API UScriptStruct* StaticStruct<FBlueprintActionMenuItem>()
{
	return FBlueprintActionMenuItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintActionMenuItem(FBlueprintActionMenuItem::StaticStruct, TEXT("/Script/Kismet"), TEXT("BlueprintActionMenuItem"), false, nullptr, nullptr);
static struct FScriptStruct_Kismet_StaticRegisterNativesFBlueprintActionMenuItem
{
	FScriptStruct_Kismet_StaticRegisterNativesFBlueprintActionMenuItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintActionMenuItem")),new UScriptStruct::TCppStructOps<FBlueprintActionMenuItem>);
	}
} ScriptStruct_Kismet_StaticRegisterNativesFBlueprintActionMenuItem;
	struct Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintActionMenuItem.h" },
		{ "ToolTip", "Wrapper around a UBlueprintNodeSpawner, which takes care of specialized\nnode spawning. This class should not be sub-classed, any special handling\nshould be done inside a UBlueprintNodeSpawner subclass, which will be\ninvoked from this class (separated to divide ui and node-spawning)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintActionMenuItem>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"BlueprintActionMenuItem",
		sizeof(FBlueprintActionMenuItem),
		alignof(FBlueprintActionMenuItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintActionMenuItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Kismet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintActionMenuItem"), sizeof(FBlueprintActionMenuItem), Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Hash() { return 2492735360U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

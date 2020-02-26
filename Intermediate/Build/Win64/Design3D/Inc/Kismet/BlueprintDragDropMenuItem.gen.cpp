// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kismet/Public/BlueprintDragDropMenuItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintDragDropMenuItem() {}
// Cross Module References
	KISMET_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem();
	UPackage* Z_Construct_UPackage__Script_Kismet();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
// End Cross Module References
class UScriptStruct* FBlueprintDragDropMenuItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KISMET_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem, Z_Construct_UPackage__Script_Kismet(), TEXT("BlueprintDragDropMenuItem"), sizeof(FBlueprintDragDropMenuItem), Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Hash());
	}
	return Singleton;
}
template<> KISMET_API UScriptStruct* StaticStruct<FBlueprintDragDropMenuItem>()
{
	return FBlueprintDragDropMenuItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintDragDropMenuItem(FBlueprintDragDropMenuItem::StaticStruct, TEXT("/Script/Kismet"), TEXT("BlueprintDragDropMenuItem"), false, nullptr, nullptr);
static struct FScriptStruct_Kismet_StaticRegisterNativesFBlueprintDragDropMenuItem
{
	FScriptStruct_Kismet_StaticRegisterNativesFBlueprintDragDropMenuItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintDragDropMenuItem")),new UScriptStruct::TCppStructOps<FBlueprintDragDropMenuItem>);
	}
} ScriptStruct_Kismet_StaticRegisterNativesFBlueprintDragDropMenuItem;
	struct Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintDragDropMenuItem.h" },
		{ "ToolTip", "At certain times we want a single menu entry that represents a set of\nUBlueprintNodeSpawners (generally when all those UBlueprintNodeSpawners wrap\nthe same UField). We do this to keep the menu less jumbled, and instead\nuse the drag/drop action to present a sub-menu to the user (so they can pick\nthe the node type that they want). We do this with both delegates and\nvariable nodes (where the user can pick a getter vs. a setter, etc.).\n\nThis class represents those \"consolidated\" actions, and essentially serves\nas a FDragDropOperation spawner. It wraps a single UBlueprintNodeSpawner (any\none of the set that it is supposed to represent), that it uses to determine\nthe proper FDragDropOperation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintDragDropMenuItem>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"BlueprintDragDropMenuItem",
		sizeof(FBlueprintDragDropMenuItem),
		alignof(FBlueprintDragDropMenuItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Kismet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintDragDropMenuItem"), sizeof(FBlueprintDragDropMenuItem), Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Hash() { return 3686210181U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

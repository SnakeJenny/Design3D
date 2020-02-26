// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Layout/Anchors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnchors() {}
// Cross Module References
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	UPackage* Z_Construct_UPackage__Script_Slate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FAnchors::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FAnchors_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchors, Z_Construct_UPackage__Script_Slate(), TEXT("Anchors"), sizeof(FAnchors), Get_Z_Construct_UScriptStruct_FAnchors_Hash());
	}
	return Singleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FAnchors>()
{
	return FAnchors::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnchors(FAnchors::StaticStruct, TEXT("/Script/Slate"), TEXT("Anchors"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFAnchors
{
	FScriptStruct_Slate_StaticRegisterNativesFAnchors()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Anchors")),new UScriptStruct::TCppStructOps<FAnchors>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFAnchors;
	struct Z_Construct_UScriptStruct_FAnchors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Minimum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
		{ "ToolTip", "Describes how a widget is anchored." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnchors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchors>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
		{ "ToolTip", "Holds the maximum anchors, right + bottom." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnchors, Maximum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Maximum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
		{ "ToolTip", "Holds the minimum anchors, left + top." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnchors, Minimum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Minimum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Minimum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnchors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Maximum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Minimum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnchors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"Anchors",
		sizeof(FAnchors),
		alignof(FAnchors),
		Z_Construct_UScriptStruct_FAnchors_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchors_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnchors()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnchors_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Anchors"), sizeof(FAnchors), Get_Z_Construct_UScriptStruct_FAnchors_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnchors_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnchors_Hash() { return 3744802801U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

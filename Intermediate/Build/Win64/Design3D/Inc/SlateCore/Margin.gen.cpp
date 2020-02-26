// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Layout/Margin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMargin() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
class UScriptStruct* FMargin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FMargin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMargin, Z_Construct_UPackage__Script_SlateCore(), TEXT("Margin"), sizeof(FMargin), Get_Z_Construct_UScriptStruct_FMargin_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FMargin>()
{
	return FMargin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMargin(FMargin::StaticStruct, TEXT("/Script/SlateCore"), TEXT("Margin"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFMargin
{
	FScriptStruct_SlateCore_StaticRegisterNativesFMargin()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Margin")),new UScriptStruct::TCppStructOps<FMargin>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFMargin;
	struct Z_Construct_UScriptStruct_FMargin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Describes the space around a Widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMargin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMargin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Holds the margin to the bottom." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMargin, Bottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Holds the margin to the right." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMargin, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Holds the margin to the top." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMargin, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Holds the margin to the left." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMargin, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMargin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMargin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"Margin",
		sizeof(FMargin),
		alignof(FMargin),
		Z_Construct_UScriptStruct_FMargin_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMargin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMargin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Margin"), sizeof(FMargin), Get_Z_Construct_UScriptStruct_FMargin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMargin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMargin_Hash() { return 2272823085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

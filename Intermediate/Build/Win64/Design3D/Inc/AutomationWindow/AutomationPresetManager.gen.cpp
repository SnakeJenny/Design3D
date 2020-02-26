// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationWindow/Private/AutomationPresetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationPresetManager() {}
// Cross Module References
	AUTOMATIONWINDOW_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestPreset();
	UPackage* Z_Construct_UPackage__Script_AutomationWindow();
// End Cross Module References
class UScriptStruct* FAutomationTestPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONWINDOW_API uint32 Get_Z_Construct_UScriptStruct_FAutomationTestPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationTestPreset, Z_Construct_UPackage__Script_AutomationWindow(), TEXT("AutomationTestPreset"), sizeof(FAutomationTestPreset), Get_Z_Construct_UScriptStruct_FAutomationTestPreset_Hash());
	}
	return Singleton;
}
template<> AUTOMATIONWINDOW_API UScriptStruct* StaticStruct<FAutomationTestPreset>()
{
	return FAutomationTestPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationTestPreset(FAutomationTestPreset::StaticStruct, TEXT("/Script/AutomationWindow"), TEXT("AutomationTestPreset"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationWindow_StaticRegisterNativesFAutomationTestPreset
{
	FScriptStruct_AutomationWindow_StaticRegisterNativesFAutomationTestPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationTestPreset")),new UScriptStruct::TCppStructOps<FAutomationTestPreset>);
	}
} ScriptStruct_AutomationWindow_StaticRegisterNativesFAutomationTestPreset;
	struct Z_Construct_UScriptStruct_FAutomationTestPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledTests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnabledTests;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnabledTests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AutomationPresetManager.h" },
		{ "ToolTip", "Class that holds preset data for the automation window" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationTestPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationPresetManager.h" },
		{ "ToolTip", "The list of enabled test names." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests = { "EnabledTests", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationTestPreset, EnabledTests), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_Inner = { "EnabledTests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationPresetManager.h" },
		{ "ToolTip", "The name of this preset." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationTestPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationPresetManager.h" },
		{ "ToolTip", "The unique name for this preset." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationTestPreset, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationWindow,
		nullptr,
		&NewStructOps,
		"AutomationTestPreset",
		sizeof(FAutomationTestPreset),
		alignof(FAutomationTestPreset),
		Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationTestPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationWindow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationTestPreset"), sizeof(FAutomationTestPreset), Get_Z_Construct_UScriptStruct_FAutomationTestPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationTestPreset_Hash() { return 1041286151U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

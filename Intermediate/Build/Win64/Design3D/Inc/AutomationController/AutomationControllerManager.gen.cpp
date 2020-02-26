// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationController/Private/AutomationControllerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationControllerManager() {}
// Cross Module References
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults();
	UPackage* Z_Construct_UPackage__Script_AutomationController();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationExecutionEntry();
	AUTOMATIONCONTROLLER_API UEnum* Z_Construct_UEnum_AutomationController_EAutomationState();
// End Cross Module References
class UScriptStruct* FAutomatedTestPassResults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestPassResults, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestPassResults"), sizeof(FAutomatedTestPassResults), Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_Hash());
	}
	return Singleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestPassResults>()
{
	return FAutomatedTestPassResults::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomatedTestPassResults(FAutomatedTestPassResults::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomatedTestPassResults"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomatedTestPassResults")),new UScriptStruct::TCppStructOps<FAutomatedTestPassResults>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults;
	struct Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonExportDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComparisonExportDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonExported_MetaData[];
#endif
		static void NewProp_ComparisonExported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ComparisonExported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotRun_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NotRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Failed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SucceededWithWarnings_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SucceededWithWarnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Succeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportCreatedOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReportCreatedOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestPassResults>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestPassResults, Tests), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutomatedTestResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory = { "ComparisonExportDirectory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestPassResults, ComparisonExportDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_SetBit(void* Obj)
	{
		((FAutomatedTestPassResults*)Obj)->ComparisonExported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported = { "ComparisonExported", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAutomatedTestPassResults), &Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestPassResults, TotalDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun = { "NotRun", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestPassResults, NotRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestPassResults, Failed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings = { "SucceededWithWarnings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestPassResults, SucceededWithWarnings), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestPassResults, Succeeded), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn = { "ReportCreatedOn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestPassResults, ReportCreatedOn), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomatedTestPassResults",
		sizeof(FAutomatedTestPassResults),
		alignof(FAutomatedTestPassResults),
		Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomatedTestPassResults"), sizeof(FAutomatedTestPassResults), Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_Hash() { return 4055573035U; }
class UScriptStruct* FAutomatedTestResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestResult, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestResult"), sizeof(FAutomatedTestResult), Get_Z_Construct_UScriptStruct_FAutomatedTestResult_Hash());
	}
	return Singleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestResult>()
{
	return FAutomatedTestResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomatedTestResult(FAutomatedTestResult::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomatedTestResult"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomatedTestResult")),new UScriptStruct::TCppStructOps<FAutomatedTestResult>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult;
	struct Z_Construct_UScriptStruct_FAutomatedTestResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Artifacts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Artifacts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Errors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Warnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullTestPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts = { "Artifacts", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestResult, Artifacts), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_Inner = { "Artifacts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutomationArtifact, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestResult, Errors), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings = { "Warnings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestResult, Warnings), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestResult, Entries), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutomationExecutionEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestResult, State), Z_Construct_UEnum_AutomationController_EAutomationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath = { "FullTestPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestResult, FullTestPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName = { "TestDisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestResult, TestDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomatedTestResult",
		sizeof(FAutomatedTestResult),
		alignof(FAutomatedTestResult),
		Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomatedTestResult"), sizeof(FAutomatedTestResult), Get_Z_Construct_UScriptStruct_FAutomatedTestResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_Hash() { return 154677138U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

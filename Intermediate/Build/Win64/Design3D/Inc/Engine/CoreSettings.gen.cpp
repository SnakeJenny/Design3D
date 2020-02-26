// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CoreSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings();
// End Cross Module References
	void UStreamingSettings::StaticRegisterNativesUStreamingSettings()
	{
	}
	UClass* Z_Construct_UClass_UStreamingSettings_NoRegister()
	{
		return UStreamingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStreamingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventDrivenLoaderEnabled_MetaData[];
#endif
		static void NewProp_EventDrivenLoaderEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EventDrivenLoaderEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelStreamingComponentsUnregistrationGranularity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelStreamingUnregisterComponentsTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelStreamingComponentsRegistrationGranularity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PriorityLevelStreamingActorsUpdateExtraTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelStreamingActorsUpdateTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityAsyncLoadingExtraTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PriorityAsyncLoadingExtraTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncLoadingTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingUseFullTimeLimit_MetaData[];
#endif
		static void NewProp_AsyncLoadingUseFullTimeLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AsyncLoadingUseFullTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBackgroundLevelStreaming_MetaData[];
#endif
		static void NewProp_UseBackgroundLevelStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseBackgroundLevelStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBulkDataSizeForAsyncLoading_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinBulkDataSizeForAsyncLoading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimitExceededMinTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimitExceededMinTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimitExceededMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimitExceededMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarnIfTimeLimitExceeded_MetaData[];
#endif
		static void NewProp_WarnIfTimeLimitExceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WarnIfTimeLimitExceeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingThreadEnabled_MetaData[];
#endif
		static void NewProp_AsyncLoadingThreadEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AsyncLoadingThreadEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Streaming" },
		{ "IncludePath", "Engine/CoreSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Streaming settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.EventDrivenLoaderEnabled" },
		{ "DisplayName", "Event Driven Loader Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables the event driven loader in cooked builds." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->EventDrivenLoaderEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled = { "EventDrivenLoaderEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingComponentsUnregistrationGranularity" },
		{ "DisplayName", "Components Unregistration Granularity" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Batching granularity used to unregister actor components during level streaming." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity = { "LevelStreamingComponentsUnregistrationGranularity", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsUnregistrationGranularity), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.UnregisterComponentsTimeLimit" },
		{ "DisplayName", "Component Unregister Update Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum allowed time to spend while unregistering components during level streaming (ms per frame)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit = { "LevelStreamingUnregisterComponentsTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingUnregisterComponentsTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingComponentsRegistrationGranularity" },
		{ "DisplayName", "Components Registration Granularity" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Batching granularity used to register actor components during level streaming." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity = { "LevelStreamingComponentsRegistrationGranularity", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsRegistrationGranularity), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.PriorityLevelStreamingActorsUpdateExtraTime" },
		{ "DisplayName", "Priority Actor Initialization Update Extra Time" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Additional time to spend on actor registration steps during a high priority load." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime = { "PriorityLevelStreamingActorsUpdateExtraTime", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, PriorityLevelStreamingActorsUpdateExtraTime), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingActorsUpdateTimeLimit" },
		{ "DisplayName", "Actor Initialization Update Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum allowed time to spend for actor registration steps during level streaming (ms per frame)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit = { "LevelStreamingActorsUpdateTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingActorsUpdateTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.PriorityAsyncLoadingExtraTime" },
		{ "DisplayName", "Priority Async Loading Extra Time" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Additional time to spend asynchronous loading during a high priority load." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime = { "PriorityAsyncLoadingExtraTime", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, PriorityAsyncLoadingExtraTime), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingTimeLimit" },
		{ "DisplayName", "Async Loading Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum amount of time to spend doing asynchronous loading (ms per frame)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit = { "AsyncLoadingTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, AsyncLoadingTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingUseFullTimeLimit" },
		{ "DisplayName", "Async Loading Use Full Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to use the entire time limit even if blocked on I/O." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->AsyncLoadingUseFullTimeLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit = { "AsyncLoadingUseFullTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.UseBackgroundLevelStreaming" },
		{ "DisplayName", "Use Background Level Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow background level streaming." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->UseBackgroundLevelStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming = { "UseBackgroundLevelStreaming", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.MinBulkDataSizeForAsyncLoading" },
		{ "DisplayName", "Minimum Bulk Data Size For Async Loading" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum time the time limit exceeded warning will be triggered by." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading = { "MinBulkDataSizeForAsyncLoading", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, MinBulkDataSizeForAsyncLoading), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.TimeLimitExceededMinTime" },
		{ "DisplayName", "Minimum Time Limit For Time Limit Exceeded Warning" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum time the time limit exceeded warning will be triggered by." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime = { "TimeLimitExceededMinTime", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMinTime), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.TimeLimitExceededMultiplier" },
		{ "DisplayName", "Time Limit Exceeded Warning Multiplier" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Multiplier for time limit exceeded warning time threshold." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier = { "TimeLimitExceededMultiplier", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMultiplier), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.WarnIfTimeLimitExceeded" },
		{ "DisplayName", "Warn If Time Limit Has Been Exceeded" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables log warning if time limit for time-sliced package streaming has been exceeded." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->WarnIfTimeLimitExceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded = { "WarnIfTimeLimitExceeded", nullptr, (EPropertyFlags)0x00200c0000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingThreadEnabled" },
		{ "DisplayName", "Async Loading Thread Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables separate thread for package streaming. Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->AsyncLoadingThreadEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled = { "AsyncLoadingThreadEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamingSettings_Statics::ClassParams = {
		&UStreamingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamingSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamingSettings, 2460946948);
	template<> ENGINE_API UClass* StaticClass<UStreamingSettings>()
	{
		return UStreamingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamingSettings(Z_Construct_UClass_UStreamingSettings, &UStreamingSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UStreamingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingSettings);
	void UGarbageCollectionSettings::StaticRegisterNativesUGarbageCollectionSettings()
	{
	}
	UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister()
	{
		return UGarbageCollectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGarbageCollectionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInEditor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeOfPermanentObjectPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeOfPermanentObjectPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsNotConsideredByGC_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxObjectsNotConsideredByGC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRetriesBeforeForcingGC_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRetriesBeforeForcingGC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGCClusterSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinGCClusterSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDisregardForGCOnDedicatedServers_MetaData[];
#endif
		static void NewProp_UseDisregardForGCOnDedicatedServers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDisregardForGCOnDedicatedServers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintClusteringEnabled_MetaData[];
#endif
		static void NewProp_BlueprintClusteringEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BlueprintClusteringEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClusteringEnabled_MetaData[];
#endif
		static void NewProp_ActorClusteringEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActorClusteringEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateGCClusters_MetaData[];
#endif
		static void NewProp_CreateGCClusters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateGCClusters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncrementalBeginDestroyEnabled_MetaData[];
#endif
		static void NewProp_IncrementalBeginDestroyEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncrementalBeginDestroyEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowParallelGC_MetaData[];
#endif
		static void NewProp_AllowParallelGC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowParallelGC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlushStreamingOnGC_MetaData[];
#endif
		static void NewProp_FlushStreamingOnGC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlushStreamingOnGC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenPurgingPendingKillObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenPurgingPendingKillObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGarbageCollectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Garbage Collection" },
		{ "IncludePath", "Engine/CoreSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Implements the settings for garbage collection." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsInEditor" },
		{ "DisplayName", "Maximum number of UObjects that can exist in the editor" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of UObjects that can exist in the editor game. Make sure this can hold enough objects for the editor and commadlets within reasonable limit." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor = { "MaxObjectsInEditor", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInEditor), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsInGame" },
		{ "DisplayName", "Maximum number of UObjects that can exist in cooked game" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of UObjects that can exist in cooked game. Keep this as small as possible." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame = { "MaxObjectsInGame", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInGame), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.SizeOfPermanentObjectPool" },
		{ "DisplayName", "Size Of Permanent Object Pool" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Size Of Permanent Object Pool (bytes). Works only in cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool = { "SizeOfPermanentObjectPool", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGarbageCollectionSettings, SizeOfPermanentObjectPool), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsNotConsideredByGC" },
		{ "DisplayName", "Maximum Object Count Not Considered By GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum Object Count Not Considered By GC. Works only in cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC = { "MaxObjectsNotConsideredByGC", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsNotConsideredByGC), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.NumRetriesBeforeForcingGC" },
		{ "DisplayName", "Number Of Retries Before Forcing GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of times GC can be skipped if worker threads are currently modifying UObject state. 0 = never force GC" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC = { "NumRetriesBeforeForcingGC", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGarbageCollectionSettings, NumRetriesBeforeForcingGC), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MinGCClusterSize" },
		{ "DisplayName", "Minimum GC Cluster size" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum GC cluster size." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize = { "MinGCClusterSize", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGarbageCollectionSettings, MinGCClusterSize), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.UseDisregardForGCOnDedicatedServers" },
		{ "DisplayName", "Use DisregardForGC On Dedicated Servers" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If false, DisregardForGC will be disabled for dedicated servers." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->UseDisregardForGCOnDedicatedServers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers = { "UseDisregardForGCOnDedicatedServers", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.BlueprintClusteringEnabled" },
		{ "DisplayName", "Blueprint Clustering Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow Blueprint classes to create GC clusters." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->BlueprintClusteringEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled = { "BlueprintClusteringEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.ActorClusteringEnabled" },
		{ "DisplayName", "Actor Clustering Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow levels to create actor clusters for GC." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->ActorClusteringEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled = { "ActorClusteringEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.CreateGCClusters" },
		{ "DisplayName", "Create Garbage Collector UObject Clusters" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will attempt to create clusters of objects for better garbage collection performance." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->CreateGCClusters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters = { "CreateGCClusters", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.IncrementalBeginDestroyEnabled" },
		{ "DisplayName", "Incremental BeginDestroy Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will destroy objects incrementally using time limit each frame." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->IncrementalBeginDestroyEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled = { "IncrementalBeginDestroyEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.AllowParallelGC" },
		{ "DisplayName", "Allow Parallel GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If enabled, garbage collection will use multiple threads." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->AllowParallelGC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC = { "AllowParallelGC", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.FlushStreamingOnGC" },
		{ "DisplayName", "Flush Streaming On GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If enabled, streaming will be flushed each time garbage collection is triggered." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->FlushStreamingOnGC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC = { "FlushStreamingOnGC", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.TimeBetweenPurgingPendingKillObjects" },
		{ "DisplayName", "Time Between Purging Pending Kill Objects" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Time in seconds (game time) we should wait between purging object references to objects that are pending kill." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects = { "TimeBetweenPurgingPendingKillObjects", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGarbageCollectionSettings, TimeBetweenPurgingPendingKillObjects), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGarbageCollectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGarbageCollectionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::ClassParams = {
		&UGarbageCollectionSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGarbageCollectionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGarbageCollectionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGarbageCollectionSettings, 3384375084);
	template<> ENGINE_API UClass* StaticClass<UGarbageCollectionSettings>()
	{
		return UGarbageCollectionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGarbageCollectionSettings(Z_Construct_UClass_UGarbageCollectionSettings, &UGarbageCollectionSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UGarbageCollectionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGarbageCollectionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

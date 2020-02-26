// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineSettings/Classes/GameNetworkManagerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameNetworkManagerSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGameNetworkManagerSettings::StaticRegisterNativesUGameNetworkManagerSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister()
	{
		return UGameNetworkManagerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameNetworkManagerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressStandbyWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressStandbyWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentForBadPing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentForBadPing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForTxStandby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForTxStandby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForRxStandby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForRxStandby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyTxCheatTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyTxCheatTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyRxCheatTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyRxCheatTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStandbyCheckingEnabled_MetaData[];
#endif
		static void NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStandbyCheckingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BadPingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNetBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNetBandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDynamicBandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDynamicBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDynamicBandwidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameNetworkManagerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameNetworkManagerSettings.h" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Holds the settings for the AGameNetworkManager class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time to wait before checking a connection for standby issues." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime = { "JoinInProgressStandbyWaitTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients with bad ping before triggering the standby code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing = { "PercentForBadPing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentForBadPing), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients missing TX data before triggering the standby code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby = { "PercentMissingForTxStandby", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForTxStandby), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients missing RX data before triggering the standby code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby = { "PercentMissingForRxStandby", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForRxStandby), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime = { "StandbyTxCheatTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyTxCheatTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime = { "StandbyRxCheatTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyRxCheatTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Used to determine if checking for standby cheats should occur." },
	};
#endif
	void Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj)
	{
		((UGameNetworkManagerSettings*)Obj)->bIsStandbyCheckingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled = { "bIsStandbyCheckingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGameNetworkManagerSettings), &Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The point we determine the server is either delaying packets or has bad upstream." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold = { "BadPingThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, BadPingThreshold), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Total available bandwidth for listen server, split dynamically across net connections." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth = { "TotalNetBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, TotalNetBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Maximum bandwidth dynamically set per connection." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth = { "MaxDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, MaxDynamicBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Minimum bandwidth dynamically set per connection." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth = { "MinDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, MinDynamicBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameNetworkManagerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameNetworkManagerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::ClassParams = {
		&UGameNetworkManagerSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameNetworkManagerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameNetworkManagerSettings, 1069512310);
	template<> ENGINESETTINGS_API UClass* StaticClass<UGameNetworkManagerSettings>()
	{
		return UGameNetworkManagerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameNetworkManagerSettings(Z_Construct_UClass_UGameNetworkManagerSettings, &UGameNetworkManagerSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameNetworkManagerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameNetworkManagerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

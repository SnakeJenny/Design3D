// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/NetworkSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNetworkSettings::StaticRegisterNativesUNetworkSettings()
	{
	}
	UClass* Z_Construct_UClass_UNetworkSettings_NoRegister()
	{
		return UNetworkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRepArrayMemory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRepArrayMemory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRepArraySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRepArraySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData[];
#endif
		static void NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiplayerWorldOriginRebasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVerifyPeer_MetaData[];
#endif
		static void NewProp_bVerifyPeer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVerifyPeer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Network" },
		{ "IncludePath", "Engine/NetworkSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "Network settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArrayMemory_MetaData[] = {
		{ "Category", "replication" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "1" },
		{ "ConsoleVariable", "net.MaxRepArrayMemory" },
		{ "DisplayName", "Max Array Memory" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "Maximum allowable size for replicated dynamic arrays (in bytes).  Must be between 1 and 65535." },
		{ "UIMax", "65535" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArrayMemory = { "MaxRepArrayMemory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetworkSettings, MaxRepArrayMemory), METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArrayMemory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArrayMemory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArraySize_MetaData[] = {
		{ "Category", "replication" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "1" },
		{ "ConsoleVariable", "net.MaxRepArraySize" },
		{ "DisplayName", "Max Array Size" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "Maximum allowable size for replicated dynamic arrays (in number of elements). Must be between 1 and 65535." },
		{ "UIMax", "65535" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArraySize = { "MaxRepArraySize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetworkSettings, MaxRepArraySize), METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArraySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArraySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData[] = {
		{ "Category", "World" },
		{ "ConsoleVariable", "p.EnableMultiplayerWorldOriginRebasing" },
		{ "DisplayName", "Enable Multiplayer World Origin Rebasing" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "If true, origin rebasing is enabled in multiplayer games, meaning that servers and clients can have different local world origins." },
	};
#endif
	void Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit(void* Obj)
	{
		((UNetworkSettings*)Obj)->bEnableMultiplayerWorldOriginRebasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing = { "bEnableMultiplayerWorldOriginRebasing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNetworkSettings), &Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_MetaData[] = {
		{ "Category", "libcurl" },
		{ "ConsoleVariable", "n.VerifyPeer" },
		{ "DisplayName", "Verify Peer" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "If true, libcurl authenticates the peer's certificate. Disable to allow self-signed certificates." },
	};
#endif
	void Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_SetBit(void* Obj)
	{
		((UNetworkSettings*)Obj)->bVerifyPeer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer = { "bVerifyPeer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNetworkSettings), &Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArrayMemory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_MaxRepArraySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetworkSettings_Statics::ClassParams = {
		&UNetworkSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetworkSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetworkSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetworkSettings, 4019239853);
	template<> ENGINE_API UClass* StaticClass<UNetworkSettings>()
	{
		return UNetworkSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetworkSettings(Z_Construct_UClass_UNetworkSettings, &UNetworkSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UNetworkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

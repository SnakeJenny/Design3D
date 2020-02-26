// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/NetDriver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriver() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChannelDefinition();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPacketSimulationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
// End Cross Module References
class UScriptStruct* FChannelDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChannelDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("ChannelDefinition"), sizeof(FChannelDefinition), Get_Z_Construct_UScriptStruct_FChannelDefinition_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChannelDefinition>()
{
	return FChannelDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChannelDefinition(FChannelDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("ChannelDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFChannelDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFChannelDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChannelDefinition")),new UScriptStruct::TCppStructOps<FChannelDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFChannelDefinition;
	struct Z_Construct_UScriptStruct_FChannelDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialClient_MetaData[];
#endif
		static void NewProp_bInitialClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialServer_MetaData[];
#endif
		static void NewProp_bInitialServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientOpen_MetaData[];
#endif
		static void NewProp_bClientOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerOpen_MetaData[];
#endif
		static void NewProp_bServerOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickOnCreate_MetaData[];
#endif
		static void NewProp_bTickOnCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickOnCreate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticChannelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticChannelIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChannelClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChannelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify properties of a channel type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel created on server when connection is established" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bInitialClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient = { "bInitialClient", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel opened by the client" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bInitialServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer = { "bInitialServer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel opened by the server" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bClientOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen = { "bClientOpen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Whether to immediately begin ticking the channel after creation" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bServerOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen = { "bServerOpen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel always uses this index, INDEX_NONE if dynamically chosen" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bTickOnCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate = { "bTickOnCreate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "UClass used to create the UChannel" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex = { "StaticChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelDefinition, StaticChannelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "UClass name used to create the UChannel" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass = { "ChannelClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelDefinition, ChannelClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel type identifier" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelDefinition, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelDefinition, ChannelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ChannelDefinition",
		sizeof(FChannelDefinition),
		alignof(FChannelDefinition),
		Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChannelDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChannelDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChannelDefinition"), sizeof(FChannelDefinition), Get_Z_Construct_UScriptStruct_FChannelDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChannelDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChannelDefinition_Hash() { return 3277737017U; }
class UScriptStruct* FPacketSimulationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPacketSimulationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("PacketSimulationSettings"), sizeof(FPacketSimulationSettings), Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPacketSimulationSettings>()
{
	return FPacketSimulationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPacketSimulationSettings(FPacketSimulationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("PacketSimulationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPacketSimulationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFPacketSimulationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PacketSimulationSettings")),new UScriptStruct::TCppStructOps<FPacketSimulationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPacketSimulationSettings;
	struct Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktLagVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktLagVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktLag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktLag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktDup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktDup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktLossMinSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktLossMinSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktLossMaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktLossMaxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktLoss_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktLoss;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Holds the packet simulation settings in one place" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPacketSimulationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause PktLag to use variable lag instead of constant.\nValue is treated as millisecond lag range (e.g. -GivenVariance <= 0 <= GivenVariance).\nClamped between 0 and 100.\n\nCan only be used when PktLag is enabled." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance = { "PktLagVariance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLagVariance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to delay packets.\nValue is treated as millisecond lag.\n\nCannot be used with PktOrder." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag = { "PktLag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLag), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to duplicate packets.\nValue is treated as % of packets duplicated (i.e. 0 = None, 100 = All).\nNo general pattern / ordering is guaranteed.\nClamped between 0 and 100.\n\nCannot be used with PktOrder or PktLag." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup = { "PktDup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktDup), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to change ordering of packets at random.\nValue is treated as a bool (i.e. 0 = False, anything else = True).\nThis works by randomly selecting packets to be delayed until a subsequent call to FlushNet.\n\nTakes precedence over PktDup and PktLag." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder = { "PktOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Sets the minimum size of packets in bytes that will be dropped\naccording to the PktLoss setting. Default is 0.\n\nWorks with all other settings." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize = { "PktLossMinSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLossMinSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Sets the maximum size of packets in bytes that will be dropped\naccording to the PktLoss setting. Default is INT_MAX.\n\nWorks with all other settings." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize = { "PktLossMaxSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLossMaxSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to drop packets.\nValue is treated as % of packets dropped (i.e. 0 = None, 100 = All).\nNo general pattern / ordering is guaranteed.\nClamped between 0 and 100.\n\nWorks with all other settings." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss = { "PktLoss", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLoss), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PacketSimulationSettings",
		sizeof(FPacketSimulationSettings),
		alignof(FPacketSimulationSettings),
		Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPacketSimulationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PacketSimulationSettings"), sizeof(FPacketSimulationSettings), Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_Hash() { return 1175216013U; }
	void UNetDriver::StaticRegisterNativesUNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UNetDriver_NoRegister()
	{
		return UNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicationDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorChannelPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorChannelPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorChannelPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelDefinitionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ChannelDefinitionMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChannelDefinitionMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelDefinitionMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelDefinitions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriverName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NetDriverName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteRoleProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoteRoleProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoleProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriverClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReplicationDriverClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetConnectionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NetConnectionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPackage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldPackage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentlyDisconnectedTrackingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RecentlyDisconnectedTrackingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClientConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoTimeouts_MetaData[];
#endif
		static void NewProp_bNoTimeouts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoTimeouts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeoutMultiplierForUnoptimizedBuilds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConnectionTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialConnectTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialConnectTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepAliveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KeepAliveTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelevantTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RelevantTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPrioritySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnPrioritySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerTravelPause_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerTravelPause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClientRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxClientRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInternetClientRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxInternetClientRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetServerMaxTickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetServerMaxTickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampListenServerTickRate_MetaData[];
#endif
		static void NewProp_bClampListenServerTickRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampListenServerTickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDownloadSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDownloadSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriverClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplicationDriverClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetConnectionClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NetConnectionClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/NetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver = { "ReplicationDriver", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ReplicationDriver), Z_Construct_UClass_UReplicationDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Accumulated time for the net driver, updated by Tick" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, Time), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "List of channels that were previously used and can be used again" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool = { "ActorChannelPool", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ActorChannelPool), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_Inner = { "ActorChannelPool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used for faster lookup of channel definitions by name." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap = { "ChannelDefinitionMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ChannelDefinitionMap), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_Key_KeyProp = { "ChannelDefinitionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_ValueProp = { "ChannelDefinitionMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChannelDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify available channel types and their associated UClass" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions = { "ChannelDefinitions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ChannelDefinitions), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_Inner = { "ChannelDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChannelDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify the net driver to filter actors with (NAME_None || NAME_GameNetDriver is the default net driver)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName = { "NetDriverName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, NetDriverName), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_RemoteRoleProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_RemoteRoleProperty = { "RemoteRoleProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, RemoteRoleProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_RemoteRoleProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_RemoteRoleProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_RoleProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_RoleProperty = { "RoleProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, RoleProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_RoleProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_RoleProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass = { "ReplicationDriverClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ReplicationDriverClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The loaded UClass of the net connection type to use" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass = { "NetConnectionClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, NetConnectionClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage = { "WorldPackage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, WorldPackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "World this net driver is associated with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_World_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The amount of time, in seconds, that recently disconnected clients should be tracked" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime = { "RecentlyDisconnectedTrackingTime", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, RecentlyDisconnectedTrackingTime), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Array of connections to clients (this net driver is a host) - unsorted, and ordering changes depending on actor replication" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections = { "ClientConnections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ClientConnections), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_Inner = { "ClientConnections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Connection to the server (this net driver is a client)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection = { "ServerConnection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ServerConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "If true, ignore timeouts completely.  Should be used only in development" },
	};
#endif
	void Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_SetBit(void* Obj)
	{
		((UNetDriver*)Obj)->bNoTimeouts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts = { "bNoTimeouts", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNetDriver), &Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "A multiplier that is applied to the above values when we are running with unoptimized builds (debug)\nor data (uncooked). This allows us to retain normal timeout behavior while debugging without resorting\nto the nuclear 'notimeouts' option or bumping the values above. If ==0 multiplier = 1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds = { "TimeoutMultiplierForUnoptimizedBuilds", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, TimeoutMultiplierForUnoptimizedBuilds), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time to wait before considering an established connection timed out.\nTypically shorter than the time to wait on a new connection because this connection\nshould already have been setup and any interruption should be trapped quicker." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout = { "ConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time to wait for a new net connection to be established before destroying the connection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout = { "InitialConnectTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, InitialConnectTimeout), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime = { "KeepAliveTime", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, KeepAliveTime), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout = { "RelevantTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, RelevantTimeout), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds = { "SpawnPrioritySeconds", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, SpawnPrioritySeconds), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time a server will wait before traveling to next map, gives clients time to receive final RPCs on existing level @see NextSwitchCountdown" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause = { "ServerTravelPause", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ServerTravelPause), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate = { "MaxClientRate", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, MaxClientRate), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate = { "MaxInternetClientRate", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, MaxInternetClientRate), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate = { "NetServerMaxTickRate", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, NetServerMaxTickRate), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	void Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_SetBit(void* Obj)
	{
		((UNetDriver*)Obj)->bClampListenServerTickRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate = { "bClampListenServerTickRate", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNetDriver), &Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize = { "MaxDownloadSize", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, MaxDownloadSize), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName = { "ReplicationDriverClassName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, ReplicationDriverClassName), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify the class to use for connections" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName = { "NetConnectionClassName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetDriver, NetConnectionClassName), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_RemoteRoleProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_RoleProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetDriver_Statics::ClassParams = {
		&UNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetDriver_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::PropPointers),
		0,
		0x000800ADu,
		METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetDriver, 2253691250);
	template<> ENGINE_API UClass* StaticClass<UNetDriver>()
	{
		return UNetDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetDriver(Z_Construct_UClass_UNetDriver, &UNetDriver::StaticClass, TEXT("/Script/Engine"), TEXT("UNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetDriver);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNetDriver)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

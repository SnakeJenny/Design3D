// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwarmInterface/Private/SwarmMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmMessages() {}
// Cross Module References
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmQuitMessage();
	UPackage* Z_Construct_UPackage__Script_SwarmInterface();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskStateMessage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmJobStateMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTimingMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmAlertMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmInfoMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmPongMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmPingMessage();
// End Cross Module References
class UScriptStruct* FSwarmQuitMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmQuitMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmQuitMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmQuitMessage"), sizeof(FSwarmQuitMessage), Get_Z_Construct_UScriptStruct_FSwarmQuitMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmQuitMessage>()
{
	return FSwarmQuitMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmQuitMessage(FSwarmQuitMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmQuitMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmQuitMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmQuitMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmQuitMessage")),new UScriptStruct::TCppStructOps<FSwarmQuitMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmQuitMessage;
	struct Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmQuitMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmQuitMessage",
		sizeof(FSwarmQuitMessage),
		alignof(FSwarmQuitMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmQuitMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmQuitMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmQuitMessage"), sizeof(FSwarmQuitMessage), Get_Z_Construct_UScriptStruct_FSwarmQuitMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmQuitMessage_Hash() { return 2472913006U; }
class UScriptStruct* FSwarmTaskStateMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskStateMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskStateMessage"), sizeof(FSwarmTaskStateMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskStateMessage>()
{
	return FSwarmTaskStateMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmTaskStateMessage(FSwarmTaskStateMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmTaskStateMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskStateMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskStateMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmTaskStateMessage")),new UScriptStruct::TCppStructOps<FSwarmTaskStateMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskStateMessage;
	struct Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_RunningTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExitCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskStateMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskStateMessage, RunningTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Various stats, including run time, exit codes, etc." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode = { "ExitCode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskStateMessage, ExitCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskStateMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The current state and arbitrary message" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskStateMessage, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Task GUID used for identifying the Task" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskStateMessage, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskStateMessage",
		sizeof(FSwarmTaskStateMessage),
		alignof(FSwarmTaskStateMessage),
		Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskStateMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmTaskStateMessage"), sizeof(FSwarmTaskStateMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Hash() { return 3498189863U; }
class UScriptStruct* FSwarmJobStateMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmJobStateMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmJobStateMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmJobStateMessage"), sizeof(FSwarmJobStateMessage), Get_Z_Construct_UScriptStruct_FSwarmJobStateMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmJobStateMessage>()
{
	return FSwarmJobStateMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmJobStateMessage(FSwarmJobStateMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmJobStateMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmJobStateMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmJobStateMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmJobStateMessage")),new UScriptStruct::TCppStructOps<FSwarmJobStateMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmJobStateMessage;
	struct Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_RunningTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExitCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmJobStateMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmJobStateMessage, RunningTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Various stats, including run time, exit codes, etc." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode = { "ExitCode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmJobStateMessage, ExitCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmJobStateMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The current state and arbitrary message" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmJobStateMessage, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Job GUID used for identifying the Job" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmJobStateMessage, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmJobStateMessage",
		sizeof(FSwarmJobStateMessage),
		alignof(FSwarmJobStateMessage),
		Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmJobStateMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmJobStateMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmJobStateMessage"), sizeof(FSwarmJobStateMessage), Get_Z_Construct_UScriptStruct_FSwarmJobStateMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmJobStateMessage_Hash() { return 1215731122U; }
class UScriptStruct* FSwarmTaskRequestSpecificationMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskRequestSpecificationMessage"), sizeof(FSwarmTaskRequestSpecificationMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskRequestSpecificationMessage>()
{
	return FSwarmTaskRequestSpecificationMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmTaskRequestSpecificationMessage(FSwarmTaskRequestSpecificationMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmTaskRequestSpecificationMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestSpecificationMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestSpecificationMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmTaskRequestSpecificationMessage")),new UScriptStruct::TCppStructOps<FSwarmTaskRequestSpecificationMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestSpecificationMessage;
	struct Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskRequestSpecificationMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Any additional Task dependencies" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, Dependencies), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Task's cost, relative to all other Tasks in the same Job, used for even distribution and scheduling" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Flags used to control the behavior of the Task, subject to overrides from the containing Job" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Task's parameter string specified with AddTask" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, Parameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The GUID used for identifying the Task being referred to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid = { "TaskGuid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, TaskGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskRequestSpecificationMessage",
		sizeof(FSwarmTaskRequestSpecificationMessage),
		alignof(FSwarmTaskRequestSpecificationMessage),
		Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmTaskRequestSpecificationMessage"), sizeof(FSwarmTaskRequestSpecificationMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Hash() { return 2599452132U; }
class UScriptStruct* FSwarmTaskRequestReservationMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskRequestReservationMessage"), sizeof(FSwarmTaskRequestReservationMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskRequestReservationMessage>()
{
	return FSwarmTaskRequestReservationMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmTaskRequestReservationMessage(FSwarmTaskRequestReservationMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmTaskRequestReservationMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestReservationMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestReservationMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmTaskRequestReservationMessage")),new UScriptStruct::TCppStructOps<FSwarmTaskRequestReservationMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestReservationMessage;
	struct Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskRequestReservationMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskRequestReservationMessage",
		sizeof(FSwarmTaskRequestReservationMessage),
		alignof(FSwarmTaskRequestReservationMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmTaskRequestReservationMessage"), sizeof(FSwarmTaskRequestReservationMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Hash() { return 3864437064U; }
class UScriptStruct* FSwarmTaskRequestReleaseMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskRequestReleaseMessage"), sizeof(FSwarmTaskRequestReleaseMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskRequestReleaseMessage>()
{
	return FSwarmTaskRequestReleaseMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmTaskRequestReleaseMessage(FSwarmTaskRequestReleaseMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmTaskRequestReleaseMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestReleaseMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestReleaseMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmTaskRequestReleaseMessage")),new UScriptStruct::TCppStructOps<FSwarmTaskRequestReleaseMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestReleaseMessage;
	struct Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskRequestReleaseMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskRequestReleaseMessage",
		sizeof(FSwarmTaskRequestReleaseMessage),
		alignof(FSwarmTaskRequestReleaseMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmTaskRequestReleaseMessage"), sizeof(FSwarmTaskRequestReleaseMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Hash() { return 593007460U; }
class UScriptStruct* FSwarmTaskRequestMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskRequestMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskRequestMessage"), sizeof(FSwarmTaskRequestMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskRequestMessage>()
{
	return FSwarmTaskRequestMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmTaskRequestMessage(FSwarmTaskRequestMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmTaskRequestMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmTaskRequestMessage")),new UScriptStruct::TCppStructOps<FSwarmTaskRequestMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTaskRequestMessage;
	struct Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskRequestMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskRequestMessage",
		sizeof(FSwarmTaskRequestMessage),
		alignof(FSwarmTaskRequestMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmTaskRequestMessage"), sizeof(FSwarmTaskRequestMessage), Get_Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Hash() { return 1294261510U; }
class UScriptStruct* FSwarmTimingMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmTimingMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTimingMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTimingMessage"), sizeof(FSwarmTimingMessage), Get_Z_Construct_UScriptStruct_FSwarmTimingMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTimingMessage>()
{
	return FSwarmTimingMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmTimingMessage(FSwarmTimingMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmTimingMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTimingMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTimingMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmTimingMessage")),new UScriptStruct::TCppStructOps<FSwarmTimingMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmTimingMessage;
	struct Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreadNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThreadNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTimingMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The thread this state is referring to" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum = { "ThreadNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTimingMessage, ThreadNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "State that the distributed job is transitioning to" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmTimingMessage, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTimingMessage",
		sizeof(FSwarmTimingMessage),
		alignof(FSwarmTimingMessage),
		Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTimingMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmTimingMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmTimingMessage"), sizeof(FSwarmTimingMessage), Get_Z_Construct_UScriptStruct_FSwarmTimingMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmTimingMessage_Hash() { return 3016834613U; }
class UScriptStruct* FSwarmAlertMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmAlertMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmAlertMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmAlertMessage"), sizeof(FSwarmAlertMessage), Get_Z_Construct_UScriptStruct_FSwarmAlertMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmAlertMessage>()
{
	return FSwarmAlertMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmAlertMessage(FSwarmAlertMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmAlertMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmAlertMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmAlertMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmAlertMessage")),new UScriptStruct::TCppStructOps<FSwarmAlertMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmAlertMessage;
	struct Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TypeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlertLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JobGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmAlertMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Generic text message for informational purposes" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage = { "TextMessage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmAlertMessage, TextMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "App-specific identifier for the type of the object" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId = { "TypeId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmAlertMessage, TypeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The identifier for the object that is associated with the issue" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmAlertMessage, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The type of alert" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel = { "AlertLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmAlertMessage, AlertLevel), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Job Guid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid = { "JobGuid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmAlertMessage, JobGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmAlertMessage",
		sizeof(FSwarmAlertMessage),
		alignof(FSwarmAlertMessage),
		Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmAlertMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmAlertMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmAlertMessage"), sizeof(FSwarmAlertMessage), Get_Z_Construct_UScriptStruct_FSwarmAlertMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmAlertMessage_Hash() { return 2375184648U; }
class UScriptStruct* FSwarmInfoMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmInfoMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmInfoMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmInfoMessage"), sizeof(FSwarmInfoMessage), Get_Z_Construct_UScriptStruct_FSwarmInfoMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmInfoMessage>()
{
	return FSwarmInfoMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmInfoMessage(FSwarmInfoMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmInfoMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmInfoMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmInfoMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmInfoMessage")),new UScriptStruct::TCppStructOps<FSwarmInfoMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmInfoMessage;
	struct Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmInfoMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage = { "TextMessage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmInfoMessage, TextMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmInfoMessage",
		sizeof(FSwarmInfoMessage),
		alignof(FSwarmInfoMessage),
		Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmInfoMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmInfoMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmInfoMessage"), sizeof(FSwarmInfoMessage), Get_Z_Construct_UScriptStruct_FSwarmInfoMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmInfoMessage_Hash() { return 3038556830U; }
class UScriptStruct* FSwarmPongMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmPongMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmPongMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmPongMessage"), sizeof(FSwarmPongMessage), Get_Z_Construct_UScriptStruct_FSwarmPongMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmPongMessage>()
{
	return FSwarmPongMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmPongMessage(FSwarmPongMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmPongMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmPongMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmPongMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmPongMessage")),new UScriptStruct::TCppStructOps<FSwarmPongMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmPongMessage;
	struct Z_Construct_UScriptStruct_FSwarmPongMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComputerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditor_MetaData[];
#endif
		static void NewProp_bIsEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmPongMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName = { "ComputerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwarmPongMessage, ComputerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_SetBit(void* Obj)
	{
		((FSwarmPongMessage*)Obj)->bIsEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor = { "bIsEditor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSwarmPongMessage), &Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmPongMessage",
		sizeof(FSwarmPongMessage),
		alignof(FSwarmPongMessage),
		Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmPongMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmPongMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmPongMessage"), sizeof(FSwarmPongMessage), Get_Z_Construct_UScriptStruct_FSwarmPongMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmPongMessage_Hash() { return 3372320090U; }
class UScriptStruct* FSwarmPingMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARMINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSwarmPingMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmPingMessage, Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmPingMessage"), sizeof(FSwarmPingMessage), Get_Z_Construct_UScriptStruct_FSwarmPingMessage_Hash());
	}
	return Singleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmPingMessage>()
{
	return FSwarmPingMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwarmPingMessage(FSwarmPingMessage::StaticStruct, TEXT("/Script/SwarmInterface"), TEXT("SwarmPingMessage"), false, nullptr, nullptr);
static struct FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmPingMessage
{
	FScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmPingMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwarmPingMessage")),new UScriptStruct::TCppStructOps<FSwarmPingMessage>);
	}
} ScriptStruct_SwarmInterface_StaticRegisterNativesFSwarmPingMessage;
	struct Z_Construct_UScriptStruct_FSwarmPingMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmPingMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmPingMessage",
		sizeof(FSwarmPingMessage),
		alignof(FSwarmPingMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmPingMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwarmPingMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwarmInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwarmPingMessage"), sizeof(FSwarmPingMessage), Get_Z_Construct_UScriptStruct_FSwarmPingMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwarmPingMessage_Hash() { return 2300470209U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

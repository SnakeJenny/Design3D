// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineMessages/Public/EngineServiceMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineServiceMessages() {}
// Cross Module References
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceNotification();
	UPackage* Z_Construct_UPackage__Script_EngineMessages();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceTerminate();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthGrant();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthDeny();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePong();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePing();
// End Cross Module References
class UScriptStruct* FEngineServiceNotification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceNotification_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceNotification, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceNotification"), sizeof(FEngineServiceNotification), Get_Z_Construct_UScriptStruct_FEngineServiceNotification_Hash());
	}
	return Singleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceNotification>()
{
	return FEngineServiceNotification::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceNotification(FEngineServiceNotification::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceNotification"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceNotification")),new UScriptStruct::TCppStructOps<FEngineServiceNotification>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification;
	struct Z_Construct_UScriptStruct_FEngineServiceNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message that contains a notification or log output." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceNotification>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the time in seconds since the engine started." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceNotification, TimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the notification text." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceNotification, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceNotification",
		sizeof(FEngineServiceNotification),
		alignof(FEngineServiceNotification),
		Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceNotification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceNotification_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceNotification"), sizeof(FEngineServiceNotification), Get_Z_Construct_UScriptStruct_FEngineServiceNotification_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceNotification_Hash() { return 1455977450U; }
class UScriptStruct* FEngineServiceTerminate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceTerminate, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceTerminate"), sizeof(FEngineServiceTerminate), Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_Hash());
	}
	return Singleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceTerminate>()
{
	return FEngineServiceTerminate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceTerminate(FEngineServiceTerminate::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceTerminate"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceTerminate")),new UScriptStruct::TCppStructOps<FEngineServiceTerminate>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate;
	struct Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for terminating the engine." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceTerminate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wants to terminate the engine." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceTerminate, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceTerminate",
		sizeof(FEngineServiceTerminate),
		alignof(FEngineServiceTerminate),
		Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceTerminate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceTerminate"), sizeof(FEngineServiceTerminate), Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_Hash() { return 222169735U; }
class UScriptStruct* FEngineServiceExecuteCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceExecuteCommand"), sizeof(FEngineServiceExecuteCommand), Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Hash());
	}
	return Singleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceExecuteCommand>()
{
	return FEngineServiceExecuteCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceExecuteCommand(FEngineServiceExecuteCommand::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceExecuteCommand"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceExecuteCommand")),new UScriptStruct::TCppStructOps<FEngineServiceExecuteCommand>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand;
	struct Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for executing a console command." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceExecuteCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wants to execute the command." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceExecuteCommand, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the command to execute." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceExecuteCommand, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceExecuteCommand",
		sizeof(FEngineServiceExecuteCommand),
		alignof(FEngineServiceExecuteCommand),
		Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceExecuteCommand"), sizeof(FEngineServiceExecuteCommand), Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Hash() { return 3817420300U; }
class UScriptStruct* FEngineServiceAuthGrant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthGrant, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceAuthGrant"), sizeof(FEngineServiceAuthGrant), Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Hash());
	}
	return Singleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceAuthGrant>()
{
	return FEngineServiceAuthGrant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceAuthGrant(FEngineServiceAuthGrant::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceAuthGrant"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceAuthGrant")),new UScriptStruct::TCppStructOps<FEngineServiceAuthGrant>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant;
	struct Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserToGrant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserToGrant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for granting service access to a remote user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceAuthGrant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that access is granted to." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant = { "UserToGrant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceAuthGrant, UserToGrant), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that granted access." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceAuthGrant, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceAuthGrant",
		sizeof(FEngineServiceAuthGrant),
		alignof(FEngineServiceAuthGrant),
		Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthGrant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceAuthGrant"), sizeof(FEngineServiceAuthGrant), Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Hash() { return 329673782U; }
class UScriptStruct* FEngineServiceAuthDeny::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthDeny, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceAuthDeny"), sizeof(FEngineServiceAuthDeny), Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Hash());
	}
	return Singleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceAuthDeny>()
{
	return FEngineServiceAuthDeny::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceAuthDeny(FEngineServiceAuthDeny::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceAuthDeny"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceAuthDeny")),new UScriptStruct::TCppStructOps<FEngineServiceAuthDeny>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny;
	struct Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserToDeny_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserToDeny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for denying service access to a remote user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceAuthDeny>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that access is denied to." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny = { "UserToDeny", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceAuthDeny, UserToDeny), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that denied access." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServiceAuthDeny, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceAuthDeny",
		sizeof(FEngineServiceAuthDeny),
		alignof(FEngineServiceAuthDeny),
		Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthDeny()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceAuthDeny"), sizeof(FEngineServiceAuthDeny), Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Hash() { return 610630464U; }
class UScriptStruct* FEngineServicePong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServicePong_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePong, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServicePong"), sizeof(FEngineServicePong), Get_Z_Construct_UScriptStruct_FEngineServicePong_Hash());
	}
	return Singleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServicePong>()
{
	return FEngineServicePong::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServicePong(FEngineServicePong::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServicePong"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServicePong")),new UScriptStruct::TCppStructOps<FEngineServicePong>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong;
	struct Z_Construct_UScriptStruct_FEngineServicePong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBegunPlay_MetaData[];
#endif
		static void NewProp_HasBegunPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBegunPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EngineVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for responding to a request to discover engine instances on the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServicePong>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the time in seconds since the world was loaded." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds = { "WorldTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServicePong, WorldTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the session that the application belongs to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServicePong, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the type of the engine instance." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServicePong, InstanceType), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the instance identifier." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServicePong, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether game play has begun." },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_SetBit(void* Obj)
	{
		((FEngineServicePong*)Obj)->HasBegunPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay = { "HasBegunPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEngineServicePong), &Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the engine version." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServicePong, EngineVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the currently loaded level, if any." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineServicePong, CurrentLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServicePong",
		sizeof(FEngineServicePong),
		alignof(FEngineServicePong),
		Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServicePong_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServicePong"), sizeof(FEngineServicePong), Get_Z_Construct_UScriptStruct_FEngineServicePong_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineServicePong_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServicePong_Hash() { return 1551376282U; }
class UScriptStruct* FEngineServicePing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServicePing_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePing, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServicePing"), sizeof(FEngineServicePing), Get_Z_Construct_UScriptStruct_FEngineServicePing_Hash());
	}
	return Singleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServicePing>()
{
	return FEngineServicePing::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServicePing(FEngineServicePing::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServicePing"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServicePing")),new UScriptStruct::TCppStructOps<FEngineServicePing>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing;
	struct Z_Construct_UScriptStruct_FEngineServicePing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePing_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for discovering engine instances on the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServicePing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServicePing>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServicePing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServicePing",
		sizeof(FEngineServicePing),
		alignof(FEngineServicePing),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePing_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServicePing_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServicePing"), sizeof(FEngineServicePing), Get_Z_Construct_UScriptStruct_FEngineServicePing_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineServicePing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServicePing_Hash() { return 2010801833U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

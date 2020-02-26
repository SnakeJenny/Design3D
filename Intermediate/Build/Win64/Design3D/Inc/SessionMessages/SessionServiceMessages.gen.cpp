// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SessionMessages/Public/SessionServiceMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionServiceMessages() {}
// Cross Module References
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe();
	UPackage* Z_Construct_UPackage__Script_SessionMessages();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLog();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePong();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePing();
// End Cross Module References
class UScriptStruct* FSessionServiceLogUnsubscribe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLogUnsubscribe"), sizeof(FSessionServiceLogUnsubscribe), Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Hash());
	}
	return Singleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServiceLogUnsubscribe>()
{
	return FSessionServiceLogUnsubscribe::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServiceLogUnsubscribe(FSessionServiceLogUnsubscribe::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServiceLogUnsubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogUnsubscribe
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogUnsubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServiceLogUnsubscribe")),new UScriptStruct::TCppStructOps<FSessionServiceLogUnsubscribe>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogUnsubscribe;
	struct Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message to unsubscribe from an application's console log." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServiceLogUnsubscribe>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServiceLogUnsubscribe",
		sizeof(FSessionServiceLogUnsubscribe),
		alignof(FSessionServiceLogUnsubscribe),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServiceLogUnsubscribe"), sizeof(FSessionServiceLogUnsubscribe), Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Hash() { return 2009117575U; }
class UScriptStruct* FSessionServiceLogSubscribe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLogSubscribe, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLogSubscribe"), sizeof(FSessionServiceLogSubscribe), Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Hash());
	}
	return Singleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServiceLogSubscribe>()
{
	return FSessionServiceLogSubscribe::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServiceLogSubscribe(FSessionServiceLogSubscribe::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServiceLogSubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogSubscribe
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogSubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServiceLogSubscribe")),new UScriptStruct::TCppStructOps<FSessionServiceLogSubscribe>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogSubscribe;
	struct Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message to subscribe to an application's console log." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServiceLogSubscribe>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServiceLogSubscribe",
		sizeof(FSessionServiceLogSubscribe),
		alignof(FSessionServiceLogSubscribe),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServiceLogSubscribe"), sizeof(FSessionServiceLogSubscribe), Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Hash() { return 567348011U; }
class UScriptStruct* FSessionServiceLog::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLog_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLog, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLog"), sizeof(FSessionServiceLog), Get_Z_Construct_UScriptStruct_FSessionServiceLog_Hash());
	}
	return Singleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServiceLog>()
{
	return FSessionServiceLog::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServiceLog(FSessionServiceLog::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServiceLog"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLog
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLog()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServiceLog")),new UScriptStruct::TCppStructOps<FSessionServiceLog>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLog;
	struct Z_Construct_UScriptStruct_FSessionServiceLog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Verbosity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message that contains a console log entry." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServiceLog>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the log message's verbosity level." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServiceLog, Verbosity), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the time in seconds since the application was started." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServiceLog, TimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the application instance identifier." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServiceLog, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the log message data." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServiceLog, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the log message category." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServiceLog, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionServiceLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServiceLog",
		sizeof(FSessionServiceLog),
		alignof(FSessionServiceLog),
		Z_Construct_UScriptStruct_FSessionServiceLog_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLog()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLog_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServiceLog"), sizeof(FSessionServiceLog), Get_Z_Construct_UScriptStruct_FSessionServiceLog_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionServiceLog_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLog_Hash() { return 186026932U; }
class UScriptStruct* FSessionServicePong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServicePong_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServicePong, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServicePong"), sizeof(FSessionServicePong), Get_Z_Construct_UScriptStruct_FSessionServicePong_Hash());
	}
	return Singleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServicePong>()
{
	return FSessionServicePong::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServicePong(FSessionServicePong::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServicePong"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePong
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServicePong")),new UScriptStruct::TCppStructOps<FSessionServicePong>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePong;
	struct Z_Construct_UScriptStruct_FSessionServicePong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Standalone_MetaData[];
#endif
		static void NewProp_Standalone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Standalone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsConsoleBuild_MetaData[];
#endif
		static void NewProp_IsConsoleBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsConsoleBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Authorized_MetaData[];
#endif
		static void NewProp_Authorized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Authorized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message that is published in response to FSessionServicePing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServicePong>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Indicates whether the application is the only one in that session." },
	};
#endif
	void Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_SetBit(void* Obj)
	{
		((FSessionServicePong*)Obj)->Standalone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone = { "Standalone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSessionServicePong), &Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that started the session." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner = { "SessionOwner", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePong, SessionOwner), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the user defined name of the session." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePong, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the session that the application belongs to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePong, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the name of the platform that the application is running on." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePong, PlatformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_IsConsoleBuild_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Indicates whether the application is running on a console." },
	};
#endif
	void Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_IsConsoleBuild_SetBit(void* Obj)
	{
		((FSessionServicePong*)Obj)->IsConsoleBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_IsConsoleBuild = { "IsConsoleBuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSessionServicePong), &Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_IsConsoleBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_IsConsoleBuild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_IsConsoleBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the application's instance name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePong, InstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the application's instance identifier." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePong, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the name of the device that the application is running on." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePong, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the application's build date." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate = { "BuildDate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePong, BuildDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Indicates whether the pinging user is authorized to interact with this session." },
	};
#endif
	void Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_SetBit(void* Obj)
	{
		((FSessionServicePong*)Obj)->Authorized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized = { "Authorized", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSessionServicePong), &Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionServicePong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_IsConsoleBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServicePong",
		sizeof(FSessionServicePong),
		alignof(FSessionServicePong),
		Z_Construct_UScriptStruct_FSessionServicePong_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServicePong_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServicePong"), sizeof(FSessionServicePong), Get_Z_Construct_UScriptStruct_FSessionServicePong_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionServicePong_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServicePong_Hash() { return 829144295U; }
class UScriptStruct* FSessionServicePing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServicePing_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServicePing, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServicePing"), sizeof(FSessionServicePing), Get_Z_Construct_UScriptStruct_FSessionServicePing_Hash());
	}
	return Singleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServicePing>()
{
	return FSessionServicePing::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServicePing(FSessionServicePing::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServicePing"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePing
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServicePing")),new UScriptStruct::TCppStructOps<FSessionServicePing>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePing;
	struct Z_Construct_UScriptStruct_FSessionServicePing_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePing_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message that is published to discover existing application sessions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServicePing>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "The name of the user who sent this ping." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionServicePing, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionServicePing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServicePing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServicePing",
		sizeof(FSessionServicePing),
		alignof(FSessionServicePing),
		Z_Construct_UScriptStruct_FSessionServicePing_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePing_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServicePing_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServicePing"), sizeof(FSessionServicePing), Get_Z_Construct_UScriptStruct_FSessionServicePing_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionServicePing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServicePing_Hash() { return 3265074311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

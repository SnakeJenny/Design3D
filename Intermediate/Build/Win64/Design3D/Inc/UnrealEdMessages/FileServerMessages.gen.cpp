// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEdMessages/Classes/FileServerMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileServerMessages() {}
// Cross Module References
	UNREALEDMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady();
	UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FFileServerReady::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALEDMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileServerReady, Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("FileServerReady"), sizeof(FFileServerReady), Get_Z_Construct_UScriptStruct_FFileServerReady_Hash());
	}
	return Singleton;
}
template<> UNREALEDMESSAGES_API UScriptStruct* StaticStruct<FFileServerReady>()
{
	return FFileServerReady::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFileServerReady(FFileServerReady::StaticStruct, TEXT("/Script/UnrealEdMessages"), TEXT("FileServerReady"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady
{
	FScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FileServerReady")),new UScriptStruct::TCppStructOps<FFileServerReady>);
	}
} ScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady;
	struct Z_Construct_UScriptStruct_FFileServerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddressList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddressList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileServerReady_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
		{ "ToolTip", "Implements a message that is published by file servers when they're ready to accept connections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFileServerReady_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileServerReady>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
		{ "ToolTip", "Holds the file server's application identifier." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFileServerReady, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
		{ "ToolTip", "Holds the list of IP addresses that the file server is listening on." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList = { "AddressList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFileServerReady, AddressList), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_Inner = { "AddressList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileServerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileServerReady_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEdMessages,
		nullptr,
		&NewStructOps,
		"FileServerReady",
		sizeof(FFileServerReady),
		alignof(FFileServerReady),
		Z_Construct_UScriptStruct_FFileServerReady_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFileServerReady_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFileServerReady_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileServerReady_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEdMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FileServerReady"), sizeof(FFileServerReady), Get_Z_Construct_UScriptStruct_FFileServerReady_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFileServerReady_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_Hash() { return 3832589788U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

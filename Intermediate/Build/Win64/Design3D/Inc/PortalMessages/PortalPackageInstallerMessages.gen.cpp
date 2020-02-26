// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/Public/PortalPackageInstallerMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalPackageInstallerMessages() {}
// Cross Module References
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse();
	UPackage* Z_Construct_UPackage__Script_PortalMessages();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest();
// End Cross Module References
class UScriptStruct* FPortalPackageInstallerUninstallResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalPackageInstallerUninstallResponse"), sizeof(FPortalPackageInstallerUninstallResponse), Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalPackageInstallerUninstallResponse>()
{
	return FPortalPackageInstallerUninstallResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalPackageInstallerUninstallResponse(FPortalPackageInstallerUninstallResponse::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalPackageInstallerUninstallResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerUninstallResponse
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerUninstallResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalPackageInstallerUninstallResponse")),new UScriptStruct::TCppStructOps<FPortalPackageInstallerUninstallResponse>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerUninstallResponse;
	struct Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPackageInstallerUninstallResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FPortalPackageInstallerUninstallResponse*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPortalPackageInstallerUninstallResponse), &Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalPackageInstallerUninstallResponse",
		sizeof(FPortalPackageInstallerUninstallResponse),
		alignof(FPortalPackageInstallerUninstallResponse),
		Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalPackageInstallerUninstallResponse"), sizeof(FPortalPackageInstallerUninstallResponse), Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Hash() { return 2727043914U; }
class UScriptStruct* FPortalPackageInstallerUninstallRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalPackageInstallerUninstallRequest"), sizeof(FPortalPackageInstallerUninstallRequest), Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalPackageInstallerUninstallRequest>()
{
	return FPortalPackageInstallerUninstallRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalPackageInstallerUninstallRequest(FPortalPackageInstallerUninstallRequest::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalPackageInstallerUninstallRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerUninstallRequest
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerUninstallRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalPackageInstallerUninstallRequest")),new UScriptStruct::TCppStructOps<FPortalPackageInstallerUninstallRequest>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerUninstallRequest;
	struct Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveUserFiles_MetaData[];
#endif
		static void NewProp_RemoveUserFiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveUserFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstallationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPackageInstallerUninstallRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_SetBit(void* Obj)
	{
		((FPortalPackageInstallerUninstallRequest*)Obj)->RemoveUserFiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles = { "RemoveUserFiles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPortalPackageInstallerUninstallRequest), &Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath = { "InstallationPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalPackageInstallerUninstallRequest, InstallationPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel = { "BuildLabel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalPackageInstallerUninstallRequest, BuildLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalPackageInstallerUninstallRequest, AppName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalPackageInstallerUninstallRequest",
		sizeof(FPortalPackageInstallerUninstallRequest),
		alignof(FPortalPackageInstallerUninstallRequest),
		Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalPackageInstallerUninstallRequest"), sizeof(FPortalPackageInstallerUninstallRequest), Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Hash() { return 1163519422U; }
class UScriptStruct* FPortalPackageInstallerInstallResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalPackageInstallerInstallResponse"), sizeof(FPortalPackageInstallerInstallResponse), Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalPackageInstallerInstallResponse>()
{
	return FPortalPackageInstallerInstallResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalPackageInstallerInstallResponse(FPortalPackageInstallerInstallResponse::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalPackageInstallerInstallResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerInstallResponse
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerInstallResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalPackageInstallerInstallResponse")),new UScriptStruct::TCppStructOps<FPortalPackageInstallerInstallResponse>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerInstallResponse;
	struct Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPackageInstallerInstallResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FPortalPackageInstallerInstallResponse*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPortalPackageInstallerInstallResponse), &Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalPackageInstallerInstallResponse",
		sizeof(FPortalPackageInstallerInstallResponse),
		alignof(FPortalPackageInstallerInstallResponse),
		Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalPackageInstallerInstallResponse"), sizeof(FPortalPackageInstallerInstallResponse), Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Hash() { return 1772002954U; }
class UScriptStruct* FPortalPackageInstallerInstallRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalPackageInstallerInstallRequest"), sizeof(FPortalPackageInstallerInstallRequest), Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalPackageInstallerInstallRequest>()
{
	return FPortalPackageInstallerInstallRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalPackageInstallerInstallRequest(FPortalPackageInstallerInstallRequest::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalPackageInstallerInstallRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerInstallRequest
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerInstallRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalPackageInstallerInstallRequest")),new UScriptStruct::TCppStructOps<FPortalPackageInstallerInstallRequest>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalPackageInstallerInstallRequest;
	struct Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
		{ "ToolTip", "Service discovery messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPackageInstallerInstallRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalPackageInstallerInstallRequest, DestinationPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel = { "BuildLabel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalPackageInstallerInstallRequest, BuildLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalPackageInstallerInstallRequest, AppName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalPackageInstallerInstallRequest",
		sizeof(FPortalPackageInstallerInstallRequest),
		alignof(FPortalPackageInstallerInstallRequest),
		Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalPackageInstallerInstallRequest"), sizeof(FPortalPackageInstallerInstallRequest), Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Hash() { return 1459100892U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/ILiveLinkSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILiveLinkSource() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
class UScriptStruct* FLiveLinkSourceHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceHandle, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceHandle"), sizeof(FLiveLinkSourceHandle), Get_Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceHandle>()
{
	return FLiveLinkSourceHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSourceHandle(FLiveLinkSourceHandle::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkSourceHandle"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceHandle
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSourceHandle")),new UScriptStruct::TCppStructOps<FLiveLinkSourceHandle>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceHandle;
	struct Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ILiveLinkSource.h" },
		{ "ToolTip", "A Blueprint handle to a specific LiveLink Source" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSourceHandle",
		sizeof(FLiveLinkSourceHandle),
		alignof(FLiveLinkSourceHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSourceHandle"), sizeof(FLiveLinkSourceHandle), Get_Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Hash() { return 1569284692U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

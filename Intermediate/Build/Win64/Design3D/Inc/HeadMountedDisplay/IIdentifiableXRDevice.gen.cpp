// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIIdentifiableXRDevice() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
class UScriptStruct* FXRDeviceId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEADMOUNTEDDISPLAY_API uint32 Get_Z_Construct_UScriptStruct_FXRDeviceId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRDeviceId, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRDeviceId"), sizeof(FXRDeviceId), Get_Z_Construct_UScriptStruct_FXRDeviceId_Hash());
	}
	return Singleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRDeviceId>()
{
	return FXRDeviceId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXRDeviceId(FXRDeviceId::StaticStruct, TEXT("/Script/HeadMountedDisplay"), TEXT("XRDeviceId"), false, nullptr, nullptr);
static struct FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId
{
	FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XRDeviceId")),new UScriptStruct::TCppStructOps<FXRDeviceId>);
	}
} ScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId;
	struct Z_Construct_UScriptStruct_FXRDeviceId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SystemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRDeviceId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRDeviceId>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "XRDevice" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRDeviceId, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName_MetaData[] = {
		{ "Category", "XRDevice" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName = { "SystemName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRDeviceId, SystemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
		nullptr,
		&NewStructOps,
		"XRDeviceId",
		sizeof(FXRDeviceId),
		alignof(FXRDeviceId),
		Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRDeviceId_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXRDeviceId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XRDeviceId"), sizeof(FXRDeviceId), Get_Z_Construct_UScriptStruct_FXRDeviceId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXRDeviceId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXRDeviceId_Hash() { return 3530812984U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

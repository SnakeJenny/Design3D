// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetDeviceServices/Public/TargetDeviceServiceMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetDeviceServiceMessages() {}
// Cross Module References
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished();
	UPackage* Z_Construct_UPackage__Script_TargetDeviceServices();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceReboot();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePong();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceVariant();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePing();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceUnclaimed();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceClaimed();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceClaimDenied();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit();
// End Cross Module References
class UScriptStruct* FTargetDeviceServiceRunFinished::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceRunFinished"), sizeof(FTargetDeviceServiceRunFinished), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceRunFinished>()
{
	return FTargetDeviceServiceRunFinished::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceRunFinished(FTargetDeviceServiceRunFinished::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceRunFinished"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceRunFinished
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceRunFinished()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceRunFinished")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceRunFinished>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceRunFinished;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[];
#endif
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExecutablePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for notifying a target device proxy that running an executable has finished.\n\n@see FTargetDeviceServiceRunExecutable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceRunFinished>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Succeeded_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the executable started successfully." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((FTargetDeviceServiceRunFinished*)Obj)->Succeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServiceRunFinished), &Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Succeeded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Succeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ProcessId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the process identifier of the running executable." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceRunFinished, ProcessId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ProcessId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ProcessId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ExecutablePath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the path to the executable that was run." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ExecutablePath = { "ExecutablePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceRunFinished, ExecutablePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ExecutablePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ExecutablePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Variant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant identifier of the target device to use." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceRunFinished, Variant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Variant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Variant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Succeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ProcessId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_ExecutablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::NewProp_Variant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceRunFinished",
		sizeof(FTargetDeviceServiceRunFinished),
		alignof(FTargetDeviceServiceRunFinished),
		Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceRunFinished"), sizeof(FTargetDeviceServiceRunFinished), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunFinished_Hash() { return 219727159U; }
class UScriptStruct* FTargetDeviceServiceRunExecutable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceRunExecutable"), sizeof(FTargetDeviceServiceRunExecutable), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceRunExecutable>()
{
	return FTargetDeviceServiceRunExecutable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceRunExecutable(FTargetDeviceServiceRunExecutable::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceRunExecutable"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceRunExecutable
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceRunExecutable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceRunExecutable")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceRunExecutable>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceRunExecutable;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExecutablePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for running an executable on a target device.\n\nTo launch a previously deployed application on a device use the FTargetDeviceServiceLaunchApp message instead.\n\n@see FTargetDeviceServiceLaunchApp" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceRunExecutable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds optional command line parameters for the executable." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceRunExecutable, Params), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Params_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_ExecutablePath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the path to the executable on the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_ExecutablePath = { "ExecutablePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceRunExecutable, ExecutablePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_ExecutablePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_ExecutablePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Variant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant identifier of the target device to use for execution." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceRunExecutable, Variant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Variant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Variant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_ExecutablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::NewProp_Variant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceRunExecutable",
		sizeof(FTargetDeviceServiceRunExecutable),
		alignof(FTargetDeviceServiceRunExecutable),
		Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceRunExecutable"), sizeof(FTargetDeviceServiceRunExecutable), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceRunExecutable_Hash() { return 268391727U; }
class UScriptStruct* FTargetDeviceServiceReboot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceReboot"), sizeof(FTargetDeviceServiceReboot), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceReboot>()
{
	return FTargetDeviceServiceReboot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceReboot(FTargetDeviceServiceReboot::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceReboot"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceReboot
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceReboot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceReboot")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceReboot>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceReboot;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Operator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for rebooting a target device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceReboot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wishes to reboot the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceReboot, Operator), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceReboot",
		sizeof(FTargetDeviceServiceReboot),
		alignof(FTargetDeviceServiceReboot),
		Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceReboot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceReboot"), sizeof(FTargetDeviceServiceReboot), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Hash() { return 1975084002U; }
class UScriptStruct* FTargetDeviceServicePowerOn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServicePowerOn"), sizeof(FTargetDeviceServicePowerOn), Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServicePowerOn>()
{
	return FTargetDeviceServicePowerOn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServicePowerOn(FTargetDeviceServicePowerOn::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServicePowerOn"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePowerOn
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePowerOn()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServicePowerOn")),new UScriptStruct::TCppStructOps<FTargetDeviceServicePowerOn>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePowerOn;
	struct Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Operator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for powering on a target device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServicePowerOn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wishes to power on the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePowerOn, Operator), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServicePowerOn",
		sizeof(FTargetDeviceServicePowerOn),
		alignof(FTargetDeviceServicePowerOn),
		Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServicePowerOn"), sizeof(FTargetDeviceServicePowerOn), Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Hash() { return 1493562789U; }
class UScriptStruct* FTargetDeviceServicePowerOff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServicePowerOff"), sizeof(FTargetDeviceServicePowerOff), Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServicePowerOff>()
{
	return FTargetDeviceServicePowerOff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServicePowerOff(FTargetDeviceServicePowerOff::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServicePowerOff"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePowerOff
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePowerOff()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServicePowerOff")),new UScriptStruct::TCppStructOps<FTargetDeviceServicePowerOff>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePowerOff;
	struct Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for powering on a target device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServicePowerOff>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wishes to power off the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePowerOff, Operator), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the power-off should be enforced.\n\nIf powering off is not enforced, if may fail if some running application prevents it." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((FTargetDeviceServicePowerOff*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePowerOff), &Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServicePowerOff",
		sizeof(FTargetDeviceServicePowerOff),
		alignof(FTargetDeviceServicePowerOff),
		Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServicePowerOff"), sizeof(FTargetDeviceServicePowerOff), Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Hash() { return 2290287981U; }
class UScriptStruct* FTargetDeviceServicePong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePong_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServicePong, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServicePong"), sizeof(FTargetDeviceServicePong), Get_Z_Construct_UScriptStruct_FTargetDeviceServicePong_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServicePong>()
{
	return FTargetDeviceServicePong::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServicePong(FTargetDeviceServicePong::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServicePong"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePong
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServicePong")),new UScriptStruct::TCppStructOps<FTargetDeviceServicePong>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePong;
	struct Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllDevicesDefaultVariant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AllDevicesDefaultVariant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllDevicesName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllDevicesName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aggregated_MetaData[];
#endif
		static void NewProp_Aggregated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Aggregated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variants;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultVariant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultVariant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsVariants_MetaData[];
#endif
		static void NewProp_SupportsVariants_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsVariants;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsReboot_MetaData[];
#endif
		static void NewProp_SupportsReboot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsReboot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsPowerOn_MetaData[];
#endif
		static void NewProp_SupportsPowerOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsPowerOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsPowerOff_MetaData[];
#endif
		static void NewProp_SupportsPowerOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsPowerOff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsMultiLaunch_MetaData[];
#endif
		static void NewProp_SupportsMultiLaunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsMultiLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shared_MetaData[];
#endif
		static void NewProp_Shared_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceUserPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceUserPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Make_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Make;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Authorized_MetaData[];
#endif
		static void NewProp_Authorized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Authorized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static void NewProp_Connected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Connected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message that is sent in response to target device service discovery messages." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServicePong>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the default variant name of \"All devices\" proxy." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant = { "AllDevicesDefaultVariant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, AllDevicesDefaultVariant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of \"All devices\" proxy." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName = { "AllDevicesName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, AllDevicesName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Flag for the \"All devices\" proxy." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->Aggregated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated = { "Aggregated", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "List of the Flavors this service supports" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, Variants), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTargetDeviceVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant name of the default device." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant = { "DefaultVariant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, DefaultVariant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the device type." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device's target platform supports variants." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsVariants = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants = { "SupportsVariants", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device can be rebooted." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsReboot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot = { "SupportsReboot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device can be powered on." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsPowerOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn = { "SupportsPowerOn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device can be powered off." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsPowerOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff = { "SupportsPowerOff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device supports running multiple application instances in parallel." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsMultiLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch = { "SupportsMultiLaunch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether this device is shared with other users on the network." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->Shared = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared = { "Shared", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the password of the user that we log in to remote device as, i.e \"12345\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword = { "DeviceUserPassword", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, DeviceUserPassword), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that we log in to remote device as, i.e \"root\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser = { "DeviceUser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, DeviceUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the human readable name of the device, i.e \"Bob's XBox'." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the model of the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, Model), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the make of the device, i.e. Microsoft or Sony." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make = { "Make", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, Make), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user under which the host computer is running." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the host computer that the device is attached to." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePong, HostName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device is authorized." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->Authorized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized = { "Authorized", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device is currently connected." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->Connected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServicePong",
		sizeof(FTargetDeviceServicePong),
		alignof(FTargetDeviceServicePong),
		Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePong_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServicePong"), sizeof(FTargetDeviceServicePong), Get_Z_Construct_UScriptStruct_FTargetDeviceServicePong_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePong_Hash() { return 4167613828U; }
class UScriptStruct* FTargetDeviceVariant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceVariant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceVariant, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceVariant"), sizeof(FTargetDeviceVariant), Get_Z_Construct_UScriptStruct_FTargetDeviceVariant_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceVariant>()
{
	return FTargetDeviceVariant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceVariant(FTargetDeviceVariant::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceVariant"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceVariant
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceVariant()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceVariant")),new UScriptStruct::TCppStructOps<FTargetDeviceVariant>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceVariant;
	struct Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VanillaPlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VanillaPlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetPlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetPlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VariantName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Struct for a flavor's information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceVariant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName = { "PlatformDisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceVariant, PlatformDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId = { "VanillaPlatformId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceVariant, VanillaPlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId = { "TargetPlatformId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceVariant, TargetPlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName = { "TargetPlatformName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceVariant, TargetPlatformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceVariant, VariantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceVariant, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceVariant",
		sizeof(FTargetDeviceVariant),
		alignof(FTargetDeviceVariant),
		Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceVariant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceVariant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceVariant"), sizeof(FTargetDeviceVariant), Get_Z_Construct_UScriptStruct_FTargetDeviceVariant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceVariant_Hash() { return 3074871669U; }
class UScriptStruct* FTargetDeviceServicePing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePing_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServicePing, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServicePing"), sizeof(FTargetDeviceServicePing), Get_Z_Construct_UScriptStruct_FTargetDeviceServicePing_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServicePing>()
{
	return FTargetDeviceServicePing::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServicePing(FTargetDeviceServicePing::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServicePing"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePing
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServicePing")),new UScriptStruct::TCppStructOps<FTargetDeviceServicePing>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServicePing;
	struct Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for discovering target device services on the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServicePing>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user who generated the ping." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServicePing, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServicePing",
		sizeof(FTargetDeviceServicePing),
		alignof(FTargetDeviceServicePing),
		Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePing_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServicePing"), sizeof(FTargetDeviceServicePing), Get_Z_Construct_UScriptStruct_FTargetDeviceServicePing_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServicePing_Hash() { return 3402011210U; }
class UScriptStruct* FTargetDeviceUnclaimed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceUnclaimed"), sizeof(FTargetDeviceUnclaimed), Get_Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceUnclaimed>()
{
	return FTargetDeviceUnclaimed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceUnclaimed(FTargetDeviceUnclaimed::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceUnclaimed"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceUnclaimed
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceUnclaimed()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceUnclaimed")),new UScriptStruct::TCppStructOps<FTargetDeviceUnclaimed>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceUnclaimed;
	struct Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message that is sent when a device is no longer claimed.\n\n@see FTargetDeviceClaimDenied, FTargetDeviceClaimRequest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceUnclaimed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that had claimed the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceUnclaimed, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the host computer that had claimed the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceUnclaimed, HostName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the device that is no longer claimed." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceUnclaimed, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceUnclaimed",
		sizeof(FTargetDeviceUnclaimed),
		alignof(FTargetDeviceUnclaimed),
		Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceUnclaimed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceUnclaimed"), sizeof(FTargetDeviceUnclaimed), Get_Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Hash() { return 3208986274U; }
class UScriptStruct* FTargetDeviceClaimed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceClaimed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceClaimed, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceClaimed"), sizeof(FTargetDeviceClaimed), Get_Z_Construct_UScriptStruct_FTargetDeviceClaimed_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceClaimed>()
{
	return FTargetDeviceClaimed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceClaimed(FTargetDeviceClaimed::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceClaimed"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceClaimed
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceClaimed()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceClaimed")),new UScriptStruct::TCppStructOps<FTargetDeviceClaimed>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceClaimed;
	struct Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message that is sent when a service claimed a device.\n\n@see FTargetDeviceClaimDenied\n@see FTargetDeviceClaimDropped" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceClaimed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that is claiming the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceClaimed, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the host computer that is claiming the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceClaimed, HostName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the device that is being claimed." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceClaimed, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceClaimed",
		sizeof(FTargetDeviceClaimed),
		alignof(FTargetDeviceClaimed),
		Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceClaimed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceClaimed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceClaimed"), sizeof(FTargetDeviceClaimed), Get_Z_Construct_UScriptStruct_FTargetDeviceClaimed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceClaimed_Hash() { return 4282386013U; }
class UScriptStruct* FTargetDeviceClaimDenied::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceClaimDenied"), sizeof(FTargetDeviceClaimDenied), Get_Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceClaimDenied>()
{
	return FTargetDeviceClaimDenied::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceClaimDenied(FTargetDeviceClaimDenied::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceClaimDenied"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceClaimDenied
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceClaimDenied()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceClaimDenied")),new UScriptStruct::TCppStructOps<FTargetDeviceClaimDenied>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceClaimDenied;
	struct Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message that is sent when a device is already claimed by someone else.\n\n@see FTargetDeviceClaimDropped\n@see FTargetDeviceClaimRequest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceClaimDenied>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that claimed the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceClaimDenied, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the host computer that claimed the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceClaimDenied, HostName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the device that is already claimed." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceClaimDenied, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceClaimDenied",
		sizeof(FTargetDeviceClaimDenied),
		alignof(FTargetDeviceClaimDenied),
		Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceClaimDenied()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceClaimDenied"), sizeof(FTargetDeviceClaimDenied), Get_Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Hash() { return 840202065U; }
class UScriptStruct* FTargetDeviceServiceTerminateLaunchedProcess::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceTerminateLaunchedProcess"), sizeof(FTargetDeviceServiceTerminateLaunchedProcess), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceTerminateLaunchedProcess>()
{
	return FTargetDeviceServiceTerminateLaunchedProcess::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess(FTargetDeviceServiceTerminateLaunchedProcess::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceTerminateLaunchedProcess"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceTerminateLaunchedProcess
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceTerminateLaunchedProcess()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceTerminateLaunchedProcess")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceTerminateLaunchedProcess>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceTerminateLaunchedProcess;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for terminating an application running on the device.\n\n@see FTargetDeviceServiceTerminateLaunchedProcess" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceTerminateLaunchedProcess>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the application to launch.\n\nThe semantics of this identifier are target platform specific. In some cases it may be\na GUID, in other cases it may be the path to the application or some other means of\nidentifying the application. Application identifiers are returned from target device\nservices as result of successful deployment transactions." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceTerminateLaunchedProcess, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant identifier of the target device to use." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceTerminateLaunchedProcess, Variant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceTerminateLaunchedProcess",
		sizeof(FTargetDeviceServiceTerminateLaunchedProcess),
		alignof(FTargetDeviceServiceTerminateLaunchedProcess),
		Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceTerminateLaunchedProcess"), sizeof(FTargetDeviceServiceTerminateLaunchedProcess), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Hash() { return 1809147310U; }
class UScriptStruct* FTargetDeviceServiceLaunchFinished::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceLaunchFinished"), sizeof(FTargetDeviceServiceLaunchFinished), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceLaunchFinished>()
{
	return FTargetDeviceServiceLaunchFinished::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceLaunchFinished(FTargetDeviceServiceLaunchFinished::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceLaunchFinished"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceLaunchFinished
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceLaunchFinished()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceLaunchFinished")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceLaunchFinished>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceLaunchFinished;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[];
#endif
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for notifying a target device proxy that launching an application has finished.\n\n@see FTargetDeviceServiceLaunchApp" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceLaunchFinished>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_Succeeded_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the application was launched successfully." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((FTargetDeviceServiceLaunchFinished*)Obj)->Succeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServiceLaunchFinished), &Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_Succeeded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_Succeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_ProcessId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the process identifier for the launched application." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceLaunchFinished, ProcessId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_ProcessId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_ProcessId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the launched application.\n\nThe semantics of this identifier are target platform specific. In some cases it may be\na GUID, in other cases it may be the path to the application or some other means of\nidentifying the application. Application identifiers are returned from target device\nservices as result of successful deployment transactions." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceLaunchFinished, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_AppID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_Succeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_ProcessId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::NewProp_AppID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceLaunchFinished",
		sizeof(FTargetDeviceServiceLaunchFinished),
		alignof(FTargetDeviceServiceLaunchFinished),
		Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceLaunchFinished"), sizeof(FTargetDeviceServiceLaunchFinished), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchFinished_Hash() { return 298182047U; }
class UScriptStruct* FTargetDeviceServiceLaunchApp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceLaunchApp"), sizeof(FTargetDeviceServiceLaunchApp), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceLaunchApp>()
{
	return FTargetDeviceServiceLaunchApp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceLaunchApp(FTargetDeviceServiceLaunchApp::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceLaunchApp"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceLaunchApp
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceLaunchApp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceLaunchApp")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceLaunchApp>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceLaunchApp;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuildConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for committing a deployment transaction.\n\nTo launch an arbitrary executable on a device use the FTargetDeviceServiceRunExecutable message instead.\n\n@see FTargetDeviceServiceLaunchFinished" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceLaunchApp>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds optional command line parameters for the application." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceLaunchApp, Params), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Params_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_BuildConfiguration_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "The application's build configuration, i.e. Debug or Shipping." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_BuildConfiguration = { "BuildConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceLaunchApp, BuildConfiguration), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_BuildConfiguration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_BuildConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the application to launch.\n\nThe semantics of this identifier are target platform specific. In some cases it may be\na GUID, in other cases it may be the path to the application or some other means of\nidentifying the application. Application identifiers are returned from target device\nservices as result of successful deployment transactions." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceLaunchApp, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_AppID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Variant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant identifier of the target device to use." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceLaunchApp, Variant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Variant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Variant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_BuildConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::NewProp_Variant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceLaunchApp",
		sizeof(FTargetDeviceServiceLaunchApp),
		alignof(FTargetDeviceServiceLaunchApp),
		Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceLaunchApp"), sizeof(FTargetDeviceServiceLaunchApp), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceLaunchApp_Hash() { return 2168640059U; }
class UScriptStruct* FTargetDeviceServiceDeployFinished::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceDeployFinished"), sizeof(FTargetDeviceServiceDeployFinished), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceDeployFinished>()
{
	return FTargetDeviceServiceDeployFinished::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceDeployFinished(FTargetDeviceServiceDeployFinished::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceDeployFinished"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployFinished
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployFinished()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceDeployFinished")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceDeployFinished>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployFinished;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[];
#endif
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for notifying a target device proxy that a deployment transaction has finished.\n\n@see FTargetDeviceServiceDeployFile, FTargetDeviceServiceDeployCommit" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceDeployFinished>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_TransactionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the deployment transaction that this file is part of." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceDeployFinished, TransactionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_TransactionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Succeeded_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the deployment transaction finished successfully." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((FTargetDeviceServiceDeployFinished*)Obj)->Succeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTargetDeviceServiceDeployFinished), &Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Succeeded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Succeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the created identifier for the deployed application.\n\nThe semantics of this identifier are target platform specific. In some cases it may be\na GUID, in other cases it may be the path to the application or some other means of\nidentifying the application. Application identifiers are returned from target device\nservices as result of successful deployment transactions." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceDeployFinished, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_AppID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Variant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant identifier of the target device to use." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceDeployFinished, Variant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Variant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Variant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_TransactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Succeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::NewProp_Variant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceDeployFinished",
		sizeof(FTargetDeviceServiceDeployFinished),
		alignof(FTargetDeviceServiceDeployFinished),
		Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceDeployFinished"), sizeof(FTargetDeviceServiceDeployFinished), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFinished_Hash() { return 3335271642U; }
class UScriptStruct* FTargetDeviceServiceDeployFile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceDeployFile"), sizeof(FTargetDeviceServiceDeployFile), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceDeployFile>()
{
	return FTargetDeviceServiceDeployFile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceDeployFile(FTargetDeviceServiceDeployFile::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceDeployFile"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployFile
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployFile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceDeployFile")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceDeployFile>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployFile;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for deploying a single file to a target device.\n\nThe actual file data must be attached to the message.\n\n@see FTargetDeviceServiceDeployCommit, FTargetDeviceServiceDeployFinished" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceDeployFile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TransactionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the deployment transaction that this file is part of." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceDeployFile, TransactionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TransactionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TargetFileName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name and path of the file as it will be stored on the target device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TargetFileName = { "TargetFileName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceDeployFile, TargetFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TargetFileName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TargetFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TransactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::NewProp_TargetFileName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceDeployFile",
		sizeof(FTargetDeviceServiceDeployFile),
		alignof(FTargetDeviceServiceDeployFile),
		Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceDeployFile"), sizeof(FTargetDeviceServiceDeployFile), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployFile_Hash() { return 1368282181U; }
class UScriptStruct* FTargetDeviceServiceDeployCommit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TARGETDEVICESERVICES_API uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit, Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceDeployCommit"), sizeof(FTargetDeviceServiceDeployCommit), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Hash());
	}
	return Singleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceDeployCommit>()
{
	return FTargetDeviceServiceDeployCommit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetDeviceServiceDeployCommit(FTargetDeviceServiceDeployCommit::StaticStruct, TEXT("/Script/TargetDeviceServices"), TEXT("TargetDeviceServiceDeployCommit"), false, nullptr, nullptr);
static struct FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployCommit
{
	FScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployCommit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetDeviceServiceDeployCommit")),new UScriptStruct::TCppStructOps<FTargetDeviceServiceDeployCommit>);
	}
} ScriptStruct_TargetDeviceServices_StaticRegisterNativesFTargetDeviceServiceDeployCommit;
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for committing a deployment transaction.\n\n@see FTargetDeviceServiceDeployFile, FTargetDeviceServiceDeployFinished" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceDeployCommit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_TransactionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the deployment transaction to commit." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceDeployCommit, TransactionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_TransactionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_Variant_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant identifier of the target device to use." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetDeviceServiceDeployCommit, Variant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_Variant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_Variant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_TransactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::NewProp_Variant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceDeployCommit",
		sizeof(FTargetDeviceServiceDeployCommit),
		alignof(FTargetDeviceServiceDeployCommit),
		Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TargetDeviceServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetDeviceServiceDeployCommit"), sizeof(FTargetDeviceServiceDeployCommit), Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetDeviceServiceDeployCommit_Hash() { return 2934440869U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

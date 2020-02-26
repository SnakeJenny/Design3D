// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DemoNetDriver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoNetDriver() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
// End Cross Module References
class UScriptStruct* FRollbackNetStartupActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("RollbackNetStartupActorInfo"), sizeof(FRollbackNetStartupActorInfo), Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRollbackNetStartupActorInfo>()
{
	return FRollbackNetStartupActorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRollbackNetStartupActorInfo(FRollbackNetStartupActorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("RollbackNetStartupActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RollbackNetStartupActorInfo")),new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo;
	struct Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjReferences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Archetype_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Archetype;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Information about net startup actors that need to be rolled back by being destroyed and re-created" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences = { "ObjReferences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRollbackNetStartupActorInfo, ObjReferences), METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner = { "ObjReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype = { "Archetype", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Archetype), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RollbackNetStartupActorInfo",
		sizeof(FRollbackNetStartupActorInfo),
		alignof(FRollbackNetStartupActorInfo),
		Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RollbackNetStartupActorInfo"), sizeof(FRollbackNetStartupActorInfo), Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash() { return 3235524122U; }
class UScriptStruct* FLevelNameAndTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelNameAndTime, Z_Construct_UPackage__Script_Engine(), TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelNameAndTime>()
{
	return FLevelNameAndTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelNameAndTime(FLevelNameAndTime::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelNameAndTime"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelNameAndTime")),new UScriptStruct::TCppStructOps<FLevelNameAndTime>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime;
	struct Z_Construct_UScriptStruct_FLevelNameAndTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelChangeTimeInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LevelChangeTimeInMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelNameAndTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS = { "LevelChangeTimeInMS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelNameAndTime, LevelChangeTimeInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelNameAndTime, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelNameAndTime",
		sizeof(FLevelNameAndTime),
		alignof(FLevelNameAndTime),
		Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash() { return 303583064U; }
	void UDemoNetDriver::StaticRegisterNativesUDemoNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister()
	{
		return UDemoNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UDemoNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocalReplay_MetaData[];
#endif
		static void NewProp_bIsLocalReplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalReplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckpointSaveMaxMSPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckpointSaveMaxMSPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollbackNetStartupActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RollbackNetStartupActors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RollbackNetStartupActors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollbackNetStartupActors_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DemoNetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Simulated network driver for recording and playing back game sessions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_SetBit(void* Obj)
	{
		((UDemoNetDriver*)Obj)->bIsLocalReplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay = { "bIsLocalReplay", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDemoNetDriver), &Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\nSee also demo.CheckpointSaveMaxMSPerFrameOverride." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame = { "CheckpointSaveMaxMSPerFrame", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemoNetDriver, CheckpointSaveMaxMSPerFrame), METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned\nNOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors = { "RollbackNetStartupActors", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemoNetDriver, RollbackNetStartupActors), METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp = { "RollbackNetStartupActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp = { "RollbackNetStartupActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams = {
		&UDemoNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemoNetDriver, 3980150087);
	template<> ENGINE_API UClass* StaticClass<UDemoNetDriver>()
	{
		return UDemoNetDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoNetDriver(Z_Construct_UClass_UDemoNetDriver, &UDemoNetDriver::StaticClass, TEXT("/Script/Engine"), TEXT("UDemoNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoNetDriver);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetDriver)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

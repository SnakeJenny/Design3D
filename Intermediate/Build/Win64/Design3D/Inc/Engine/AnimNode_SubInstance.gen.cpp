// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_SubInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SubInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_SubInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SubInstance, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SubInstance"), sizeof(FAnimNode_SubInstance), Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SubInstance>()
{
	return FAnimNode_SubInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SubInstance(FAnimNode_SubInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SubInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SubInstance")),new UScriptStruct::TCppStructOps<FAnimNode_SubInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance;
	struct Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubInstanceProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubInstanceProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubInstanceProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceToRun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceToRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPropertyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestPropertyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DestPropertyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourcePropertyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourcePropertyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InstanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SubInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SubInstanceProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "List of properties on the sub instance to push to, built from name list when initialised" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SubInstanceProperties = { "SubInstanceProperties", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, SubInstanceProperties), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SubInstanceProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SubInstanceProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SubInstanceProperties_Inner = { "SubInstanceProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "List of properties on the calling instance to push from" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceProperties = { "InstanceProperties", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, InstanceProperties), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceProperties_Inner = { "InstanceProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceToRun_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "This is the actual instance allocated at runtime that will run" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceToRun = { "InstanceToRun", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, InstanceToRun), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceToRun_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceToRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_DestPropertyNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "List of destination properties to use, 1-1 with Source names above, built by the compiler" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_DestPropertyNames = { "DestPropertyNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, DestPropertyNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_DestPropertyNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_DestPropertyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_DestPropertyNames_Inner = { "DestPropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SourcePropertyNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "List of source properties to use, 1-1 with Dest names below, built by the compiler" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SourcePropertyNames = { "SourcePropertyNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, SourcePropertyNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SourcePropertyNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SourcePropertyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SourcePropertyNames_Inner = { "SourcePropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "Optional tag used to identify this sub-instance" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "The class spawned for this sub-instance" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass = { "InstanceClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, InstanceClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InPose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "Input pose for the node, intentionally not accessible because if there's no input\nNode in the target class we don't want to show this as a pin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InPose = { "InPose", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, InPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InPose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SubInstanceProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SubInstanceProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceToRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_DestPropertyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_DestPropertyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SourcePropertyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_SourcePropertyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InPose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SubInstance",
		sizeof(FAnimNode_SubInstance),
		alignof(FAnimNode_SubInstance),
		Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SubInstance"), sizeof(FAnimNode_SubInstance), Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash() { return 3521923206U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

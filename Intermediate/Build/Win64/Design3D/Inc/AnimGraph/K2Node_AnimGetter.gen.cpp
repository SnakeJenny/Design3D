// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/K2Node_AnimGetter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AnimGetter() {}
// Cross Module References
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FNodeSpawnData();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UField();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_AnimGetter_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_AnimGetter();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
// End Cross Module References
class UScriptStruct* FNodeSpawnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FNodeSpawnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeSpawnData, Z_Construct_UPackage__Script_AnimGraph(), TEXT("NodeSpawnData"), sizeof(FNodeSpawnData), Get_Z_Construct_UScriptStruct_FNodeSpawnData_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FNodeSpawnData>()
{
	return FNodeSpawnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeSpawnData(FNodeSpawnData::StaticStruct, TEXT("/Script/AnimGraph"), TEXT("NodeSpawnData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraph_StaticRegisterNativesFNodeSpawnData
{
	FScriptStruct_AnimGraph_StaticRegisterNativesFNodeSpawnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeSpawnData")),new UScriptStruct::TCppStructOps<FNodeSpawnData>);
	}
} ScriptStruct_AnimGraph_StaticRegisterNativesFNodeSpawnData;
	struct Z_Construct_UScriptStruct_FNodeSpawnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetterContextString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GetterContextString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Getter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Getter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimInstanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceStateNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceStateNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CachedTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeSpawnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "String of combined valid contexts for the spawned getter" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString = { "GetterContextString", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeSpawnData, GetterContextString), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "The UFunction (as a UField)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter = { "Getter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeSpawnData, Getter), Z_Construct_UClass_UField, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The blueprint the getter is valid within" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint = { "SourceBlueprint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeSpawnData, SourceBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "The instance class the spawned getter is defined on" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass = { "AnimInstanceClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeSpawnData, AnimInstanceClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "The state node the spawned getter accesses" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode = { "SourceStateNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeSpawnData, SourceStateNode), Z_Construct_UClass_UAnimStateNodeBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "The node the spawned getter accesses" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeSpawnData, SourceNode), Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "Title to use for the spawned node" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle = { "CachedTitle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeSpawnData, CachedTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeSpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		&NewStructOps,
		"NodeSpawnData",
		sizeof(FNodeSpawnData),
		alignof(FNodeSpawnData),
		Z_Construct_UScriptStruct_FNodeSpawnData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeSpawnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeSpawnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeSpawnData"), sizeof(FNodeSpawnData), Get_Z_Construct_UScriptStruct_FNodeSpawnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeSpawnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeSpawnData_Hash() { return 1180246492U; }
	void UK2Node_AnimGetter::StaticRegisterNativesUK2Node_AnimGetter()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_AnimGetter_NoRegister()
	{
		return UK2Node_AnimGetter::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AnimGetter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Contexts;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Contexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CachedTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAnimBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAnimBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GetterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceStateNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceStateNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AnimGetter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_AnimGetter.h" },
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "List of valid contexts for the node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AnimGetter, Contexts), METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_Inner = { "Contexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "Cached node title" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle = { "CachedTitle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AnimGetter, CachedTitle), METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The anim blueprint that generated this getter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint = { "SourceAnimBlueprint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AnimGetter, SourceAnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "The UAnimInstance derived class that implements the getter we are running" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass = { "GetterClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AnimGetter, GetterClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "UAnimStateNode doesn't use the same hierarchy so we need to have a seperate property here to handle\nthose." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode = { "SourceStateNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AnimGetter, SourceStateNode), Z_Construct_UClass_UAnimStateNodeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AnimGetter.h" },
		{ "ToolTip", "The node that is required for the getter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AnimGetter, SourceNode), Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_AnimGetter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AnimGetter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AnimGetter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::ClassParams = {
		&UK2Node_AnimGetter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_AnimGetter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AnimGetter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_AnimGetter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_AnimGetter, 2446678263);
	template<> ANIMGRAPH_API UClass* StaticClass<UK2Node_AnimGetter>()
	{
		return UK2Node_AnimGetter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_AnimGetter(Z_Construct_UClass_UK2Node_AnimGetter, &UK2Node_AnimGetter::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UK2Node_AnimGetter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AnimGetter);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_AnimGetter)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

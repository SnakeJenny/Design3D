// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIGraph/Classes/AIGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGraphSchema() {}
// Cross Module References
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode();
	UPackage* Z_Construct_UPackage__Script_AIGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode_NoRegister();
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_NewNode();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema_NoRegister();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FAISchemaAction_NewSubNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode, Z_Construct_UPackage__Script_AIGraph(), TEXT("AISchemaAction_NewSubNode"), sizeof(FAISchemaAction_NewSubNode), Get_Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Hash());
	}
	return Singleton;
}
template<> AIGRAPH_API UScriptStruct* StaticStruct<FAISchemaAction_NewSubNode>()
{
	return FAISchemaAction_NewSubNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISchemaAction_NewSubNode(FAISchemaAction_NewSubNode::StaticStruct, TEXT("/Script/AIGraph"), TEXT("AISchemaAction_NewSubNode"), false, nullptr, nullptr);
static struct FScriptStruct_AIGraph_StaticRegisterNativesFAISchemaAction_NewSubNode
{
	FScriptStruct_AIGraph_StaticRegisterNativesFAISchemaAction_NewSubNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AISchemaAction_NewSubNode")),new UScriptStruct::TCppStructOps<FAISchemaAction_NewSubNode>);
	}
} ScriptStruct_AIGraph_StaticRegisterNativesFAISchemaAction_NewSubNode;
	struct Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Action to add a subnode to the selected node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISchemaAction_NewSubNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "parent node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISchemaAction_NewSubNode, ParentNode), Z_Construct_UClass_UAIGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISchemaAction_NewSubNode, NodeTemplate), Z_Construct_UClass_UAIGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AISchemaAction_NewSubNode",
		sizeof(FAISchemaAction_NewSubNode),
		alignof(FAISchemaAction_NewSubNode),
		Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISchemaAction_NewSubNode"), sizeof(FAISchemaAction_NewSubNode), Get_Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Hash() { return 3626294625U; }
class UScriptStruct* FAISchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISchemaAction_NewNode, Z_Construct_UPackage__Script_AIGraph(), TEXT("AISchemaAction_NewNode"), sizeof(FAISchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> AIGRAPH_API UScriptStruct* StaticStruct<FAISchemaAction_NewNode>()
{
	return FAISchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISchemaAction_NewNode(FAISchemaAction_NewNode::StaticStruct, TEXT("/Script/AIGraph"), TEXT("AISchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_AIGraph_StaticRegisterNativesFAISchemaAction_NewNode
{
	FScriptStruct_AIGraph_StaticRegisterNativesFAISchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AISchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FAISchemaAction_NewNode>);
	}
} ScriptStruct_AIGraph_StaticRegisterNativesFAISchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UAIGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AISchemaAction_NewNode",
		sizeof(FAISchemaAction_NewNode),
		alignof(FAISchemaAction_NewNode),
		Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISchemaAction_NewNode"), sizeof(FAISchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Hash() { return 2724191625U; }
	void UAIGraphSchema::StaticRegisterNativesUAIGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UAIGraphSchema_NoRegister()
	{
		return UAIGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAIGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIGraphSchema_Statics::ClassParams = {
		&UAIGraphSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIGraphSchema, 3269558996);
	template<> AIGRAPH_API UClass* StaticClass<UAIGraphSchema>()
	{
		return UAIGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIGraphSchema(Z_Construct_UClass_UAIGraphSchema, &UAIGraphSchema::StaticClass, TEXT("/Script/AIGraph"), TEXT("UAIGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

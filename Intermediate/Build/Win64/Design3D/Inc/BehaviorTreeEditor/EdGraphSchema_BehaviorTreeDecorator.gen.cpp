// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditor/Classes/EdGraphSchema_BehaviorTreeDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_BehaviorTreeDecorator() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FDecoratorSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BEHAVIORTREEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode, Z_Construct_UPackage__Script_BehaviorTreeEditor(), TEXT("DecoratorSchemaAction_NewNode"), sizeof(FDecoratorSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> BEHAVIORTREEEDITOR_API UScriptStruct* StaticStruct<FDecoratorSchemaAction_NewNode>()
{
	return FDecoratorSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDecoratorSchemaAction_NewNode(FDecoratorSchemaAction_NewNode::StaticStruct, TEXT("/Script/BehaviorTreeEditor"), TEXT("DecoratorSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFDecoratorSchemaAction_NewNode
{
	FScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFDecoratorSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DecoratorSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FDecoratorSchemaAction_NewNode>);
	}
} ScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFDecoratorSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTreeDecorator.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTreeDecorator.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecoratorSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"DecoratorSchemaAction_NewNode",
		sizeof(FDecoratorSchemaAction_NewNode),
		alignof(FDecoratorSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BehaviorTreeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DecoratorSchemaAction_NewNode"), sizeof(FDecoratorSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Hash() { return 1154655796U; }
	void UEdGraphSchema_BehaviorTreeDecorator::StaticRegisterNativesUEdGraphSchema_BehaviorTreeDecorator()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_NoRegister()
	{
		return UEdGraphSchema_BehaviorTreeDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PC_Boolean_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PC_Boolean;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_BehaviorTreeDecorator.h" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTreeDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTreeDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean = { "PC_Boolean", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphSchema_BehaviorTreeDecorator, PC_Boolean), METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_BehaviorTreeDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::ClassParams = {
		&UEdGraphSchema_BehaviorTreeDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphSchema_BehaviorTreeDecorator, 1955445266);
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UEdGraphSchema_BehaviorTreeDecorator>()
	{
		return UEdGraphSchema_BehaviorTreeDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphSchema_BehaviorTreeDecorator(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator, &UEdGraphSchema_BehaviorTreeDecorator::StaticClass, TEXT("/Script/BehaviorTreeEditor"), TEXT("UEdGraphSchema_BehaviorTreeDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_BehaviorTreeDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditor/Classes/BehaviorTreeGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraphNode() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeGraphNode::StaticRegisterNativesUBehaviorTreeGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister()
	{
		return UBehaviorTreeGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInjectedNode_MetaData[];
#endif
		static void NewProp_bInjectedNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInjectedNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Services;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Services_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decorators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Decorators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Decorators_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeGraphNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode.h" },
		{ "ToolTip", "if set, this node was injected from subtree and shouldn't be edited" },
	};
#endif
	void Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_SetBit(void* Obj)
	{
		((UBehaviorTreeGraphNode*)Obj)->bInjectedNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode = { "bInjectedNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBehaviorTreeGraphNode), &Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode.h" },
		{ "ToolTip", "only some of behavior tree nodes support services" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeGraphNode, Services), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode.h" },
		{ "ToolTip", "only some of behavior tree nodes support decorators" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators = { "Decorators", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeGraphNode, Decorators), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_Inner = { "Decorators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::ClassParams = {
		&UBehaviorTreeGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTreeGraphNode, 1903392953);
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraphNode>()
	{
		return UBehaviorTreeGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeGraphNode(Z_Construct_UClass_UBehaviorTreeGraphNode, &UBehaviorTreeGraphNode::StaticClass, TEXT("/Script/BehaviorTreeEditor"), TEXT("UBehaviorTreeGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

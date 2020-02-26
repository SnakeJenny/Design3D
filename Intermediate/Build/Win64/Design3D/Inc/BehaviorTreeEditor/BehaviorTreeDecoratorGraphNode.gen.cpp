// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditor/Classes/BehaviorTreeDecoratorGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeDecoratorGraphNode() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeDecoratorGraphNode::StaticRegisterNativesUBehaviorTreeDecoratorGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_NoRegister()
	{
		return UBehaviorTreeDecoratorGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeDecoratorGraphNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeDecoratorGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::ClassParams = {
		&UBehaviorTreeDecoratorGraphNode::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTreeDecoratorGraphNode, 897511311);
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeDecoratorGraphNode>()
	{
		return UBehaviorTreeDecoratorGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeDecoratorGraphNode(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode, &UBehaviorTreeDecoratorGraphNode::StaticClass, TEXT("/Script/BehaviorTreeEditor"), TEXT("UBehaviorTreeDecoratorGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeDecoratorGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

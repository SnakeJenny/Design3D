// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimStateEntryNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateEntryNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateEntryNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateEntryNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimStateEntryNode::StaticRegisterNativesUAnimStateEntryNode()
	{
	}
	UClass* Z_Construct_UClass_UAnimStateEntryNode_NoRegister()
	{
		return UAnimStateEntryNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateEntryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateEntryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateEntryNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateEntryNode.h" },
		{ "ModuleRelativePath", "Classes/AnimStateEntryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateEntryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateEntryNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateEntryNode_Statics::ClassParams = {
		&UAnimStateEntryNode::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateEntryNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimStateEntryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateEntryNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimStateEntryNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimStateEntryNode, 2044530315);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateEntryNode>()
	{
		return UAnimStateEntryNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimStateEntryNode(Z_Construct_UClass_UAnimStateEntryNode, &UAnimStateEntryNode::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimStateEntryNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateEntryNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

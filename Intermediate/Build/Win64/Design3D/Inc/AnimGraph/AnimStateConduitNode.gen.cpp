// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimStateConduitNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateConduitNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateConduitNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateConduitNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UAnimStateConduitNode::StaticRegisterNativesUAnimStateConduitNode()
	{
	}
	UClass* Z_Construct_UClass_UAnimStateConduitNode_NoRegister()
	{
		return UAnimStateConduitNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateConduitNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateConduitNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimStateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateConduitNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateConduitNode.h" },
		{ "ModuleRelativePath", "Classes/AnimStateConduitNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateConduitNode.h" },
		{ "ToolTip", "The transition graph for this conduit; it's a logic graph, not an animation graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateConduitNode, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStateConduitNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateConduitNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateConduitNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateConduitNode_Statics::ClassParams = {
		&UAnimStateConduitNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStateConduitNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimStateConduitNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateConduitNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimStateConduitNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateConduitNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimStateConduitNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimStateConduitNode, 701545631);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateConduitNode>()
	{
		return UAnimStateConduitNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimStateConduitNode(Z_Construct_UClass_UAnimStateConduitNode, &UAnimStateConduitNode::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimStateConduitNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateConduitNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

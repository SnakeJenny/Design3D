// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimationTransitionGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationTransitionGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationTransitionGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationTransitionGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TransitionResult_NoRegister();
// End Cross Module References
	void UAnimationTransitionGraph::StaticRegisterNativesUAnimationTransitionGraph()
	{
	}
	UClass* Z_Construct_UClass_UAnimationTransitionGraph_NoRegister()
	{
		return UAnimationTransitionGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationTransitionGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyResultNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyResultNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationTransitionGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationTransitionGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationTransitionGraph.h" },
		{ "ModuleRelativePath", "Classes/AnimationTransitionGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimationTransitionGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode = { "MyResultNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationTransitionGraph, MyResultNode), Z_Construct_UClass_UAnimGraphNode_TransitionResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationTransitionGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationTransitionGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationTransitionGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationTransitionGraph_Statics::ClassParams = {
		&UAnimationTransitionGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationTransitionGraph_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimationTransitionGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationTransitionGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationTransitionGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationTransitionGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationTransitionGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationTransitionGraph, 2747433155);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationTransitionGraph>()
	{
		return UAnimationTransitionGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationTransitionGraph(Z_Construct_UClass_UAnimationTransitionGraph, &UAnimationTransitionGraph::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimationTransitionGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationTransitionGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

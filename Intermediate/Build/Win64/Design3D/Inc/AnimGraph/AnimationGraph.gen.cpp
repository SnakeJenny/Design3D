// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationGraph::StaticRegisterNativesUAnimationGraph()
	{
	}
	UClass* Z_Construct_UClass_UAnimationGraph_NoRegister()
	{
		return UAnimationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationGraph.h" },
		{ "ModuleRelativePath", "Classes/AnimationGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationGraph_Statics::ClassParams = {
		&UAnimationGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationGraph, 607806563);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationGraph>()
	{
		return UAnimationGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationGraph(Z_Construct_UClass_UAnimationGraph, &UAnimationGraph::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

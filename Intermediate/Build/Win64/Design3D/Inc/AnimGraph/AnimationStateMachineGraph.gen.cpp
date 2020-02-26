// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimationStateMachineGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationStateMachineGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateEntryNode_NoRegister();
// End Cross Module References
	void UAnimationStateMachineGraph::StaticRegisterNativesUAnimationStateMachineGraph()
	{
	}
	UClass* Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister()
	{
		return UAnimationStateMachineGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationStateMachineGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerAnimGraphNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerAnimGraphNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntryNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationStateMachineGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationStateMachineGraph.h" },
		{ "ModuleRelativePath", "Classes/AnimationStateMachineGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimationStateMachineGraph.h" },
		{ "ToolTip", "Parent instance node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode = { "OwnerAnimGraphNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationStateMachineGraph, OwnerAnimGraphNode), Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimationStateMachineGraph.h" },
		{ "ToolTip", "Entry node within the state machine" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationStateMachineGraph, EntryNode), Z_Construct_UClass_UAnimStateEntryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationStateMachineGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationStateMachineGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationStateMachineGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationStateMachineGraph_Statics::ClassParams = {
		&UAnimationStateMachineGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationStateMachineGraph_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationStateMachineGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationStateMachineGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationStateMachineGraph, 4056365122);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationStateMachineGraph>()
	{
		return UAnimationStateMachineGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationStateMachineGraph(Z_Construct_UClass_UAnimationStateMachineGraph, &UAnimationStateMachineGraph::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimationStateMachineGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationStateMachineGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

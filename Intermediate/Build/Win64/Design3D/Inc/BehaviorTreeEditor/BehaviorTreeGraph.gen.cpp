// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditor/Classes/BehaviorTreeGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraph() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraph_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraph();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeGraph::StaticRegisterNativesUBehaviorTreeGraph()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTreeGraph_NoRegister()
	{
		return UBehaviorTreeGraph::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingModCounter_MetaData[];
#endif
		static void NewProp_bIsUsingModCounter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingModCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeGraph.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraph.h" },
	};
#endif
	void Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_SetBit(void* Obj)
	{
		((UBehaviorTreeGraph*)Obj)->bIsUsingModCounter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter = { "bIsUsingModCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBehaviorTreeGraph), &Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraph.h" },
		{ "ToolTip", "increased with every graph rebuild, used to refresh data from subtrees" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter = { "ModCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeGraph, ModCounter), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraph_Statics::ClassParams = {
		&UBehaviorTreeGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeGraph_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTreeGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTreeGraph, 57384163);
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraph>()
	{
		return UBehaviorTreeGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeGraph(Z_Construct_UClass_UBehaviorTreeGraph, &UBehaviorTreeGraph::StaticClass, TEXT("/Script/BehaviorTreeEditor"), TEXT("UBehaviorTreeGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

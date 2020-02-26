// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIGraph/Classes/AIGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGraph() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph_NoRegister();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AIGraph();
// End Cross Module References
	void UAIGraph::StaticRegisterNativesUAIGraph()
	{
	}
	UClass* Z_Construct_UClass_UAIGraph_NoRegister()
	{
		return UAIGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAIGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GraphVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIGraph.h" },
		{ "ModuleRelativePath", "Classes/AIGraph.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion = { "GraphVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIGraph, GraphVersion), METADATA_PARAMS(Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIGraph_Statics::ClassParams = {
		&UAIGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIGraph_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAIGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIGraph, 2989747423);
	template<> AIGRAPH_API UClass* StaticClass<UAIGraph>()
	{
		return UAIGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIGraph(Z_Construct_UClass_UAIGraph, &UAIGraph::StaticClass, TEXT("/Script/AIGraph"), TEXT("UAIGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIGraph);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAIGraph)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

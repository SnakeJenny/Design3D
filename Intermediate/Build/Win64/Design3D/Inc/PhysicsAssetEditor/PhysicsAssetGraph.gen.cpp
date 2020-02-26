// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsAssetEditor/Private/PhysicsAssetGraph/PhysicsAssetGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetGraph() {}
// Cross Module References
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraph_NoRegister();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References
	void UPhysicsAssetGraph::StaticRegisterNativesUPhysicsAssetGraph()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsAssetGraph_NoRegister()
	{
		return UPhysicsAssetGraph::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsAssetGraph/PhysicsAssetGraph.h" },
		{ "ModuleRelativePath", "Private/PhysicsAssetGraph/PhysicsAssetGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetGraph_Statics::ClassParams = {
		&UPhysicsAssetGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsAssetGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsAssetGraph, 1812102823);
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetGraph>()
	{
		return UPhysicsAssetGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsAssetGraph(Z_Construct_UClass_UPhysicsAssetGraph, &UPhysicsAssetGraph::StaticClass, TEXT("/Script/PhysicsAssetEditor"), TEXT("UPhysicsAssetGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

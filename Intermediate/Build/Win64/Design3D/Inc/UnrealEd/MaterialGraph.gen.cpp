// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialGraph/MaterialGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraph() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraph_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UMaterialGraph::StaticRegisterNativesUMaterialGraph()
	{
	}
	UClass* Z_Construct_UClass_UMaterialGraph_NoRegister()
	{
		return UMaterialGraph::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterialFullName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginalMaterialFullName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraph.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "The name of the material that we are editing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName = { "OriginalMaterialFullName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialGraph, OriginalMaterialFullName), METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "Root node representing Material inputs (NULL for Material Functions)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialGraph, RootNode), Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "Material Function this Graph represents (NULL for Materials)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialGraph, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "Material this Graph represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialGraph, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraph_Statics::ClassParams = {
		&UMaterialGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGraph_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialGraph, 3930992120);
	template<> UNREALED_API UClass* StaticClass<UMaterialGraph>()
	{
		return UMaterialGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialGraph(Z_Construct_UClass_UMaterialGraph, &UMaterialGraph::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

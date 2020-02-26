// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTree() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
// End Cross Module References
	void UBehaviorTree::StaticRegisterNativesUBehaviorTree()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTree_NoRegister()
	{
		return UBehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootDecoratorOps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootDecoratorOps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootDecoratorOps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootDecorators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootDecorators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootDecorators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorTree/BehaviorTree.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "logic operators for root level decorators, used by subtrees" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps = { "RootDecoratorOps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTree, RootDecoratorOps), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_Inner = { "RootDecoratorOps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBTDecoratorLogic, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "root level decorators, used by subtrees" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators = { "RootDecorators", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTree, RootDecorators), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_Inner = { "RootDecorators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBTDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "blackboard asset for this tree" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTree, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "Info about the graphs we last edited" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTree, LastEditedDocuments), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "Graph for Behavior Tree" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph = { "BTGraph", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTree, BTGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "root node of loaded tree" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTree, RootNode), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTree_Statics::ClassParams = {
		&UBehaviorTree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTree_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTree, 316099596);
	template<> AIMODULE_API UClass* StaticClass<UBehaviorTree>()
	{
		return UBehaviorTree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTree(Z_Construct_UClass_UBehaviorTree, &UBehaviorTree::StaticClass, TEXT("/Script/AIModule"), TEXT("UBehaviorTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

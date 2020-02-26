// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BTNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
// End Cross Module References
	void UBTNode::StaticRegisterNativesUBTNode()
	{
	}
	UClass* Z_Construct_UClass_UBTNode_NoRegister()
	{
		return UBTNode::StaticClass();
	}
	struct Z_Construct_UClass_UBTNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreeAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
		{ "ToolTip", "parent node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTNode, ParentNode), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTNode_Statics::NewProp_ParentNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::NewProp_ParentNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTNode_Statics::NewProp_TreeAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
		{ "ToolTip", "source asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTNode_Statics::NewProp_TreeAsset = { "TreeAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTNode, TreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTNode_Statics::NewProp_TreeAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::NewProp_TreeAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTNode_Statics::NewProp_NodeName_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
		{ "ToolTip", "node name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTNode, NodeName), METADATA_PARAMS(Z_Construct_UClass_UBTNode_Statics::NewProp_NodeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::NewProp_NodeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTNode_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTNode_Statics::NewProp_TreeAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTNode_Statics::NewProp_NodeName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBTNode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UBTNode, IGameplayTaskOwnerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTNode_Statics::ClassParams = {
		&UBTNode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTNode_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTNode, 769432172);
	template<> AIMODULE_API UClass* StaticClass<UBTNode>()
	{
		return UBTNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTNode(Z_Construct_UClass_UBTNode, &UBTNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTAuxiliaryNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTAuxiliaryNode::StaticRegisterNativesUBTAuxiliaryNode()
	{
	}
	UClass* Z_Construct_UClass_UBTAuxiliaryNode_NoRegister()
	{
		return UBTAuxiliaryNode::StaticClass();
	}
	struct Z_Construct_UClass_UBTAuxiliaryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTAuxiliaryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTAuxiliaryNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTAuxiliaryNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTAuxiliaryNode.h" },
		{ "ToolTip", "Auxiliary nodes are supporting nodes, that receive notification about execution flow and can be ticked\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n - OnBecomeRelevant\n - OnCeaseRelevant\n - TickNode\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTAuxiliaryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTAuxiliaryNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTAuxiliaryNode_Statics::ClassParams = {
		&UBTAuxiliaryNode::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTAuxiliaryNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTAuxiliaryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTAuxiliaryNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTAuxiliaryNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTAuxiliaryNode, 1221129412);
	template<> AIMODULE_API UClass* StaticClass<UBTAuxiliaryNode>()
	{
		return UBTAuxiliaryNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTAuxiliaryNode(Z_Construct_UClass_UBTAuxiliaryNode, &UBTAuxiliaryNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTAuxiliaryNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTAuxiliaryNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

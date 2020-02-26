// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BTTaskNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
// End Cross Module References
	void UBTTaskNode::StaticRegisterNativesUBTTaskNode()
	{
	}
	UClass* Z_Construct_UClass_UBTTaskNode_NoRegister()
	{
		return UBTTaskNode::StaticClass();
	}
	struct Z_Construct_UClass_UBTTaskNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRestartSelf_MetaData[];
#endif
		static void NewProp_bIgnoreRestartSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRestartSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Services;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Services_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTaskNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTTaskNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "Task are leaf nodes of behavior tree, which perform actual actions\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n - ExecuteTask\n - AbortTask\n - TickTask\n - OnMessage\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "if set, task search will be discarded when this task is selected to execute but is already running" },
	};
#endif
	void Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_SetBit(void* Obj)
	{
		((UBTTaskNode*)Obj)->bIgnoreRestartSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf = { "bIgnoreRestartSelf", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTTaskNode), &Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "service nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTaskNode, Services), METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBTService_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTaskNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTaskNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_Statics::ClassParams = {
		&UBTTaskNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTaskNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTaskNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTaskNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTaskNode, 2002806106);
	template<> AIMODULE_API UClass* StaticClass<UBTTaskNode>()
	{
		return UBTTaskNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskNode(Z_Construct_UClass_UBTTaskNode, &UBTTaskNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTaskNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

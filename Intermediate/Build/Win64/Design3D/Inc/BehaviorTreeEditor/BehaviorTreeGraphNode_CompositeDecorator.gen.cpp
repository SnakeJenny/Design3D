// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditor/Classes/BehaviorTreeGraphNode_CompositeDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraphNode_CompositeDecorator() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UBehaviorTreeGraphNode_CompositeDecorator::StaticRegisterNativesUBehaviorTreeGraphNode_CompositeDecorator()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_NoRegister()
	{
		return UBehaviorTreeGraphNode_CompositeDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNodeInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNodeInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAbortFlow_MetaData[];
#endif
		static void NewProp_bCanAbortFlow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAbortFlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOperations_MetaData[];
#endif
		static void NewProp_bShowOperations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOperations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompositeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeGraphNode_CompositeDecorator.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription = { "CachedDescription", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeGraphNode_CompositeDecorator, CachedDescription), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance = { "ParentNodeInstance", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeGraphNode_CompositeDecorator, ParentNodeInstance), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
		{ "ToolTip", "updated with internal graph changes, set when decorators inside can abort flow" },
	};
#endif
	void Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_SetBit(void* Obj)
	{
		((UBehaviorTreeGraphNode_CompositeDecorator*)Obj)->bCanAbortFlow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow = { "bCanAbortFlow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBehaviorTreeGraphNode_CompositeDecorator), &Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
		{ "ToolTip", "if set, all logic operations will be shown in description" },
	};
#endif
	void Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_SetBit(void* Obj)
	{
		((UBehaviorTreeGraphNode_CompositeDecorator*)Obj)->bShowOperations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations = { "bShowOperations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBehaviorTreeGraphNode_CompositeDecorator), &Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName = { "CompositeName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeGraphNode_CompositeDecorator, CompositeName), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
		{ "ToolTip", "The logic graph for this decorator (returning a boolean)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeGraphNode_CompositeDecorator, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraphNode_CompositeDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::ClassParams = {
		&UBehaviorTreeGraphNode_CompositeDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTreeGraphNode_CompositeDecorator, 3055358394);
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraphNode_CompositeDecorator>()
	{
		return UBehaviorTreeGraphNode_CompositeDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeGraphNode_CompositeDecorator(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator, &UBehaviorTreeGraphNode_CompositeDecorator::StaticClass, TEXT("/Script/BehaviorTreeEditor"), TEXT("UBehaviorTreeGraphNode_CompositeDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraphNode_CompositeDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

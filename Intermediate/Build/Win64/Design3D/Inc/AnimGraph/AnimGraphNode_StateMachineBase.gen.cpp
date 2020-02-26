// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_StateMachineBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_StateMachineBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister();
// End Cross Module References
	void UAnimGraphNode_StateMachineBase::StaticRegisterNativesUAnimGraphNode_StateMachineBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister()
	{
		return UAnimGraphNode_StateMachineBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorStateMachineGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorStateMachineGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_StateMachineBase.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_StateMachineBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimGraphNode_StateMachineBase.h" },
		{ "ToolTip", "Editor state machine representation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph = { "EditorStateMachineGraph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_StateMachineBase, EditorStateMachineGraph), Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_StateMachineBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::ClassParams = {
		&UAnimGraphNode_StateMachineBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_StateMachineBase, 1315254276);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_StateMachineBase>()
	{
		return UAnimGraphNode_StateMachineBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_StateMachineBase(Z_Construct_UClass_UAnimGraphNode_StateMachineBase, &UAnimGraphNode_StateMachineBase::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_StateMachineBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_StateMachineBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

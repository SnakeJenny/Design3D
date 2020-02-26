// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_MakeDynamicAdditive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_MakeDynamicAdditive() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive();
// End Cross Module References
	void UAnimGraphNode_MakeDynamicAdditive::StaticRegisterNativesUAnimGraphNode_MakeDynamicAdditive()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_NoRegister()
	{
		return UAnimGraphNode_MakeDynamicAdditive::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_MakeDynamicAdditive.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_MakeDynamicAdditive.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_MakeDynamicAdditive.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_MakeDynamicAdditive, Node), Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_MakeDynamicAdditive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::ClassParams = {
		&UAnimGraphNode_MakeDynamicAdditive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_MakeDynamicAdditive, 1056573889);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_MakeDynamicAdditive>()
	{
		return UAnimGraphNode_MakeDynamicAdditive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_MakeDynamicAdditive(Z_Construct_UClass_UAnimGraphNode_MakeDynamicAdditive, &UAnimGraphNode_MakeDynamicAdditive::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_MakeDynamicAdditive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_MakeDynamicAdditive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

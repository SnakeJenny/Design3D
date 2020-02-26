// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_RotationOffsetBlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_RotationOffsetBlendSpace() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace();
// End Cross Module References
	void UAnimGraphNode_RotationOffsetBlendSpace::StaticRegisterNativesUAnimGraphNode_RotationOffsetBlendSpace()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_NoRegister()
	{
		return UAnimGraphNode_RotationOffsetBlendSpace::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_RotationOffsetBlendSpace.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_RotationOffsetBlendSpace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_RotationOffsetBlendSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_RotationOffsetBlendSpace, Node), Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_RotationOffsetBlendSpace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::ClassParams = {
		&UAnimGraphNode_RotationOffsetBlendSpace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_RotationOffsetBlendSpace, 3799533060);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_RotationOffsetBlendSpace>()
	{
		return UAnimGraphNode_RotationOffsetBlendSpace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_RotationOffsetBlendSpace(Z_Construct_UClass_UAnimGraphNode_RotationOffsetBlendSpace, &UAnimGraphNode_RotationOffsetBlendSpace::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_RotationOffsetBlendSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_RotationOffsetBlendSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

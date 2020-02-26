// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_UseCachedPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_UseCachedPose() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_UseCachedPose();
// End Cross Module References
	void UAnimGraphNode_UseCachedPose::StaticRegisterNativesUAnimGraphNode_UseCachedPose()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose_NoRegister()
	{
		return UAnimGraphNode_UseCachedPose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameOfCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameOfCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveCachedPoseNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SaveCachedPoseNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_UseCachedPose.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_UseCachedPose.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimGraphNode_UseCachedPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache = { "NameOfCache", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_UseCachedPose, NameOfCache), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimGraphNode_UseCachedPose.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode = { "SaveCachedPoseNode", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_UseCachedPose, SaveCachedPoseNode), Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimGraphNode_UseCachedPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_UseCachedPose, Node), Z_Construct_UScriptStruct_FAnimNode_UseCachedPose, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_UseCachedPose>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::ClassParams = {
		&UAnimGraphNode_UseCachedPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_UseCachedPose, 2242710368);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_UseCachedPose>()
	{
		return UAnimGraphNode_UseCachedPose::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_UseCachedPose(Z_Construct_UClass_UAnimGraphNode_UseCachedPose, &UAnimGraphNode_UseCachedPose::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_UseCachedPose"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_UseCachedPose);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

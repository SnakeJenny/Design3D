// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_BlendSpaceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_BlendSpaceBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_BlendSpaceBase::StaticRegisterNativesUAnimGraphNode_BlendSpaceBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_NoRegister()
	{
		return UAnimGraphNode_BlendSpaceBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_BlendSpaceBase.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_BlendSpaceBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_BlendSpaceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::ClassParams = {
		&UAnimGraphNode_BlendSpaceBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_BlendSpaceBase, 2535386979);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_BlendSpaceBase>()
	{
		return UAnimGraphNode_BlendSpaceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_BlendSpaceBase(Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase, &UAnimGraphNode_BlendSpaceBase::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_BlendSpaceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_BlendSpaceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

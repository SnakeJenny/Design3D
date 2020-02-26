// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_SkeletalControlBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SkeletalControlBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_SkeletalControlBase::StaticRegisterNativesUAnimGraphNode_SkeletalControlBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_NoRegister()
	{
		return UAnimGraphNode_SkeletalControlBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_SkeletalControlBase.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_SkeletalControlBase.h" },
		{ "ToolTip", "This is the base class for the 'source version' of all skeletal control animation graph nodes\n(nodes that manipulate the pose rather than playing animations to create a pose or blending between poses)\n\nConcrete subclasses should contain a member struct derived from FAnimNode_SkeletalControlBase" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SkeletalControlBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::ClassParams = {
		&UAnimGraphNode_SkeletalControlBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_SkeletalControlBase, 2353038595);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_SkeletalControlBase>()
	{
		return UAnimGraphNode_SkeletalControlBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_SkeletalControlBase(Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase, &UAnimGraphNode_SkeletalControlBase::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_SkeletalControlBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SkeletalControlBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

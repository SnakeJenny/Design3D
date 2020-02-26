// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_BlendBoneByChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_BlendBoneByChannel() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel();
// End Cross Module References
	void UAnimGraphNode_BlendBoneByChannel::StaticRegisterNativesUAnimGraphNode_BlendBoneByChannel()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_NoRegister()
	{
		return UAnimGraphNode_BlendBoneByChannel::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_BlendBoneByChannel.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_BlendBoneByChannel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::NewProp_BlendNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_BlendBoneByChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::NewProp_BlendNode = { "BlendNode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_BlendBoneByChannel, BlendNode), Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::NewProp_BlendNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::NewProp_BlendNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::NewProp_BlendNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_BlendBoneByChannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::ClassParams = {
		&UAnimGraphNode_BlendBoneByChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_BlendBoneByChannel, 1481831884);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_BlendBoneByChannel>()
	{
		return UAnimGraphNode_BlendBoneByChannel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_BlendBoneByChannel(Z_Construct_UClass_UAnimGraphNode_BlendBoneByChannel, &UAnimGraphNode_BlendBoneByChannel::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_BlendBoneByChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_BlendBoneByChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

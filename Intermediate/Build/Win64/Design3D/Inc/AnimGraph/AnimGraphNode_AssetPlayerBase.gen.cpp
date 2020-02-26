// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_AssetPlayerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AssetPlayerBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference();
// End Cross Module References
	void UAnimGraphNode_AssetPlayerBase::StaticRegisterNativesUAnimGraphNode_AssetPlayerBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_NoRegister()
	{
		return UAnimGraphNode_AssetPlayerBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_AssetPlayerBase.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AssetPlayerBase.h" },
		{ "ToolTip", "Helper / intermediate for asset player graphical nodes" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AssetPlayerBase.h" },
		{ "ToolTip", "Sync group settings for this player.  Sync groups keep related animations with different lengths synchronized." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_AssetPlayerBase, SyncGroup), Z_Construct_UScriptStruct_FAnimationGroupReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AssetPlayerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::ClassParams = {
		&UAnimGraphNode_AssetPlayerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_AssetPlayerBase, 949702554);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_AssetPlayerBase>()
	{
		return UAnimGraphNode_AssetPlayerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_AssetPlayerBase(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase, &UAnimGraphNode_AssetPlayerBase::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_AssetPlayerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AssetPlayerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

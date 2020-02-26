// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavGraph/NavigationGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraphNode() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void ANavigationGraphNode::StaticRegisterNativesANavigationGraphNode()
	{
	}
	UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister()
	{
		return ANavigationGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavGraph/NavigationGraphNode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavigationGraphNode_Statics::ClassParams = {
		&ANavigationGraphNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationGraphNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavigationGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavigationGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationGraphNode, 314291788);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationGraphNode>()
	{
		return ANavigationGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationGraphNode(Z_Construct_UClass_ANavigationGraphNode, &ANavigationGraphNode::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavigationGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

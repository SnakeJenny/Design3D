// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavMesh/NavMeshBoundsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMeshBoundsVolume() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
// End Cross Module References
	void ANavMeshBoundsVolume::StaticRegisterNativesANavMeshBoundsVolume()
	{
	}
	UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister()
	{
		return ANavMeshBoundsVolume::StaticClass();
	}
	struct Z_Construct_UClass_ANavMeshBoundsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavMeshBoundsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBoundsVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "NavMesh/NavMeshBoundsVolume.h" },
		{ "ModuleRelativePath", "Public/NavMesh/NavMeshBoundsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavMesh/NavMeshBoundsVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavMeshBoundsVolume, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavMeshBoundsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavMeshBoundsVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavMeshBoundsVolume_Statics::ClassParams = {
		&ANavMeshBoundsVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavMeshBoundsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavMeshBoundsVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavMeshBoundsVolume, 3060956326);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavMeshBoundsVolume>()
	{
		return ANavMeshBoundsVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavMeshBoundsVolume(Z_Construct_UClass_ANavMeshBoundsVolume, &ANavMeshBoundsVolume::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavMeshBoundsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavMeshBoundsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

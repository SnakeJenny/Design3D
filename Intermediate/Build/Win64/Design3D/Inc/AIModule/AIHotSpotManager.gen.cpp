// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/HotSpots/AIHotSpotManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIHotSpotManager() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIHotSpotManager::StaticRegisterNativesUAIHotSpotManager()
	{
	}
	UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister()
	{
		return UAIHotSpotManager::StaticClass();
	}
	struct Z_Construct_UClass_UAIHotSpotManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIHotSpotManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIHotSpotManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HotSpots/AIHotSpotManager.h" },
		{ "ModuleRelativePath", "Classes/HotSpots/AIHotSpotManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIHotSpotManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIHotSpotManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIHotSpotManager_Statics::ClassParams = {
		&UAIHotSpotManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIHotSpotManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIHotSpotManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIHotSpotManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIHotSpotManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIHotSpotManager, 3792807809);
	template<> AIMODULE_API UClass* StaticClass<UAIHotSpotManager>()
	{
		return UAIHotSpotManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIHotSpotManager(Z_Construct_UClass_UAIHotSpotManager, &UAIHotSpotManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIHotSpotManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIHotSpotManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

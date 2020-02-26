// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/PathFollowingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFollowingManager() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UPathFollowingManager::StaticRegisterNativesUPathFollowingManager()
	{
	}
	UClass* Z_Construct_UClass_UPathFollowingManager_NoRegister()
	{
		return UPathFollowingManager::StaticClass();
	}
	struct Z_Construct_UClass_UPathFollowingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathFollowingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathFollowingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/PathFollowingManager.h" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathFollowingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathFollowingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathFollowingManager_Statics::ClassParams = {
		&UPathFollowingManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPathFollowingManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPathFollowingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathFollowingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathFollowingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathFollowingManager, 2086510942);
	template<> AIMODULE_API UClass* StaticClass<UPathFollowingManager>()
	{
		return UPathFollowingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathFollowingManager(Z_Construct_UClass_UPathFollowingManager, &UPathFollowingManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UPathFollowingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathFollowingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

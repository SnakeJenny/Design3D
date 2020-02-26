// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/CrowdManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdManagerBase() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UCrowdManagerBase::StaticRegisterNativesUCrowdManagerBase()
	{
	}
	UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister()
	{
		return UCrowdManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManagerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrowdManagerBase.h" },
		{ "ModuleRelativePath", "Public/CrowdManagerBase.h" },
		{ "ToolTip", "Base class for Crowd Managers. If you want to create a custom crowd manager\n   implement a class extending this one and set UNavigationSystem::CrowdManagerClass\n   to point at your class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrowdManagerBase_Statics::ClassParams = {
		&UCrowdManagerBase::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UCrowdManagerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCrowdManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrowdManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrowdManagerBase, 176932821);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UCrowdManagerBase>()
	{
		return UCrowdManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdManagerBase(Z_Construct_UClass_UCrowdManagerBase, &UCrowdManagerBase::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UCrowdManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryDeferredDecal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryDeferredDecal() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryDeferredDecal_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryDeferredDecal();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryDeferredDecal::StaticRegisterNativesUActorFactoryDeferredDecal()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryDeferredDecal_NoRegister()
	{
		return UActorFactoryDeferredDecal::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryDeferredDecal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryDeferredDecal.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryDeferredDecal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryDeferredDecal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::ClassParams = {
		&UActorFactoryDeferredDecal::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryDeferredDecal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryDeferredDecal, 1788556815);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryDeferredDecal>()
	{
		return UActorFactoryDeferredDecal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryDeferredDecal(Z_Construct_UClass_UActorFactoryDeferredDecal, &UActorFactoryDeferredDecal::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryDeferredDecal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryDeferredDecal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

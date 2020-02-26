// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryAtmosphericFog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAtmosphericFog() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAtmosphericFog_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAtmosphericFog();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryAtmosphericFog::StaticRegisterNativesUActorFactoryAtmosphericFog()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryAtmosphericFog_NoRegister()
	{
		return UActorFactoryAtmosphericFog::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryAtmosphericFog_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryAtmosphericFog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryAtmosphericFog_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryAtmosphericFog.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryAtmosphericFog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryAtmosphericFog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAtmosphericFog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAtmosphericFog_Statics::ClassParams = {
		&UActorFactoryAtmosphericFog::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryAtmosphericFog_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAtmosphericFog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryAtmosphericFog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryAtmosphericFog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryAtmosphericFog, 2212789887);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryAtmosphericFog>()
	{
		return UActorFactoryAtmosphericFog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryAtmosphericFog(Z_Construct_UClass_UActorFactoryAtmosphericFog, &UActorFactoryAtmosphericFog::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryAtmosphericFog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAtmosphericFog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

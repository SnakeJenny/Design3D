// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryTriggerCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryTriggerCapsule() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerCapsule_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerCapsule();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryTriggerCapsule::StaticRegisterNativesUActorFactoryTriggerCapsule()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryTriggerCapsule_NoRegister()
	{
		return UActorFactoryTriggerCapsule::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryTriggerCapsule.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryTriggerCapsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryTriggerCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics::ClassParams = {
		&UActorFactoryTriggerCapsule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryTriggerCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryTriggerCapsule, 3120459470);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryTriggerCapsule>()
	{
		return UActorFactoryTriggerCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryTriggerCapsule(Z_Construct_UClass_UActorFactoryTriggerCapsule, &UActorFactoryTriggerCapsule::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryTriggerCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryTriggerCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

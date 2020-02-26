// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryPawn() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPawn_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPawn();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryEmptyActor();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryPawn::StaticRegisterNativesUActorFactoryPawn()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryPawn_NoRegister()
	{
		return UActorFactoryPawn::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryEmptyActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryPawn.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryPawn_Statics::ClassParams = {
		&UActorFactoryPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryPawn, 547913991);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryPawn>()
	{
		return UActorFactoryPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryPawn(Z_Construct_UClass_UActorFactoryPawn, &UActorFactoryPawn::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

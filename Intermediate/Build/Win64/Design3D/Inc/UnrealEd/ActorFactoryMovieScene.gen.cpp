// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Private/Factories/ActorFactoryMovieScene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryMovieScene() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryMovieScene_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryMovieScene();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryMovieScene::StaticRegisterNativesUActorFactoryMovieScene()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryMovieScene_NoRegister()
	{
		return UActorFactoryMovieScene::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryMovieScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryMovieScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryMovieScene_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ActorFactoryMovieScene.h" },
		{ "ModuleRelativePath", "Private/Factories/ActorFactoryMovieScene.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryMovieScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryMovieScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryMovieScene_Statics::ClassParams = {
		&UActorFactoryMovieScene::StaticClass,
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
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryMovieScene_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryMovieScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryMovieScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryMovieScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryMovieScene, 1259353115);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryMovieScene>()
	{
		return UActorFactoryMovieScene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryMovieScene(Z_Construct_UClass_UActorFactoryMovieScene, &UActorFactoryMovieScene::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryMovieScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryMovieScene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_CollisionDataProvider() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterface_CollisionDataProvider::StaticRegisterNativesUInterface_CollisionDataProvider()
	{
	}
	UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister()
	{
		return UInterface_CollisionDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_CollisionDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_CollisionDataProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_CollisionDataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::ClassParams = {
		&UInterface_CollisionDataProvider::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_CollisionDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterface_CollisionDataProvider, 1780940251);
	template<> ENGINE_API UClass* StaticClass<UInterface_CollisionDataProvider>()
	{
		return UInterface_CollisionDataProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterface_CollisionDataProvider(Z_Construct_UClass_UInterface_CollisionDataProvider, &UInterface_CollisionDataProvider::StaticClass, TEXT("/Script/Engine"), TEXT("UInterface_CollisionDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_CollisionDataProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

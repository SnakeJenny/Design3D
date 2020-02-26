// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelStreamingAlwaysLoaded.h"
#include "Engine/Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingAlwaysLoaded() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelStreamingAlwaysLoaded::StaticRegisterNativesULevelStreamingAlwaysLoaded()
	{
	}
	UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded_NoRegister()
	{
		return ULevelStreamingAlwaysLoaded::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LevelStreamingAlwaysLoaded.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingAlwaysLoaded.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingAlwaysLoaded>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::ClassParams = {
		&ULevelStreamingAlwaysLoaded::StaticClass,
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
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelStreamingAlwaysLoaded, 3197241607);
	template<> ENGINE_API UClass* StaticClass<ULevelStreamingAlwaysLoaded>()
	{
		return ULevelStreamingAlwaysLoaded::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingAlwaysLoaded(Z_Construct_UClass_ULevelStreamingAlwaysLoaded, &ULevelStreamingAlwaysLoaded::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelStreamingAlwaysLoaded"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingAlwaysLoaded);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

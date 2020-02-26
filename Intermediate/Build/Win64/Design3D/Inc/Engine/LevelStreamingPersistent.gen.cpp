// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelStreamingPersistent.h"
#include "Engine/Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingPersistent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelStreamingPersistent::StaticRegisterNativesULevelStreamingPersistent()
	{
	}
	UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister()
	{
		return ULevelStreamingPersistent::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingPersistent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingPersistent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingPersistent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LevelStreamingPersistent.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingPersistent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingPersistent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingPersistent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingPersistent_Statics::ClassParams = {
		&ULevelStreamingPersistent::StaticClass,
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
		0x008010A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingPersistent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingPersistent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelStreamingPersistent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelStreamingPersistent, 2023078720);
	template<> ENGINE_API UClass* StaticClass<ULevelStreamingPersistent>()
	{
		return ULevelStreamingPersistent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingPersistent(Z_Construct_UClass_ULevelStreamingPersistent, &ULevelStreamingPersistent::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelStreamingPersistent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingPersistent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

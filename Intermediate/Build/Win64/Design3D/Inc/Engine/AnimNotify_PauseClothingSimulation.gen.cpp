// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PauseClothingSimulation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotify_PauseClothingSimulation::StaticRegisterNativesUAnimNotify_PauseClothingSimulation()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_NoRegister()
	{
		return UAnimNotify_PauseClothingSimulation::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Pause Clothing Simulation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PauseClothingSimulation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::ClassParams = {
		&UAnimNotify_PauseClothingSimulation::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_PauseClothingSimulation, 2501110166);
	template<> ENGINE_API UClass* StaticClass<UAnimNotify_PauseClothingSimulation>()
	{
		return UAnimNotify_PauseClothingSimulation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PauseClothingSimulation(Z_Construct_UClass_UAnimNotify_PauseClothingSimulation, &UAnimNotify_PauseClothingSimulation::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify_PauseClothingSimulation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PauseClothingSimulation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

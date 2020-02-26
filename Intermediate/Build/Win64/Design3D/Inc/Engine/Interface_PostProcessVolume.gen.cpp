// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_PostProcessVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterface_PostProcessVolume::StaticRegisterNativesUInterface_PostProcessVolume()
	{
	}
	UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister()
	{
		return UInterface_PostProcessVolume::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_PostProcessVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_PostProcessVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_PostProcessVolume_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_PostProcessVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_PostProcessVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_PostProcessVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterface_PostProcessVolume_Statics::ClassParams = {
		&UInterface_PostProcessVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterface_PostProcessVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterface_PostProcessVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_PostProcessVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterface_PostProcessVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterface_PostProcessVolume, 1459357169);
	template<> ENGINE_API UClass* StaticClass<UInterface_PostProcessVolume>()
	{
		return UInterface_PostProcessVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterface_PostProcessVolume(Z_Construct_UClass_UInterface_PostProcessVolume, &UInterface_PostProcessVolume::StaticClass, TEXT("/Script/Engine"), TEXT("UInterface_PostProcessVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_PostProcessVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

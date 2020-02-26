// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackSlomo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackSlomo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSlomo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSlomo();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackSlomo::StaticRegisterNativesUInterpTrackSlomo()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackSlomo_NoRegister()
	{
		return UInterpTrackSlomo::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackSlomo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackSlomo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSlomo_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Slomo Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackSlomo.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSlomo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackSlomo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackSlomo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackSlomo_Statics::ClassParams = {
		&UInterpTrackSlomo::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSlomo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSlomo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackSlomo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackSlomo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackSlomo, 560210504);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackSlomo>()
	{
		return UInterpTrackSlomo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackSlomo(Z_Construct_UClass_UInterpTrackSlomo, &UInterpTrackSlomo::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackSlomo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackSlomo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

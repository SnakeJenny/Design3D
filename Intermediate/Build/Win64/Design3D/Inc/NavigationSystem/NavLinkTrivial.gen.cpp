// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavLinkTrivial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkTrivial() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkTrivial_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkTrivial();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavLinkTrivial::StaticRegisterNativesUNavLinkTrivial()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkTrivial_NoRegister()
	{
		return UNavLinkTrivial::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkTrivial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkTrivial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavLinkDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkTrivial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavLinkTrivial.h" },
		{ "ModuleRelativePath", "Public/NavLinkTrivial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkTrivial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkTrivial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkTrivial_Statics::ClassParams = {
		&UNavLinkTrivial::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkTrivial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavLinkTrivial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkTrivial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavLinkTrivial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLinkTrivial, 3513632132);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkTrivial>()
	{
		return UNavLinkTrivial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkTrivial(Z_Construct_UClass_UNavLinkTrivial, &UNavLinkTrivial::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavLinkTrivial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkTrivial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

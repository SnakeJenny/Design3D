// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/TexAligner/TexAlignerFit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAlignerFit() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerFit_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerFit();
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexAlignerFit::StaticRegisterNativesUTexAlignerFit()
	{
	}
	UClass* Z_Construct_UClass_UTexAlignerFit_NoRegister()
	{
		return UTexAlignerFit::StaticClass();
	}
	struct Z_Construct_UClass_UTexAlignerFit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAlignerFit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexAligner,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAlignerFit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TexAligner/TexAlignerFit.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAlignerFit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAlignerFit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAlignerFit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexAlignerFit_Statics::ClassParams = {
		&UTexAlignerFit::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexAlignerFit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTexAlignerFit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAlignerFit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexAlignerFit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexAlignerFit, 1456698123);
	template<> UNREALED_API UClass* StaticClass<UTexAlignerFit>()
	{
		return UTexAlignerFit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexAlignerFit(Z_Construct_UClass_UTexAlignerFit, &UTexAlignerFit::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTexAlignerFit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAlignerFit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

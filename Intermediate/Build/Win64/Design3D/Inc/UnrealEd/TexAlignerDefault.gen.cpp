// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/TexAligner/TexAlignerDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAlignerDefault() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerDefault_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerDefault();
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexAlignerDefault::StaticRegisterNativesUTexAlignerDefault()
	{
	}
	UClass* Z_Construct_UClass_UTexAlignerDefault_NoRegister()
	{
		return UTexAlignerDefault::StaticClass();
	}
	struct Z_Construct_UClass_UTexAlignerDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAlignerDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexAligner,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAlignerDefault_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TexAligner/TexAlignerDefault.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAlignerDefault.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAlignerDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAlignerDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexAlignerDefault_Statics::ClassParams = {
		&UTexAlignerDefault::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTexAlignerDefault_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTexAlignerDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAlignerDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexAlignerDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexAlignerDefault, 3024681263);
	template<> UNREALED_API UClass* StaticClass<UTexAlignerDefault>()
	{
		return UTexAlignerDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexAlignerDefault(Z_Construct_UClass_UTexAlignerDefault, &UTexAlignerDefault::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTexAlignerDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAlignerDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

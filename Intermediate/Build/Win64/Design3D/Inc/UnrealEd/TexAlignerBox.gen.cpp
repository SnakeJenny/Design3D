// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/TexAligner/TexAlignerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAlignerBox() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerBox_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerBox();
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexAlignerBox::StaticRegisterNativesUTexAlignerBox()
	{
	}
	UClass* Z_Construct_UClass_UTexAlignerBox_NoRegister()
	{
		return UTexAlignerBox::StaticClass();
	}
	struct Z_Construct_UClass_UTexAlignerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAlignerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexAligner,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAlignerBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TexAligner/TexAlignerBox.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAlignerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAlignerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAlignerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexAlignerBox_Statics::ClassParams = {
		&UTexAlignerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTexAlignerBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTexAlignerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAlignerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexAlignerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexAlignerBox, 2045129011);
	template<> UNREALED_API UClass* StaticClass<UTexAlignerBox>()
	{
		return UTexAlignerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexAlignerBox(Z_Construct_UClass_UTexAlignerBox, &UTexAlignerBox::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTexAlignerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAlignerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

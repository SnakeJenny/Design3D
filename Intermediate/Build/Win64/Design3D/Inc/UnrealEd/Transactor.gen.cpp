// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/Transactor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactor() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTransactor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTransactor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTransactor::StaticRegisterNativesUTransactor()
	{
	}
	UClass* Z_Construct_UClass_UTransactor_NoRegister()
	{
		return UTransactor::StaticClass();
	}
	struct Z_Construct_UClass_UTransactor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransactor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/Transactor.h" },
		{ "ModuleRelativePath", "Classes/Editor/Transactor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransactor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransactor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTransactor_Statics::ClassParams = {
		&UTransactor::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTransactor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTransactor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransactor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTransactor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTransactor, 3836507943);
	template<> UNREALED_API UClass* StaticClass<UTransactor>()
	{
		return UTransactor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTransactor(Z_Construct_UClass_UTransactor, &UTransactor::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTransactor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransactor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

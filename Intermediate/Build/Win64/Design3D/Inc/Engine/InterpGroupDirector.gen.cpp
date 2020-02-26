// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpGroupDirector::StaticRegisterNativesUInterpGroupDirector()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister()
	{
		return UInterpGroupDirector::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupDirector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Matinee/InterpGroupDirector.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupDirector_Statics::ClassParams = {
		&UInterpGroupDirector::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupDirector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpGroupDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpGroupDirector, 2336120240);
	template<> ENGINE_API UClass* StaticClass<UInterpGroupDirector>()
	{
		return UInterpGroupDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupDirector(Z_Construct_UClass_UInterpGroupDirector, &UInterpGroupDirector::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

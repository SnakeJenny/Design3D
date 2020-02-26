// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/Visual.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisual() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UVisual_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVisual();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UVisual::StaticRegisterNativesUVisual()
	{
	}
	UClass* Z_Construct_UClass_UVisual_NoRegister()
	{
		return UVisual::StaticClass();
	}
	struct Z_Construct_UClass_UVisual_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisual_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisual_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/Visual.h" },
		{ "ModuleRelativePath", "Public/Components/Visual.h" },
		{ "ToolTip", "The base class for elements in UMG: slots and widgets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisual_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisual>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisual_Statics::ClassParams = {
		&UVisual::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVisual_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVisual_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisual()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisual_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisual, 1566544588);
	template<> UMG_API UClass* StaticClass<UVisual>()
	{
		return UVisual::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisual(Z_Construct_UClass_UVisual, &UVisual::StaticClass, TEXT("/Script/UMG"), TEXT("UVisual"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisual);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

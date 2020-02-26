// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeEditor/Private/Classes/LandscapePlaceholder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapePlaceholder() {}
// Cross Module References
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ALandscapePlaceholder_NoRegister();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ALandscapePlaceholder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
// End Cross Module References
	void ALandscapePlaceholder::StaticRegisterNativesALandscapePlaceholder()
	{
	}
	UClass* Z_Construct_UClass_ALandscapePlaceholder_NoRegister()
	{
		return ALandscapePlaceholder::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapePlaceholder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapePlaceholder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapePlaceholder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/LandscapePlaceholder.h" },
		{ "ModuleRelativePath", "Private/Classes/LandscapePlaceholder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapePlaceholder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapePlaceholder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapePlaceholder_Statics::ClassParams = {
		&ALandscapePlaceholder::StaticClass,
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
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapePlaceholder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscapePlaceholder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapePlaceholder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapePlaceholder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapePlaceholder, 1260371432);
	template<> LANDSCAPEEDITOR_API UClass* StaticClass<ALandscapePlaceholder>()
	{
		return ALandscapePlaceholder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapePlaceholder(Z_Construct_UClass_ALandscapePlaceholder, &ALandscapePlaceholder::StaticClass, TEXT("/Script/LandscapeEditor"), TEXT("ALandscapePlaceholder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapePlaceholder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

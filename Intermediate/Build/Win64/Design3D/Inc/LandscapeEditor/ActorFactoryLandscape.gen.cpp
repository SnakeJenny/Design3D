// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeEditor/Private/Classes/ActorFactoryLandscape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryLandscape() {}
// Cross Module References
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_UActorFactoryLandscape_NoRegister();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_UActorFactoryLandscape();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
// End Cross Module References
	void UActorFactoryLandscape::StaticRegisterNativesUActorFactoryLandscape()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryLandscape_NoRegister()
	{
		return UActorFactoryLandscape::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryLandscape_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Classes/ActorFactoryLandscape.h" },
		{ "ModuleRelativePath", "Private/Classes/ActorFactoryLandscape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryLandscape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryLandscape_Statics::ClassParams = {
		&UActorFactoryLandscape::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryLandscape_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryLandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryLandscape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryLandscape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryLandscape, 3566360530);
	template<> LANDSCAPEEDITOR_API UClass* StaticClass<UActorFactoryLandscape>()
	{
		return UActorFactoryLandscape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryLandscape(Z_Construct_UClass_UActorFactoryLandscape, &UActorFactoryLandscape::StaticClass, TEXT("/Script/LandscapeEditor"), TEXT("UActorFactoryLandscape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryLandscape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

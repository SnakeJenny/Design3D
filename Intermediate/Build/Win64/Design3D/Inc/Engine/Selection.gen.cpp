// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Selection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USelection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USelection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USelection::StaticRegisterNativesUSelection()
	{
	}
	UClass* Z_Construct_UClass_USelection_NoRegister()
	{
		return USelection::StaticClass();
	}
	struct Z_Construct_UClass_USelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Selection.h" },
		{ "ModuleRelativePath", "Classes/Engine/Selection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelection_Statics::ClassParams = {
		&USelection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USelection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelection, 3059484407);
	template<> ENGINE_API UClass* StaticClass<USelection>()
	{
		return USelection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelection(Z_Construct_UClass_USelection, &USelection::StaticClass, TEXT("/Script/Engine"), TEXT("USelection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USelection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

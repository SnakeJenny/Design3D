// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LightMapTexture2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightMapTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightMapTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULightMapTexture2D::StaticRegisterNativesULightMapTexture2D()
	{
	}
	UClass* Z_Construct_UClass_ULightMapTexture2D_NoRegister()
	{
		return ULightMapTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_ULightMapTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMapTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapTexture2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/LightMapTexture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/LightMapTexture2D.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMapTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapTexture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightMapTexture2D_Statics::ClassParams = {
		&ULightMapTexture2D::StaticClass,
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
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightMapTexture2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightMapTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMapTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightMapTexture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightMapTexture2D, 613484733);
	template<> ENGINE_API UClass* StaticClass<ULightMapTexture2D>()
	{
		return ULightMapTexture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightMapTexture2D(Z_Construct_UClass_ULightMapTexture2D, &ULightMapTexture2D::StaticClass, TEXT("/Script/Engine"), TEXT("ULightMapTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapTexture2D);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightMapTexture2D)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

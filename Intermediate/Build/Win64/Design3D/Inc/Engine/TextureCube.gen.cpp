// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureCube.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureCube::StaticRegisterNativesUTextureCube()
	{
	}
	UClass* Z_Construct_UClass_UTextureCube_NoRegister()
	{
		return UTextureCube::StaticClass();
	}
	struct Z_Construct_UClass_UTextureCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCube_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/TextureCube.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCube.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureCube_Statics::ClassParams = {
		&UTextureCube::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureCube, 924004127);
	template<> ENGINE_API UClass* StaticClass<UTextureCube>()
	{
		return UTextureCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureCube(Z_Construct_UClass_UTextureCube, &UTextureCube::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCube);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureCube)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

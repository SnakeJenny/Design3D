// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/VolumeTextureFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeTextureFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UVolumeTextureFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UVolumeTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UVolumeTextureFactory::StaticRegisterNativesUVolumeTextureFactory()
	{
	}
	UClass* Z_Construct_UClass_UVolumeTextureFactory_NoRegister()
	{
		return UVolumeTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/VolumeTextureFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/VolumeTextureFactory.h" },
		{ "ToolTip", "Factory for creating volume texture" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/VolumeTextureFactory.h" },
		{ "ToolTip", "An initial texture to assign to the newly created volume texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture = { "InitialTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTextureFactory, InitialTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeTextureFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeTextureFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVolumeTextureFactory_Statics::ClassParams = {
		&UVolumeTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVolumeTextureFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVolumeTextureFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumeTextureFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVolumeTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeTextureFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVolumeTextureFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVolumeTextureFactory, 2808919711);
	template<> UNREALED_API UClass* StaticClass<UVolumeTextureFactory>()
	{
		return UVolumeTextureFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVolumeTextureFactory(Z_Construct_UClass_UVolumeTextureFactory, &UVolumeTextureFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UVolumeTextureFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeTextureFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/MaterialFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	void UMaterialFactoryNew::StaticRegisterNativesUMaterialFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFactoryNew_NoRegister()
	{
		return UMaterialFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFactoryNew_Statics
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
	UObject* (*const Z_Construct_UClass_UMaterialFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFactoryNew_Statics::NewProp_InitialTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/MaterialFactoryNew.h" },
		{ "ToolTip", "An initial texture to place in the newly created material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFactoryNew_Statics::NewProp_InitialTexture = { "InitialTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFactoryNew, InitialTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFactoryNew_Statics::NewProp_InitialTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFactoryNew_Statics::NewProp_InitialTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFactoryNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFactoryNew_Statics::NewProp_InitialTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFactoryNew_Statics::ClassParams = {
		&UMaterialFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFactoryNew_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialFactoryNew_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFactoryNew, 2884841766);
	template<> UNREALED_API UClass* StaticClass<UMaterialFactoryNew>()
	{
		return UMaterialFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFactoryNew(Z_Construct_UClass_UMaterialFactoryNew, &UMaterialFactoryNew::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

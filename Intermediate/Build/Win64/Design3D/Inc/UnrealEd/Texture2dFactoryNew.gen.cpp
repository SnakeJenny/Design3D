// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/Texture2dFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2dFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexture2DFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTexture2DFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexture2DFactoryNew::StaticRegisterNativesUTexture2DFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UTexture2DFactoryNew_NoRegister()
	{
		return UTexture2DFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/Texture2dFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/Texture2dFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/Texture2dFactoryNew.h" },
		{ "ToolTip", "height of new texture" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2DFactoryNew, Height), METADATA_PARAMS(Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/Texture2dFactoryNew.h" },
		{ "ToolTip", "width of new texture" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2DFactoryNew, Width), METADATA_PARAMS(Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2DFactoryNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DFactoryNew_Statics::ClassParams = {
		&UTexture2DFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexture2DFactoryNew_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTexture2DFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTexture2DFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexture2DFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexture2DFactoryNew, 3971772311);
	template<> UNREALED_API UClass* StaticClass<UTexture2DFactoryNew>()
	{
		return UTexture2DFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2DFactoryNew(Z_Construct_UClass_UTexture2DFactoryNew, &UTexture2DFactoryNew::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTexture2DFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

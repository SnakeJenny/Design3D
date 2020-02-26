// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/CanvasRenderTarget2DFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasRenderTarget2DFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCanvasRenderTarget2DFactoryNew::StaticRegisterNativesUCanvasRenderTarget2DFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_NoRegister()
	{
		return UCanvasRenderTarget2DFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format;
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
	UObject* (*const Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Factories/CanvasRenderTarget2DFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/CanvasRenderTarget2DFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CanvasRenderTarget2DFactoryNew.h" },
		{ "ToolTip", "Pixel format of the texture render target" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvasRenderTarget2DFactoryNew, Format), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CanvasRenderTarget2DFactoryNew.h" },
		{ "ToolTip", "Height of the texture render target" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvasRenderTarget2DFactoryNew, Height), METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CanvasRenderTarget2DFactoryNew.h" },
		{ "ToolTip", "Width of the texture render target" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvasRenderTarget2DFactoryNew, Width), METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasRenderTarget2DFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::ClassParams = {
		&UCanvasRenderTarget2DFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCanvasRenderTarget2DFactoryNew, 2256043582);
	template<> UNREALED_API UClass* StaticClass<UCanvasRenderTarget2DFactoryNew>()
	{
		return UCanvasRenderTarget2DFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvasRenderTarget2DFactoryNew(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew, &UCanvasRenderTarget2DFactoryNew::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCanvasRenderTarget2DFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasRenderTarget2DFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

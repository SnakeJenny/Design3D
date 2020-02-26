// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Texture2DDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DDynamic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
// End Cross Module References
	void UTexture2DDynamic::StaticRegisterNativesUTexture2DDynamic()
	{
	}
	UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister()
	{
		return UTexture2DDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DDynamic_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Texture2DDynamic.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DDynamic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DDynamic_Statics::NewProp_Format_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2DDynamic.h" },
		{ "ToolTip", "The format of the texture." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DDynamic_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2DDynamic, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTexture2DDynamic_Statics::NewProp_Format_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2DDynamic_Statics::NewProp_Format_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2DDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DDynamic_Statics::NewProp_Format,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DDynamic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DDynamic_Statics::ClassParams = {
		&UTexture2DDynamic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexture2DDynamic_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTexture2DDynamic_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DDynamic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTexture2DDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DDynamic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexture2DDynamic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexture2DDynamic, 1492524815);
	template<> ENGINE_API UClass* StaticClass<UTexture2DDynamic>()
	{
		return UTexture2DDynamic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2DDynamic(Z_Construct_UClass_UTexture2DDynamic, &UTexture2DDynamic::StaticClass, TEXT("/Script/Engine"), TEXT("UTexture2DDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

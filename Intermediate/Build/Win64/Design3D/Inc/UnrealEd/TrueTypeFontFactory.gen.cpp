// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/TrueTypeFontFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrueTypeFontFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTrueTypeFontFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTrueTypeFontFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions_NoRegister();
// End Cross Module References
	void UTrueTypeFontFactory::StaticRegisterNativesUTrueTypeFontFactory()
	{
	}
	UClass* Z_Construct_UClass_UTrueTypeFontFactory_NoRegister()
	{
		return UTrueTypeFontFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTrueTypeFontFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFontSelected_MetaData[];
#endif
		static void NewProp_bFontSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFontSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPropertiesConfigured_MetaData[];
#endif
		static void NewProp_bPropertiesConfigured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPropertiesConfigured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrueTypeFontFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrueTypeFontFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/TrueTypeFontFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/TrueTypeFontFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TrueTypeFontFactory.h" },
		{ "ToolTip", "True if a font was selected during the non-legacy creation process" },
	};
#endif
	void Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_SetBit(void* Obj)
	{
		((UTrueTypeFontFactory*)Obj)->bFontSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected = { "bFontSelected", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTrueTypeFontFactory), &Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TrueTypeFontFactory.h" },
		{ "ToolTip", "True when the font dialog was shown for this factory during the non-legacy creation process" },
	};
#endif
	void Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_SetBit(void* Obj)
	{
		((UTrueTypeFontFactory*)Obj)->bPropertiesConfigured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured = { "bPropertiesConfigured", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTrueTypeFontFactory), &Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Category", "TrueTypeFontFactory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Factories/TrueTypeFontFactory.h" },
		{ "ToolTip", "Import options for the font" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrueTypeFontFactory, ImportOptions), Z_Construct_UClass_UFontImportOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrueTypeFontFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrueTypeFontFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrueTypeFontFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrueTypeFontFactory_Statics::ClassParams = {
		&UTrueTypeFontFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTrueTypeFontFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTrueTypeFontFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrueTypeFontFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrueTypeFontFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrueTypeFontFactory, 3139757809);
	template<> UNREALED_API UClass* StaticClass<UTrueTypeFontFactory>()
	{
		return UTrueTypeFontFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrueTypeFontFactory(Z_Construct_UClass_UTrueTypeFontFactory, &UTrueTypeFontFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTrueTypeFontFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrueTypeFontFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

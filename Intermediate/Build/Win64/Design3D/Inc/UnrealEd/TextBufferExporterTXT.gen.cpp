// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Exporters/TextBufferExporterTXT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBufferExporterTXT() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextBufferExporterTXT_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextBufferExporterTXT();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextBufferExporterTXT::StaticRegisterNativesUTextBufferExporterTXT()
	{
	}
	UClass* Z_Construct_UClass_UTextBufferExporterTXT_NoRegister()
	{
		return UTextBufferExporterTXT::StaticClass();
	}
	struct Z_Construct_UClass_UTextBufferExporterTXT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextBufferExporterTXT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBufferExporterTXT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextBufferExporterTXT.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextBufferExporterTXT.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextBufferExporterTXT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBufferExporterTXT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextBufferExporterTXT_Statics::ClassParams = {
		&UTextBufferExporterTXT::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTextBufferExporterTXT_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextBufferExporterTXT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextBufferExporterTXT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextBufferExporterTXT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextBufferExporterTXT, 1811206174);
	template<> UNREALED_API UClass* StaticClass<UTextBufferExporterTXT>()
	{
		return UTextBufferExporterTXT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextBufferExporterTXT(Z_Construct_UClass_UTextBufferExporterTXT, &UTextBufferExporterTXT::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTextBufferExporterTXT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBufferExporterTXT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

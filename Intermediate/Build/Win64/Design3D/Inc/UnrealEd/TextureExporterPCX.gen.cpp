// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Exporters/TextureExporterPCX.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureExporterPCX() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterPCX_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterPCX();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureExporterPCX::StaticRegisterNativesUTextureExporterPCX()
	{
	}
	UClass* Z_Construct_UClass_UTextureExporterPCX_NoRegister()
	{
		return UTextureExporterPCX::StaticClass();
	}
	struct Z_Construct_UClass_UTextureExporterPCX_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureExporterPCX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureExporterPCX_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterPCX.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterPCX.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureExporterPCX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureExporterPCX>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureExporterPCX_Statics::ClassParams = {
		&UTextureExporterPCX::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureExporterPCX_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureExporterPCX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureExporterPCX()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureExporterPCX_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureExporterPCX, 323442306);
	template<> UNREALED_API UClass* StaticClass<UTextureExporterPCX>()
	{
		return UTextureExporterPCX::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureExporterPCX(Z_Construct_UClass_UTextureExporterPCX, &UTextureExporterPCX::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTextureExporterPCX"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureExporterPCX);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

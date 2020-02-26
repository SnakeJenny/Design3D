// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/TemplateMapMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateMapMetadata() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEPRECATED_TemplateMapMetadata::StaticRegisterNativesUDEPRECATED_TemplateMapMetadata()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_NoRegister()
	{
		return UDEPRECATED_TemplateMapMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/TemplateMapMetadata.h" },
		{ "ModuleRelativePath", "Classes/Editor/TemplateMapMetadata.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_TemplateMapMetadata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_Statics::ClassParams = {
		&UDEPRECATED_TemplateMapMetadata::StaticClass,
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
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_TemplateMapMetadata, 4172949478);
	template<> UNREALED_API UClass* StaticClass<UDEPRECATED_TemplateMapMetadata>()
	{
		return UDEPRECATED_TemplateMapMetadata::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_TemplateMapMetadata(Z_Construct_UClass_UDEPRECATED_TemplateMapMetadata, &UDEPRECATED_TemplateMapMetadata::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDEPRECATED_TemplateMapMetadata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_TemplateMapMetadata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

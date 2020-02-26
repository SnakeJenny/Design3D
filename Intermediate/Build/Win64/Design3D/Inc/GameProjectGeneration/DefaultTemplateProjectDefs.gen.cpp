// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameProjectGeneration/Classes/DefaultTemplateProjectDefs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultTemplateProjectDefs() {}
// Cross Module References
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs_NoRegister();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateProjectDefs();
	UPackage* Z_Construct_UPackage__Script_GameProjectGeneration();
// End Cross Module References
	void UDefaultTemplateProjectDefs::StaticRegisterNativesUDefaultTemplateProjectDefs()
	{
	}
	UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs_NoRegister()
	{
		return UDefaultTemplateProjectDefs::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTemplateProjectDefs,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultTemplateProjectDefs.h" },
		{ "ModuleRelativePath", "Classes/DefaultTemplateProjectDefs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultTemplateProjectDefs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::ClassParams = {
		&UDefaultTemplateProjectDefs::StaticClass,
		"TemplateDefs",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultTemplateProjectDefs, 114029440);
	template<> GAMEPROJECTGENERATION_API UClass* StaticClass<UDefaultTemplateProjectDefs>()
	{
		return UDefaultTemplateProjectDefs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultTemplateProjectDefs(Z_Construct_UClass_UDefaultTemplateProjectDefs, &UDefaultTemplateProjectDefs::StaticClass, TEXT("/Script/GameProjectGeneration"), TEXT("UDefaultTemplateProjectDefs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultTemplateProjectDefs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

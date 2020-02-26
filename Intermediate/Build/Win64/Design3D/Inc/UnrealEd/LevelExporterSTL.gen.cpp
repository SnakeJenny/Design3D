// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Exporters/LevelExporterSTL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelExporterSTL() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_ULevelExporterSTL_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelExporterSTL();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULevelExporterSTL::StaticRegisterNativesULevelExporterSTL()
	{
	}
	UClass* Z_Construct_UClass_ULevelExporterSTL_NoRegister()
	{
		return ULevelExporterSTL::StaticClass();
	}
	struct Z_Construct_UClass_ULevelExporterSTL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelExporterSTL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterSTL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/LevelExporterSTL.h" },
		{ "ModuleRelativePath", "Classes/Exporters/LevelExporterSTL.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelExporterSTL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelExporterSTL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelExporterSTL_Statics::ClassParams = {
		&ULevelExporterSTL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelExporterSTL_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelExporterSTL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelExporterSTL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelExporterSTL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelExporterSTL, 27136861);
	template<> UNREALED_API UClass* StaticClass<ULevelExporterSTL>()
	{
		return ULevelExporterSTL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelExporterSTL(Z_Construct_UClass_ULevelExporterSTL, &ULevelExporterSTL::StaticClass, TEXT("/Script/UnrealEd"), TEXT("ULevelExporterSTL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelExporterSTL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

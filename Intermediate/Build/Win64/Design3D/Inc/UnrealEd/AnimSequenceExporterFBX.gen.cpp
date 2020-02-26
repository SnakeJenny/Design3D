// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Exporters/AnimSequenceExporterFBX.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceExporterFBX() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceExporterFBX_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceExporterFBX();
	UNREALED_API UClass* Z_Construct_UClass_UExporterFBX();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimSequenceExporterFBX::StaticRegisterNativesUAnimSequenceExporterFBX()
	{
	}
	UClass* Z_Construct_UClass_UAnimSequenceExporterFBX_NoRegister()
	{
		return UAnimSequenceExporterFBX::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceExporterFBX_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporterFBX,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/AnimSequenceExporterFBX.h" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSequenceExporterFBX.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceExporterFBX>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::ClassParams = {
		&UAnimSequenceExporterFBX::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceExporterFBX()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSequenceExporterFBX, 705897541);
	template<> UNREALED_API UClass* StaticClass<UAnimSequenceExporterFBX>()
	{
		return UAnimSequenceExporterFBX::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSequenceExporterFBX(Z_Construct_UClass_UAnimSequenceExporterFBX, &UAnimSequenceExporterFBX::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UAnimSequenceExporterFBX"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceExporterFBX);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

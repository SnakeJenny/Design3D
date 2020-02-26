// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCurveCompressionCodec::StaticRegisterNativesUAnimCurveCompressionCodec()
	{
	}
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister()
	{
		return UAnimCurveCompressionCodec::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionCodec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionCodec.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec.h" },
		{ "SerializeToFArchive", "WITH_EDITORONLY_DATA" },
		{ "ToolTip", "* Base class for all curve compression codecs." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::ClassParams = {
		&UAnimCurveCompressionCodec::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCurveCompressionCodec, 3502428164);
	template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionCodec>()
	{
		return UAnimCurveCompressionCodec::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCurveCompressionCodec(Z_Construct_UClass_UAnimCurveCompressionCodec, &UAnimCurveCompressionCodec::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCurveCompressionCodec"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimCurveCompressionCodec)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

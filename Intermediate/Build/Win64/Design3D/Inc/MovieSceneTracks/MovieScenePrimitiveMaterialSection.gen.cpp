// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieScenePrimitiveMaterialSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
// End Cross Module References
	void UMovieScenePrimitiveMaterialSection::StaticRegisterNativesUMovieScenePrimitiveMaterialSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister()
	{
		return UMovieScenePrimitiveMaterialSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScenePrimitiveMaterialSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScenePrimitiveMaterialSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScenePrimitiveMaterialSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel = { "MaterialChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScenePrimitiveMaterialSection, MaterialChannel), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePrimitiveMaterialSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::ClassParams = {
		&UMovieScenePrimitiveMaterialSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePrimitiveMaterialSection, 1658849828);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePrimitiveMaterialSection>()
	{
		return UMovieScenePrimitiveMaterialSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePrimitiveMaterialSection(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection, &UMovieScenePrimitiveMaterialSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePrimitiveMaterialSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePrimitiveMaterialSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

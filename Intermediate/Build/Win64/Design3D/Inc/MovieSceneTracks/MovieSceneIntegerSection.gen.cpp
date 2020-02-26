// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneIntegerSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
// End Cross Module References
	void UMovieSceneIntegerSection::StaticRegisterNativesUMovieSceneIntegerSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister()
	{
		return UMovieSceneIntegerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneIntegerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntegerCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneIntegerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneIntegerSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneIntegerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneIntegerSection.h" },
		{ "ToolTip", "A single integer section." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneIntegerSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve = { "IntegerCurve", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneIntegerSection, IntegerCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneIntegerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneIntegerSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneIntegerSection_Statics::ClassParams = {
		&UMovieSceneIntegerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneIntegerSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneIntegerSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneIntegerSection, 858371067);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneIntegerSection>()
	{
		return UMovieSceneIntegerSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneIntegerSection(Z_Construct_UClass_UMovieSceneIntegerSection, &UMovieSceneIntegerSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneIntegerSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneIntegerSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

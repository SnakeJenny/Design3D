// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneEnumSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEnumSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
// End Cross Module References
	void UMovieSceneEnumSection::StaticRegisterNativesUMovieSceneEnumSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister()
	{
		return UMovieSceneEnumSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEnumSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnumCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEnumSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEnumSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneEnumSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEnumSection.h" },
		{ "ToolTip", "A single enum section." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEnumSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve = { "EnumCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEnumSection, EnumCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEnumSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEnumSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEnumSection_Statics::ClassParams = {
		&UMovieSceneEnumSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEnumSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEnumSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEnumSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEnumSection, 3604027653);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEnumSection>()
	{
		return UMovieSceneEnumSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEnumSection(Z_Construct_UClass_UMovieSceneEnumSection, &UMovieSceneEnumSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEnumSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEnumSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

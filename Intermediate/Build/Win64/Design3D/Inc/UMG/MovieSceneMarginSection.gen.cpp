// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/MovieSceneMarginSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginSection() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginSection_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_UMG();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
	void UMovieSceneMarginSection::StaticRegisterNativesUMovieSceneMarginSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMarginSection_NoRegister()
	{
		return UMovieSceneMarginSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMarginSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMarginSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieSceneMarginSection.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "A section in a Margin track" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Alpha curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve = { "BottomCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMarginSection, BottomCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Blue curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve = { "RightCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMarginSection, RightCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Green curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve = { "LeftCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMarginSection, LeftCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Red curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve = { "TopCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMarginSection, TopCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMarginSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMarginSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::ClassParams = {
		&UMovieSceneMarginSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMarginSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMarginSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMarginSection, 4170576447);
	template<> UMG_API UClass* StaticClass<UMovieSceneMarginSection>()
	{
		return UMovieSceneMarginSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMarginSection(Z_Construct_UClass_UMovieSceneMarginSection, &UMovieSceneMarginSection::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieSceneMarginSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

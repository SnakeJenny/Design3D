// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneBoolSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoolSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
// End Cross Module References
	void UMovieSceneBoolSection::StaticRegisterNativesUMovieSceneBoolSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBoolSection_NoRegister()
	{
		return UMovieSceneBoolSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBoolSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExternallyInverted_MetaData[];
#endif
		static void NewProp_bIsExternallyInverted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExternallyInverted;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBoolSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBoolSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneBoolSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
		{ "SerializeToFArchive", "WITH_EDITORONLY_DATA" },
		{ "ToolTip", "A single bool section." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
		{ "ToolTip", "True if this section represents a property that is the inversion of the values stored on this channel" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted_SetBit(void* Obj)
	{
		((UMovieSceneBoolSection*)Obj)->bIsExternallyInverted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted = { "bIsExternallyInverted", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneBoolSection), &Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_BoolCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_BoolCurve = { "BoolCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneBoolSection, BoolCurve), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_BoolCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_BoolCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
		{ "ToolTip", "The default value to use when no keys are present - use GetCurve().SetDefaultValue()" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((UMovieSceneBoolSection*)Obj)->DefaultValue_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneBoolSection), &Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneBoolSection_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_BoolCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBoolSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoolSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoolSection_Statics::ClassParams = {
		&UMovieSceneBoolSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneBoolSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBoolSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBoolSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneBoolSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneBoolSection, 550575572);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBoolSection>()
	{
		return UMovieSceneBoolSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBoolSection(Z_Construct_UClass_UMovieSceneBoolSection, &UMovieSceneBoolSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneBoolSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoolSection);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneBoolSection)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

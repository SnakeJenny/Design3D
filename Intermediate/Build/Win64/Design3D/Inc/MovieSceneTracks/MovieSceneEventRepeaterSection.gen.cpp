// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneEventRepeaterSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventRepeaterSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
// End Cross Module References
	void UMovieSceneEventRepeaterSection::StaticRegisterNativesUMovieSceneEventRepeaterSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister()
	{
		return UMovieSceneEventRepeaterSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneEventRepeaterSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventRepeaterSection.h" },
		{ "ToolTip", "Event section that will trigger its event exactly once, every time it is evaluated." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventRepeaterSection.h" },
		{ "ToolTip", "The event that should be triggered each time this section is evaluated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEventRepeaterSection, Event), Z_Construct_UScriptStruct_FMovieSceneEvent, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventRepeaterSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::ClassParams = {
		&UMovieSceneEventRepeaterSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEventRepeaterSection, 2000781615);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventRepeaterSection>()
	{
		return UMovieSceneEventRepeaterSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEventRepeaterSection(Z_Construct_UClass_UMovieSceneEventRepeaterSection, &UMovieSceneEventRepeaterSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEventRepeaterSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventRepeaterSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

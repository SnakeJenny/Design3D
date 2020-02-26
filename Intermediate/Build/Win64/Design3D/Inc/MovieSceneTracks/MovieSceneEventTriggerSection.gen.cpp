// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneEventTriggerSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTriggerSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventChannel();
// End Cross Module References
	void UMovieSceneEventTriggerSection::StaticRegisterNativesUMovieSceneEventTriggerSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister()
	{
		return UMovieSceneEventTriggerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneEventTriggerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventTriggerSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Event section that triggeres specific timed events." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventTriggerSection.h" },
		{ "ToolTip", "The channel that defines this section's timed events" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel = { "EventChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEventTriggerSection, EventChannel), Z_Construct_UScriptStruct_FMovieSceneEventChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventTriggerSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::ClassParams = {
		&UMovieSceneEventTriggerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEventTriggerSection, 1545718289);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventTriggerSection>()
	{
		return UMovieSceneEventTriggerSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEventTriggerSection(Z_Construct_UClass_UMovieSceneEventTriggerSection, &UMovieSceneEventTriggerSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEventTriggerSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventTriggerSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

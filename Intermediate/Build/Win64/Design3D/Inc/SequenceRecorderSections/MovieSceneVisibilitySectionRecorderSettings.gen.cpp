// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorderSections/Public/MovieSceneVisibilitySectionRecorderSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilitySectionRecorderSettings() {}
// Cross Module References
	SEQUENCERECORDERSECTIONS_API UClass* Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_NoRegister();
	SEQUENCERECORDERSECTIONS_API UClass* Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorderSections();
// End Cross Module References
	void UMovieSceneVisibilitySectionRecorderSettings::StaticRegisterNativesUMovieSceneVisibilitySectionRecorderSettings()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_NoRegister()
	{
		return UMovieSceneVisibilitySectionRecorderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordVisibility_MetaData[];
#endif
		static void NewProp_bRecordVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorderSections,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneVisibilitySectionRecorderSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneVisibilitySectionRecorderSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Public/MovieSceneVisibilitySectionRecorderSettings.h" },
		{ "ToolTip", "Whether to record actor visibility." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_SetBit(void* Obj)
	{
		((UMovieSceneVisibilitySectionRecorderSettings*)Obj)->bRecordVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility = { "bRecordVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneVisibilitySectionRecorderSettings), &Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneVisibilitySectionRecorderSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::ClassParams = {
		&UMovieSceneVisibilitySectionRecorderSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneVisibilitySectionRecorderSettings, 2443844887);
	template<> SEQUENCERECORDERSECTIONS_API UClass* StaticClass<UMovieSceneVisibilitySectionRecorderSettings>()
	{
		return UMovieSceneVisibilitySectionRecorderSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneVisibilitySectionRecorderSettings(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings, &UMovieSceneVisibilitySectionRecorderSettings::StaticClass, TEXT("/Script/SequenceRecorderSections"), TEXT("UMovieSceneVisibilitySectionRecorderSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneVisibilitySectionRecorderSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

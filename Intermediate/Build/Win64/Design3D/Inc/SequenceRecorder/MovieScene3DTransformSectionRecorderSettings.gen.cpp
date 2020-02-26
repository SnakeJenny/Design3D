// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorder/Private/Sections/MovieScene3DTransformSectionRecorderSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformSectionRecorderSettings() {}
// Cross Module References
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	void UMovieScene3DTransformSectionRecorderSettings::StaticRegisterNativesUMovieScene3DTransformSectionRecorderSettings()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_NoRegister()
	{
		return UMovieScene3DTransformSectionRecorderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordTransforms_MetaData[];
#endif
		static void NewProp_bRecordTransforms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordTransforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScene3DTransformSectionRecorderSettings.h" },
		{ "ModuleRelativePath", "Private/Sections/MovieScene3DTransformSectionRecorderSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Private/Sections/MovieScene3DTransformSectionRecorderSettings.h" },
		{ "ToolTip", "Whether to record actor transforms. This can be useful if you want the actors to end up in specific locations after the sequence.\nBy default we rely on animations to provide transforms, but this can be changed using the \"Record In World Space\" animation setting." },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_SetBit(void* Obj)
	{
		((UMovieScene3DTransformSectionRecorderSettings*)Obj)->bRecordTransforms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms = { "bRecordTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieScene3DTransformSectionRecorderSettings), &Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformSectionRecorderSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::ClassParams = {
		&UMovieScene3DTransformSectionRecorderSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene3DTransformSectionRecorderSettings, 539025179);
	template<> SEQUENCERECORDER_API UClass* StaticClass<UMovieScene3DTransformSectionRecorderSettings>()
	{
		return UMovieScene3DTransformSectionRecorderSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DTransformSectionRecorderSettings(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings, &UMovieScene3DTransformSectionRecorderSettings::StaticClass, TEXT("/Script/SequenceRecorder"), TEXT("UMovieScene3DTransformSectionRecorderSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformSectionRecorderSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

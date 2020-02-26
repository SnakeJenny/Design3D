// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrack() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackDisplayOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackDisplayOptions"), sizeof(FMovieSceneTrackDisplayOptions), Get_Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackDisplayOptions>()
{
	return FMovieSceneTrackDisplayOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackDisplayOptions(FMovieSceneTrackDisplayOptions::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackDisplayOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackDisplayOptions
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackDisplayOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackDisplayOptions")),new UScriptStruct::TCppStructOps<FMovieSceneTrackDisplayOptions>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackDisplayOptions;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowVerticalFrames_MetaData[];
#endif
		static void NewProp_bShowVerticalFrames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowVerticalFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Generic display options for any track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackDisplayOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Show bounds as vertical frames" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_SetBit(void* Obj)
	{
		((FMovieSceneTrackDisplayOptions*)Obj)->bShowVerticalFrames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames = { "bShowVerticalFrames", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneTrackDisplayOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackDisplayOptions",
		sizeof(FMovieSceneTrackDisplayOptions),
		alignof(FMovieSceneTrackDisplayOptions),
		Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackDisplayOptions"), sizeof(FMovieSceneTrackDisplayOptions), Get_Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Hash() { return 4268642015U; }
class UScriptStruct* FMovieSceneTrackEvalOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackEvalOptions"), sizeof(FMovieSceneTrackEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackEvalOptions>()
{
	return FMovieSceneTrackEvalOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackEvalOptions(FMovieSceneTrackEvalOptions::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackEvalOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackEvalOptions
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackEvalOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackEvalOptions")),new UScriptStruct::TCppStructOps<FMovieSceneTrackEvalOptions>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackEvalOptions;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateNearestSection_MetaData[];
#endif
		static void NewProp_bEvaluateNearestSection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateNearestSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPostroll_MetaData[];
#endif
		static void NewProp_bEvaluateInPostroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPostroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPreroll_MetaData[];
#endif
		static void NewProp_bEvaluateInPreroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPreroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalNearestSection_MetaData[];
#endif
		static void NewProp_bEvalNearestSection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalNearestSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluateNearestSection_MetaData[];
#endif
		static void NewProp_bCanEvaluateNearestSection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluateNearestSection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Generic evaluation options for any track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackEvalOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateNearestSection_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection = { "bEvaluateNearestSection", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Evaluate this track as part of its parent sub-section's post-roll, if applicable" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateInPostroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll = { "bEvaluateInPostroll", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Evaluate this track as part of its parent sub-section's pre-roll, if applicable" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateInPreroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll = { "bEvaluateInPreroll", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Evaluate Nearest Section" },
		{ "EditCondition", "bCanEvaluateNearestSection" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "When evaluating empty space on a track, will evaluate the last position of the previous section (if possible), or the first position of the next section, in that order of preference." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bEvalNearestSection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection = { "bEvalNearestSection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "true when the value of bEvalNearestSection is to be considered for the track" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bCanEvaluateNearestSection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection = { "bCanEvaluateNearestSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackEvalOptions",
		sizeof(FMovieSceneTrackEvalOptions),
		alignof(FMovieSceneTrackEvalOptions),
		Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackEvalOptions"), sizeof(FMovieSceneTrackEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Hash() { return 3672759174U; }
	void UMovieSceneTrack::StaticRegisterNativesUMovieSceneTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister()
	{
		return UMovieSceneTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDefaultSections_MetaData[];
#endif
		static void NewProp_bSupportsDefaultSections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDefaultSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortingOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayOptions;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvalOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvalOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a track in a Movie Scene" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Does this track support the creation of a default section when created?" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_SetBit(void* Obj)
	{
		((UMovieSceneTrack*)Obj)->bSupportsDefaultSections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections = { "bSupportsDefaultSections", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneTrack), &Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "This folder's desired sorting order" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTrack, SortingOrder), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "This track's tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint = { "TrackTint", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTrack, TrackTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "General display options for a given track" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions = { "DisplayOptions", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTrack, DisplayOptions), Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "General evaluation options for a given track" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions = { "EvalOptions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTrack, EvalOptions), Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTrack_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrack_Statics::ClassParams = {
		&UMovieSceneTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::PropPointers),
		0,
		0x002800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTrack, 2977432694);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrack>()
	{
		return UMovieSceneTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTrack(Z_Construct_UClass_UMovieSceneTrack, &UMovieSceneTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

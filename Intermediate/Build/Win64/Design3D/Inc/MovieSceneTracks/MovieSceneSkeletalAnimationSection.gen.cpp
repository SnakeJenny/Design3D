// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneSkeletalAnimationSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneSkeletalAnimationParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimationParams"), sizeof(FMovieSceneSkeletalAnimationParams), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSkeletalAnimationParams>()
{
	return FMovieSceneSkeletalAnimationParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSkeletalAnimationParams(FMovieSceneSkeletalAnimationParams::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneSkeletalAnimationParams"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationParams
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSkeletalAnimationParams")),new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationParams>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationParams;
	struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceCustomMode_MetaData[];
#endif
		static void NewProp_bForceCustomMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceCustomMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimNotifiers_MetaData[];
#endif
		static void NewProp_bSkipAnimNotifiers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimNotifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, EndOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "If on animation sequence will always play when active even if the animation is controlled by a Blueprint or Anim Instance Class" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_SetBit(void* Obj)
	{
		((FMovieSceneSkeletalAnimationParams*)Obj)->bForceCustomMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode = { "bForceCustomMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "If on will skip sending animation notifies" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_SetBit(void* Obj)
	{
		((FMovieSceneSkeletalAnimationParams*)Obj)->bSkipAnimNotifiers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers = { "bSkipAnimNotifiers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The weight curve for this animation section" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The slot name to use for the animation" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FMovieSceneSkeletalAnimationParams*)Obj)->bReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation_MetaData[] = {
		{ "AllowedClasses", "AnimSequence, AnimComposite" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneSkeletalAnimationParams",
		sizeof(FMovieSceneSkeletalAnimationParams),
		alignof(FMovieSceneSkeletalAnimationParams),
		Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSkeletalAnimationParams"), sizeof(FMovieSceneSkeletalAnimationParams), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Hash() { return 226927112U; }
	void UMovieSceneSkeletalAnimationSection::StaticRegisterNativesUMovieSceneSkeletalAnimationSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister()
	{
		return UMovieSceneSkeletalAnimationSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Movie scene section that control skeletal animation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, SlotName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bReverse_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, PlayRate_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, EndOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Animation_DEPRECATED), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, AnimSequence_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Params), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::ClassParams = {
		&UMovieSceneSkeletalAnimationSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSkeletalAnimationSection, 4031220170);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationSection>()
	{
		return UMovieSceneSkeletalAnimationSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSkeletalAnimationSection(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection, &UMovieSceneSkeletalAnimationSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneSkeletalAnimationSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSkeletalAnimationSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

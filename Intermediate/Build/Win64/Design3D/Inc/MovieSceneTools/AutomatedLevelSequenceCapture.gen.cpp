// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTools/Public/AutomatedLevelSequenceCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomatedLevelSequenceCapture() {}
// Cross Module References
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UAutomatedLevelSequenceCapture::StaticRegisterNativesUAutomatedLevelSequenceCapture()
	{
	}
	UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture_NoRegister()
	{
		return UAutomatedLevelSequenceCapture::StaticClass();
	}
	struct Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LevelSequenceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteFinalCutProXML_MetaData[];
#endif
		static void NewProp_bWriteFinalCutProXML_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteFinalCutProXML;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteEditDecisionList_MetaData[];
#endif
		static void NewProp_bWriteEditDecisionList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteEditDecisionList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeShotWarmUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeShotWarmUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeWarmUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeWarmUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmUpFrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WarmUpFrameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEndFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomEndFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEndFrame_MetaData[];
#endif
		static void NewProp_bUseCustomEndFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomEndFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomStartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomStartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomStartFrame_MetaData[];
#endif
		static void NewProp_bUseCustomStartFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomStartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSequenceAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutomatedLevelSequenceCapture.h" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The pre-existing level sequence actor to use for capture that specifies playback settings" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Whether to write Final Cut Pro XML files (XMLs) if the sequence contains shots" },
	};
#endif
	void Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_SetBit(void* Obj)
	{
		((UAutomatedLevelSequenceCapture*)Obj)->bWriteFinalCutProXML = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML = { "bWriteFinalCutProXML", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomatedLevelSequenceCapture), &Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Whether to write edit decision lists (EDLs) if the sequence contains shots" },
	};
#endif
	void Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_SetBit(void* Obj)
	{
		((UAutomatedLevelSequenceCapture*)Obj)->bWriteEditDecisionList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList = { "bWriteEditDecisionList", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomatedLevelSequenceCapture), &Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions = { "BurnInOptions", nullptr, (EPropertyFlags)0x001004000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The number of seconds to wait (in real-time) at shot boundaries.  Useful for allowing post processing effects to settle down before capturing the animation." },
		{ "Units", "Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp = { "DelayBeforeShotWarmUp", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, DelayBeforeShotWarmUp), METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The number of seconds to wait (in real-time) before we start playing back the warm up frames.  Useful for allowing post processing effects to settle down before capturing the animation." },
		{ "Units", "Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp = { "DelayBeforeWarmUp", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, DelayBeforeWarmUp), METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The number of extra frames to play before the sequence's start frame, to \"warm up\" the animation.  This is useful if your\n          animation contains particles or other runtime effects that are spawned into the scene earlier than your capture start frame" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount = { "WarmUpFrameCount", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, WarmUpFrameCount), METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "End Frame" },
		{ "EditCondition", "bUseCustomEndFrame" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Frame number to end capturing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame = { "CustomEndFrame", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, CustomEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "When enabled, the EndFrame setting will override the default ending frame number" },
	};
#endif
	void Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_SetBit(void* Obj)
	{
		((UAutomatedLevelSequenceCapture*)Obj)->bUseCustomEndFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame = { "bUseCustomEndFrame", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomatedLevelSequenceCapture), &Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "Start Frame" },
		{ "EditCondition", "bUseCustomStartFrame" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Frame number to start capturing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame = { "CustomStartFrame", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, CustomStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "When enabled, the StartFrame setting will override the default starting frame number" },
	};
#endif
	void Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_SetBit(void* Obj)
	{
		((UAutomatedLevelSequenceCapture*)Obj)->bUseCustomStartFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame = { "bUseCustomStartFrame", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomatedLevelSequenceCapture), &Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "A level sequence asset to playback at runtime - used where the level sequence does not already exist in the world." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset = { "LevelSequenceAsset", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, LevelSequenceAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomatedLevelSequenceCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::ClassParams = {
		&UAutomatedLevelSequenceCapture::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::PropPointers),
		0,
		0x009004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomatedLevelSequenceCapture, 496166546);
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UAutomatedLevelSequenceCapture>()
	{
		return UAutomatedLevelSequenceCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomatedLevelSequenceCapture(Z_Construct_UClass_UAutomatedLevelSequenceCapture, &UAutomatedLevelSequenceCapture::StaticClass, TEXT("/Script/MovieSceneTools"), TEXT("UAutomatedLevelSequenceCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomatedLevelSequenceCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

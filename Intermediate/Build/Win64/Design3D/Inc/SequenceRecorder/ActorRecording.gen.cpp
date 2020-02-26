// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorder/Public/ActorRecording.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorRecording() {}
// Cross Module References
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UActorRecording_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UActorRecording();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecordingBase();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationRecordingSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FActorRecordingSettings();
// End Cross Module References
	void UActorRecording::StaticRegisterNativesUActorRecording()
	{
	}
	UClass* Z_Construct_UClass_UActorRecording_NoRegister()
	{
		return UActorRecording::StaticClass();
	}
	struct Z_Construct_UClass_UActorRecording_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordToPossessable_MetaData[];
#endif
		static void NewProp_bRecordToPossessable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordToPossessable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpecifyTargetAnimation_MetaData[];
#endif
		static void NewProp_bSpecifyTargetAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpecifyTargetAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TakeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateLevelSequence_MetaData[];
#endif
		static void NewProp_bCreateLevelSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateLevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorRecording_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USequenceRecordingBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorRecording.h" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "The actor we want to record" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord = { "ActorToRecord", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorRecording, ActorToRecord), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Whether to record to 'possessable' (i.e. level-owned) or 'spawnable' (i.e. sequence-owned) actors. Defaults to the global setting." },
	};
#endif
	void Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_SetBit(void* Obj)
	{
		((UActorRecording*)Obj)->bRecordToPossessable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable = { "bRecordToPossessable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorRecording), &Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings_MetaData[] = {
		{ "Category", "Animation Recording" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "The settings to apply to this actor's animation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings = { "AnimationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorRecording, AnimationSettings), Z_Construct_UScriptStruct_FAnimationRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation_MetaData[] = {
		{ "Category", "Animation Recording" },
		{ "EditCondition", "bSpecifyTargetAnimation" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "The target animation we want to record to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation = { "TargetAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorRecording, TargetAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_MetaData[] = {
		{ "Category", "Animation Recording" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Whether we should specify the target animation or auto-create it" },
	};
#endif
	void Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_SetBit(void* Obj)
	{
		((UActorRecording*)Obj)->bSpecifyTargetAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation = { "bSpecifyTargetAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorRecording), &Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "EditCondition", "bCreateLevelSequence" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Specify the take number for the new recording" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber = { "TakeNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorRecording, TakeNumber), METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "EditCondition", "bCreateLevelSequence" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Optional target name to record to. If not specified, the actor label will be used" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorRecording, TargetName), METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "EditCondition", "bCreateLevelSequence" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "The level sequence to record into" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence = { "TargetLevelSequence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorRecording, TargetLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Whether to create a level sequence for this actor recording" },
	};
#endif
	void Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_SetBit(void* Obj)
	{
		((UActorRecording*)Obj)->bCreateLevelSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence = { "bCreateLevelSequence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorRecording), &Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Whether this actor is active and to be recorded when the 'Record' button is pressed." },
	};
#endif
	void Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((UActorRecording*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorRecording), &Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings = { "ActorSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorRecording, ActorSettings), Z_Construct_UScriptStruct_FActorRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorRecording_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorRecording>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorRecording_Statics::ClassParams = {
		&UActorRecording::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorRecording_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorRecording()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorRecording_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorRecording, 3487111152);
	template<> SEQUENCERECORDER_API UClass* StaticClass<UActorRecording>()
	{
		return UActorRecording::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorRecording(Z_Construct_UClass_UActorRecording, &UActorRecording::StaticClass, TEXT("/Script/SequenceRecorder"), TEXT("UActorRecording"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorRecording);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

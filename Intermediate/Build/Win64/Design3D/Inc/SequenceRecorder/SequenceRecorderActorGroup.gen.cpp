// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorder/Public/SequenceRecorderActorGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecorderActorGroup() {}
// Cross Module References
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderActorGroup_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderActorGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UActorRecording_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_ASequenceRecorderGroup_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_ASequenceRecorderGroup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	void USequenceRecorderActorGroup::StaticRegisterNativesUSequenceRecorderActorGroup()
	{
	}
	UClass* Z_Construct_UClass_USequenceRecorderActorGroup_NoRegister()
	{
		return USequenceRecorderActorGroup::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRecorderActorGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RecordedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecordedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordTargetLevelSequenceLength_MetaData[];
#endif
		static void NewProp_bRecordTargetLevelSequenceLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordTargetLevelSequenceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDuplicateTargetLevelSequence_MetaData[];
#endif
		static void NewProp_bDuplicateTargetLevelSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDuplicateTargetLevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpecifyTargetLevelSequence_MetaData[];
#endif
		static void NewProp_bSpecifyTargetLevelSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpecifyTargetLevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceRecordingBasePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceRecordingBasePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SequenceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRecorderActorGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecorderActorGroup.h" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "A list of actor recordings in this group which contains both the actors to record as well as settings for each one." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors = { "RecordedActors", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderActorGroup, RecordedActors), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_Inner = { "RecordedActors", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorRecording_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "EditCondition", "bSpecifyTargetLevelSequence" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "Whether we should record to the length of the target level sequence" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_SetBit(void* Obj)
	{
		((USequenceRecorderActorGroup*)Obj)->bRecordTargetLevelSequenceLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength = { "bRecordTargetLevelSequenceLength", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderActorGroup), &Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "EditCondition", "bSpecifyTargetLevelSequence" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "Whether we should duplicate the target level sequence and record into the duplicate" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_SetBit(void* Obj)
	{
		((USequenceRecorderActorGroup*)Obj)->bDuplicateTargetLevelSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence = { "bDuplicateTargetLevelSequence", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderActorGroup), &Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "EditCondition", "bSpecifyTargetLevelSequence" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "The level sequence to record into" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence = { "TargetLevelSequence", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderActorGroup, TargetLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "Whether we should specify the target level sequence or auto-create it" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_SetBit(void* Obj)
	{
		((USequenceRecorderActorGroup*)Obj)->bSpecifyTargetLevelSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence = { "bSpecifyTargetLevelSequence", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderActorGroup), &Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "Base path for this recording. Sub-assets will be created in subdirectories as specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath = { "SequenceRecordingBasePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderActorGroup, SequenceRecordingBasePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "The base name of the sequence to record to. This name will also be used to auto-generate any assets created by this recording." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName = { "SequenceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderActorGroup, SequenceName), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderActorGroup, GroupName), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceRecorderActorGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRecorderActorGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRecorderActorGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::ClassParams = {
		&USequenceRecorderActorGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceRecorderActorGroup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceRecorderActorGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequenceRecorderActorGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequenceRecorderActorGroup, 825708603);
	template<> SEQUENCERECORDER_API UClass* StaticClass<USequenceRecorderActorGroup>()
	{
		return USequenceRecorderActorGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequenceRecorderActorGroup(Z_Construct_UClass_USequenceRecorderActorGroup, &USequenceRecorderActorGroup::StaticClass, TEXT("/Script/SequenceRecorder"), TEXT("USequenceRecorderActorGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRecorderActorGroup);
	void ASequenceRecorderGroup::StaticRegisterNativesASequenceRecorderGroup()
	{
	}
	UClass* Z_Construct_UClass_ASequenceRecorderGroup_NoRegister()
	{
		return ASequenceRecorderGroup::StaticClass();
	}
	struct Z_Construct_UClass_ASequenceRecorderGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorGroups;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorGroups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASequenceRecorderGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequenceRecorderGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecorderActorGroup.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups = { "ActorGroups", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASequenceRecorderGroup, ActorGroups), METADATA_PARAMS(Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_Inner = { "ActorGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USequenceRecorderActorGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASequenceRecorderGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASequenceRecorderGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASequenceRecorderGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASequenceRecorderGroup_Statics::ClassParams = {
		&ASequenceRecorderGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASequenceRecorderGroup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASequenceRecorderGroup_Statics::PropPointers),
		0,
		0x049000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASequenceRecorderGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASequenceRecorderGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASequenceRecorderGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASequenceRecorderGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASequenceRecorderGroup, 29432951);
	template<> SEQUENCERECORDER_API UClass* StaticClass<ASequenceRecorderGroup>()
	{
		return ASequenceRecorderGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASequenceRecorderGroup(Z_Construct_UClass_ASequenceRecorderGroup, &ASequenceRecorderGroup::StaticClass, TEXT("/Script/SequenceRecorder"), TEXT("ASequenceRecorderGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASequenceRecorderGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

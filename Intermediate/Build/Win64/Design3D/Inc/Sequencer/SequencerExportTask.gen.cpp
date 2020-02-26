// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Public/SequencerExportTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerExportTask() {}
// Cross Module References
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerExportTask_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerExportTask();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USequencerExportTask::StaticRegisterNativesUSequencerExportTask()
	{
	}
	UClass* Z_Construct_UClass_USequencerExportTask_NoRegister()
	{
		return USequencerExportTask::StaticClass();
	}
	struct Z_Construct_UClass_USequencerExportTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencerContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencerContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerExportTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetExportTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerExportTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SequencerExportTask.h" },
		{ "ModuleRelativePath", "Public/SequencerExportTask.h" },
		{ "ToolTip", "Contains data for a group of assets to import" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerExportTask_Statics::NewProp_SequencerContext_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/SequencerExportTask.h" },
		{ "ToolTip", "A UWorld for LevelSequences, UUserWidget for WidgetAnimations, or AActor for Actor Sequences, etc..." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequencerExportTask_Statics::NewProp_SequencerContext = { "SequencerContext", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerExportTask, SequencerContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerExportTask_Statics::NewProp_SequencerContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerExportTask_Statics::NewProp_SequencerContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerExportTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerExportTask_Statics::NewProp_SequencerContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerExportTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerExportTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequencerExportTask_Statics::ClassParams = {
		&USequencerExportTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerExportTask_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USequencerExportTask_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerExportTask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USequencerExportTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerExportTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequencerExportTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequencerExportTask, 2144107069);
	template<> SEQUENCER_API UClass* StaticClass<USequencerExportTask>()
	{
		return USequencerExportTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequencerExportTask(Z_Construct_UClass_USequencerExportTask, &USequencerExportTask::StaticClass, TEXT("/Script/Sequencer"), TEXT("USequencerExportTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerExportTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Public/SequencerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerSettings() {}
// Cross Module References
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ESequencerLoopMode();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ESequencerZoomPosition();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ECurveEditorCurveVisibility();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettingsContainer_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettingsContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettings_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettings();
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EKeyGroupMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EAllowEditsMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EAutoChangeMode();
// End Cross Module References
	static UEnum* ESequencerLoopMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ESequencerLoopMode, Z_Construct_UPackage__Script_Sequencer(), TEXT("ESequencerLoopMode"));
		}
		return Singleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ESequencerLoopMode>()
	{
		return ESequencerLoopMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESequencerLoopMode(ESequencerLoopMode_StaticEnum, TEXT("/Script/Sequencer"), TEXT("ESequencerLoopMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Hash() { return 3333138105U; }
	UEnum* Z_Construct_UEnum_Sequencer_ESequencerLoopMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sequencer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESequencerLoopMode"), 0, Get_Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SLM_NoLoop", (int64)SLM_NoLoop },
				{ "SLM_Loop", (int64)SLM_Loop },
				{ "SLM_LoopSelectionRange", (int64)SLM_LoopSelectionRange },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SequencerSettings.h" },
				{ "SLM_Loop.DisplayName", "Loop" },
				{ "SLM_Loop.ToolTip", "Loop Playback Range." },
				{ "SLM_LoopSelectionRange.DisplayName", "Loop Selection Range" },
				{ "SLM_LoopSelectionRange.ToolTip", "Loop Selection Range." },
				{ "SLM_NoLoop.DisplayName", "No Looping" },
				{ "SLM_NoLoop.ToolTip", "No Looping." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
				nullptr,
				"ESequencerLoopMode",
				"ESequencerLoopMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESequencerZoomPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ESequencerZoomPosition, Z_Construct_UPackage__Script_Sequencer(), TEXT("ESequencerZoomPosition"));
		}
		return Singleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ESequencerZoomPosition>()
	{
		return ESequencerZoomPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESequencerZoomPosition(ESequencerZoomPosition_StaticEnum, TEXT("/Script/Sequencer"), TEXT("ESequencerZoomPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Hash() { return 785295405U; }
	UEnum* Z_Construct_UEnum_Sequencer_ESequencerZoomPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sequencer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESequencerZoomPosition"), 0, Get_Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SZP_CurrentTime", (int64)SZP_CurrentTime },
				{ "SZP_MousePosition", (int64)SZP_MousePosition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SequencerSettings.h" },
				{ "SZP_CurrentTime.DisplayName", "Current Time" },
				{ "SZP_CurrentTime.ToolTip", "Current Time." },
				{ "SZP_MousePosition.DisplayName", "Mouse Position" },
				{ "SZP_MousePosition.ToolTip", "Mouse Position." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
				nullptr,
				"ESequencerZoomPosition",
				"ESequencerZoomPosition",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESequencerSpawnPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition, Z_Construct_UPackage__Script_Sequencer(), TEXT("ESequencerSpawnPosition"));
		}
		return Singleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ESequencerSpawnPosition>()
	{
		return ESequencerSpawnPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESequencerSpawnPosition(ESequencerSpawnPosition_StaticEnum, TEXT("/Script/Sequencer"), TEXT("ESequencerSpawnPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Hash() { return 788781134U; }
	UEnum* Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sequencer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESequencerSpawnPosition"), 0, Get_Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SSP_Origin", (int64)SSP_Origin },
				{ "SSP_PlaceInFrontOfCamera", (int64)SSP_PlaceInFrontOfCamera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SequencerSettings.h" },
				{ "SSP_Origin.DisplayName", "Origin" },
				{ "SSP_Origin.ToolTip", "Origin." },
				{ "SSP_PlaceInFrontOfCamera.DisplayName", "Place in Front of Camera" },
				{ "SSP_PlaceInFrontOfCamera.ToolTip", "Place in Front of Camera." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
				nullptr,
				"ESequencerSpawnPosition",
				"ESequencerSpawnPosition",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECurveEditorCurveVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ECurveEditorCurveVisibility, Z_Construct_UPackage__Script_Sequencer(), TEXT("ECurveEditorCurveVisibility"));
		}
		return Singleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ECurveEditorCurveVisibility>()
	{
		return ECurveEditorCurveVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurveEditorCurveVisibility(ECurveEditorCurveVisibility_StaticEnum, TEXT("/Script/Sequencer"), TEXT("ECurveEditorCurveVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sequencer_ECurveEditorCurveVisibility_Hash() { return 2406072616U; }
	UEnum* Z_Construct_UEnum_Sequencer_ECurveEditorCurveVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sequencer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurveEditorCurveVisibility"), 0, Get_Z_Construct_UEnum_Sequencer_ECurveEditorCurveVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECurveEditorCurveVisibility::AllCurves", (int64)ECurveEditorCurveVisibility::AllCurves },
				{ "ECurveEditorCurveVisibility::SelectedCurves", (int64)ECurveEditorCurveVisibility::SelectedCurves },
				{ "ECurveEditorCurveVisibility::AnimatedCurves", (int64)ECurveEditorCurveVisibility::AnimatedCurves },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllCurves.ToolTip", "All curves should be visible." },
				{ "AnimatedCurves.ToolTip", "Only curves which have keyframes should be visible." },
				{ "ModuleRelativePath", "Public/SequencerSettings.h" },
				{ "SelectedCurves.ToolTip", "Only curves from selected nodes should be visible." },
				{ "ToolTip", "Defines visibility states for the curves in the curve editor." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
				nullptr,
				"ECurveEditorCurveVisibility",
				"ECurveEditorCurveVisibility",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USequencerSettingsContainer::StaticRegisterNativesUSequencerSettingsContainer()
	{
	}
	UClass* Z_Construct_UClass_USequencerSettingsContainer_NoRegister()
	{
		return USequencerSettingsContainer::StaticClass();
	}
	struct Z_Construct_UClass_USequencerSettingsContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerSettingsContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettingsContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerSettings.h" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Empty class used to house multiple named USequencerSettings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerSettingsContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerSettingsContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequencerSettingsContainer_Statics::ClassParams = {
		&USequencerSettingsContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerSettingsContainer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USequencerSettingsContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerSettingsContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequencerSettingsContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequencerSettingsContainer, 902232930);
	template<> SEQUENCER_API UClass* StaticClass<USequencerSettingsContainer>()
	{
		return USequencerSettingsContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequencerSettingsContainer(Z_Construct_UClass_USequencerSettingsContainer, &USequencerSettingsContainer::StaticClass, TEXT("/Script/Sequencer"), TEXT("USequencerSettingsContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerSettingsContainer);
	void USequencerSettings::StaticRegisterNativesUSequencerSettings()
	{
	}
	UClass* Z_Construct_UClass_USequencerSettings_NoRegister()
	{
		return USequencerSettings::StaticClass();
	}
	struct Z_Construct_UClass_USequencerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameNumberDisplayFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameNumberDisplayFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameNumberDisplayFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrajectoryPathCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TrajectoryPathCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompileDirectorOnEvaluate_MetaData[];
#endif
		static void NewProp_bCompileDirectorOnEvaluate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompileDirectorOnEvaluate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizePreAndPostRoll_MetaData[];
#endif
		static void NewProp_bVisualizePreAndPostRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizePreAndPostRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugVisualization_MetaData[];
#endif
		static void NewProp_bShowDebugVisualization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugVisualization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRerunConstructionScripts_MetaData[];
#endif
		static void NewProp_bRerunConstructionScripts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRerunConstructionScripts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateSubSequencesInIsolation_MetaData[];
#endif
		static void NewProp_bEvaluateSubSequencesInIsolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateSubSequencesInIsolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateRealtimeViewports_MetaData[];
#endif
		static void NewProp_bActivateRealtimeViewports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateRealtimeViewports;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowChannelColors_MetaData[];
#endif
		static void NewProp_bShowChannelColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowChannelColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteKeyAreas_MetaData[];
#endif
		static void NewProp_bInfiniteKeyAreas_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteKeyAreas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowCombinedKeyframes_MetaData[];
#endif
		static void NewProp_bShowCombinedKeyframes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCombinedKeyframes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZeroPadFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZeroPadFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepPlayRangeInSectionBounds_MetaData[];
#endif
		static void NewProp_bKeepPlayRangeInSectionBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepPlayRangeInSectionBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepCursorInPlayRange_MetaData[];
#endif
		static void NewProp_bKeepCursorInPlayRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepCursorInPlayRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepCursorInPlayRangeWhileScrubbing_MetaData[];
#endif
		static void NewProp_bKeepCursorInPlayRangeWhileScrubbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepCursorInPlayRangeWhileScrubbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinkCurveEditorTimeRange_MetaData[];
#endif
		static void NewProp_bLinkCurveEditorTimeRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinkCurveEditorTimeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoScrollEnabled_MetaData[];
#endif
		static void NewProp_bAutoScrollEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoScrollEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZoomPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRewindOnRecord_MetaData[];
#endif
		static void NewProp_bRewindOnRecord_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRewindOnRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSelectedNodesOnly_MetaData[];
#endif
		static void NewProp_bShowSelectedNodesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSelectedNodesOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLabelBrowserVisible_MetaData[];
#endif
		static void NewProp_bLabelBrowserVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLabelBrowserVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapCurveValueToInterval_MetaData[];
#endif
		static void NewProp_bSnapCurveValueToInterval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapCurveValueToInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToDraggedKey_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToDraggedKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToDraggedKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToPressedKey_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToPressedKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToPressedKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToInterval_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToInterval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToKeys_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapSectionTimesToSections_MetaData[];
#endif
		static void NewProp_bSnapSectionTimesToSections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapSectionTimesToSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapSectionTimesToInterval_MetaData[];
#endif
		static void NewProp_bSnapSectionTimesToInterval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapSectionTimesToInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapKeyTimesToKeys_MetaData[];
#endif
		static void NewProp_bSnapKeyTimesToKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapKeyTimesToKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapKeyTimesToInterval_MetaData[];
#endif
		static void NewProp_bSnapKeyTimesToInterval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapKeyTimesToInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSnapEnabled_MetaData[];
#endif
		static void NewProp_bIsSnapEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSnapEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowRangeSlider_MetaData[];
#endif
		static void NewProp_bShowRangeSlider_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowRangeSlider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateSpawnableCameras_MetaData[];
#endif
		static void NewProp_bCreateSpawnableCameras_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateSpawnableCameras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSetTrackDefaults_MetaData[];
#endif
		static void NewProp_bAutoSetTrackDefaults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSetTrackDefaults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyInterpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KeyInterpolation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyInterpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeyInterpPropertiesOnly_MetaData[];
#endif
		static void NewProp_bKeyInterpPropertiesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeyInterpPropertiesOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGroupMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KeyGroupMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyGroupMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowEditsMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AllowEditsMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowEditsMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoChangeMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoChangeMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoChangeMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerSettings.h" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Serializable options for sequencer." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_CurveVisibility_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Specifies which curves to show in the curve editor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_CurveVisibility = { "CurveVisibility", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, CurveVisibility), Z_Construct_UEnum_Sequencer_ECurveEditorCurveVisibility, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_CurveVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_CurveVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_CurveVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "What format do we display time in to the user?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat = { "FrameNumberDisplayFormat", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, FrameNumberDisplayFormat), Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Specifies the maximum number of keys to draw when rendering trajectories in viewports" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap = { "TrajectoryPathCap", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, TrajectoryPathCap), METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Whether to recompile the director blueprint when the sequence is evaluated (if one exists)" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bCompileDirectorOnEvaluate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate = { "bCompileDirectorOnEvaluate", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable showing of pre and post roll visualization." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bVisualizePreAndPostRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll = { "bVisualizePreAndPostRoll", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable showing of debug visualization." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowDebugVisualization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization = { "bShowDebugVisualization", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, construction scripts will be rerun on bound actors for every frame" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bRerunConstructionScripts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts = { "bRerunConstructionScripts", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, entering a sub sequence will evaluate that sub sequence in isolation, rather than from the master sequence" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bEvaluateSubSequencesInIsolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation = { "bEvaluateSubSequencesInIsolation", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, sequencer will activate 'Realtime' in viewports" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bActivateRealtimeViewports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports = { "bActivateRealtimeViewports", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable displaying channel bar colors for vector properties." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowChannelColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors = { "bShowChannelColors", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable setting key area sections as infinite by default." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bInfiniteKeyAreas = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas = { "bInfiniteKeyAreas", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowCombinedKeyframes_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable the combined keyframes at the top node level. Disabling can improve editor performance." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowCombinedKeyframes_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowCombinedKeyframes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowCombinedKeyframes = { "bShowCombinedKeyframes", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowCombinedKeyframes_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowCombinedKeyframes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowCombinedKeyframes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The number of zeros to pad the frame numbers by." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames = { "ZeroPadFrames", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, ZeroPadFrames), nullptr, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable keeping the playback range constrained to the section bounds." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bKeepPlayRangeInSectionBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds = { "bKeepPlayRangeInSectionBounds", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRange_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable keeping the cursor in the current playback range during playback." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRange_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bKeepCursorInPlayRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRange = { "bKeepCursorInPlayRange", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable keeping the cursor in the current playback range while scrubbing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bKeepCursorInPlayRangeWhileScrubbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing = { "bKeepCursorInPlayRangeWhileScrubbing", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The loop mode of the playback in timeline." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode = { "LoopMode", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, LoopMode), Z_Construct_UEnum_Sequencer_ESequencerLoopMode, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_MetaData[] = {
		{ "Category", "CurveEditor" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable linking the curve editor time range to the sequencer timeline's time range." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bLinkCurveEditorTimeRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange = { "bLinkCurveEditorTimeRange", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable auto scroll in the timeline." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bAutoScrollEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled = { "bAutoScrollEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Whether to zoom in on the current position or the current time in the timeline." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition = { "ZoomPosition", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, ZoomPosition), Z_Construct_UEnum_Sequencer_ESequencerZoomPosition, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Defines whether to jump back to the start of the sequence when a recording is started" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bRewindOnRecord = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord = { "bRewindOnRecord", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Only show selected nodes in the tree view." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowSelectedNodesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly = { "bShowSelectedNodesOnly", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLabelBrowserVisible_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable the label browser." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLabelBrowserVisible_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bLabelBrowserVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLabelBrowserVisible = { "bLabelBrowserVisible", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLabelBrowserVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLabelBrowserVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLabelBrowserVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the curve value to the curve value interval." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapCurveValueToInterval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval = { "bSnapCurveValueToInterval", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the current time to the dragged key." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToDraggedKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey = { "bSnapPlayTimeToDraggedKey", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the current time to the pressed key." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToPressedKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey = { "bSnapPlayTimeToPressedKey", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the current time to the time snapping interval while scrubbing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToInterval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval = { "bSnapPlayTimeToInterval", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the current time to keys of the selected track while scrubbing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys = { "bSnapPlayTimeToKeys", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping sections to other sections." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapSectionTimesToSections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections = { "bSnapSectionTimesToSections", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping sections to the time snapping interval." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapSectionTimesToInterval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval = { "bSnapSectionTimesToInterval", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping keys to other keys." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapKeyTimesToKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys = { "bSnapKeyTimesToKeys", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping keys to the time snapping interval." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapKeyTimesToInterval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval = { "bSnapKeyTimesToInterval", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping in the timeline." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bIsSnapEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled = { "bIsSnapEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Show the in/out range in the timeline with respect to the start/end range." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowRangeSlider = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider = { "bShowRangeSlider", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable creating of spawnable cameras whenever cameras are created." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bCreateSpawnableCameras = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras = { "bCreateSpawnableCameras", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The default location of a spawnable when it is first dragged into the viewport from the content browser." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition = { "SpawnPosition", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, SpawnPosition), Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When setting keys on properties and transforms automatically update the track default values used when there are no keys." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bAutoSetTrackDefaults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults = { "bAutoSetTrackDefaults", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The interpolation type for newly created keyframes" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation = { "KeyInterpolation", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, KeyInterpolation), Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeyInterpPropertiesOnly_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable only keyframing properties marked with the 'Interp' keyword." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeyInterpPropertiesOnly_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bKeyInterpPropertiesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeyInterpPropertiesOnly = { "bKeyInterpPropertiesOnly", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeyInterpPropertiesOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeyInterpPropertiesOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeyInterpPropertiesOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Key group mode." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode = { "KeyGroupMode", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, KeyGroupMode), Z_Construct_UEnum_Sequencer_EKeyGroupMode, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Allow edits mode." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode = { "AllowEditsMode", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, AllowEditsMode), Z_Construct_UEnum_Sequencer_EAllowEditsMode, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The auto change mode (auto-key, auto-track or none)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode = { "AutoChangeMode", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerSettings, AutoChangeMode), Z_Construct_UEnum_Sequencer_EAutoChangeMode, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_CurveVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_CurveVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowCombinedKeyframes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLabelBrowserVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeyInterpPropertiesOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequencerSettings_Statics::ClassParams = {
		&USequencerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequencerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequencerSettings, 749613389);
	template<> SEQUENCER_API UClass* StaticClass<USequencerSettings>()
	{
		return USequencerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequencerSettings(Z_Construct_UClass_USequencerSettings, &USequencerSettings::StaticClass, TEXT("/Script/Sequencer"), TEXT("USequencerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

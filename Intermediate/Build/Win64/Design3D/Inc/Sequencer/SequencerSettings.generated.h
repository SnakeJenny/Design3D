// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_SequencerSettings_generated_h
#error "SequencerSettings.generated.h already included, missing '#pragma once' in SequencerSettings.h"
#endif
#define SEQUENCER_SequencerSettings_generated_h

#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_RPC_WRAPPERS
#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerSettingsContainer(); \
	friend struct Z_Construct_UClass_USequencerSettingsContainer_Statics; \
public: \
	DECLARE_CLASS(USequencerSettingsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(USequencerSettingsContainer)


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUSequencerSettingsContainer(); \
	friend struct Z_Construct_UClass_USequencerSettingsContainer_Statics; \
public: \
	DECLARE_CLASS(USequencerSettingsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(USequencerSettingsContainer)


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettingsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettingsContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettingsContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettingsContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerSettingsContainer(USequencerSettingsContainer&&); \
	NO_API USequencerSettingsContainer(const USequencerSettingsContainer&); \
public:


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettingsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerSettingsContainer(USequencerSettingsContainer&&); \
	NO_API USequencerSettingsContainer(const USequencerSettingsContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettingsContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettingsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettingsContainer)


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_66_PROLOG
#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_RPC_WRAPPERS \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_INCLASS \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_71_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class USequencerSettingsContainer>();

#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_RPC_WRAPPERS
#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerSettings(); \
	friend struct Z_Construct_UClass_USequencerSettings_Statics; \
public: \
	DECLARE_CLASS(USequencerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(USequencerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUSequencerSettings(); \
	friend struct Z_Construct_UClass_USequencerSettings_Statics; \
public: \
	DECLARE_CLASS(USequencerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(USequencerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerSettings(USequencerSettings&&); \
	NO_API USequencerSettings(const USequencerSettings&); \
public:


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerSettings(USequencerSettings&&); \
	NO_API USequencerSettings(const USequencerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettings)


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AutoChangeMode() { return STRUCT_OFFSET(USequencerSettings, AutoChangeMode); } \
	FORCEINLINE static uint32 __PPO__AllowEditsMode() { return STRUCT_OFFSET(USequencerSettings, AllowEditsMode); } \
	FORCEINLINE static uint32 __PPO__KeyGroupMode() { return STRUCT_OFFSET(USequencerSettings, KeyGroupMode); } \
	FORCEINLINE static uint32 __PPO__bKeyInterpPropertiesOnly() { return STRUCT_OFFSET(USequencerSettings, bKeyInterpPropertiesOnly); } \
	FORCEINLINE static uint32 __PPO__KeyInterpolation() { return STRUCT_OFFSET(USequencerSettings, KeyInterpolation); } \
	FORCEINLINE static uint32 __PPO__bAutoSetTrackDefaults() { return STRUCT_OFFSET(USequencerSettings, bAutoSetTrackDefaults); } \
	FORCEINLINE static uint32 __PPO__SpawnPosition() { return STRUCT_OFFSET(USequencerSettings, SpawnPosition); } \
	FORCEINLINE static uint32 __PPO__bCreateSpawnableCameras() { return STRUCT_OFFSET(USequencerSettings, bCreateSpawnableCameras); } \
	FORCEINLINE static uint32 __PPO__bShowRangeSlider() { return STRUCT_OFFSET(USequencerSettings, bShowRangeSlider); } \
	FORCEINLINE static uint32 __PPO__bIsSnapEnabled() { return STRUCT_OFFSET(USequencerSettings, bIsSnapEnabled); } \
	FORCEINLINE static uint32 __PPO__bSnapKeyTimesToInterval() { return STRUCT_OFFSET(USequencerSettings, bSnapKeyTimesToInterval); } \
	FORCEINLINE static uint32 __PPO__bSnapKeyTimesToKeys() { return STRUCT_OFFSET(USequencerSettings, bSnapKeyTimesToKeys); } \
	FORCEINLINE static uint32 __PPO__bSnapSectionTimesToInterval() { return STRUCT_OFFSET(USequencerSettings, bSnapSectionTimesToInterval); } \
	FORCEINLINE static uint32 __PPO__bSnapSectionTimesToSections() { return STRUCT_OFFSET(USequencerSettings, bSnapSectionTimesToSections); } \
	FORCEINLINE static uint32 __PPO__bSnapPlayTimeToKeys() { return STRUCT_OFFSET(USequencerSettings, bSnapPlayTimeToKeys); } \
	FORCEINLINE static uint32 __PPO__bSnapPlayTimeToInterval() { return STRUCT_OFFSET(USequencerSettings, bSnapPlayTimeToInterval); } \
	FORCEINLINE static uint32 __PPO__bSnapPlayTimeToPressedKey() { return STRUCT_OFFSET(USequencerSettings, bSnapPlayTimeToPressedKey); } \
	FORCEINLINE static uint32 __PPO__bSnapPlayTimeToDraggedKey() { return STRUCT_OFFSET(USequencerSettings, bSnapPlayTimeToDraggedKey); } \
	FORCEINLINE static uint32 __PPO__bSnapCurveValueToInterval() { return STRUCT_OFFSET(USequencerSettings, bSnapCurveValueToInterval); } \
	FORCEINLINE static uint32 __PPO__bLabelBrowserVisible() { return STRUCT_OFFSET(USequencerSettings, bLabelBrowserVisible); } \
	FORCEINLINE static uint32 __PPO__bShowSelectedNodesOnly() { return STRUCT_OFFSET(USequencerSettings, bShowSelectedNodesOnly); } \
	FORCEINLINE static uint32 __PPO__bRewindOnRecord() { return STRUCT_OFFSET(USequencerSettings, bRewindOnRecord); } \
	FORCEINLINE static uint32 __PPO__ZoomPosition() { return STRUCT_OFFSET(USequencerSettings, ZoomPosition); } \
	FORCEINLINE static uint32 __PPO__bAutoScrollEnabled() { return STRUCT_OFFSET(USequencerSettings, bAutoScrollEnabled); } \
	FORCEINLINE static uint32 __PPO__bLinkCurveEditorTimeRange() { return STRUCT_OFFSET(USequencerSettings, bLinkCurveEditorTimeRange); } \
	FORCEINLINE static uint32 __PPO__LoopMode() { return STRUCT_OFFSET(USequencerSettings, LoopMode); } \
	FORCEINLINE static uint32 __PPO__bKeepCursorInPlayRangeWhileScrubbing() { return STRUCT_OFFSET(USequencerSettings, bKeepCursorInPlayRangeWhileScrubbing); } \
	FORCEINLINE static uint32 __PPO__bKeepCursorInPlayRange() { return STRUCT_OFFSET(USequencerSettings, bKeepCursorInPlayRange); } \
	FORCEINLINE static uint32 __PPO__bKeepPlayRangeInSectionBounds() { return STRUCT_OFFSET(USequencerSettings, bKeepPlayRangeInSectionBounds); } \
	FORCEINLINE static uint32 __PPO__ZeroPadFrames() { return STRUCT_OFFSET(USequencerSettings, ZeroPadFrames); } \
	FORCEINLINE static uint32 __PPO__bShowCombinedKeyframes() { return STRUCT_OFFSET(USequencerSettings, bShowCombinedKeyframes); } \
	FORCEINLINE static uint32 __PPO__bInfiniteKeyAreas() { return STRUCT_OFFSET(USequencerSettings, bInfiniteKeyAreas); } \
	FORCEINLINE static uint32 __PPO__bShowChannelColors() { return STRUCT_OFFSET(USequencerSettings, bShowChannelColors); } \
	FORCEINLINE static uint32 __PPO__bActivateRealtimeViewports() { return STRUCT_OFFSET(USequencerSettings, bActivateRealtimeViewports); } \
	FORCEINLINE static uint32 __PPO__bEvaluateSubSequencesInIsolation() { return STRUCT_OFFSET(USequencerSettings, bEvaluateSubSequencesInIsolation); } \
	FORCEINLINE static uint32 __PPO__bRerunConstructionScripts() { return STRUCT_OFFSET(USequencerSettings, bRerunConstructionScripts); } \
	FORCEINLINE static uint32 __PPO__bShowDebugVisualization() { return STRUCT_OFFSET(USequencerSettings, bShowDebugVisualization); } \
	FORCEINLINE static uint32 __PPO__bVisualizePreAndPostRoll() { return STRUCT_OFFSET(USequencerSettings, bVisualizePreAndPostRoll); } \
	FORCEINLINE static uint32 __PPO__bCompileDirectorOnEvaluate() { return STRUCT_OFFSET(USequencerSettings, bCompileDirectorOnEvaluate); } \
	FORCEINLINE static uint32 __PPO__TrajectoryPathCap() { return STRUCT_OFFSET(USequencerSettings, TrajectoryPathCap); } \
	FORCEINLINE static uint32 __PPO__FrameNumberDisplayFormat() { return STRUCT_OFFSET(USequencerSettings, FrameNumberDisplayFormat); } \
	FORCEINLINE static uint32 __PPO__CurveVisibility() { return STRUCT_OFFSET(USequencerSettings, CurveVisibility); }


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_99_PROLOG
#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_RPC_WRAPPERS \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_INCLASS \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_104_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SequencerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class USequencerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Sequencer_Public_SequencerSettings_h


#define FOREACH_ENUM_ESEQUENCERLOOPMODE(op) \
	op(SLM_NoLoop) \
	op(SLM_Loop) \
	op(SLM_LoopSelectionRange) 
#define FOREACH_ENUM_ESEQUENCERZOOMPOSITION(op) \
	op(SZP_CurrentTime) \
	op(SZP_MousePosition) 
#define FOREACH_ENUM_ESEQUENCERSPAWNPOSITION(op) \
	op(SSP_Origin) \
	op(SSP_PlaceInFrontOfCamera) 
#define FOREACH_ENUM_ECURVEEDITORCURVEVISIBILITY(op) \
	op(ECurveEditorCurveVisibility::AllCurves) \
	op(ECurveEditorCurveVisibility::SelectedCurves) \
	op(ECurveEditorCurveVisibility::AnimatedCurves) 

enum class ECurveEditorCurveVisibility : uint8;
template<> SEQUENCER_API UEnum* StaticEnum<ECurveEditorCurveVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCERECORDER_SequenceRecorderSettings_generated_h
#error "SequenceRecorderSettings.generated.h already included, missing '#pragma once' in SequenceRecorderSettings.h"
#endif
#define SEQUENCERECORDER_SequenceRecorderSettings_generated_h

#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSettingsForActorClass_Statics; \
	SEQUENCERECORDER_API static class UScriptStruct* StaticStruct();


template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<struct FSettingsForActorClass>();

#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics; \
	SEQUENCERECORDER_API static class UScriptStruct* StaticStruct();


template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<struct FPropertiesToRecordForClass>();

#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics; \
	SEQUENCERECORDER_API static class UScriptStruct* StaticStruct();


template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<struct FPropertiesToRecordForActorClass>();

#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_RPC_WRAPPERS
#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceRecorderSettings(); \
	friend struct Z_Construct_UClass_USequenceRecorderSettings_Statics; \
public: \
	DECLARE_CLASS(USequenceRecorderSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), NO_API) \
	DECLARE_SERIALIZER(USequenceRecorderSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUSequenceRecorderSettings(); \
	friend struct Z_Construct_UClass_USequenceRecorderSettings_Statics; \
public: \
	DECLARE_CLASS(USequenceRecorderSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), NO_API) \
	DECLARE_SERIALIZER(USequenceRecorderSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequenceRecorderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceRecorderSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequenceRecorderSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceRecorderSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequenceRecorderSettings(USequenceRecorderSettings&&); \
	NO_API USequenceRecorderSettings(const USequenceRecorderSettings&); \
public:


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequenceRecorderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequenceRecorderSettings(USequenceRecorderSettings&&); \
	NO_API USequenceRecorderSettings(const USequenceRecorderSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequenceRecorderSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceRecorderSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceRecorderSettings)


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_83_PROLOG
#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_RPC_WRAPPERS \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_INCLASS \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_86_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SequenceRecorderSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERECORDER_API UClass* StaticClass<class USequenceRecorderSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h


#define FOREACH_ENUM_EAUDIORECORDINGMODE(op) \
	op(EAudioRecordingMode::None) \
	op(EAudioRecordingMode::AudioTrack) 

enum class EAudioRecordingMode : uint8;
template<> SEQUENCERECORDER_API UEnum* StaticEnum<EAudioRecordingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

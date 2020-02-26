// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SEQUENCERECORDER_SequenceRecorderBlueprintLibrary_generated_h
#error "SequenceRecorderBlueprintLibrary.generated.h already included, missing '#pragma once' in SequenceRecorderBlueprintLibrary.h"
#endif
#define SEQUENCERECORDER_SequenceRecorderBlueprintLibrary_generated_h

#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopRecordingSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USequenceRecorderBlueprintLibrary::StopRecordingSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRecordingSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USequenceRecorderBlueprintLibrary::IsRecordingSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingSequence) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToRecord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USequenceRecorderBlueprintLibrary::StartRecordingSequence(Z_Param_Out_ActorsToRecord); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopRecordingSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USequenceRecorderBlueprintLibrary::StopRecordingSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRecordingSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USequenceRecorderBlueprintLibrary::IsRecordingSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingSequence) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToRecord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USequenceRecorderBlueprintLibrary::StartRecordingSequence(Z_Param_Out_ActorsToRecord); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceRecorderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USequenceRecorderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), NO_API) \
	DECLARE_SERIALIZER(USequenceRecorderBlueprintLibrary)


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSequenceRecorderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USequenceRecorderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), NO_API) \
	DECLARE_SERIALIZER(USequenceRecorderBlueprintLibrary)


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequenceRecorderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceRecorderBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequenceRecorderBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceRecorderBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequenceRecorderBlueprintLibrary(USequenceRecorderBlueprintLibrary&&); \
	NO_API USequenceRecorderBlueprintLibrary(const USequenceRecorderBlueprintLibrary&); \
public:


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequenceRecorderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequenceRecorderBlueprintLibrary(USequenceRecorderBlueprintLibrary&&); \
	NO_API USequenceRecorderBlueprintLibrary(const USequenceRecorderBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequenceRecorderBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceRecorderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceRecorderBlueprintLibrary)


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_12_PROLOG
#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_INCLASS \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERECORDER_API UClass* StaticClass<class USequenceRecorderBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

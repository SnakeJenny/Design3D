// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TimelineTemplate_generated_h
#error "TimelineTemplate.generated.h already included, missing '#pragma once' in TimelineTemplate.h"
#endif
#define ENGINE_TimelineTemplate_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTLinearColorTrack>();

#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTVectorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTVectorTrack>();

#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTFloatTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTFloatTrack>();

#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTPropertyTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__PropertyName() { return STRUCT_OFFSET(FTTPropertyTrack, PropertyName); } \
	typedef FTTTrackBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTPropertyTrack>();

#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTEventTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__FunctionName() { return STRUCT_OFFSET(FTTEventTrack, FunctionName); } \
	typedef FTTTrackBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTEventTrack>();

#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTTrackBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TrackName() { return STRUCT_OFFSET(FTTTrackBase, TrackName); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTTrackBase>();

#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTimelineTemplate, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimelineTemplate(); \
	friend struct Z_Construct_UClass_UTimelineTemplate_Statics; \
public: \
	DECLARE_CLASS(UTimelineTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineTemplate) \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUTimelineTemplate(); \
	friend struct Z_Construct_UClass_UTimelineTemplate_Statics; \
public: \
	DECLARE_CLASS(UTimelineTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineTemplate) \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineTemplate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineTemplate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineTemplate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineTemplate(UTimelineTemplate&&); \
	ENGINE_API UTimelineTemplate(const UTimelineTemplate&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineTemplate(UTimelineTemplate&&); \
	ENGINE_API UTimelineTemplate(const UTimelineTemplate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineTemplate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineTemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineTemplate)


#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VariableName() { return STRUCT_OFFSET(UTimelineTemplate, VariableName); } \
	FORCEINLINE static uint32 __PPO__DirectionPropertyName() { return STRUCT_OFFSET(UTimelineTemplate, DirectionPropertyName); } \
	FORCEINLINE static uint32 __PPO__UpdateFunctionName() { return STRUCT_OFFSET(UTimelineTemplate, UpdateFunctionName); } \
	FORCEINLINE static uint32 __PPO__FinishedFunctionName() { return STRUCT_OFFSET(UTimelineTemplate, FinishedFunctionName); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_144_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_147_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TimelineTemplate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTimelineTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

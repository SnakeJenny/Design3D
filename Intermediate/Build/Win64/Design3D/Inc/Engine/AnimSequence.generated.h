// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSequence_generated_h
#error "AnimSequence.generated.h already included, missing '#pragma once' in AnimSequence.h"
#endif
#define ENGINE_AnimSequence_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_375_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompressedSegment_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCompressedSegment>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompressedTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCompressedTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScaleTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScaleTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRotationTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRotationTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTranslationTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTranslationTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTrackToSkeletonMap>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSequenceTrackContainer>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawAnimSequenceTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequence, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend struct Z_Construct_UClass_UAnimSequence_Statics; \
public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend struct Z_Construct_UClass_UAnimSequence_Statics; \
public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequence(UAnimSequence&&); \
	NO_API UAnimSequence(const UAnimSequence&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequence(UAnimSequence&&); \
	NO_API UAnimSequence(const UAnimSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumFrames() { return STRUCT_OFFSET(UAnimSequence, NumFrames); } \
	FORCEINLINE static uint32 __PPO__TrackToSkeletonMapTable() { return STRUCT_OFFSET(UAnimSequence, TrackToSkeletonMapTable); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_412_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_417_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSequence."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h


#define FOREACH_ENUM_ANIMATIONKEYFORMAT(op) \
	op(AKF_ConstantKeyLerp) \
	op(AKF_VariableKeyLerp) \
	op(AKF_PerTrackCompression) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScene3DTransformSection_generated_h
#error "MovieScene3DTransformSection.generated.h already included, missing '#pragma once' in MovieScene3DTransformSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DTransformSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Mask() { return STRUCT_OFFSET(FMovieSceneTransformMask, Mask); }


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneTransformMask>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieScene3DTransformKeyStruct>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieScene3DScaleKeyStruct>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieScene3DRotationKeyStruct>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieScene3DLocationKeyStruct>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene3DTransformSection, MOVIESCENETRACKS_API)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DTransformSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DTransformSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DTransformSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DTransformSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DTransformSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DTransformSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(UMovieScene3DTransformSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const UMovieScene3DTransformSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(UMovieScene3DTransformSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const UMovieScene3DTransformSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransformMask() { return STRUCT_OFFSET(UMovieScene3DTransformSection, TransformMask); } \
	FORCEINLINE static uint32 __PPO__Translation() { return STRUCT_OFFSET(UMovieScene3DTransformSection, Translation); } \
	FORCEINLINE static uint32 __PPO__Rotation() { return STRUCT_OFFSET(UMovieScene3DTransformSection, Rotation); } \
	FORCEINLINE static uint32 __PPO__Scale() { return STRUCT_OFFSET(UMovieScene3DTransformSection, Scale); } \
	FORCEINLINE static uint32 __PPO__ManualWeight() { return STRUCT_OFFSET(UMovieScene3DTransformSection, ManualWeight); } \
	FORCEINLINE static uint32 __PPO__bUseQuaternionInterpolation() { return STRUCT_OFFSET(UMovieScene3DTransformSection, bUseQuaternionInterpolation); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_241_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_245_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScene3DTransformSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScene3DTransformSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h


#define FOREACH_ENUM_ESHOW3DTRAJECTORY(op) \
	op(EShow3DTrajectory::EST_OnlyWhenSelected) \
	op(EShow3DTrajectory::EST_Always) \
	op(EShow3DTrajectory::EST_Never) 

enum class EShow3DTrajectory : uint8;
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EShow3DTrajectory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

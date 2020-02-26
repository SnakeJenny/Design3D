// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneFolder_generated_h
#error "MovieSceneFolder.generated.h already included, missing '#pragma once' in MovieSceneFolder.h"
#endif
#define MOVIESCENE_MovieSceneFolder_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneFolder, NO_API)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFolder(); \
	friend struct Z_Construct_UClass_UMovieSceneFolder_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneFolder) \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneFolder(); \
	friend struct Z_Construct_UClass_UMovieSceneFolder_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneFolder) \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFolder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneFolder(UMovieSceneFolder&&); \
	NO_API UMovieSceneFolder(const UMovieSceneFolder&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneFolder(UMovieSceneFolder&&); \
	NO_API UMovieSceneFolder(const UMovieSceneFolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFolder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFolder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFolder)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FolderName() { return STRUCT_OFFSET(UMovieSceneFolder, FolderName); } \
	FORCEINLINE static uint32 __PPO__ChildFolders() { return STRUCT_OFFSET(UMovieSceneFolder, ChildFolders); } \
	FORCEINLINE static uint32 __PPO__ChildMasterTracks() { return STRUCT_OFFSET(UMovieSceneFolder, ChildMasterTracks); } \
	FORCEINLINE static uint32 __PPO__ChildObjectBindingStrings() { return STRUCT_OFFSET(UMovieSceneFolder, ChildObjectBindingStrings); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_15_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneFolder."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneFolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

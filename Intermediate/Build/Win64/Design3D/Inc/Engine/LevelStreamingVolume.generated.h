// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelStreamingVolume_generated_h
#error "LevelStreamingVolume.generated.h already included, missing '#pragma once' in LevelStreamingVolume.h"
#endif
#define ENGINE_LevelStreamingVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelStreamingVolume(); \
	friend struct Z_Construct_UClass_ALevelStreamingVolume_Statics; \
public: \
	DECLARE_CLASS(ALevelStreamingVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALevelStreamingVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_INCLASS \
private: \
	static void StaticRegisterNativesALevelStreamingVolume(); \
	friend struct Z_Construct_UClass_ALevelStreamingVolume_Statics; \
public: \
	DECLARE_CLASS(ALevelStreamingVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALevelStreamingVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALevelStreamingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelStreamingVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALevelStreamingVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelStreamingVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ALevelStreamingVolume(ALevelStreamingVolume&&); \
	ENGINE_API ALevelStreamingVolume(const ALevelStreamingVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALevelStreamingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ALevelStreamingVolume(ALevelStreamingVolume&&); \
	ENGINE_API ALevelStreamingVolume(const ALevelStreamingVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALevelStreamingVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelStreamingVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelStreamingVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_28_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelStreamingVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALevelStreamingVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h


#define FOREACH_ENUM_ESTREAMINGVOLUMEUSAGE(op) \
	op(SVB_Loading) \
	op(SVB_LoadingAndVisibility) \
	op(SVB_VisibilityBlockingOnLoad) \
	op(SVB_BlockingOnLoad) \
	op(SVB_LoadingNotVisible) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundClass_generated_h
#error "SoundClass.generated.h already included, missing '#pragma once' in SoundClass.h"
#endif
#define ENGINE_SoundClass_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPassiveSoundMixModifier>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundClassProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundClassProperties>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundClassEditorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundClassEditorData>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundClass, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundClass(); \
	friend struct Z_Construct_UClass_USoundClass_Statics; \
public: \
	DECLARE_CLASS(USoundClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundClass) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClass(); \
	friend struct Z_Construct_UClass_USoundClass_Statics; \
public: \
	DECLARE_CLASS(USoundClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundClass) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundClass(USoundClass&&); \
	NO_API USoundClass(const USoundClass&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundClass(USoundClass&&); \
	NO_API USoundClass(const USoundClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClass)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_184_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_187_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundClass."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h


#define FOREACH_ENUM_EAUDIOOUTPUTTARGET(op) \
	op(EAudioOutputTarget::Speaker) \
	op(EAudioOutputTarget::Controller) \
	op(EAudioOutputTarget::ControllerFallbackToSpeaker) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

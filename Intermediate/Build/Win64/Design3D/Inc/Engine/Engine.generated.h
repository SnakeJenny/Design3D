// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Engine_generated_h
#error "Engine.generated.h already included, missing '#pragma once' in Engine.h"
#endif
#define ENGINE_Engine_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_606_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPluginRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPluginRedirect>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_593_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStructRedirect>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_562_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClassRedirect>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_549_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameNameRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGameNameRedirect>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_509_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenMessageString_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScreenMessageString>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_480_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDropNoteInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDropNoteInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_456_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatColorMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStatColorMapping>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_435_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatColorMapEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStatColorMapEntry>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_297_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldContext>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_249_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedNetDriver_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNamedNetDriver>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetDriverDefinition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetDriverDefinition>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLevelStreamingStatus>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFullyLoadedPackagesInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEngine, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngine(); \
	friend struct Z_Construct_UClass_UEngine_Statics; \
public: \
	DECLARE_CLASS(UEngine, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngine) \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_INCLASS \
private: \
	static void StaticRegisterNativesUEngine(); \
	friend struct Z_Construct_UClass_UEngine_Statics; \
public: \
	DECLARE_CLASS(UEngine, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngine) \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngine(UEngine&&); \
	NO_API UEngine(const UEngine&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngine(UEngine&&); \
	NO_API UEngine(const UEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngine)


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TinyFont() { return STRUCT_OFFSET(UEngine, TinyFont); } \
	FORCEINLINE static uint32 __PPO__SmallFont() { return STRUCT_OFFSET(UEngine, SmallFont); } \
	FORCEINLINE static uint32 __PPO__MediumFont() { return STRUCT_OFFSET(UEngine, MediumFont); } \
	FORCEINLINE static uint32 __PPO__LargeFont() { return STRUCT_OFFSET(UEngine, LargeFont); } \
	FORCEINLINE static uint32 __PPO__SubtitleFont() { return STRUCT_OFFSET(UEngine, SubtitleFont); } \
	FORCEINLINE static uint32 __PPO__AdditionalFonts() { return STRUCT_OFFSET(UEngine, AdditionalFonts); } \
	FORCEINLINE static uint32 __PPO__DefaultCustomTimeStep() { return STRUCT_OFFSET(UEngine, DefaultCustomTimeStep); } \
	FORCEINLINE static uint32 __PPO__CurrentCustomTimeStep() { return STRUCT_OFFSET(UEngine, CurrentCustomTimeStep); } \
	FORCEINLINE static uint32 __PPO__DefaultTimecodeProvider() { return STRUCT_OFFSET(UEngine, DefaultTimecodeProvider); } \
	FORCEINLINE static uint32 __PPO__CustomTimecodeProvider() { return STRUCT_OFFSET(UEngine, CustomTimecodeProvider); } \
	FORCEINLINE static uint32 __PPO__DefaultSelectedMaterialColor() { return STRUCT_OFFSET(UEngine, DefaultSelectedMaterialColor); } \
	FORCEINLINE static uint32 __PPO__SelectedMaterialColor() { return STRUCT_OFFSET(UEngine, SelectedMaterialColor); } \
	FORCEINLINE static uint32 __PPO__SelectionOutlineColor() { return STRUCT_OFFSET(UEngine, SelectionOutlineColor); } \
	FORCEINLINE static uint32 __PPO__SubduedSelectionOutlineColor() { return STRUCT_OFFSET(UEngine, SubduedSelectionOutlineColor); } \
	FORCEINLINE static uint32 __PPO__SelectedMaterialColorOverride() { return STRUCT_OFFSET(UEngine, SelectedMaterialColorOverride); } \
	FORCEINLINE static uint32 __PPO__bIsOverridingSelectedColor() { return STRUCT_OFFSET(UEngine, bIsOverridingSelectedColor); } \
	FORCEINLINE static uint32 __PPO__ScreenSaverInhibitorSemaphore() { return STRUCT_OFFSET(UEngine, ScreenSaverInhibitorSemaphore); } \
	FORCEINLINE static uint32 __PPO__NextWorldContextHandle() { return STRUCT_OFFSET(UEngine, NextWorldContextHandle); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_636_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_641_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Engine."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Engine_h


#define FOREACH_ENUM_ECONSOLETYPE(op) \
	op(CONSOLE_Any) \
	op(CONSOLE_Mobile) 
#define FOREACH_ENUM_ETRANSITIONTYPE(op) \
	op(TT_None) \
	op(TT_Paused) \
	op(TT_Loading) \
	op(TT_Saving) \
	op(TT_Connecting) \
	op(TT_Precaching) \
	op(TT_WaitingToConnect) 
#define FOREACH_ENUM_EFULLYLOADPACKAGETYPE(op) \
	op(FULLYLOAD_Map) \
	op(FULLYLOAD_Game_PreLoadClass) \
	op(FULLYLOAD_Game_PostLoadClass) \
	op(FULLYLOAD_Always) \
	op(FULLYLOAD_Mutator) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

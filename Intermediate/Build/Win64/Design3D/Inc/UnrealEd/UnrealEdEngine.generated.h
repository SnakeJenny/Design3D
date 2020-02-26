// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UnrealEdEngine_generated_h
#error "UnrealEdEngine.generated.h already included, missing '#pragma once' in UnrealEdEngine.h"
#endif
#define UNREALED_UnrealEdEngine_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTemplateMapInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FTemplateMapInfo>();

#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassMoveInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FClassMoveInfo>();

#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUnrealEdEngine, NO_API)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealEdEngine(); \
	friend struct Z_Construct_UClass_UUnrealEdEngine_Statics; \
public: \
	DECLARE_CLASS(UUnrealEdEngine, UEditorEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUnrealEdEngine) \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_ARCHIVESERIALIZER


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealEdEngine(); \
	friend struct Z_Construct_UClass_UUnrealEdEngine_Statics; \
public: \
	DECLARE_CLASS(UUnrealEdEngine, UEditorEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUnrealEdEngine) \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_ARCHIVESERIALIZER


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealEdEngine(UUnrealEdEngine&&); \
	NO_API UUnrealEdEngine(const UUnrealEdEngine&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealEdEngine(UUnrealEdEngine&&); \
	NO_API UUnrealEdEngine(const UUnrealEdEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdEngine)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_111_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_115_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUnrealEdEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h


#define FOREACH_ENUM_EWRITEDISALLOWEDWARNINGSTATE(op) \
	op(WDWS_PendingWarn) \
	op(WDWS_Warned) \
	op(WDWS_WarningUnnecessary) 
#define FOREACH_ENUM_EPACKAGENOTIFYSTATE(op) \
	op(NS_Updating) \
	op(NS_BalloonPrompted) \
	op(NS_DialogPrompted) \
	op(NS_PendingPrompt) \
	op(NS_PendingWarning) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

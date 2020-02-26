// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UEditorTutorial;
class AActor;
#ifdef INTROTUTORIALS_EditorTutorial_generated_h
#error "EditorTutorial.generated.h already included, missing '#pragma once' in EditorTutorial.h"
#endif
#define INTROTUTORIALS_EditorTutorial_generated_h

#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_203_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialStage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<struct FTutorialStage>();

#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<struct FTutorialWidgetContent>();

#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<struct FTutorialContentAnchor>();

#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialContent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<struct FTutorialContent>();

#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialCategory_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<struct FTutorialCategory>();

#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEngineFolderVisibilty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorTutorial::GetEngineFolderVisibilty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEngineFolderVisibilty) \
	{ \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::SetEngineFolderVisibilty(Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Asset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::OpenAsset(Z_Param_Asset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginTutorial) \
	{ \
		P_GET_OBJECT(UEditorTutorial,Z_Param_TutorialToStart); \
		P_GET_UBOOL(Z_Param_bRestart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::BeginTutorial(Z_Param_TutorialToStart,Z_Param_bRestart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToPreviousTutorialStage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::GoToPreviousTutorialStage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToNextTutorialStage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::GoToNextTutorialStage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEngineFolderVisibilty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorTutorial::GetEngineFolderVisibilty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEngineFolderVisibilty) \
	{ \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::SetEngineFolderVisibilty(Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Asset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::OpenAsset(Z_Param_Asset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginTutorial) \
	{ \
		P_GET_OBJECT(UEditorTutorial,Z_Param_TutorialToStart); \
		P_GET_UBOOL(Z_Param_bRestart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::BeginTutorial(Z_Param_TutorialToStart,Z_Param_bRestart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToPreviousTutorialStage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::GoToPreviousTutorialStage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToNextTutorialStage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorTutorial::GoToNextTutorialStage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_EVENT_PARMS \
	struct EditorTutorial_eventOnTutorialStageEnded_Parms \
	{ \
		FName StageName; \
	}; \
	struct EditorTutorial_eventOnTutorialStageStarted_Parms \
	{ \
		FName StageName; \
	};


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_CALLBACK_WRAPPERS
#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorTutorial(); \
	friend struct Z_Construct_UClass_UEditorTutorial_Statics; \
public: \
	DECLARE_CLASS(UEditorTutorial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroTutorials"), NO_API) \
	DECLARE_SERIALIZER(UEditorTutorial)


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_INCLASS \
private: \
	static void StaticRegisterNativesUEditorTutorial(); \
	friend struct Z_Construct_UClass_UEditorTutorial_Statics; \
public: \
	DECLARE_CLASS(UEditorTutorial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroTutorials"), NO_API) \
	DECLARE_SERIALIZER(UEditorTutorial)


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorTutorial(UEditorTutorial&&); \
	NO_API UEditorTutorial(const UEditorTutorial&); \
public:


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorTutorial(UEditorTutorial&&); \
	NO_API UEditorTutorial(const UEditorTutorial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorial)


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_235_PROLOG \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_EVENT_PARMS


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_RPC_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_CALLBACK_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_INCLASS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_CALLBACK_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_238_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorTutorial."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTROTUTORIALS_API UClass* StaticClass<class UEditorTutorial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h


#define FOREACH_ENUM_ETUTORIALANCHORIDENTIFIER(op) \
	op(ETutorialAnchorIdentifier::None) \
	op(ETutorialAnchorIdentifier::NamedWidget) \
	op(ETutorialAnchorIdentifier::Asset) 
#define FOREACH_ENUM_ETUTORIALCONTENT(op) \
	op(ETutorialContent::None) \
	op(ETutorialContent::Text) \
	op(ETutorialContent::UDNExcerpt) \
	op(ETutorialContent::RichText) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
enum class ELevelVisibilityDirtyMode : uint8;
class ULevelStreaming;
class AActor;
#ifdef UNREALED_EditorLevelUtils_generated_h
#error "EditorLevelUtils.generated.h already included, missing '#pragma once' in EditorLevelUtils.h"
#endif
#define UNREALED_EditorLevelUtils_generated_h

#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLevelVisibility) \
	{ \
		P_GET_OBJECT(ULevel,Z_Param_Level); \
		P_GET_UBOOL(Z_Param_bShouldBeVisible); \
		P_GET_UBOOL(Z_Param_bForceLayersVisible); \
		P_GET_ENUM(ELevelVisibilityDirtyMode,Z_Param_ModifyMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelUtils::SetLevelVisibility(Z_Param_Level,Z_Param_bShouldBeVisible,Z_Param_bForceLayersVisible,ELevelVisibilityDirtyMode(Z_Param_ModifyMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveSelectedActorsToLevel) \
	{ \
		P_GET_OBJECT(ULevelStreaming,Z_Param_DestLevel); \
		P_GET_UBOOL(Z_Param_bWarnAboutReferences); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorLevelUtils::MoveSelectedActorsToLevel(Z_Param_DestLevel,Z_Param_bWarnAboutReferences); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveActorsToLevel) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToMove); \
		P_GET_OBJECT(ULevelStreaming,Z_Param_DestStreamingLevel); \
		P_GET_UBOOL(Z_Param_bWarnAboutReferences); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorLevelUtils::MoveActorsToLevel(Z_Param_Out_ActorsToMove,Z_Param_DestStreamingLevel,Z_Param_bWarnAboutReferences); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLevelCurrent) \
	{ \
		P_GET_OBJECT(ULevelStreaming,Z_Param_InStreamingLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelUtils::MakeLevelCurrent(Z_Param_InStreamingLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNewStreamingLevel) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_LevelStreamingClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewLevelPath); \
		P_GET_UBOOL(Z_Param_bMoveSelectedActorsIntoNewLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=UEditorLevelUtils::CreateNewStreamingLevel(Z_Param_LevelStreamingClass,Z_Param_NewLevelPath,Z_Param_bMoveSelectedActorsIntoNewLevel); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLevelVisibility) \
	{ \
		P_GET_OBJECT(ULevel,Z_Param_Level); \
		P_GET_UBOOL(Z_Param_bShouldBeVisible); \
		P_GET_UBOOL(Z_Param_bForceLayersVisible); \
		P_GET_ENUM(ELevelVisibilityDirtyMode,Z_Param_ModifyMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelUtils::SetLevelVisibility(Z_Param_Level,Z_Param_bShouldBeVisible,Z_Param_bForceLayersVisible,ELevelVisibilityDirtyMode(Z_Param_ModifyMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveSelectedActorsToLevel) \
	{ \
		P_GET_OBJECT(ULevelStreaming,Z_Param_DestLevel); \
		P_GET_UBOOL(Z_Param_bWarnAboutReferences); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorLevelUtils::MoveSelectedActorsToLevel(Z_Param_DestLevel,Z_Param_bWarnAboutReferences); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveActorsToLevel) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToMove); \
		P_GET_OBJECT(ULevelStreaming,Z_Param_DestStreamingLevel); \
		P_GET_UBOOL(Z_Param_bWarnAboutReferences); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorLevelUtils::MoveActorsToLevel(Z_Param_Out_ActorsToMove,Z_Param_DestStreamingLevel,Z_Param_bWarnAboutReferences); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLevelCurrent) \
	{ \
		P_GET_OBJECT(ULevelStreaming,Z_Param_InStreamingLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelUtils::MakeLevelCurrent(Z_Param_InStreamingLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNewStreamingLevel) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_LevelStreamingClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewLevelPath); \
		P_GET_UBOOL(Z_Param_bMoveSelectedActorsIntoNewLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=UEditorLevelUtils::CreateNewStreamingLevel(Z_Param_LevelStreamingClass,Z_Param_NewLevelPath,Z_Param_bMoveSelectedActorsIntoNewLevel); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLevelUtils(); \
	friend struct Z_Construct_UClass_UEditorLevelUtils_Statics; \
public: \
	DECLARE_CLASS(UEditorLevelUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorLevelUtils)


#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUEditorLevelUtils(); \
	friend struct Z_Construct_UClass_UEditorLevelUtils_Statics; \
public: \
	DECLARE_CLASS(UEditorLevelUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorLevelUtils)


#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLevelUtils(UEditorLevelUtils&&); \
	NO_API UEditorLevelUtils(const UEditorLevelUtils&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLevelUtils(UEditorLevelUtils&&); \
	NO_API UEditorLevelUtils(const UEditorLevelUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelUtils)


#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_29_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorLevelUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h


#define FOREACH_ENUM_ELEVELVISIBILITYDIRTYMODE(op) \
	op(ELevelVisibilityDirtyMode::ModifyOnChange) \
	op(ELevelVisibilityDirtyMode::DontModify) 

enum class ELevelVisibilityDirtyMode : uint8;
template<> UNREALED_API UEnum* StaticEnum<ELevelVisibilityDirtyMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

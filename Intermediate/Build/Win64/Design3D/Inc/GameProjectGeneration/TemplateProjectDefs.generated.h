// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPROJECTGENERATION_TemplateProjectDefs_generated_h
#error "TemplateProjectDefs.generated.h already included, missing '#pragma once' in TemplateProjectDefs.h"
#endif
#define GAMEPROJECTGENERATION_TemplateProjectDefs_generated_h

#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics; \
	GAMEPROJECTGENERATION_API static class UScriptStruct* StaticStruct();


template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<struct FLocalizedTemplateString>();

#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTemplateFolderRename_Statics; \
	GAMEPROJECTGENERATION_API static class UScriptStruct* StaticStruct();


template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<struct FTemplateFolderRename>();

#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTemplateReplacement_Statics; \
	GAMEPROJECTGENERATION_API static class UScriptStruct* StaticStruct();


template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<struct FTemplateReplacement>();

#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_RPC_WRAPPERS
#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateProjectDefs(); \
	friend struct Z_Construct_UClass_UTemplateProjectDefs_Statics; \
public: \
	DECLARE_CLASS(UTemplateProjectDefs, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameProjectGeneration"), GAMEPROJECTGENERATION_API) \
	DECLARE_SERIALIZER(UTemplateProjectDefs) \
	static const TCHAR* StaticConfigName() {return TEXT("TemplateDefs");} \



#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUTemplateProjectDefs(); \
	friend struct Z_Construct_UClass_UTemplateProjectDefs_Statics; \
public: \
	DECLARE_CLASS(UTemplateProjectDefs, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameProjectGeneration"), GAMEPROJECTGENERATION_API) \
	DECLARE_SERIALIZER(UTemplateProjectDefs) \
	static const TCHAR* StaticConfigName() {return TEXT("TemplateDefs");} \



#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPROJECTGENERATION_API UTemplateProjectDefs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateProjectDefs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPROJECTGENERATION_API, UTemplateProjectDefs); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateProjectDefs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPROJECTGENERATION_API UTemplateProjectDefs(UTemplateProjectDefs&&); \
	GAMEPROJECTGENERATION_API UTemplateProjectDefs(const UTemplateProjectDefs&); \
public:


#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPROJECTGENERATION_API UTemplateProjectDefs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPROJECTGENERATION_API UTemplateProjectDefs(UTemplateProjectDefs&&); \
	GAMEPROJECTGENERATION_API UTemplateProjectDefs(const UTemplateProjectDefs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPROJECTGENERATION_API, UTemplateProjectDefs); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateProjectDefs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateProjectDefs)


#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_65_PROLOG
#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_RPC_WRAPPERS \
	Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_INCLASS \
	Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TemplateProjectDefs."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPROJECTGENERATION_API UClass* StaticClass<class UTemplateProjectDefs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

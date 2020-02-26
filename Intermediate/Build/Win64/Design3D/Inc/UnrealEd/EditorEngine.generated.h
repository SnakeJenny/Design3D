// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorEngine_generated_h
#error "EditorEngine.generated.h already included, missing '#pragma once' in EditorEngine.h"
#endif
#define UNREALED_EditorEngine_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_331_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FSelectionStateOfLevel>();

#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCopySelectedInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FCopySelectedInfo>();

#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPIELoginInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FPIELoginInfo>();

#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FSlatePlayInEditorInfo>();

#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorEngine(); \
	friend struct Z_Construct_UClass_UEditorEngine_Statics; \
public: \
	DECLARE_CLASS(UEditorEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorEngine)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_INCLASS \
private: \
	static void StaticRegisterNativesUEditorEngine(); \
	friend struct Z_Construct_UClass_UEditorEngine_Statics; \
public: \
	DECLARE_CLASS(UEditorEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorEngine)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorEngine(UEditorEngine&&); \
	NO_API UEditorEngine(const UEditorEngine&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorEngine(UEditorEngine&&); \
	NO_API UEditorEngine(const UEditorEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEngine)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EditorWorldExtensionsManager() { return STRUCT_OFFSET(UEditorEngine, EditorWorldExtensionsManager); } \
	FORCEINLINE static uint32 __PPO__ActorGroupingUtilsClassName() { return STRUCT_OFFSET(UEditorEngine, ActorGroupingUtilsClassName); } \
	FORCEINLINE static uint32 __PPO__ActorGroupingUtils() { return STRUCT_OFFSET(UEditorEngine, ActorGroupingUtils); }


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_359_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_363_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h


#define FOREACH_ENUM_EPASTETO(op) \
	op(PT_OriginalLocation) \
	op(PT_Here) \
	op(PT_WorldOrigin) 
#define FOREACH_ENUM_EMAPSETBRUSHFLAGS(op) \
	op(MSB_BrushColor) \
	op(MSB_Group) \
	op(MSB_PolyFlags) \
	op(MSB_BrushType) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

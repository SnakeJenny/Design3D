// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorSubsystem;
#ifdef UNREALED_EditorSubsystemBlueprintLibrary_generated_h
#error "EditorSubsystemBlueprintLibrary.generated.h already included, missing '#pragma once' in EditorSubsystemBlueprintLibrary.h"
#endif
#define UNREALED_EditorSubsystemBlueprintLibrary_generated_h

#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEditorSubsystem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEditorSubsystem**)Z_Param__Result=UEditorSubsystemBlueprintLibrary::GetEditorSubsystem(Z_Param_Class); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEditorSubsystem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEditorSubsystem**)Z_Param__Result=UEditorSubsystemBlueprintLibrary::GetEditorSubsystem(Z_Param_Class); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSubsystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorSubsystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorSubsystemBlueprintLibrary)


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEditorSubsystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorSubsystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorSubsystemBlueprintLibrary)


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorSubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSubsystemBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSubsystemBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSubsystemBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorSubsystemBlueprintLibrary(UEditorSubsystemBlueprintLibrary&&); \
	NO_API UEditorSubsystemBlueprintLibrary(const UEditorSubsystemBlueprintLibrary&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorSubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorSubsystemBlueprintLibrary(UEditorSubsystemBlueprintLibrary&&); \
	NO_API UEditorSubsystemBlueprintLibrary(const UEditorSubsystemBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSubsystemBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSubsystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSubsystemBlueprintLibrary)


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_11_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorSubsystemBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

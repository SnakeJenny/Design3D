// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UserDefinedStructEditorData_generated_h
#error "UserDefinedStructEditorData.generated.h already included, missing '#pragma once' in UserDefinedStructEditorData.h"
#endif
#define UNREALED_UserDefinedStructEditorData_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructVariableDescription_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FStructVariableDescription>();

#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedStructEditorData(); \
	friend struct Z_Construct_UClass_UUserDefinedStructEditorData_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedStructEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedStructEditorData)


#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedStructEditorData(); \
	friend struct Z_Construct_UClass_UUserDefinedStructEditorData_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedStructEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedStructEditorData)


#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDefinedStructEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedStructEditorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedStructEditorData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedStructEditorData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedStructEditorData(UUserDefinedStructEditorData&&); \
	NO_API UUserDefinedStructEditorData(const UUserDefinedStructEditorData&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDefinedStructEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedStructEditorData(UUserDefinedStructEditorData&&); \
	NO_API UUserDefinedStructEditorData(const UUserDefinedStructEditorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedStructEditorData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedStructEditorData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedStructEditorData)


#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UniqueNameId() { return STRUCT_OFFSET(UUserDefinedStructEditorData, UniqueNameId); }


#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_110_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_113_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UserDefinedStructEditorData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUserDefinedStructEditorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

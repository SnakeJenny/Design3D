// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNDOHISTORY_UndoHistorySettings_generated_h
#error "UndoHistorySettings.generated.h already included, missing '#pragma once' in UndoHistorySettings.h"
#endif
#define UNDOHISTORY_UndoHistorySettings_generated_h

#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_RPC_WRAPPERS
#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUndoHistorySettings(); \
	friend struct Z_Construct_UClass_UUndoHistorySettings_Statics; \
public: \
	DECLARE_CLASS(UUndoHistorySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UndoHistory"), NO_API) \
	DECLARE_SERIALIZER(UUndoHistorySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUndoHistorySettings(); \
	friend struct Z_Construct_UClass_UUndoHistorySettings_Statics; \
public: \
	DECLARE_CLASS(UUndoHistorySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UndoHistory"), NO_API) \
	DECLARE_SERIALIZER(UUndoHistorySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUndoHistorySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUndoHistorySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUndoHistorySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUndoHistorySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUndoHistorySettings(UUndoHistorySettings&&); \
	NO_API UUndoHistorySettings(const UUndoHistorySettings&); \
public:


#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUndoHistorySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUndoHistorySettings(UUndoHistorySettings&&); \
	NO_API UUndoHistorySettings(const UUndoHistorySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUndoHistorySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUndoHistorySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUndoHistorySettings)


#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_13_PROLOG
#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_RPC_WRAPPERS \
	Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_INCLASS \
	Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNDOHISTORY_API UClass* StaticClass<class UUndoHistorySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UndoHistory_Private_Classes_UndoHistorySettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

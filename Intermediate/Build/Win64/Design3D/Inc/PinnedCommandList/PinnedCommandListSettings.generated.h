// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINNEDCOMMANDLIST_PinnedCommandListSettings_generated_h
#error "PinnedCommandListSettings.generated.h already included, missing '#pragma once' in PinnedCommandListSettings.h"
#endif
#define PINNEDCOMMANDLIST_PinnedCommandListSettings_generated_h

#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics; \
	PINNEDCOMMANDLIST_API static class UScriptStruct* StaticStruct();


template<> PINNEDCOMMANDLIST_API UScriptStruct* StaticStruct<struct FPinnedCommandListContext>();

#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics; \
	PINNEDCOMMANDLIST_API static class UScriptStruct* StaticStruct();


template<> PINNEDCOMMANDLIST_API UScriptStruct* StaticStruct<struct FPinnedCommandListCommand>();

#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_RPC_WRAPPERS
#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPinnedCommandListSettings(); \
	friend struct Z_Construct_UClass_UPinnedCommandListSettings_Statics; \
public: \
	DECLARE_CLASS(UPinnedCommandListSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PinnedCommandList"), NO_API) \
	DECLARE_SERIALIZER(UPinnedCommandListSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUPinnedCommandListSettings(); \
	friend struct Z_Construct_UClass_UPinnedCommandListSettings_Statics; \
public: \
	DECLARE_CLASS(UPinnedCommandListSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PinnedCommandList"), NO_API) \
	DECLARE_SERIALIZER(UPinnedCommandListSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPinnedCommandListSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPinnedCommandListSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPinnedCommandListSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPinnedCommandListSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPinnedCommandListSettings(UPinnedCommandListSettings&&); \
	NO_API UPinnedCommandListSettings(const UPinnedCommandListSettings&); \
public:


#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPinnedCommandListSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPinnedCommandListSettings(UPinnedCommandListSettings&&); \
	NO_API UPinnedCommandListSettings(const UPinnedCommandListSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPinnedCommandListSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPinnedCommandListSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPinnedCommandListSettings)


#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_53_PROLOG
#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_RPC_WRAPPERS \
	Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_INCLASS \
	Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINNEDCOMMANDLIST_API UClass* StaticClass<class UPinnedCommandListSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h


#define FOREACH_ENUM_EPINNEDCOMMANDLISTTYPE(op) \
	op(EPinnedCommandListType::Command) \
	op(EPinnedCommandListType::CustomWidget) 

enum class EPinnedCommandListType : uint8;
template<> PINNEDCOMMANDLIST_API UEnum* StaticEnum<EPinnedCommandListType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

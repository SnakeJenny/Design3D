// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGS_GameplayTagsSettings_generated_h
#error "GameplayTagsSettings.generated.h already included, missing '#pragma once' in GameplayTagsSettings.h"
#endif
#define GAMEPLAYTAGS_GameplayTagsSettings_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FRestrictedConfigInfo>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagCategoryRemap>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagRedirect>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsList(); \
	friend struct Z_Construct_UClass_UGameplayTagsList_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsList) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTagsList");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsList(); \
	friend struct Z_Construct_UClass_UGameplayTagsList_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsList) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTagsList");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsList(UGameplayTagsList&&); \
	NO_API UGameplayTagsList(const UGameplayTagsList&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsList(UGameplayTagsList&&); \
	NO_API UGameplayTagsList(const UGameplayTagsList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsList)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_55_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsList."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UGameplayTagsList>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURestrictedGameplayTagsList(); \
	friend struct Z_Construct_UClass_URestrictedGameplayTagsList_Statics; \
public: \
	DECLARE_CLASS(URestrictedGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(URestrictedGameplayTagsList) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_INCLASS \
private: \
	static void StaticRegisterNativesURestrictedGameplayTagsList(); \
	friend struct Z_Construct_UClass_URestrictedGameplayTagsList_Statics; \
public: \
	DECLARE_CLASS(URestrictedGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(URestrictedGameplayTagsList) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestrictedGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestrictedGameplayTagsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestrictedGameplayTagsList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestrictedGameplayTagsList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URestrictedGameplayTagsList(URestrictedGameplayTagsList&&); \
	NO_API URestrictedGameplayTagsList(const URestrictedGameplayTagsList&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestrictedGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URestrictedGameplayTagsList(URestrictedGameplayTagsList&&); \
	NO_API URestrictedGameplayTagsList(const URestrictedGameplayTagsList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestrictedGameplayTagsList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestrictedGameplayTagsList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestrictedGameplayTagsList)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_73_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_76_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RestrictedGameplayTagsList."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class URestrictedGameplayTagsList>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsSettings(); \
	friend struct Z_Construct_UClass_UGameplayTagsSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsSettings, UGameplayTagsList, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsSettings(); \
	friend struct Z_Construct_UClass_UGameplayTagsSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsSettings, UGameplayTagsList, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsSettings(UGameplayTagsSettings&&); \
	NO_API UGameplayTagsSettings(const UGameplayTagsSettings&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsSettings(UGameplayTagsSettings&&); \
	NO_API UGameplayTagsSettings(const UGameplayTagsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsSettings)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_120_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_123_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UGameplayTagsSettings>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsDeveloperSettings(); \
	friend struct Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsDeveloperSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsDeveloperSettings(); \
	friend struct Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsDeveloperSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsDeveloperSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsDeveloperSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsDeveloperSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsDeveloperSettings(UGameplayTagsDeveloperSettings&&); \
	NO_API UGameplayTagsDeveloperSettings(const UGameplayTagsDeveloperSettings&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsDeveloperSettings(UGameplayTagsDeveloperSettings&&); \
	NO_API UGameplayTagsDeveloperSettings(const UGameplayTagsDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsDeveloperSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsDeveloperSettings)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_185_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_188_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsDeveloperSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UGameplayTagsDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

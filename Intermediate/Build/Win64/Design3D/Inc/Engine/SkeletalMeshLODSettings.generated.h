// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshLODSettings_generated_h
#error "SkeletalMeshLODSettings.generated.h already included, missing '#pragma once' in SkeletalMeshLODSettings.h"
#endif
#define ENGINE_SkeletalMeshLODSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshLODGroupSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneFilter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneFilter>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshLODSettings, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshLODSettings(); \
	friend struct Z_Construct_UClass_USkeletalMeshLODSettings_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshLODSettings, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshLODSettings) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshLODSettings(); \
	friend struct Z_Construct_UClass_USkeletalMeshLODSettings_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshLODSettings, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshLODSettings) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshLODSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshLODSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalMeshLODSettings(USkeletalMeshLODSettings&&); \
	ENGINE_API USkeletalMeshLODSettings(const USkeletalMeshLODSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalMeshLODSettings(USkeletalMeshLODSettings&&); \
	ENGINE_API USkeletalMeshLODSettings(const USkeletalMeshLODSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshLODSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshLODSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshLODSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinLod() { return STRUCT_OFFSET(USkeletalMeshLODSettings, MinLod); } \
	FORCEINLINE static uint32 __PPO__LODGroups() { return STRUCT_OFFSET(USkeletalMeshLODSettings, LODGroups); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_112_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_115_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshLODSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshLODSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h


#define FOREACH_ENUM_EBONEFILTERACTIONOPTION(op) \
	op(EBoneFilterActionOption::Remove) \
	op(EBoneFilterActionOption::Keep) \
	op(EBoneFilterActionOption::Invalid) 

enum class EBoneFilterActionOption : uint8;
template<> ENGINE_API UEnum* StaticEnum<EBoneFilterActionOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

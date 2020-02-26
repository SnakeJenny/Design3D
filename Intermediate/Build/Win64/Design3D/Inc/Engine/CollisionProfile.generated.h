// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CollisionProfile_generated_h
#error "CollisionProfile.generated.h already included, missing '#pragma once' in CollisionProfile.h"
#endif
#define ENGINE_CollisionProfile_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomProfile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCustomProfile>();

#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomChannelSetup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCustomChannelSetup>();

#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollisionResponseTemplate>();

#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollisionProfileName_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollisionProfileName>();

#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollisionProfile(); \
	friend struct Z_Construct_UClass_UCollisionProfile_Statics; \
public: \
	DECLARE_CLASS(UCollisionProfile, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCollisionProfile) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_INCLASS \
private: \
	static void StaticRegisterNativesUCollisionProfile(); \
	friend struct Z_Construct_UClass_UCollisionProfile_Statics; \
public: \
	DECLARE_CLASS(UCollisionProfile, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCollisionProfile) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCollisionProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCollisionProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCollisionProfile(UCollisionProfile&&); \
	ENGINE_API UCollisionProfile(const UCollisionProfile&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCollisionProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCollisionProfile(UCollisionProfile&&); \
	ENGINE_API UCollisionProfile(const UCollisionProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCollisionProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionProfile)


#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Profiles() { return STRUCT_OFFSET(UCollisionProfile, Profiles); } \
	FORCEINLINE static uint32 __PPO__DefaultChannelResponses() { return STRUCT_OFFSET(UCollisionProfile, DefaultChannelResponses); } \
	FORCEINLINE static uint32 __PPO__EditProfiles() { return STRUCT_OFFSET(UCollisionProfile, EditProfiles); } \
	FORCEINLINE static uint32 __PPO__ProfileRedirects() { return STRUCT_OFFSET(UCollisionProfile, ProfileRedirects); } \
	FORCEINLINE static uint32 __PPO__CollisionChannelRedirects() { return STRUCT_OFFSET(UCollisionProfile, CollisionChannelRedirects); }


#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_152_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_155_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CollisionProfile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCollisionProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldSettings_generated_h
#error "WorldSettings.generated.h already included, missing '#pragma once' in WorldSettings.h"
#endif
#define ENGINE_WorldSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_364_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBroadphaseSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBroadphaseSettings>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHierarchicalSimplification>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetViewer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetViewer>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLightmassWorldInfoSettings>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchicalLODSetup(); \
	friend struct Z_Construct_UClass_UHierarchicalLODSetup_Statics; \
public: \
	DECLARE_CLASS(UHierarchicalLODSetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHierarchicalLODSetup)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_INCLASS \
private: \
	static void StaticRegisterNativesUHierarchicalLODSetup(); \
	friend struct Z_Construct_UClass_UHierarchicalLODSetup_Statics; \
public: \
	DECLARE_CLASS(UHierarchicalLODSetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHierarchicalLODSetup)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHierarchicalLODSetup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalLODSetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchicalLODSetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalLODSetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHierarchicalLODSetup(UHierarchicalLODSetup&&); \
	NO_API UHierarchicalLODSetup(const UHierarchicalLODSetup&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHierarchicalLODSetup(UHierarchicalLODSetup&&); \
	NO_API UHierarchicalLODSetup(const UHierarchicalLODSetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchicalLODSetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalLODSetup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHierarchicalLODSetup)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_337_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_340_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHierarchicalLODSetup>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WorldGravityZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WorldGravityZ(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WorldGravityZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WorldGravityZ(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldSettings, NO_API)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldSettings(); \
	friend struct Z_Construct_UClass_AWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AWorldSettings, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldSettings) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AWorldSettings*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_INCLASS \
private: \
	static void StaticRegisterNativesAWorldSettings(); \
	friend struct Z_Construct_UClass_AWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AWorldSettings, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldSettings) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AWorldSettings*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldSettings(AWorldSettings&&); \
	NO_API AWorldSettings(const AWorldSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldSettings(AWorldSettings&&); \
	NO_API AWorldSettings(const AWorldSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldSettings)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavigationSystemConfig() { return STRUCT_OFFSET(AWorldSettings, NavigationSystemConfig); } \
	FORCEINLINE static uint32 __PPO__NavigationSystemConfigOverride() { return STRUCT_OFFSET(AWorldSettings, NavigationSystemConfigOverride); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(AWorldSettings, AssetUserData); } \
	FORCEINLINE static uint32 __PPO__MaxNumberOfBookmarks() { return STRUCT_OFFSET(AWorldSettings, MaxNumberOfBookmarks); } \
	FORCEINLINE static uint32 __PPO__DefaultBookmarkClass() { return STRUCT_OFFSET(AWorldSettings, DefaultBookmarkClass); } \
	FORCEINLINE static uint32 __PPO__BookmarkArray() { return STRUCT_OFFSET(AWorldSettings, BookmarkArray); } \
	FORCEINLINE static uint32 __PPO__LastBookmarkClass() { return STRUCT_OFFSET(AWorldSettings, LastBookmarkClass); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_394_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_397_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h


#define FOREACH_ENUM_EVOLUMELIGHTINGMETHOD(op) \
	op(VLM_VolumetricLightmap) \
	op(VLM_SparseVolumeLightingSamples) 
#define FOREACH_ENUM_EVISIBILITYAGGRESSIVENESS(op) \
	op(VIS_LeastAggressive) \
	op(VIS_ModeratelyAggressive) \
	op(VIS_MostAggressive) \
	op(VIS_Max) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

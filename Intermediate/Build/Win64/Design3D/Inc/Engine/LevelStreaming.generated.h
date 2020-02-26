// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelScriptActor;
class ULevelStreaming;
class ULevel;
#ifdef ENGINE_LevelStreaming_generated_h
#error "LevelStreaming.generated.h already included, missing '#pragma once' in LevelStreaming.h"
#endif
#define ENGINE_LevelStreaming_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_73_DELEGATE \
static inline void FLevelStreamingVisibilityStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingVisibilityStatus) \
{ \
	LevelStreamingVisibilityStatus.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_72_DELEGATE \
static inline void FLevelStreamingLoadedStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingLoadedStatus) \
{ \
	LevelStreamingLoadedStatus.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLevelScriptActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALevelScriptActor**)Z_Param__Result=P_THIS->GetLevelScriptActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInstance) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UniqueInstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=P_THIS->CreateInstance(Z_Param_UniqueInstanceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStreamingStatePending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsStreamingStatePending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLevelLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLevelLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLevelVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLevelVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadedLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevel**)Z_Param__Result=P_THIS->GetLoadedLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldBeLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldBeLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldAssetPackageFName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetWorldAssetPackageFName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPriority(Z_Param_NewPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevelLODIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevelLODIndex(Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldBeLoaded) \
	{ \
		P_GET_UBOOL(Z_Param_bInShouldBeLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldBeLoaded(Z_Param_bInShouldBeLoaded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldBeVisible) \
	{ \
		P_GET_UBOOL(Z_Param_bInShouldBeVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldBeVisible(Z_Param_bInShouldBeVisible); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLevelScriptActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALevelScriptActor**)Z_Param__Result=P_THIS->GetLevelScriptActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInstance) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UniqueInstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=P_THIS->CreateInstance(Z_Param_UniqueInstanceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStreamingStatePending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsStreamingStatePending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLevelLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLevelLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLevelVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLevelVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadedLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevel**)Z_Param__Result=P_THIS->GetLoadedLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldBeLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldBeLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldAssetPackageFName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetWorldAssetPackageFName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPriority(Z_Param_NewPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevelLODIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevelLODIndex(Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldBeLoaded) \
	{ \
		P_GET_UBOOL(Z_Param_bInShouldBeLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldBeLoaded(Z_Param_bInShouldBeLoaded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldBeVisible) \
	{ \
		P_GET_UBOOL(Z_Param_bInShouldBeVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldBeVisible(Z_Param_bInShouldBeVisible); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelStreaming, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreaming(); \
	friend struct Z_Construct_UClass_ULevelStreaming_Statics; \
public: \
	DECLARE_CLASS(ULevelStreaming, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreaming) \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UWorld)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreaming(); \
	friend struct Z_Construct_UClass_ULevelStreaming_Statics; \
public: \
	DECLARE_CLASS(ULevelStreaming, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreaming) \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UWorld)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreaming) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreaming); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreaming); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreaming(ULevelStreaming&&); \
	NO_API ULevelStreaming(const ULevelStreaming&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreaming(ULevelStreaming&&); \
	NO_API ULevelStreaming(const ULevelStreaming&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreaming); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreaming); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreaming)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldAsset() { return STRUCT_OFFSET(ULevelStreaming, WorldAsset); } \
	FORCEINLINE static uint32 __PPO__LevelLODIndex() { return STRUCT_OFFSET(ULevelStreaming, LevelLODIndex); } \
	FORCEINLINE static uint32 __PPO__StreamingPriority() { return STRUCT_OFFSET(ULevelStreaming, StreamingPriority); } \
	FORCEINLINE static uint32 __PPO__LoadedLevel() { return STRUCT_OFFSET(ULevelStreaming, LoadedLevel); } \
	FORCEINLINE static uint32 __PPO__PendingUnloadLevel() { return STRUCT_OFFSET(ULevelStreaming, PendingUnloadLevel); }


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_80_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_83_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelStreaming."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelStreaming>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

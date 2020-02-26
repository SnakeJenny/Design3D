// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimationAsset_generated_h
#error "AnimationAsset.generated.h already included, missing '#pragma once' in AnimationAsset.h"
#endif
#define ENGINE_AnimationAsset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_771_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationGroupReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationGroupReference>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_484_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionMovementParams>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_424_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimGroupInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimGroupInstance>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimTickRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimTickRecord>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMarkerSyncAnimPosition>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendFilter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendFilter>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSampleData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSampleData>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationAsset, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAsset(); \
	friend struct Z_Construct_UClass_UAnimationAsset_Statics; \
public: \
	DECLARE_CLASS(UAnimationAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimationAsset) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationAsset*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationAsset(); \
	friend struct Z_Construct_UClass_UAnimationAsset_Statics; \
public: \
	DECLARE_CLASS(UAnimationAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimationAsset) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationAsset*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimationAsset(UAnimationAsset&&); \
	ENGINE_API UAnimationAsset(const UAnimationAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimationAsset(UAnimationAsset&&); \
	ENGINE_API UAnimationAsset(const UAnimationAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAsset)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Skeleton() { return STRUCT_OFFSET(UAnimationAsset, Skeleton); } \
	FORCEINLINE static uint32 __PPO__MetaData() { return STRUCT_OFFSET(UAnimationAsset, MetaData); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(UAnimationAsset, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_787_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_790_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h


#define FOREACH_ENUM_EANIMGROUPROLE(op) \
	op(EAnimGroupRole::CanBeLeader) \
	op(EAnimGroupRole::AlwaysFollower) \
	op(EAnimGroupRole::AlwaysLeader) \
	op(EAnimGroupRole::TransitionLeader) \
	op(EAnimGroupRole::TransitionFollower) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

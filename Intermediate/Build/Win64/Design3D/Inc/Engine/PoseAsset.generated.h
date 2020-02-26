// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PoseAsset_generated_h
#error "PoseAsset.generated.h already included, missing '#pragma once' in PoseAsset.h"
#endif
#define ENGINE_PoseAsset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseDataContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__PoseNames() { return STRUCT_OFFSET(FPoseDataContainer, PoseNames); } \
	FORCEINLINE static uint32 __PPO__Tracks() { return STRUCT_OFFSET(FPoseDataContainer, Tracks); } \
	FORCEINLINE static uint32 __PPO__TrackMap() { return STRUCT_OFFSET(FPoseDataContainer, TrackMap); } \
	FORCEINLINE static uint32 __PPO__Poses() { return STRUCT_OFFSET(FPoseDataContainer, Poses); } \
	FORCEINLINE static uint32 __PPO__Curves() { return STRUCT_OFFSET(FPoseDataContainer, Curves); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseDataContainer>();

#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseData>();

#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseAsset, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseAsset(); \
	friend struct Z_Construct_UClass_UPoseAsset_Statics; \
public: \
	DECLARE_CLASS(UPoseAsset, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseAsset) \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUPoseAsset(); \
	friend struct Z_Construct_UClass_UPoseAsset_Statics; \
public: \
	DECLARE_CLASS(UPoseAsset, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseAsset) \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPoseAsset(UPoseAsset&&); \
	ENGINE_API UPoseAsset(const UPoseAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPoseAsset(UPoseAsset&&); \
	ENGINE_API UPoseAsset(const UPoseAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseAsset)


#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PoseContainer() { return STRUCT_OFFSET(UPoseAsset, PoseContainer); } \
	FORCEINLINE static uint32 __PPO__bAdditivePose() { return STRUCT_OFFSET(UPoseAsset, bAdditivePose); } \
	FORCEINLINE static uint32 __PPO__BasePoseIndex() { return STRUCT_OFFSET(UPoseAsset, BasePoseIndex); }


#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_131_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_134_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PoseAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

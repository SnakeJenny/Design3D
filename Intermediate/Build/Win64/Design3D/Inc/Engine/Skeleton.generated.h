// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Skeleton_generated_h
#error "Skeleton.generated.h already included, missing '#pragma once' in Skeleton.h"
#endif
#define ENGINE_Skeleton_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVirtualBone_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVirtualBone>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSlotGroup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSlotGroup>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigConfiguration_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRigConfiguration>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNameMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNameMapping>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneReductionSetting_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneReductionSetting>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReferencePose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FReferencePose>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneNode>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletonToMeshLinkup>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeleton, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeleton(); \
	friend struct Z_Construct_UClass_USkeleton_Statics; \
public: \
	DECLARE_CLASS(USkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeleton) \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeleton*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_INCLASS \
private: \
	static void StaticRegisterNativesUSkeleton(); \
	friend struct Z_Construct_UClass_USkeleton_Statics; \
public: \
	DECLARE_CLASS(USkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeleton) \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeleton*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeleton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeleton(USkeleton&&); \
	ENGINE_API USkeleton(const USkeleton&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeleton(USkeleton&&); \
	ENGINE_API USkeleton(const USkeleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeleton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeleton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeleton)


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoneTree() { return STRUCT_OFFSET(USkeleton, BoneTree); } \
	FORCEINLINE static uint32 __PPO__RefLocalPoses_DEPRECATED() { return STRUCT_OFFSET(USkeleton, RefLocalPoses_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__VirtualBoneGuid() { return STRUCT_OFFSET(USkeleton, VirtualBoneGuid); } \
	FORCEINLINE static uint32 __PPO__VirtualBones() { return STRUCT_OFFSET(USkeleton, VirtualBones); } \
	FORCEINLINE static uint32 __PPO__SmartNames() { return STRUCT_OFFSET(USkeleton, SmartNames); } \
	FORCEINLINE static uint32 __PPO__SlotGroups() { return STRUCT_OFFSET(USkeleton, SlotGroups); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(USkeleton, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_280_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Skeleton."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h


#define FOREACH_ENUM_EBONETRANSLATIONRETARGETINGMODE(op) \
	op(EBoneTranslationRetargetingMode::Animation) \
	op(EBoneTranslationRetargetingMode::Skeleton) \
	op(EBoneTranslationRetargetingMode::AnimationScaled) \
	op(EBoneTranslationRetargetingMode::AnimationRelative) \
	op(EBoneTranslationRetargetingMode::OrientAndScale) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

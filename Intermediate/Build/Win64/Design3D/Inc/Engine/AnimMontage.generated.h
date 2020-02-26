// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimMontage_generated_h
#error "AnimMontage.generated.h already included, missing '#pragma once' in AnimMontage.h"
#endif
#define ENGINE_AnimMontage_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimMontageInstance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__NextSections() { return STRUCT_OFFSET(FAnimMontageInstance, NextSections); } \
	FORCEINLINE static uint32 __PPO__PrevSections() { return STRUCT_OFFSET(FAnimMontageInstance, PrevSections); } \
	FORCEINLINE static uint32 __PPO__ActiveStateBranchingPoints() { return STRUCT_OFFSET(FAnimMontageInstance, ActiveStateBranchingPoints); } \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(FAnimMontageInstance, Position); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(FAnimMontageInstance, PlayRate); } \
	FORCEINLINE static uint32 __PPO__Blend() { return STRUCT_OFFSET(FAnimMontageInstance, Blend); } \
	FORCEINLINE static uint32 __PPO__DisableRootMotionCount() { return STRUCT_OFFSET(FAnimMontageInstance, DisableRootMotionCount); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimMontageInstance>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBranchingPointMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBranchingPointMarker>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBranchingPoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBranchingPoint>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSlotAnimationTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositeSection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCompositeSection>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDefaultBlendOutTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultBlendOutTime(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDefaultBlendOutTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultBlendOutTime(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimMontage(); \
	friend struct Z_Construct_UClass_UAnimMontage_Statics; \
public: \
	DECLARE_CLASS(UAnimMontage, UAnimCompositeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimMontage) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_INCLASS \
private: \
	static void StaticRegisterNativesUAnimMontage(); \
	friend struct Z_Construct_UClass_UAnimMontage_Statics; \
public: \
	DECLARE_CLASS(UAnimMontage, UAnimCompositeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimMontage) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimMontage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimMontage(UAnimMontage&&); \
	ENGINE_API UAnimMontage(const UAnimMontage&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimMontage(UAnimMontage&&); \
	ENGINE_API UAnimMontage(const UAnimMontage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimMontage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontage)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BranchingPointMarkers() { return STRUCT_OFFSET(UAnimMontage, BranchingPointMarkers); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_541_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_544_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimMontage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimMontage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h


#define FOREACH_ENUM_EMONTAGESUBSTEPRESULT(op) \
	op(EMontageSubStepResult::Moved) \
	op(EMontageSubStepResult::NotMoved) \
	op(EMontageSubStepResult::InvalidSection) \
	op(EMontageSubStepResult::InvalidMontage) 

enum class EMontageSubStepResult : uint8;
template<> ENGINE_API UEnum* StaticEnum<EMontageSubStepResult>();

#define FOREACH_ENUM_EANIMNOTIFYEVENTTYPE(op) \
	op(EAnimNotifyEventType::Begin) \
	op(EAnimNotifyEventType::End) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

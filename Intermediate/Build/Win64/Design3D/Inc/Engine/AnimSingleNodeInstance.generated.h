// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
struct FVector;
#ifdef ENGINE_AnimSingleNodeInstance_generated_h
#error "AnimSingleNodeInstance.generated.h already included, missing '#pragma once' in AnimSingleNodeInstance.h"
#endif
#define ENGINE_AnimSingleNodeInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_18_DELEGATE \
static inline void FPostEvaluateAnimEvent_DelegateWrapper(const FScriptDelegate& PostEvaluateAnimEvent) \
{ \
	PostEvaluateAnimEvent.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPreviewCurveOverride) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_PoseName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bRemoveIfZero); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewCurveOverride(Z_Param_Out_PoseName,Z_Param_Value,Z_Param_bRemoveIfZero); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationAsset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimationAsset**)Z_Param__Result=P_THIS->GetAnimationAsset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationAsset) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAsset); \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationAsset(Z_Param_NewAsset,Z_Param_bIsLooping,Z_Param_InPlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnim) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStartPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAnim(Z_Param_bIsLooping,Z_Param_InPlayRate,Z_Param_InStartPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaying) \
	{ \
		P_GET_UBOOL(Z_Param_bIsPlaying); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaying(Z_Param_bIsPlaying); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlendSpaceInput) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InBlendInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlendSpaceInput(Z_Param_Out_InBlendInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPositionWithPreviousTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPreviousTime); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPositionWithPreviousTime(Z_Param_InPosition,Z_Param_InPreviousTime,Z_Param_bFireNotifies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPosition); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPosition(Z_Param_InPosition,Z_Param_bFireNotifies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReverse) \
	{ \
		P_GET_UBOOL(Z_Param_bInReverse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReverse(Z_Param_bInReverse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_InPlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLooping(Z_Param_bIsLooping); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPreviewCurveOverride) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_PoseName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bRemoveIfZero); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewCurveOverride(Z_Param_Out_PoseName,Z_Param_Value,Z_Param_bRemoveIfZero); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationAsset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimationAsset**)Z_Param__Result=P_THIS->GetAnimationAsset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationAsset) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAsset); \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationAsset(Z_Param_NewAsset,Z_Param_bIsLooping,Z_Param_InPlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnim) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStartPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAnim(Z_Param_bIsLooping,Z_Param_InPlayRate,Z_Param_InStartPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaying) \
	{ \
		P_GET_UBOOL(Z_Param_bIsPlaying); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaying(Z_Param_bIsPlaying); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlendSpaceInput) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InBlendInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlendSpaceInput(Z_Param_Out_InBlendInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPositionWithPreviousTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPreviousTime); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPositionWithPreviousTime(Z_Param_InPosition,Z_Param_InPreviousTime,Z_Param_bFireNotifies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPosition); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPosition(Z_Param_InPosition,Z_Param_bFireNotifies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReverse) \
	{ \
		P_GET_UBOOL(Z_Param_bInReverse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReverse(Z_Param_bInReverse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_InPlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLooping(Z_Param_bIsLooping); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSingleNodeInstance(); \
	friend struct Z_Construct_UClass_UAnimSingleNodeInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSingleNodeInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSingleNodeInstance)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSingleNodeInstance(); \
	friend struct Z_Construct_UClass_UAnimSingleNodeInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSingleNodeInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSingleNodeInstance)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSingleNodeInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSingleNodeInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSingleNodeInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSingleNodeInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSingleNodeInstance(UAnimSingleNodeInstance&&); \
	NO_API UAnimSingleNodeInstance(const UAnimSingleNodeInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSingleNodeInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSingleNodeInstance(UAnimSingleNodeInstance&&); \
	NO_API UAnimSingleNodeInstance(const UAnimSingleNodeInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSingleNodeInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSingleNodeInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSingleNodeInstance)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSingleNodeInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSingleNodeInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

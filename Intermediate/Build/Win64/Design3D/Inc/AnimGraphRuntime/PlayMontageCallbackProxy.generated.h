// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBranchingPointNotifyPayload;
class UAnimMontage;
class USkeletalMeshComponent;
class UPlayMontageCallbackProxy;
#ifdef ANIMGRAPHRUNTIME_PlayMontageCallbackProxy_generated_h
#error "PlayMontageCallbackProxy.generated.h already included, missing '#pragma once' in PlayMontageCallbackProxy.h"
#endif
#define ANIMGRAPHRUNTIME_PlayMontageCallbackProxy_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_11_DELEGATE \
struct _Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms \
{ \
	FName NotifyName; \
}; \
static inline void FOnMontagePlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontagePlayDelegate, FName NotifyName) \
{ \
	_Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms Parms; \
	Parms.NotifyName=NotifyName; \
	OnMontagePlayDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNotifyEndReceived) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyName); \
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNotifyEndReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNotifyBeginReceived) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyName); \
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMontageBlendingOut) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayMontage) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent); \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartingPosition); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartingSection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPlayMontageCallbackProxy**)Z_Param__Result=UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(Z_Param_InSkeletalMeshComponent,Z_Param_MontageToPlay,Z_Param_PlayRate,Z_Param_StartingPosition,Z_Param_StartingSection); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNotifyEndReceived) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyName); \
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNotifyEndReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNotifyBeginReceived) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyName); \
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMontageBlendingOut) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayMontage) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent); \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartingPosition); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartingSection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPlayMontageCallbackProxy**)Z_Param__Result=UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(Z_Param_InSkeletalMeshComponent,Z_Param_MontageToPlay,Z_Param_PlayRate,Z_Param_StartingPosition,Z_Param_StartingSection); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayMontageCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayMontageCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayMontageCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(UPlayMontageCallbackProxy)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlayMontageCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayMontageCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayMontageCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(UPlayMontageCallbackProxy)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMontageCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UPlayMontageCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMontageCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(UPlayMontageCallbackProxy&&); \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const UPlayMontageCallbackProxy&); \
public:


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(UPlayMontageCallbackProxy&&); \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const UPlayMontageCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UPlayMontageCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMontageCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMontageCallbackProxy)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_13_PROLOG
#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayMontageCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UPlayMontageCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

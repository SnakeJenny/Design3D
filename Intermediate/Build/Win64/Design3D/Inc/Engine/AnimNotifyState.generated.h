// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class UAnimSequenceBase;
#ifdef ENGINE_AnimNotifyState_generated_h
#error "AnimNotifyState.generated.h already included, missing '#pragma once' in AnimNotifyState.h"
#endif
#define ENGINE_AnimNotifyState_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_RPC_WRAPPERS \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNotifyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNotifyName_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNotifyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNotifyName_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_EVENT_PARMS \
	struct AnimNotifyState_eventGetNotifyName_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct AnimNotifyState_eventReceived_NotifyBegin_Parms \
	{ \
		USkeletalMeshComponent* MeshComp; \
		UAnimSequenceBase* Animation; \
		float TotalDuration; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimNotifyState_eventReceived_NotifyBegin_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AnimNotifyState_eventReceived_NotifyEnd_Parms \
	{ \
		USkeletalMeshComponent* MeshComp; \
		UAnimSequenceBase* Animation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimNotifyState_eventReceived_NotifyEnd_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AnimNotifyState_eventReceived_NotifyTick_Parms \
	{ \
		USkeletalMeshComponent* MeshComp; \
		UAnimSequenceBase* Animation; \
		float FrameDeltaTime; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimNotifyState_eventReceived_NotifyTick_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyState(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyState(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState(UAnimNotifyState&&); \
	NO_API UAnimNotifyState(const UAnimNotifyState&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState(UAnimNotifyState&&); \
	NO_API UAnimNotifyState(const UAnimNotifyState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_17_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimNotifyState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotifyState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

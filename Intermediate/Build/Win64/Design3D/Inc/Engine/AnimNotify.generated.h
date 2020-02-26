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
#ifdef ENGINE_AnimNotify_generated_h
#error "AnimNotify.generated.h already included, missing '#pragma once' in AnimNotify.h"
#endif
#define ENGINE_AnimNotify_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBranchingPointNotifyPayload>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_RPC_WRAPPERS \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNotifyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNotifyName_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNotifyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNotifyName_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_EVENT_PARMS \
	struct AnimNotify_eventGetNotifyName_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct AnimNotify_eventReceived_Notify_Parms \
	{ \
		USkeletalMeshComponent* MeshComp; \
		UAnimSequenceBase* Animation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimNotify_eventReceived_Notify_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotify(); \
	friend struct Z_Construct_UClass_UAnimNotify_Statics; \
public: \
	DECLARE_CLASS(UAnimNotify, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotify)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotify(); \
	friend struct Z_Construct_UClass_UAnimNotify_Statics; \
public: \
	DECLARE_CLASS(UAnimNotify, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotify)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotify) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotify(UAnimNotify&&); \
	NO_API UAnimNotify(const UAnimNotify&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotify(UAnimNotify&&); \
	NO_API UAnimNotify(const UAnimNotify&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotify)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_42_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimNotify."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotify>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

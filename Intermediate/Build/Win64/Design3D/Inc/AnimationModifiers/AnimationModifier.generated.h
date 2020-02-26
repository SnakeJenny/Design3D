// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
#ifdef ANIMATIONMODIFIERS_AnimationModifier_generated_h
#error "AnimationModifier.generated.h already included, missing '#pragma once' in AnimationModifier.h"
#endif
#define ANIMATIONMODIFIERS_AnimationModifier_generated_h

#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_RPC_WRAPPERS \
	virtual void OnRevert_Implementation(UAnimSequence* AnimationSequence); \
	virtual void OnApply_Implementation(UAnimSequence* AnimationSequence); \
 \
	DECLARE_FUNCTION(execOnRevert) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRevert_Implementation(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnApply) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnApply_Implementation(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRevert) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRevert_Implementation(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnApply) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnApply_Implementation(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_EVENT_PARMS \
	struct AnimationModifier_eventOnApply_Parms \
	{ \
		UAnimSequence* AnimationSequence; \
	}; \
	struct AnimationModifier_eventOnRevert_Parms \
	{ \
		UAnimSequence* AnimationSequence; \
	};


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_CALLBACK_WRAPPERS
#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationModifier(); \
	friend struct Z_Construct_UClass_UAnimationModifier_Statics; \
public: \
	DECLARE_CLASS(UAnimationModifier, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAnimationModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationModifier(); \
	friend struct Z_Construct_UClass_UAnimationModifier_Statics; \
public: \
	DECLARE_CLASS(UAnimationModifier, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAnimationModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationModifier(UAnimationModifier&&); \
	NO_API UAnimationModifier(const UAnimationModifier&); \
public:


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationModifier(UAnimationModifier&&); \
	NO_API UAnimationModifier(const UAnimationModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationModifier)


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RevisionGuid() { return STRUCT_OFFSET(UAnimationModifier, RevisionGuid); } \
	FORCEINLINE static uint32 __PPO__AppliedGuid() { return STRUCT_OFFSET(UAnimationModifier, AppliedGuid); } \
	FORCEINLINE static uint32 __PPO__StoredNativeRevision() { return STRUCT_OFFSET(UAnimationModifier, StoredNativeRevision); }


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_13_PROLOG \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_EVENT_PARMS


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_INCLASS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONMODIFIERS_API UClass* StaticClass<class UAnimationModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
class UParticleSystem;
#ifdef ENGINE_AnimNotifyState_Trail_generated_h
#error "AnimNotifyState_Trail.generated.h already included, missing '#pragma once' in AnimNotifyState_Trail.h"
#endif
#define ENGINE_AnimNotifyState_Trail_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_EVENT_PARMS \
	struct AnimNotifyState_Trail_eventOverridePSTemplate_Parms \
	{ \
		USkeletalMeshComponent* MeshComp; \
		UAnimSequenceBase* Animation; \
		UParticleSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimNotifyState_Trail_eventOverridePSTemplate_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_Trail(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_Trail_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_Trail, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_Trail)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_Trail(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_Trail_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_Trail, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_Trail)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyState_Trail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_Trail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_Trail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_Trail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState_Trail(UAnimNotifyState_Trail&&); \
	NO_API UAnimNotifyState_Trail(const UAnimNotifyState_Trail&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyState_Trail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState_Trail(UAnimNotifyState_Trail&&); \
	NO_API UAnimNotifyState_Trail(const UAnimNotifyState_Trail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_Trail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_Trail); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_Trail)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_18_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimNotifyState_Trail."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotifyState_Trail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

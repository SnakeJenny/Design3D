// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSequenceBase_generated_h
#error "AnimSequenceBase.generated.h already included, missing '#pragma once' in AnimSequenceBase.h"
#endif
#define ENGINE_AnimSequenceBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayLength(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayLength(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequenceBase, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequenceBase(); \
	friend struct Z_Construct_UClass_UAnimSequenceBase_Statics; \
public: \
	DECLARE_CLASS(UAnimSequenceBase, UAnimationAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequenceBase) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequenceBase(); \
	friend struct Z_Construct_UClass_UAnimSequenceBase_Statics; \
public: \
	DECLARE_CLASS(UAnimSequenceBase, UAnimationAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequenceBase) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequenceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequenceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequenceBase(UAnimSequenceBase&&); \
	NO_API UAnimSequenceBase(const UAnimSequenceBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequenceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequenceBase(UAnimSequenceBase&&); \
	NO_API UAnimSequenceBase(const UAnimSequenceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequenceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceBase)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_26_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSequenceBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSequenceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h


#define FOREACH_ENUM_ETYPEADVANCEANIM(op) \
	op(ETAA_Default) \
	op(ETAA_Finished) \
	op(ETAA_Looped) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

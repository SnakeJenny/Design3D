// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendSpaceBase_generated_h
#error "BlendSpaceBase.generated.h already included, missing '#pragma once' in BlendSpaceBase.h"
#endif
#define ENGINE_BlendSpaceBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerBoneInterpolation>();

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridBlendSample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGridBlendSample>();

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorElement_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEditorElement>();

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSample>();

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendParameter>();

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpolationParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInterpolationParameter>();

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBlendSpaceBase, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpaceBase(); \
	friend struct Z_Construct_UClass_UBlendSpaceBase_Statics; \
public: \
	DECLARE_CLASS(UBlendSpaceBase, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpaceBase) \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpaceBase(); \
	friend struct Z_Construct_UClass_UBlendSpaceBase_Statics; \
public: \
	DECLARE_CLASS(UBlendSpaceBase, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpaceBase) \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpaceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpaceBase(UBlendSpaceBase&&); \
	ENGINE_API UBlendSpaceBase(const UBlendSpaceBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpaceBase(UBlendSpaceBase&&); \
	ENGINE_API UBlendSpaceBase(const UBlendSpaceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpaceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceBase)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PerBoneBlend() { return STRUCT_OFFSET(UBlendSpaceBase, PerBoneBlend); } \
	FORCEINLINE static uint32 __PPO__SampleIndexWithMarkers() { return STRUCT_OFFSET(UBlendSpaceBase, SampleIndexWithMarkers); } \
	FORCEINLINE static uint32 __PPO__SampleData() { return STRUCT_OFFSET(UBlendSpaceBase, SampleData); } \
	FORCEINLINE static uint32 __PPO__GridSamples() { return STRUCT_OFFSET(UBlendSpaceBase, GridSamples); } \
	FORCEINLINE static uint32 __PPO__BlendParameters() { return STRUCT_OFFSET(UBlendSpaceBase, BlendParameters); }


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_225_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_228_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlendSpaceBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlendSpaceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h


#define FOREACH_ENUM_ENOTIFYTRIGGERMODE(op) \
	op(ENotifyTriggerMode::AllAnimations) \
	op(ENotifyTriggerMode::HighestWeightedAnimation) \
	op(ENotifyTriggerMode::None) 
#define FOREACH_ENUM_EBLENDSPACEAXIS(op) \
	op(BSA_None) \
	op(BSA_X) \
	op(BSA_Y) \
	op(BSA_Max) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

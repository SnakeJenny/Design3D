// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class UViewportWorldInteraction;
#ifdef VIEWPORTINTERACTION_ViewportTransformer_generated_h
#error "ViewportTransformer.generated.h already included, missing '#pragma once' in ViewportTransformer.h"
#endif
#define VIEWPORTINTERACTION_ViewportTransformer_generated_h

#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStopDragging) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStopDragging(Z_Param_Interactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartDragging) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStartDragging(Z_Param_Interactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldCenterTransformGizmoPivot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldCenterTransformGizmoPivot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanAlignToActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanAlignToActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shutdown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_OBJECT(UViewportWorldInteraction,Z_Param_InitViewportWorldInteraction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(Z_Param_InitViewportWorldInteraction); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStopDragging) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStopDragging(Z_Param_Interactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartDragging) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStartDragging(Z_Param_Interactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldCenterTransformGizmoPivot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldCenterTransformGizmoPivot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanAlignToActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanAlignToActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shutdown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_OBJECT(UViewportWorldInteraction,Z_Param_InitViewportWorldInteraction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(Z_Param_InitViewportWorldInteraction); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportTransformer(); \
	friend struct Z_Construct_UClass_UViewportTransformer_Statics; \
public: \
	DECLARE_CLASS(UViewportTransformer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportTransformer)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUViewportTransformer(); \
	friend struct Z_Construct_UClass_UViewportTransformer_Statics; \
public: \
	DECLARE_CLASS(UViewportTransformer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportTransformer)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportTransformer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportTransformer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportTransformer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportTransformer(UViewportTransformer&&); \
	NO_API UViewportTransformer(const UViewportTransformer&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportTransformer(UViewportTransformer&&); \
	NO_API UViewportTransformer(const UViewportTransformer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportTransformer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportTransformer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportTransformer)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ViewportWorldInteraction() { return STRUCT_OFFSET(UViewportTransformer, ViewportWorldInteraction); }


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_12_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UViewportTransformer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef ENGINE_SceneCaptureComponent_generated_h
#error "SceneCaptureComponent.generated.h already included, missing '#pragma once' in SceneCaptureComponent.h"
#endif
#define ENGINE_SceneCaptureComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEngineShowFlagsSetting>();

#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCaptureSortPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCaptureSortPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCaptureSortPriority(Z_Param_NewCaptureSortPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHiddenComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearHiddenComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearShowOnlyComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearShowOnlyComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveShowOnlyActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveShowOnlyComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOnlyActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowOnlyActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOnlyComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowOnlyComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCaptureSortPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCaptureSortPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCaptureSortPriority(Z_Param_NewCaptureSortPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHiddenComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearHiddenComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearShowOnlyComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearShowOnlyComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveShowOnlyActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveShowOnlyComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOnlyActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowOnlyActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOnlyComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowOnlyComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent(USceneCaptureComponent&&); \
	NO_API USceneCaptureComponent(const USceneCaptureComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent(USceneCaptureComponent&&); \
	NO_API USceneCaptureComponent(const USceneCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_59_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_62_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h


#define FOREACH_ENUM_ESCENECAPTUREPRIMITIVERENDERMODE(op) \
	op(ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture) \
	op(ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives) \
	op(ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList) 

enum class ESceneCapturePrimitiveRenderMode : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESceneCapturePrimitiveRenderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

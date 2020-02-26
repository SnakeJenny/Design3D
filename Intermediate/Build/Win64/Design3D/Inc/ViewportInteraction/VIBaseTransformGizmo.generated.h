// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_VIBaseTransformGizmo_generated_h
#error "VIBaseTransformGizmo.generated.h already included, missing '#pragma once' in VIBaseTransformGizmo.h"
#endif
#define VIEWPORTINTERACTION_VIBaseTransformGizmo_generated_h

#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics; \
	VIEWPORTINTERACTION_API static class UScriptStruct* StaticStruct();


template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<struct FTransformGizmoMeasurement>();

#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_RPC_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseTransformGizmo(); \
	friend struct Z_Construct_UClass_ABaseTransformGizmo_Statics; \
public: \
	DECLARE_CLASS(ABaseTransformGizmo, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(ABaseTransformGizmo)


#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_INCLASS \
private: \
	static void StaticRegisterNativesABaseTransformGizmo(); \
	friend struct Z_Construct_UClass_ABaseTransformGizmo_Statics; \
public: \
	DECLARE_CLASS(ABaseTransformGizmo, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(ABaseTransformGizmo)


#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseTransformGizmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseTransformGizmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTransformGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTransformGizmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTransformGizmo(ABaseTransformGizmo&&); \
	NO_API ABaseTransformGizmo(const ABaseTransformGizmo&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTransformGizmo(ABaseTransformGizmo&&); \
	NO_API ABaseTransformGizmo(const ABaseTransformGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTransformGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTransformGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseTransformGizmo)


#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(ABaseTransformGizmo, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__AllHandleGroups() { return STRUCT_OFFSET(ABaseTransformGizmo, AllHandleGroups); } \
	FORCEINLINE static uint32 __PPO__WorldInteraction() { return STRUCT_OFFSET(ABaseTransformGizmo, WorldInteraction); }


#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_40_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class ABaseTransformGizmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h


#define FOREACH_ENUM_EGIZMOHANDLETYPES(op) \
	op(EGizmoHandleTypes::All) \
	op(EGizmoHandleTypes::Translate) \
	op(EGizmoHandleTypes::Rotate) \
	op(EGizmoHandleTypes::Scale) 

enum class EGizmoHandleTypes : uint8;
template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EGizmoHandleTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

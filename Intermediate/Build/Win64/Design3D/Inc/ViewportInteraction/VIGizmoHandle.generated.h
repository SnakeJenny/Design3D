// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_VIGizmoHandle_generated_h
#error "VIGizmoHandle.generated.h already included, missing '#pragma once' in VIGizmoHandle.h"
#endif
#define VIEWPORTINTERACTION_VIGizmoHandle_generated_h

#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGizmoHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<struct FGizmoHandle>();

#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_RPC_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UGizmoHandleGroup, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UGizmoHandleGroup, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoHandleGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoHandleGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoHandleGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoHandleGroup(UGizmoHandleGroup&&); \
	NO_API UGizmoHandleGroup(const UGizmoHandleGroup&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoHandleGroup(UGizmoHandleGroup&&); \
	NO_API UGizmoHandleGroup(const UGizmoHandleGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoHandleGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GizmoMaterial() { return STRUCT_OFFSET(UGizmoHandleGroup, GizmoMaterial); } \
	FORCEINLINE static uint32 __PPO__TranslucentGizmoMaterial() { return STRUCT_OFFSET(UGizmoHandleGroup, TranslucentGizmoMaterial); } \
	FORCEINLINE static uint32 __PPO__Handles() { return STRUCT_OFFSET(UGizmoHandleGroup, Handles); } \
	FORCEINLINE static uint32 __PPO__OwningTransformGizmoActor() { return STRUCT_OFFSET(UGizmoHandleGroup, OwningTransformGizmoActor); } \
	FORCEINLINE static uint32 __PPO__DragOperationComponent() { return STRUCT_OFFSET(UGizmoHandleGroup, DragOperationComponent); }


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_33_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UGizmoHandleGroup>();

#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_RPC_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAxisGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UAxisGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UAxisGizmoHandleGroup, UGizmoHandleGroup, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UAxisGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_INCLASS \
private: \
	static void StaticRegisterNativesUAxisGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UAxisGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UAxisGizmoHandleGroup, UGizmoHandleGroup, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UAxisGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAxisGizmoHandleGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAxisGizmoHandleGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxisGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxisGizmoHandleGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxisGizmoHandleGroup(UAxisGizmoHandleGroup&&); \
	NO_API UAxisGizmoHandleGroup(const UAxisGizmoHandleGroup&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAxisGizmoHandleGroup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxisGizmoHandleGroup(UAxisGizmoHandleGroup&&); \
	NO_API UAxisGizmoHandleGroup(const UAxisGizmoHandleGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxisGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxisGizmoHandleGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAxisGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_141_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UAxisGizmoHandleGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

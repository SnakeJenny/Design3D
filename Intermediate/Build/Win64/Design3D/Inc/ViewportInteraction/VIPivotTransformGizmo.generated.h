// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_VIPivotTransformGizmo_generated_h
#error "VIPivotTransformGizmo.generated.h already included, missing '#pragma once' in VIPivotTransformGizmo.h"
#endif
#define VIEWPORTINTERACTION_VIPivotTransformGizmo_generated_h

#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_RPC_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPivotTransformGizmo(); \
	friend struct Z_Construct_UClass_APivotTransformGizmo_Statics; \
public: \
	DECLARE_CLASS(APivotTransformGizmo, ABaseTransformGizmo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(APivotTransformGizmo)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPivotTransformGizmo(); \
	friend struct Z_Construct_UClass_APivotTransformGizmo_Statics; \
public: \
	DECLARE_CLASS(APivotTransformGizmo, ABaseTransformGizmo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(APivotTransformGizmo)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APivotTransformGizmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APivotTransformGizmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APivotTransformGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APivotTransformGizmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APivotTransformGizmo(APivotTransformGizmo&&); \
	NO_API APivotTransformGizmo(const APivotTransformGizmo&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APivotTransformGizmo(APivotTransformGizmo&&); \
	NO_API APivotTransformGizmo(const APivotTransformGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APivotTransformGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APivotTransformGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APivotTransformGizmo)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UniformScaleGizmoHandleGroup() { return STRUCT_OFFSET(APivotTransformGizmo, UniformScaleGizmoHandleGroup); } \
	FORCEINLINE static uint32 __PPO__TranslationGizmoHandleGroup() { return STRUCT_OFFSET(APivotTransformGizmo, TranslationGizmoHandleGroup); } \
	FORCEINLINE static uint32 __PPO__ScaleGizmoHandleGroup() { return STRUCT_OFFSET(APivotTransformGizmo, ScaleGizmoHandleGroup); } \
	FORCEINLINE static uint32 __PPO__PlaneTranslationGizmoHandleGroup() { return STRUCT_OFFSET(APivotTransformGizmo, PlaneTranslationGizmoHandleGroup); } \
	FORCEINLINE static uint32 __PPO__RotationGizmoHandleGroup() { return STRUCT_OFFSET(APivotTransformGizmo, RotationGizmoHandleGroup); } \
	FORCEINLINE static uint32 __PPO__StretchGizmoHandleGroup() { return STRUCT_OFFSET(APivotTransformGizmo, StretchGizmoHandleGroup); } \
	FORCEINLINE static uint32 __PPO__LastDraggingHandle() { return STRUCT_OFFSET(APivotTransformGizmo, LastDraggingHandle); }


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_14_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class APivotTransformGizmo>();

#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_RPC_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPivotTranslationGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UPivotTranslationGizmoHandleGroup, UAxisGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UPivotTranslationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUPivotTranslationGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UPivotTranslationGizmoHandleGroup, UAxisGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UPivotTranslationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPivotTranslationGizmoHandleGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPivotTranslationGizmoHandleGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPivotTranslationGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPivotTranslationGizmoHandleGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPivotTranslationGizmoHandleGroup(UPivotTranslationGizmoHandleGroup&&); \
	NO_API UPivotTranslationGizmoHandleGroup(const UPivotTranslationGizmoHandleGroup&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPivotTranslationGizmoHandleGroup(UPivotTranslationGizmoHandleGroup&&); \
	NO_API UPivotTranslationGizmoHandleGroup(const UPivotTranslationGizmoHandleGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPivotTranslationGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPivotTranslationGizmoHandleGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPivotTranslationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_67_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UPivotTranslationGizmoHandleGroup>();

#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_RPC_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPivotScaleGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UPivotScaleGizmoHandleGroup, UAxisGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UPivotScaleGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUPivotScaleGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UPivotScaleGizmoHandleGroup, UAxisGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UPivotScaleGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPivotScaleGizmoHandleGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPivotScaleGizmoHandleGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPivotScaleGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPivotScaleGizmoHandleGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPivotScaleGizmoHandleGroup(UPivotScaleGizmoHandleGroup&&); \
	NO_API UPivotScaleGizmoHandleGroup(const UPivotScaleGizmoHandleGroup&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPivotScaleGizmoHandleGroup(UPivotScaleGizmoHandleGroup&&); \
	NO_API UPivotScaleGizmoHandleGroup(const UPivotScaleGizmoHandleGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPivotScaleGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPivotScaleGizmoHandleGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPivotScaleGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_88_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UPivotScaleGizmoHandleGroup>();

#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_RPC_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPivotPlaneTranslationGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UPivotPlaneTranslationGizmoHandleGroup, UAxisGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UPivotPlaneTranslationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUPivotPlaneTranslationGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UPivotPlaneTranslationGizmoHandleGroup, UAxisGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UPivotPlaneTranslationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPivotPlaneTranslationGizmoHandleGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPivotPlaneTranslationGizmoHandleGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPivotPlaneTranslationGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPivotPlaneTranslationGizmoHandleGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPivotPlaneTranslationGizmoHandleGroup(UPivotPlaneTranslationGizmoHandleGroup&&); \
	NO_API UPivotPlaneTranslationGizmoHandleGroup(const UPivotPlaneTranslationGizmoHandleGroup&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPivotPlaneTranslationGizmoHandleGroup(UPivotPlaneTranslationGizmoHandleGroup&&); \
	NO_API UPivotPlaneTranslationGizmoHandleGroup(const UPivotPlaneTranslationGizmoHandleGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPivotPlaneTranslationGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPivotPlaneTranslationGizmoHandleGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPivotPlaneTranslationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_112_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UPivotPlaneTranslationGizmoHandleGroup>();

#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_RPC_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPivotRotationGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UPivotRotationGizmoHandleGroup, UAxisGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UPivotRotationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUPivotRotationGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UPivotRotationGizmoHandleGroup, UAxisGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UPivotRotationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPivotRotationGizmoHandleGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPivotRotationGizmoHandleGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPivotRotationGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPivotRotationGizmoHandleGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPivotRotationGizmoHandleGroup(UPivotRotationGizmoHandleGroup&&); \
	NO_API UPivotRotationGizmoHandleGroup(const UPivotRotationGizmoHandleGroup&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPivotRotationGizmoHandleGroup(UPivotRotationGizmoHandleGroup&&); \
	NO_API UPivotRotationGizmoHandleGroup(const UPivotRotationGizmoHandleGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPivotRotationGizmoHandleGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPivotRotationGizmoHandleGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPivotRotationGizmoHandleGroup)


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootFullRotationHandleComponent() { return STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootFullRotationHandleComponent); } \
	FORCEINLINE static uint32 __PPO__FullRotationHandleMeshComponent() { return STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, FullRotationHandleMeshComponent); } \
	FORCEINLINE static uint32 __PPO__StartRotationIndicatorMeshComponent() { return STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, StartRotationIndicatorMeshComponent); } \
	FORCEINLINE static uint32 __PPO__RootStartRotationIdicatorComponent() { return STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootStartRotationIdicatorComponent); } \
	FORCEINLINE static uint32 __PPO__DeltaRotationIndicatorMeshComponent() { return STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, DeltaRotationIndicatorMeshComponent); } \
	FORCEINLINE static uint32 __PPO__RootDeltaRotationIndicatorComponent() { return STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootDeltaRotationIndicatorComponent); }


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_134_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UPivotRotationGizmoHandleGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

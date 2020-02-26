// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class ABaseTransformGizmo;
struct FTransform;
class AActor;
#ifdef VIEWPORTINTERACTION_ViewportWorldInteraction_generated_h
#error "ViewportWorldInteraction.generated.h already included, missing '#pragma once' in ViewportWorldInteraction.h"
#endif
#define VIEWPORTINTERACTION_ViewportWorldInteraction_generated_h

#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInteractors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UViewportInteractor*>*)Z_Param__Result=P_THIS->GetInteractors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformGizmoActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABaseTransformGizmo**)Z_Param__Result=P_THIS->GetTransformGizmoActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldScaleFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWorldScaleFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRoomTransformForNextFrame) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRoomTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRoomTransformForNextFrame(Z_Param_Out_NewRoomTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeadTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewHeadTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHeadTransform(Z_Param_Out_NewHeadTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoomSpaceHeadTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetRoomSpaceHeadTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoomTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetRoomTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorToExcludeFromHitTests) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToExcludeFromHitTests); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddActorToExcludeFromHitTests(Z_Param_ActorToExcludeFromHitTests); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInteractor) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInteractor(Z_Param_Interactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInteractor) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInteractor(Z_Param_Interactor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UViewportInteractor*>*)Z_Param__Result=P_THIS->GetInteractors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformGizmoActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABaseTransformGizmo**)Z_Param__Result=P_THIS->GetTransformGizmoActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldScaleFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWorldScaleFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRoomTransformForNextFrame) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRoomTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRoomTransformForNextFrame(Z_Param_Out_NewRoomTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeadTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewHeadTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHeadTransform(Z_Param_Out_NewHeadTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoomSpaceHeadTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetRoomSpaceHeadTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoomTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetRoomTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorToExcludeFromHitTests) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToExcludeFromHitTests); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddActorToExcludeFromHitTests(Z_Param_ActorToExcludeFromHitTests); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInteractor) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInteractor(Z_Param_Interactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInteractor) \
	{ \
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInteractor(Z_Param_Interactor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportWorldInteraction(); \
	friend struct Z_Construct_UClass_UViewportWorldInteraction_Statics; \
public: \
	DECLARE_CLASS(UViewportWorldInteraction, UEditorWorldExtension, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportWorldInteraction)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUViewportWorldInteraction(); \
	friend struct Z_Construct_UClass_UViewportWorldInteraction_Statics; \
public: \
	DECLARE_CLASS(UViewportWorldInteraction, UEditorWorldExtension, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportWorldInteraction)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportWorldInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportWorldInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportWorldInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportWorldInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportWorldInteraction(UViewportWorldInteraction&&); \
	NO_API UViewportWorldInteraction(const UViewportWorldInteraction&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportWorldInteraction(UViewportWorldInteraction&&); \
	NO_API UViewportWorldInteraction(const UViewportWorldInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportWorldInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportWorldInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportWorldInteraction)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Interactors() { return STRUCT_OFFSET(UViewportWorldInteraction, Interactors); } \
	FORCEINLINE static uint32 __PPO__ViewportTransformer() { return STRUCT_OFFSET(UViewportWorldInteraction, ViewportTransformer); } \
	FORCEINLINE static uint32 __PPO__TransformGizmoActor() { return STRUCT_OFFSET(UViewportWorldInteraction, TransformGizmoActor); } \
	FORCEINLINE static uint32 __PPO__SnapGridActor() { return STRUCT_OFFSET(UViewportWorldInteraction, SnapGridActor); } \
	FORCEINLINE static uint32 __PPO__SnapGridMeshComponent() { return STRUCT_OFFSET(UViewportWorldInteraction, SnapGridMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SnapGridMID() { return STRUCT_OFFSET(UViewportWorldInteraction, SnapGridMID); } \
	FORCEINLINE static uint32 __PPO__DefaultMouseCursorInteractor() { return STRUCT_OFFSET(UViewportWorldInteraction, DefaultMouseCursorInteractor); } \
	FORCEINLINE static uint32 __PPO__ActorsToExcludeFromHitTest() { return STRUCT_OFFSET(UViewportWorldInteraction, ActorsToExcludeFromHitTest); } \
	FORCEINLINE static uint32 __PPO__AssetContainer() { return STRUCT_OFFSET(UViewportWorldInteraction, AssetContainer); }


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_46_PROLOG
#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UViewportWorldInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h


#define FOREACH_ENUM_EVIEWPORTWORLDINTERACTIONTYPE(op) \
	op(EViewportWorldInteractionType::VR) \
	op(EViewportWorldInteractionType::Legacy) 

enum class EViewportWorldInteractionType : uint8;
template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EViewportWorldInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

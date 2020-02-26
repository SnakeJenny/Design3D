// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class UPrimitiveComponent;
#ifdef ENGINE_PhysicsHandleComponent_generated_h
#error "PhysicsHandleComponent.generated.h already included, missing '#pragma once' in PhysicsHandleComponent.h"
#endif
#define ENGINE_PhysicsHandleComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInterpolationSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewInterpolationSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInterpolationSpeed(Z_Param_NewInterpolationSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAngularStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularStiffness(Z_Param_NewAngularStiffness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAngularDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDamping(Z_Param_NewAngularDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLinearStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearStiffness(Z_Param_NewLinearStiffness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLinearDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearDamping(Z_Param_NewLinearDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetLocationAndRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TargetRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTargetLocationAndRotation(Z_Param_Out_TargetLocation,Z_Param_Out_TargetRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetRotation(Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetLocation(Z_Param_NewLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrabbedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetGrabbedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabComponentAtLocationWithRotation) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabComponentAtLocationWithRotation(Z_Param_Component,Z_Param_InBoneName,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabComponentAtLocation) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_STRUCT(FVector,Z_Param_GrabLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabComponentAtLocation(Z_Param_Component,Z_Param_InBoneName,Z_Param_GrabLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_STRUCT(FVector,Z_Param_GrabLocation); \
		P_GET_UBOOL(Z_Param_bConstrainRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabComponent(Z_Param_Component,Z_Param_InBoneName,Z_Param_GrabLocation,Z_Param_bConstrainRotation); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInterpolationSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewInterpolationSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInterpolationSpeed(Z_Param_NewInterpolationSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAngularStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularStiffness(Z_Param_NewAngularStiffness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAngularDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDamping(Z_Param_NewAngularDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLinearStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearStiffness(Z_Param_NewLinearStiffness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLinearDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearDamping(Z_Param_NewLinearDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetLocationAndRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TargetRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTargetLocationAndRotation(Z_Param_Out_TargetLocation,Z_Param_Out_TargetRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetRotation(Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetLocation(Z_Param_NewLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrabbedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetGrabbedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabComponentAtLocationWithRotation) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabComponentAtLocationWithRotation(Z_Param_Component,Z_Param_InBoneName,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabComponentAtLocation) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_STRUCT(FVector,Z_Param_GrabLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabComponentAtLocation(Z_Param_Component,Z_Param_InBoneName,Z_Param_GrabLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_STRUCT(FVector,Z_Param_GrabLocation); \
		P_GET_UBOOL(Z_Param_bConstrainRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabComponent(Z_Param_Component,Z_Param_InBoneName,Z_Param_GrabLocation,Z_Param_bConstrainRotation); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsHandleComponent(); \
	friend struct Z_Construct_UClass_UPhysicsHandleComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsHandleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsHandleComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsHandleComponent(); \
	friend struct Z_Construct_UClass_UPhysicsHandleComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsHandleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsHandleComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsHandleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsHandleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsHandleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsHandleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsHandleComponent(UPhysicsHandleComponent&&); \
	NO_API UPhysicsHandleComponent(const UPhysicsHandleComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsHandleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsHandleComponent(UPhysicsHandleComponent&&); \
	NO_API UPhysicsHandleComponent(const UPhysicsHandleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsHandleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsHandleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsHandleComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsHandleComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsHandleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FPhysicalAnimationData;
class USkeletalMeshComponent;
#ifdef ENGINE_PhysicalAnimationComponent_generated_h
#error "PhysicalAnimationComponent.generated.h already included, missing '#pragma once' in PhysicalAnimationComponent.h"
#endif
#define ENGINE_PhysicalAnimationComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicalAnimationData>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBodyTargetTransform) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BodyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetBodyTargetTransform(Z_Param_BodyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPhysicalAnimationProfileBelow) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BodyName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_GET_UBOOL(Z_Param_bClearNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyPhysicalAnimationProfileBelow(Z_Param_BodyName,Z_Param_ProfileName,Z_Param_bIncludeSelf,Z_Param_bClearNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStrengthMultiplyer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStrengthMultiplyer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStrengthMultiplyer(Z_Param_InStrengthMultiplyer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettingsBelow) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BodyName); \
		P_GET_STRUCT_REF(FPhysicalAnimationData,Z_Param_Out_PhysicalAnimationData); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyPhysicalAnimationSettingsBelow(Z_Param_BodyName,Z_Param_Out_PhysicalAnimationData,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettings) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BodyName); \
		P_GET_STRUCT_REF(FPhysicalAnimationData,Z_Param_Out_PhysicalAnimationData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyPhysicalAnimationSettings(Z_Param_BodyName,Z_Param_Out_PhysicalAnimationData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkeletalMeshComponent) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSkeletalMeshComponent(Z_Param_InSkeletalMeshComponent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBodyTargetTransform) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BodyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetBodyTargetTransform(Z_Param_BodyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPhysicalAnimationProfileBelow) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BodyName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_GET_UBOOL(Z_Param_bClearNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyPhysicalAnimationProfileBelow(Z_Param_BodyName,Z_Param_ProfileName,Z_Param_bIncludeSelf,Z_Param_bClearNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStrengthMultiplyer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStrengthMultiplyer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStrengthMultiplyer(Z_Param_InStrengthMultiplyer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettingsBelow) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BodyName); \
		P_GET_STRUCT_REF(FPhysicalAnimationData,Z_Param_Out_PhysicalAnimationData); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyPhysicalAnimationSettingsBelow(Z_Param_BodyName,Z_Param_Out_PhysicalAnimationData,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettings) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BodyName); \
		P_GET_STRUCT_REF(FPhysicalAnimationData,Z_Param_Out_PhysicalAnimationData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyPhysicalAnimationSettings(Z_Param_BodyName,Z_Param_Out_PhysicalAnimationData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkeletalMeshComponent) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSkeletalMeshComponent(Z_Param_InSkeletalMeshComponent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicalAnimationComponent(); \
	friend struct Z_Construct_UClass_UPhysicalAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicalAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicalAnimationComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalAnimationComponent(); \
	friend struct Z_Construct_UClass_UPhysicalAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicalAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicalAnimationComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicalAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalAnimationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicalAnimationComponent(UPhysicalAnimationComponent&&); \
	NO_API UPhysicalAnimationComponent(const UPhysicalAnimationComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicalAnimationComponent(UPhysicalAnimationComponent&&); \
	NO_API UPhysicalAnimationComponent(const UPhysicalAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicalAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalAnimationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalAnimationComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(UPhysicalAnimationComponent, SkeletalMeshComponent); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_71_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicalAnimationComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicalAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

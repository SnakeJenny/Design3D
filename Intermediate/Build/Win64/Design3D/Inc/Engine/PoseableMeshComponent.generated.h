// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FVector;
struct FRotator;
struct FTransform;
#ifdef ENGINE_PoseableMeshComponent_generated_h
#error "PoseableMeshComponent.generated.h already included, missing '#pragma once' in PoseableMeshComponent.h"
#endif
#define ENGINE_PoseableMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyPoseFromSkeletalComponent) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InComponentToCopy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CopyPoseFromSkeletalComponent(Z_Param_InComponentToCopy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetBoneTransformByName(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneScaleByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetBoneScaleByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetBoneRotationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneLocationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetBoneLocationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetBoneTransformByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneScaleByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InScale3D); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneScaleByName(Z_Param_BoneName,Z_Param_InScale3D,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FRotator,Z_Param_InRotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneRotationByName(Z_Param_BoneName,Z_Param_InRotation,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneLocationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneLocationByName(Z_Param_BoneName,Z_Param_InLocation,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneTransformByName(Z_Param_BoneName,Z_Param_Out_InTransform,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyPoseFromSkeletalComponent) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InComponentToCopy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CopyPoseFromSkeletalComponent(Z_Param_InComponentToCopy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetBoneTransformByName(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneScaleByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetBoneScaleByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetBoneRotationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneLocationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetBoneLocationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetBoneTransformByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneScaleByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InScale3D); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneScaleByName(Z_Param_BoneName,Z_Param_InScale3D,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FRotator,Z_Param_InRotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneRotationByName(Z_Param_BoneName,Z_Param_InRotation,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneLocationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneLocationByName(Z_Param_BoneName,Z_Param_InLocation,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneTransformByName(Z_Param_BoneName,Z_Param_Out_InTransform,EBoneSpaces::Type(Z_Param_BoneSpace)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseableMeshComponent(); \
	friend struct Z_Construct_UClass_UPoseableMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UPoseableMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPoseableMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPoseableMeshComponent(); \
	friend struct Z_Construct_UClass_UPoseableMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UPoseableMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPoseableMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseableMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseableMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseableMeshComponent(UPoseableMeshComponent&&); \
	NO_API UPoseableMeshComponent(const UPoseableMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseableMeshComponent(UPoseableMeshComponent&&); \
	NO_API UPoseableMeshComponent(const UPoseableMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseableMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseableMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PoseableMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseableMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

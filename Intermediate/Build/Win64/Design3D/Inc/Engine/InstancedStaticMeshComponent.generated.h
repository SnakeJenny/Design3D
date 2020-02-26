// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBox;
struct FVector;
struct FTransform;
#ifdef ENGINE_InstancedStaticMeshComponent_generated_h
#error "InstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in InstancedStaticMeshComponent.h"
#endif
#define ENGINE_InstancedStaticMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_396_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshComponentInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_381_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshLightMapInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshMappingInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInstancesOverlappingBox) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box); \
		P_GET_UBOOL(Z_Param_bBoxInWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInstancesOverlappingBox(Z_Param_Out_Box,Z_Param_bBoxInWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstancesOverlappingSphere) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_UBOOL(Z_Param_bSphereInWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInstancesOverlappingSphere(Z_Param_Out_Center,Z_Param_Radius,Z_Param_bSphereInWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCullDistances) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartCullDistance); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EndCullDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCullDistances(Z_Param_StartCullDistance,Z_Param_EndCullDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInstanceCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearInstances) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearInstances(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInstance) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInstanceTransform) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransform) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInstanceWorldSpace) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddInstanceWorldSpace(Z_Param_Out_WorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InstanceTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_InstanceTransform); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInstancesOverlappingBox) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box); \
		P_GET_UBOOL(Z_Param_bBoxInWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInstancesOverlappingBox(Z_Param_Out_Box,Z_Param_bBoxInWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstancesOverlappingSphere) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_UBOOL(Z_Param_bSphereInWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInstancesOverlappingSphere(Z_Param_Out_Center,Z_Param_Radius,Z_Param_bSphereInWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCullDistances) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartCullDistance); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EndCullDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCullDistances(Z_Param_StartCullDistance,Z_Param_EndCullDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInstanceCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearInstances) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearInstances(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInstance) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInstanceTransform) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransform) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInstanceWorldSpace) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddInstanceWorldSpace(Z_Param_Out_WorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InstanceTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_InstanceTransform); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInstancedStaticMeshComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UInstancedStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInstancedStaticMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UInstancedStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInstancedStaticMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedStaticMeshComponent) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInstancedStaticMeshComponent(UInstancedStaticMeshComponent&&); \
	NO_API UInstancedStaticMeshComponent(const UInstancedStaticMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInstancedStaticMeshComponent(UInstancedStaticMeshComponent&&); \
	NO_API UInstancedStaticMeshComponent(const UInstancedStaticMeshComponent&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedStaticMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumPendingLightmaps() { return STRUCT_OFFSET(UInstancedStaticMeshComponent, NumPendingLightmaps); } \
	FORCEINLINE static uint32 __PPO__CachedMappings() { return STRUCT_OFFSET(UInstancedStaticMeshComponent, CachedMappings); }


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_119_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_122_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InstancedStaticMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInstancedStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

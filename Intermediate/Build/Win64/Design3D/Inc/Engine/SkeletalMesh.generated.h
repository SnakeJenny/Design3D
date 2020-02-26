// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshSocket;
struct FTransform;
class UBlueprint;
class UNodeMappingContainer;
class USkeletalMeshLODSettings;
struct FBoxSphereBounds;
#ifdef ENGINE_SkeletalMesh_generated_h
#error "SkeletalMesh.generated.h already included, missing '#pragma once' in SkeletalMesh.h"
#endif
#define ENGINE_SkeletalMesh_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_358_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMaterial>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_327_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClothingAssetData_Legacy>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_254_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClothPhysicsProperties_Legacy>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshLODInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshClothBuildParams>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneMirrorExport_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneMirrorExport>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneMirrorInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSectionUsingCloth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSectionIndex); \
		P_GET_UBOOL(Z_Param_bCheckCorrespondingSections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->GetSocketByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNumSockets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->NumSockets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocketInfo) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutBoneIndex); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketInfo(Z_Param_InSocketName,Z_Param_Out_OutTransform,Z_Param_Out_OutBoneIndex,Z_Param_Out_OutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocketAndIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketAndIndex(Z_Param_InSocketName,Z_Param_Out_OutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeMappingContainer) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_SourceAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNodeMappingContainer**)Z_Param__Result=P_THIS->GetNodeMappingContainer(Z_Param_SourceAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLODSettings) \
	{ \
		P_GET_OBJECT(USkeletalMeshLODSettings,Z_Param_InLODSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLODSettings(Z_Param_InLODSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImportedBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetImportedBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSectionUsingCloth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSectionIndex); \
		P_GET_UBOOL(Z_Param_bCheckCorrespondingSections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->GetSocketByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNumSockets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->NumSockets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocketInfo) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutBoneIndex); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketInfo(Z_Param_InSocketName,Z_Param_Out_OutTransform,Z_Param_Out_OutBoneIndex,Z_Param_Out_OutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocketAndIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketAndIndex(Z_Param_InSocketName,Z_Param_Out_OutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeMappingContainer) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_SourceAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNodeMappingContainer**)Z_Param__Result=P_THIS->GetNodeMappingContainer(Z_Param_SourceAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLODSettings) \
	{ \
		P_GET_OBJECT(USkeletalMeshLODSettings,Z_Param_InLODSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLODSettings(Z_Param_InLODSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImportedBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetImportedBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMesh, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend struct Z_Construct_UClass_USkeletalMesh_Statics; \
public: \
	DECLARE_CLASS(USkeletalMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend struct Z_Construct_UClass_USkeletalMesh_Statics; \
public: \
	DECLARE_CLASS(USkeletalMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMesh(USkeletalMesh&&); \
	NO_API USkeletalMesh(const USkeletalMesh&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMesh(USkeletalMesh&&); \
	NO_API USkeletalMesh(const USkeletalMesh&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImportedBounds() { return STRUCT_OFFSET(USkeletalMesh, ImportedBounds); } \
	FORCEINLINE static uint32 __PPO__ExtendedBounds() { return STRUCT_OFFSET(USkeletalMesh, ExtendedBounds); } \
	FORCEINLINE static uint32 __PPO__PositiveBoundsExtension() { return STRUCT_OFFSET(USkeletalMesh, PositiveBoundsExtension); } \
	FORCEINLINE static uint32 __PPO__NegativeBoundsExtension() { return STRUCT_OFFSET(USkeletalMesh, NegativeBoundsExtension); } \
	FORCEINLINE static uint32 __PPO__LODInfo() { return STRUCT_OFFSET(USkeletalMesh, LODInfo); } \
	FORCEINLINE static uint32 __PPO__SamplingInfo() { return STRUCT_OFFSET(USkeletalMesh, SamplingInfo); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(USkeletalMesh, AssetUserData); } \
	FORCEINLINE static uint32 __PPO__Sockets() { return STRUCT_OFFSET(USkeletalMesh, Sockets); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_427_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_430_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

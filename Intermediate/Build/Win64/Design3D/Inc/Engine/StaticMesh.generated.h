// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UStaticMeshSocket;
struct FBox;
struct FBoxSphereBounds;
#ifdef ENGINE_StaticMesh_generated_h
#error "StaticMesh.generated.h already included, missing '#pragma once' in StaticMesh.h"
#endif
#define ENGINE_StaticMesh_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_457_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialRemapIndex>();

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_383_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticMaterial>();

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_337_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAssetEditorOrbitCameraPosition>();

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshSectionInfoMap>();

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshSectionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshSectionInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticMeshSourceModel>();

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticMeshOptimizationSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_MaterialSlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaterialIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_MaterialIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(Z_Param_InLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=P_THIS->GetBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumLODs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumLODs(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_MaterialSlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaterialIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_MaterialIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(Z_Param_InLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=P_THIS->GetBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumLODs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumLODs(); \
		P_NATIVE_END; \
	}


#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaterialIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterial(Z_Param_MaterialIndex,Z_Param_NewMaterial); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaterialIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterial(Z_Param_MaterialIndex,Z_Param_NewMaterial); \
		P_NATIVE_END; \
	}


#else
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMesh, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMesh(); \
	friend struct Z_Construct_UClass_UStaticMesh_Statics; \
public: \
	DECLARE_CLASS(UStaticMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMesh) \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMesh(); \
	friend struct Z_Construct_UClass_UStaticMesh_Statics; \
public: \
	DECLARE_CLASS(UStaticMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMesh) \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStaticMesh(UStaticMesh&&); \
	ENGINE_API UStaticMesh(const UStaticMesh&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStaticMesh(UStaticMesh&&); \
	ENGINE_API UStaticMesh(const UStaticMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMesh)


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ElementToIgnoreForTexFactor() { return STRUCT_OFFSET(UStaticMesh, ElementToIgnoreForTexFactor); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(UStaticMesh, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_549_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStaticMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h


#define FOREACH_ENUM_EOPTIMIZATIONTYPE(op) \
	op(OT_NumOfTriangles) \
	op(OT_MaxDeviation) 
#define FOREACH_ENUM_EIMPORTANCELEVEL(op) \
	op(IL_Off) \
	op(IL_Lowest) \
	op(IL_Low) \
	op(IL_Normal) \
	op(IL_High) \
	op(IL_Highest) \
	op(TEMP_BROKEN2) 
#define FOREACH_ENUM_ENORMALMODE(op) \
	op(NM_PreserveSmoothingGroups) \
	op(NM_RecalculateNormals) \
	op(NM_RecalculateNormalsSmooth) \
	op(NM_RecalculateNormalsHard) \
	op(TEMP_BROKEN) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

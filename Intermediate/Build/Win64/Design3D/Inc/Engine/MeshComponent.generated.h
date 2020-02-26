// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UMaterialInterface;
#ifdef ENGINE_MeshComponent_generated_h
#error "MeshComponent.generated.h already included, missing '#pragma once' in MeshComponent.h"
#endif
#define ENGINE_MeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVectorParameterValueOnMaterials) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FVector,Z_Param_ParameterValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVectorParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalarParameterValueOnMaterials) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ParameterValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScalarParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrestreamTextures) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_bPrioritizeCharacterTextures); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bPrioritizeCharacterTextures,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMaterialSlotNameValid(Z_Param_MaterialSlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialSlotNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetMaterialSlotNames(); \
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
	DECLARE_FUNCTION(execGetMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMaterialInterface*>*)Z_Param__Result=P_THIS->GetMaterials(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVectorParameterValueOnMaterials) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FVector,Z_Param_ParameterValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVectorParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalarParameterValueOnMaterials) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ParameterValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScalarParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrestreamTextures) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_bPrioritizeCharacterTextures); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bPrioritizeCharacterTextures,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMaterialSlotNameValid(Z_Param_MaterialSlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialSlotNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetMaterialSlotNames(); \
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
	DECLARE_FUNCTION(execGetMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMaterialInterface*>*)Z_Param__Result=P_THIS->GetMaterials(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshComponent(); \
	friend struct Z_Construct_UClass_UMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMeshComponent(); \
	friend struct Z_Construct_UClass_UMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshComponent(UMeshComponent&&); \
	NO_API UMeshComponent(const UMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshComponent(UMeshComponent&&); \
	NO_API UMeshComponent(const UMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnableMaterialParameterCaching() { return STRUCT_OFFSET(UMeshComponent, bEnableMaterialParameterCaching); }


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

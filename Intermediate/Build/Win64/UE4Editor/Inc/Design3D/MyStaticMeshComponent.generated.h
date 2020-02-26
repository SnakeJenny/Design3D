// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class UStaticMeshComponent;
class URuntimeMeshComponent;
class UMaterial;
enum class EPathType : uint8;
struct FReturnedData;
class UWorld;
class UMaterialInterface;
#ifdef DESIGN3D_MyStaticMeshComponent_generated_h
#error "MyStaticMeshComponent.generated.h already included, missing '#pragma once' in MyStaticMeshComponent.h"
#endif
#define DESIGN3D_MyStaticMeshComponent_generated_h

#define Design3D_Source_Design3D_MyStaticMeshComponent_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReturnedData_Statics; \
	DESIGN3D_API static class UScriptStruct* StaticStruct();


template<> DESIGN3D_API UScriptStruct* StaticStruct<struct FReturnedData>();

#define Design3D_Source_Design3D_MyStaticMeshComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshInfo_Statics; \
	DESIGN3D_API static class UScriptStruct* StaticStruct();


template<> DESIGN3D_API UScriptStruct* StaticStruct<struct FMeshInfo>();

#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRMCInfo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_RootComponent); \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_MyStaticMeshComponent); \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_RMComponent); \
		P_GET_OBJECT(UMaterial,Z_Param_RMCMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetRMCInfo(Z_Param_RootComponent,Z_Param_MyStaticMeshComponent,Z_Param_RMComponent,Z_Param_RMCMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMeshFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_ENUM(EPathType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FReturnedData*)Z_Param__Result=UMyStaticMeshComponent::LoadMeshFromFile(Z_Param_filepath,EPathType(Z_Param_type)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTextureFromImage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_STRUCT_REF(FReturnedData,Z_Param_Out_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyStaticMeshComponent::LoadTextureFromImage(Z_Param_ImagePath,Z_Param_Out_result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildMyTextureStreamingData) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_InWorld); \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_MyStaticMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BuildMyTextureStreamingData(Z_Param_InWorld,Z_Param_MyStaticMeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMyMaterials) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_MyStaticMeshComponent); \
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_OutMaterials); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMyMaterials(Z_Param_MyStaticMeshComponent,Z_Param_Out_OutMaterials); \
		P_NATIVE_END; \
	}


#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRMCInfo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_RootComponent); \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_MyStaticMeshComponent); \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_RMComponent); \
		P_GET_OBJECT(UMaterial,Z_Param_RMCMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetRMCInfo(Z_Param_RootComponent,Z_Param_MyStaticMeshComponent,Z_Param_RMComponent,Z_Param_RMCMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMeshFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_ENUM(EPathType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FReturnedData*)Z_Param__Result=UMyStaticMeshComponent::LoadMeshFromFile(Z_Param_filepath,EPathType(Z_Param_type)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTextureFromImage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_STRUCT_REF(FReturnedData,Z_Param_Out_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyStaticMeshComponent::LoadTextureFromImage(Z_Param_ImagePath,Z_Param_Out_result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildMyTextureStreamingData) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_InWorld); \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_MyStaticMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BuildMyTextureStreamingData(Z_Param_InWorld,Z_Param_MyStaticMeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMyMaterials) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_MyStaticMeshComponent); \
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_OutMaterials); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMyMaterials(Z_Param_MyStaticMeshComponent,Z_Param_Out_OutMaterials); \
		P_NATIVE_END; \
	}


#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UMyStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Design3D"), NO_API) \
	DECLARE_SERIALIZER(UMyStaticMeshComponent)


#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUMyStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UMyStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Design3D"), NO_API) \
	DECLARE_SERIALIZER(UMyStaticMeshComponent)


#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyStaticMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyStaticMeshComponent(UMyStaticMeshComponent&&); \
	NO_API UMyStaticMeshComponent(const UMyStaticMeshComponent&); \
public:


#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyStaticMeshComponent(UMyStaticMeshComponent&&); \
	NO_API UMyStaticMeshComponent(const UMyStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyStaticMeshComponent)


#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_PRIVATE_PROPERTY_OFFSET
#define Design3D_Source_Design3D_MyStaticMeshComponent_h_82_PROLOG
#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Source_Design3D_MyStaticMeshComponent_h_85_PRIVATE_PROPERTY_OFFSET \
	Design3D_Source_Design3D_MyStaticMeshComponent_h_85_RPC_WRAPPERS \
	Design3D_Source_Design3D_MyStaticMeshComponent_h_85_INCLASS \
	Design3D_Source_Design3D_MyStaticMeshComponent_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Design3D_Source_Design3D_MyStaticMeshComponent_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Source_Design3D_MyStaticMeshComponent_h_85_PRIVATE_PROPERTY_OFFSET \
	Design3D_Source_Design3D_MyStaticMeshComponent_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	Design3D_Source_Design3D_MyStaticMeshComponent_h_85_INCLASS_NO_PURE_DECLS \
	Design3D_Source_Design3D_MyStaticMeshComponent_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESIGN3D_API UClass* StaticClass<class UMyStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Design3D_Source_Design3D_MyStaticMeshComponent_h


#define FOREACH_ENUM_EPATHTYPE(op) \
	op(EPathType::Absolute) \
	op(EPathType::Relative) 

enum class EPathType : uint8;
template<> DESIGN3D_API UEnum* StaticEnum<EPathType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

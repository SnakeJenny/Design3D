// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
struct FLinearColor;
#ifdef ENGINE_KismetMaterialLibrary_generated_h
#error "KismetMaterialLibrary.generated.h already included, missing '#pragma once' in KismetMaterialLibrary.h"
#endif
#define ENGINE_KismetMaterialLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=UKismetMaterialLibrary::CreateDynamicMaterialInstance(Z_Param_WorldContextObject,Z_Param_Parent,Z_Param_OptionalName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorParameterValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMaterialLibrary::GetVectorParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScalarParameterValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMaterialLibrary::GetScalarParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorParameterValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ParameterValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMaterialLibrary::SetVectorParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName,Z_Param_Out_ParameterValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalarParameterValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ParameterValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMaterialLibrary::SetScalarParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName,Z_Param_ParameterValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=UKismetMaterialLibrary::CreateDynamicMaterialInstance(Z_Param_WorldContextObject,Z_Param_Parent,Z_Param_OptionalName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorParameterValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMaterialLibrary::GetVectorParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScalarParameterValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMaterialLibrary::GetScalarParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorParameterValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ParameterValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMaterialLibrary::SetVectorParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName,Z_Param_Out_ParameterValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalarParameterValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ParameterValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMaterialLibrary::SetScalarParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName,Z_Param_ParameterValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetMaterialLibrary(); \
	friend struct Z_Construct_UClass_UKismetMaterialLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMaterialLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetMaterialLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUKismetMaterialLibrary(); \
	friend struct Z_Construct_UClass_UKismetMaterialLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMaterialLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetMaterialLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetMaterialLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMaterialLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetMaterialLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMaterialLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetMaterialLibrary(UKismetMaterialLibrary&&); \
	ENGINE_API UKismetMaterialLibrary(const UKismetMaterialLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetMaterialLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetMaterialLibrary(UKismetMaterialLibrary&&); \
	ENGINE_API UKismetMaterialLibrary(const UKismetMaterialLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetMaterialLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMaterialLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMaterialLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetMaterialLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetMaterialLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

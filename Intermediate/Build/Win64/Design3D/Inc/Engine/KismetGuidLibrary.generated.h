// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef ENGINE_KismetGuidLibrary_generated_h
#error "KismetGuidLibrary.generated.h already included, missing '#pragma once' in KismetGuidLibrary.h"
#endif
#define ENGINE_KismetGuidLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execParse_StringToGuid) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GuidString); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutGuid); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetGuidLibrary::Parse_StringToGuid(Z_Param_GuidString,Z_Param_Out_OutGuid,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_GuidToString) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetGuidLibrary::Conv_GuidToString(Z_Param_Out_InGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewGuid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=UKismetGuidLibrary::NewGuid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidate_Guid) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetGuidLibrary::Invalidate_Guid(Z_Param_Out_InGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_Guid) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetGuidLibrary::IsValid_Guid(Z_Param_Out_InGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GuidGuid) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetGuidLibrary::NotEqual_GuidGuid(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_GuidGuid) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetGuidLibrary::EqualEqual_GuidGuid(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execParse_StringToGuid) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GuidString); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutGuid); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetGuidLibrary::Parse_StringToGuid(Z_Param_GuidString,Z_Param_Out_OutGuid,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_GuidToString) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetGuidLibrary::Conv_GuidToString(Z_Param_Out_InGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewGuid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=UKismetGuidLibrary::NewGuid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidate_Guid) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetGuidLibrary::Invalidate_Guid(Z_Param_Out_InGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_Guid) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetGuidLibrary::IsValid_Guid(Z_Param_Out_InGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GuidGuid) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetGuidLibrary::NotEqual_GuidGuid(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_GuidGuid) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetGuidLibrary::EqualEqual_GuidGuid(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetGuidLibrary(); \
	friend struct Z_Construct_UClass_UKismetGuidLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetGuidLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetGuidLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUKismetGuidLibrary(); \
	friend struct Z_Construct_UClass_UKismetGuidLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetGuidLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetGuidLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetGuidLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetGuidLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetGuidLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetGuidLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetGuidLibrary(UKismetGuidLibrary&&); \
	NO_API UKismetGuidLibrary(const UKismetGuidLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetGuidLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetGuidLibrary(UKismetGuidLibrary&&); \
	NO_API UKismetGuidLibrary(const UKismetGuidLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetGuidLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetGuidLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetGuidLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetGuidLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetGuidLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

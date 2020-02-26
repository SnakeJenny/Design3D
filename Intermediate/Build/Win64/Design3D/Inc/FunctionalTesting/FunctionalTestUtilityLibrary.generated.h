// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FTraceChannelTestBatchOptions;
struct FVector;
struct FRotator;
class AActor;
struct FLinearColor;
class UTraceQueryTestResults;
#ifdef FUNCTIONALTESTING_FunctionalTestUtilityLibrary_generated_h
#error "FunctionalTestUtilityLibrary.generated.h already included, missing '#pragma once' in FunctionalTestUtilityLibrary.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestUtilityLibrary_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTraceChannelTestUtil) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTraceChannelTestBatchOptions,Z_Param_Out_BatchOptions); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereCapsuleRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleHalfHeight); \
		P_GET_STRUCT(FVector,Z_Param_BoxHalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_TARRAY(TEnumAsByte<EObjectTypeQuery>,Z_Param_ObjectTypes); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTraceQueryTestResults**)Z_Param__Result=UFunctionalTestUtilityLibrary::TraceChannelTestUtil(Z_Param_WorldContextObject,Z_Param_Out_BatchOptions,Z_Param_Start,Z_Param_End,Z_Param_SphereCapsuleRadius,Z_Param_CapsuleHalfHeight,Z_Param_BoxHalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_ObjectTypes,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_bIgnoreSelf,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceChannelTestUtil) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTraceChannelTestBatchOptions,Z_Param_Out_BatchOptions); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereCapsuleRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleHalfHeight); \
		P_GET_STRUCT(FVector,Z_Param_BoxHalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_TARRAY(TEnumAsByte<EObjectTypeQuery>,Z_Param_ObjectTypes); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTraceQueryTestResults**)Z_Param__Result=UFunctionalTestUtilityLibrary::TraceChannelTestUtil(Z_Param_WorldContextObject,Z_Param_Out_BatchOptions,Z_Param_Start,Z_Param_End,Z_Param_SphereCapsuleRadius,Z_Param_CapsuleHalfHeight,Z_Param_BoxHalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_ObjectTypes,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_bIgnoreSelf,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunctionalTestUtilityLibrary(); \
	friend struct Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UFunctionalTestUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UFunctionalTestUtilityLibrary)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFunctionalTestUtilityLibrary(); \
	friend struct Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UFunctionalTestUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UFunctionalTestUtilityLibrary)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionalTestUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionalTestUtilityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFunctionalTestUtilityLibrary(UFunctionalTestUtilityLibrary&&); \
	NO_API UFunctionalTestUtilityLibrary(const UFunctionalTestUtilityLibrary&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionalTestUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFunctionalTestUtilityLibrary(UFunctionalTestUtilityLibrary&&); \
	NO_API UFunctionalTestUtilityLibrary(const UFunctionalTestUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionalTestUtilityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestUtilityLibrary)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_14_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UFunctionalTestUtilityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimecode;
struct FFrameNumber;
struct FFrameTime;
struct FFrameRate;
struct FQualifiedFrameTime;
#ifdef TIMEMANAGEMENT_TimeManagementBlueprintLibrary_generated_h
#error "TimeManagementBlueprintLibrary.generated.h already included, missing '#pragma once' in TimeManagementBlueprintLibrary.h"
#endif
#define TIMEMANAGEMENT_TimeManagementBlueprintLibrary_generated_h

#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimecode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimecode*)Z_Param__Result=UTimeManagementBlueprintLibrary::GetTimecode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FrameNumberToInteger) \
	{ \
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InFrameNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(Z_Param_Out_InFrameNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_FrameNumberInteger) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_FrameNumberInteger) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_FrameNumberInteger) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_FrameNumberInteger) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_FrameNumberFrameNumber) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_STRUCT(FFrameNumber,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_FrameNumberFrameNumber) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_STRUCT(FFrameNumber,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapFrameTimeToRate) \
	{ \
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_SourceTime); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SourceRate); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SnapToRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(Z_Param_Out_SourceTime,Z_Param_Out_SourceRate,Z_Param_Out_SnapToRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformTime) \
	{ \
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_SourceTime); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SourceRate); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_DestinationRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::TransformTime(Z_Param_Out_SourceTime,Z_Param_Out_SourceRate,Z_Param_Out_DestinationRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_MultipleOf) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_OtherFramerate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTimeManagementBlueprintLibrary::IsValid_MultipleOf(Z_Param_Out_InFrameRate,Z_Param_Out_OtherFramerate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_Framerate) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTimeManagementBlueprintLibrary::IsValid_Framerate(Z_Param_Out_InFrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TimecodeToString) \
	{ \
		P_GET_STRUCT_REF(FTimecode,Z_Param_Out_InTimecode); \
		P_GET_UBOOL(Z_Param_bForceSignDisplay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_TimecodeToString(Z_Param_Out_InTimecode,Z_Param_bForceSignDisplay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_SecondsFrameRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeInSeconds); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(Z_Param_TimeInSeconds,Z_Param_Out_FrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_QualifiedFrameTimeToSeconds) \
	{ \
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_InFrameTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(Z_Param_Out_InFrameTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FrameRateToSeconds) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(Z_Param_Out_InFrameRate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimecode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimecode*)Z_Param__Result=UTimeManagementBlueprintLibrary::GetTimecode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FrameNumberToInteger) \
	{ \
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InFrameNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(Z_Param_Out_InFrameNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_FrameNumberInteger) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_FrameNumberInteger) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_FrameNumberInteger) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_FrameNumberInteger) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_FrameNumberFrameNumber) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_STRUCT(FFrameNumber,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_FrameNumberFrameNumber) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_A); \
		P_GET_STRUCT(FFrameNumber,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapFrameTimeToRate) \
	{ \
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_SourceTime); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SourceRate); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SnapToRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(Z_Param_Out_SourceTime,Z_Param_Out_SourceRate,Z_Param_Out_SnapToRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformTime) \
	{ \
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_SourceTime); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SourceRate); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_DestinationRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::TransformTime(Z_Param_Out_SourceTime,Z_Param_Out_SourceRate,Z_Param_Out_DestinationRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_MultipleOf) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_OtherFramerate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTimeManagementBlueprintLibrary::IsValid_MultipleOf(Z_Param_Out_InFrameRate,Z_Param_Out_OtherFramerate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_Framerate) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTimeManagementBlueprintLibrary::IsValid_Framerate(Z_Param_Out_InFrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TimecodeToString) \
	{ \
		P_GET_STRUCT_REF(FTimecode,Z_Param_Out_InTimecode); \
		P_GET_UBOOL(Z_Param_bForceSignDisplay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_TimecodeToString(Z_Param_Out_InTimecode,Z_Param_bForceSignDisplay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_SecondsFrameRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeInSeconds); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(Z_Param_TimeInSeconds,Z_Param_Out_FrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_QualifiedFrameTimeToSeconds) \
	{ \
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_InFrameTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(Z_Param_Out_InFrameTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FrameRateToSeconds) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(Z_Param_Out_InFrameRate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeManagementBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTimeManagementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UTimeManagementBlueprintLibrary)


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTimeManagementBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTimeManagementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UTimeManagementBlueprintLibrary)


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeManagementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeManagementBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeManagementBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeManagementBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeManagementBlueprintLibrary(UTimeManagementBlueprintLibrary&&); \
	NO_API UTimeManagementBlueprintLibrary(const UTimeManagementBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeManagementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeManagementBlueprintLibrary(UTimeManagementBlueprintLibrary&&); \
	NO_API UTimeManagementBlueprintLibrary(const UTimeManagementBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeManagementBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeManagementBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeManagementBlueprintLibrary)


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_15_PROLOG
#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_INCLASS \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UTimeManagementBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

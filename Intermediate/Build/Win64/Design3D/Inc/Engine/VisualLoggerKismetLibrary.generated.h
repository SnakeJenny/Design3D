// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
struct FLinearColor;
struct FBox;
#ifdef ENGINE_VisualLoggerKismetLibrary_generated_h
#error "VisualLoggerKismetLibrary.generated.h already included, missing '#pragma once' in VisualLoggerKismetLibrary.h"
#endif
#define ENGINE_VisualLoggerKismetLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogSegment) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_SegmentStart); \
		P_GET_STRUCT(FVector,Z_Param_SegmentEnd); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_UBOOL(Z_Param_bAddToMessageLog); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogSegment(Z_Param_WorldContextObject,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Thickness,Z_Param_CategoryName,Z_Param_bAddToMessageLog); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FBox,Z_Param_BoxShape); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_GET_UBOOL(Z_Param_bAddToMessageLog); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_GET_UBOOL(Z_Param_bAddToMessageLog); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory,Z_Param_bAddToMessageLog); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_GET_UBOOL(Z_Param_bAddToMessageLog); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory,Z_Param_bAddToMessageLog); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRedirectVislog) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SourceOwner); \
		P_GET_OBJECT(UObject,Z_Param_DestinationOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::RedirectVislog(Z_Param_SourceOwner,Z_Param_DestinationOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableRecording) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::EnableRecording(Z_Param_bEnabled); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogSegment) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_SegmentStart); \
		P_GET_STRUCT(FVector,Z_Param_SegmentEnd); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_UBOOL(Z_Param_bAddToMessageLog); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogSegment(Z_Param_WorldContextObject,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Thickness,Z_Param_CategoryName,Z_Param_bAddToMessageLog); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FBox,Z_Param_BoxShape); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_GET_UBOOL(Z_Param_bAddToMessageLog); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_GET_UBOOL(Z_Param_bAddToMessageLog); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory,Z_Param_bAddToMessageLog); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_GET_UBOOL(Z_Param_bAddToMessageLog); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory,Z_Param_bAddToMessageLog); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRedirectVislog) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SourceOwner); \
		P_GET_OBJECT(UObject,Z_Param_DestinationOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::RedirectVislog(Z_Param_SourceOwner,Z_Param_DestinationOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableRecording) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::EnableRecording(Z_Param_bEnabled); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisualLoggerKismetLibrary(); \
	friend struct Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics; \
public: \
	DECLARE_CLASS(UVisualLoggerKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVisualLoggerKismetLibrary)


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUVisualLoggerKismetLibrary(); \
	friend struct Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics; \
public: \
	DECLARE_CLASS(UVisualLoggerKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVisualLoggerKismetLibrary)


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerKismetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerKismetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerKismetLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVisualLoggerKismetLibrary(UVisualLoggerKismetLibrary&&); \
	ENGINE_API UVisualLoggerKismetLibrary(const UVisualLoggerKismetLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVisualLoggerKismetLibrary(UVisualLoggerKismetLibrary&&); \
	ENGINE_API UVisualLoggerKismetLibrary(const UVisualLoggerKismetLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerKismetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerKismetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerKismetLibrary)


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_8_PROLOG
#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_INCLASS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VisualLoggerKismetLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVisualLoggerKismetLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

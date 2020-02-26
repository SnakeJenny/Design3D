// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FImportanceTexture;
struct FVector2D;
struct FLinearColor;
class UTexture2D;
struct FVector;
#ifdef ENGINE_ImportanceSamplingLibrary_generated_h
#error "ImportanceSamplingLibrary.generated.h already included, missing '#pragma once' in ImportanceSamplingLibrary.h"
#endif
#define ENGINE_ImportanceSamplingLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImportanceTexture_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FImportanceTexture>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execImportanceSample) \
	{ \
		P_GET_STRUCT_REF(FImportanceTexture,Z_Param_Out_Texture); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Rand); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Samples); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Intensity); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SamplePosition); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SampleColor); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SampleIntensity); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SampleSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UImportanceSamplingLibrary::ImportanceSample(Z_Param_Out_Texture,Z_Param_Out_Rand,Z_Param_Samples,Z_Param_Intensity,Z_Param_Out_SamplePosition,Z_Param_Out_SampleColor,Z_Param_Out_SampleIntensity,Z_Param_Out_SampleSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakImportanceTexture) \
	{ \
		P_GET_STRUCT_REF(FImportanceTexture,Z_Param_Out_ImportanceTexture); \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_WeightingFunc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UImportanceSamplingLibrary::BreakImportanceTexture(Z_Param_Out_ImportanceTexture,Z_Param_Out_Texture,(TEnumAsByte<EImportanceWeight::Type>&)(Z_Param_Out_WeightingFunc)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeImportanceTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UByteProperty,Z_Param_WeightingFunc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FImportanceTexture*)Z_Param__Result=UImportanceSamplingLibrary::MakeImportanceTexture(Z_Param_Texture,EImportanceWeight::Type(Z_Param_WeightingFunc)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextSobolCell3D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCells); \
		P_GET_STRUCT(FVector,Z_Param_PreviousValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolCell3D(Z_Param_Index,Z_Param_NumCells,Z_Param_PreviousValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomSobolCell3D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCells); \
		P_GET_STRUCT(FVector,Z_Param_Cell); \
		P_GET_STRUCT(FVector,Z_Param_Seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolCell3D(Z_Param_Index,Z_Param_NumCells,Z_Param_Cell,Z_Param_Seed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextSobolCell2D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCells); \
		P_GET_STRUCT(FVector2D,Z_Param_PreviousValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolCell2D(Z_Param_Index,Z_Param_NumCells,Z_Param_PreviousValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomSobolCell2D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCells); \
		P_GET_STRUCT(FVector2D,Z_Param_Cell); \
		P_GET_STRUCT(FVector2D,Z_Param_Seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolCell2D(Z_Param_Index,Z_Param_NumCells,Z_Param_Cell,Z_Param_Seed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextSobolFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Dimension); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PreviousValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolFloat(Z_Param_Index,Z_Param_Dimension,Z_Param_PreviousValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomSobolFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Dimension); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolFloat(Z_Param_Index,Z_Param_Dimension,Z_Param_Seed); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execImportanceSample) \
	{ \
		P_GET_STRUCT_REF(FImportanceTexture,Z_Param_Out_Texture); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Rand); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Samples); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Intensity); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SamplePosition); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SampleColor); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SampleIntensity); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SampleSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UImportanceSamplingLibrary::ImportanceSample(Z_Param_Out_Texture,Z_Param_Out_Rand,Z_Param_Samples,Z_Param_Intensity,Z_Param_Out_SamplePosition,Z_Param_Out_SampleColor,Z_Param_Out_SampleIntensity,Z_Param_Out_SampleSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakImportanceTexture) \
	{ \
		P_GET_STRUCT_REF(FImportanceTexture,Z_Param_Out_ImportanceTexture); \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_WeightingFunc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UImportanceSamplingLibrary::BreakImportanceTexture(Z_Param_Out_ImportanceTexture,Z_Param_Out_Texture,(TEnumAsByte<EImportanceWeight::Type>&)(Z_Param_Out_WeightingFunc)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeImportanceTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UByteProperty,Z_Param_WeightingFunc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FImportanceTexture*)Z_Param__Result=UImportanceSamplingLibrary::MakeImportanceTexture(Z_Param_Texture,EImportanceWeight::Type(Z_Param_WeightingFunc)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextSobolCell3D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCells); \
		P_GET_STRUCT(FVector,Z_Param_PreviousValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolCell3D(Z_Param_Index,Z_Param_NumCells,Z_Param_PreviousValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomSobolCell3D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCells); \
		P_GET_STRUCT(FVector,Z_Param_Cell); \
		P_GET_STRUCT(FVector,Z_Param_Seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolCell3D(Z_Param_Index,Z_Param_NumCells,Z_Param_Cell,Z_Param_Seed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextSobolCell2D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCells); \
		P_GET_STRUCT(FVector2D,Z_Param_PreviousValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolCell2D(Z_Param_Index,Z_Param_NumCells,Z_Param_PreviousValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomSobolCell2D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCells); \
		P_GET_STRUCT(FVector2D,Z_Param_Cell); \
		P_GET_STRUCT(FVector2D,Z_Param_Seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolCell2D(Z_Param_Index,Z_Param_NumCells,Z_Param_Cell,Z_Param_Seed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextSobolFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Dimension); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PreviousValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolFloat(Z_Param_Index,Z_Param_Dimension,Z_Param_PreviousValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomSobolFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Dimension); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolFloat(Z_Param_Index,Z_Param_Dimension,Z_Param_Seed); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportanceSamplingLibrary(); \
	friend struct Z_Construct_UClass_UImportanceSamplingLibrary_Statics; \
public: \
	DECLARE_CLASS(UImportanceSamplingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UImportanceSamplingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUImportanceSamplingLibrary(); \
	friend struct Z_Construct_UClass_UImportanceSamplingLibrary_Statics; \
public: \
	DECLARE_CLASS(UImportanceSamplingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UImportanceSamplingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UImportanceSamplingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportanceSamplingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UImportanceSamplingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportanceSamplingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UImportanceSamplingLibrary(UImportanceSamplingLibrary&&); \
	ENGINE_API UImportanceSamplingLibrary(const UImportanceSamplingLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UImportanceSamplingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UImportanceSamplingLibrary(UImportanceSamplingLibrary&&); \
	ENGINE_API UImportanceSamplingLibrary(const UImportanceSamplingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UImportanceSamplingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportanceSamplingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportanceSamplingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_110_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ImportanceSamplingLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UImportanceSamplingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h


#define FOREACH_ENUM_EIMPORTANCEWEIGHT(op) \
	op(EImportanceWeight::Luminance) \
	op(EImportanceWeight::Red) \
	op(EImportanceWeight::Green) \
	op(EImportanceWeight::Blue) \
	op(EImportanceWeight::Alpha) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

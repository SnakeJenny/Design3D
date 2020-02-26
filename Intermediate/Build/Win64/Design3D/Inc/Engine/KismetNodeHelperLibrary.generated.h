// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
#ifdef ENGINE_KismetNodeHelperLibrary_generated_h
#error "KismetNodeHelperLibrary.generated.h already included, missing '#pragma once' in KismetNodeHelperLibrary.h"
#endif
#define ENGINE_KismetNodeHelperLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnumeratorValueFromIndex) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumeratorIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(Z_Param_Enum,Z_Param_EnumeratorIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValidValue) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumeratorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetNodeHelperLibrary::GetValidValue(Z_Param_Enum,Z_Param_EnumeratorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumeratorUserFriendlyName) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumeratorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(Z_Param_Enum,Z_Param_EnumeratorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumeratorName) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumeratorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorName(Z_Param_Enum,Z_Param_EnumeratorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstUnmarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartIdx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetFirstUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomUnmarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartIdx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetRandomUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnmarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartIdx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_GET_UBOOL(Z_Param_bRandom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits,Z_Param_bRandom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::HasMarkedBit(Z_Param_Data,Z_Param_NumBits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUnmarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::HasUnmarkedBit(Z_Param_Data,Z_Param_NumBits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllBits) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetNodeHelperLibrary::ClearAllBits(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBit) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetNodeHelperLibrary::ClearBit(Z_Param_Out_Data,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkBit) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetNodeHelperLibrary::MarkBit(Z_Param_Out_Data,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBitIsMarked) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::BitIsMarked(Z_Param_Data,Z_Param_Index); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnumeratorValueFromIndex) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumeratorIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(Z_Param_Enum,Z_Param_EnumeratorIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValidValue) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumeratorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetNodeHelperLibrary::GetValidValue(Z_Param_Enum,Z_Param_EnumeratorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumeratorUserFriendlyName) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumeratorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(Z_Param_Enum,Z_Param_EnumeratorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumeratorName) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumeratorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorName(Z_Param_Enum,Z_Param_EnumeratorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstUnmarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartIdx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetFirstUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomUnmarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartIdx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetRandomUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnmarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartIdx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_GET_UBOOL(Z_Param_bRandom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits,Z_Param_bRandom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::HasMarkedBit(Z_Param_Data,Z_Param_NumBits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUnmarkedBit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumBits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::HasUnmarkedBit(Z_Param_Data,Z_Param_NumBits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllBits) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetNodeHelperLibrary::ClearAllBits(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBit) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetNodeHelperLibrary::ClearBit(Z_Param_Out_Data,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkBit) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetNodeHelperLibrary::MarkBit(Z_Param_Out_Data,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBitIsMarked) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::BitIsMarked(Z_Param_Data,Z_Param_Index); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetNodeHelperLibrary(); \
	friend struct Z_Construct_UClass_UKismetNodeHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetNodeHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetNodeHelperLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUKismetNodeHelperLibrary(); \
	friend struct Z_Construct_UClass_UKismetNodeHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetNodeHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetNodeHelperLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetNodeHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetNodeHelperLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetNodeHelperLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetNodeHelperLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetNodeHelperLibrary(UKismetNodeHelperLibrary&&); \
	NO_API UKismetNodeHelperLibrary(const UKismetNodeHelperLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetNodeHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetNodeHelperLibrary(UKismetNodeHelperLibrary&&); \
	NO_API UKismetNodeHelperLibrary(const UKismetNodeHelperLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetNodeHelperLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetNodeHelperLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetNodeHelperLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetNodeHelperLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetNodeHelperLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

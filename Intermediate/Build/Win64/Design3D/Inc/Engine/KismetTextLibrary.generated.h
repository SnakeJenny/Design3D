// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPolyglotTextData;
struct FFormatArgumentData;
struct FTimespan;
struct FDateTime;
struct FLinearColor;
class UObject;
struct FTransform;
struct FRotator;
struct FVector2D;
struct FVector;
#ifdef ENGINE_KismetTextLibrary_generated_h
#error "KismetTextLibrary.generated.h already included, missing '#pragma once' in KismetTextLibrary.h"
#endif
#define ENGINE_KismetTextLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPolyglotDataToText) \
	{ \
		P_GET_STRUCT_REF(FPolyglotTextData,Z_Param_Out_PolyglotData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::PolyglotDataToText(Z_Param_Out_PolyglotData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPolyglotDataValid) \
	{ \
		P_GET_STRUCT_REF(FPolyglotTextData,Z_Param_Out_PolyglotData); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetTextLibrary::IsPolyglotDataValid(Z_Param_Out_PolyglotData,Z_Param_Out_IsValid,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringTableIdAndKeyFromText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_OutTableId); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::StringTableIdAndKeyFromText(Z_Param_Text,Z_Param_Out_OutTableId,Z_Param_Out_OutKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextFromStringTable) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextFromStringTable(Z_Param_TableId,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextIsFromStringTable) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsFromStringTable(Z_Param_Out_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFormat) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InPattern); \
		P_GET_TARRAY(FFormatArgumentData,Z_Param_InArgs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Format(Z_Param_InPattern,Z_Param_InArgs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTimespan_Timespan) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_InTimespan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimespan_Timespan(Z_Param_Out_InTimespan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTimeZoneTime_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTimeZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneTime_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTime_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_In); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTime_DateTime(Z_Param_Out_In); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTimeZoneDateTime_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTimeZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneDateTime_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsDateTime_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_In); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsDateTime_DateTime(Z_Param_Out_In); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTimeZoneDate_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTimeZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneDate_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsDate_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsDate_DateTime(Z_Param_Out_InDateTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsPercent_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RoundingMode); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumFractionalDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsPercent_Float(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsCurrency_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RoundingMode); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumFractionalDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrency_Float(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits,Z_Param_CurrencyCode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsCurrency_Integer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RoundingMode); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumFractionalDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrency_Integer(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits,Z_Param_CurrencyCode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsCurrencyBase) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BaseValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrencyBase(Z_Param_BaseValue,Z_Param_CurrencyCode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToText) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RoundingMode); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumFractionalDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_FloatToText(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToText) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_IntToText(Z_Param_Value,Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToText) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ByteToText(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToText) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_BoolToText(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_IgnoreCase_TextText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_A); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::NotEqual_IgnoreCase_TextText(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_TextText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_A); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::NotEqual_TextText(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_IgnoreCase_TextText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_A); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::EqualEqual_IgnoreCase_TextText(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_TextText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_A); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::EqualEqual_TextText(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTextInLocalizationTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Namespace); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::FindTextInLocalizationTable(Z_Param_Namespace,Z_Param_Key,Z_Param_Out_OutText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEmptyText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::GetEmptyText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextTrimPrecedingAndTrailing) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimPrecedingAndTrailing(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextTrimTrailing) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimTrailing(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextTrimPreceding) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimPreceding(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextToUpper) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextToUpper(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextToLower) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextToLower(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextIsCultureInvariant) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsCultureInvariant(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextIsTransient) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsTransient(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextIsEmpty) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsEmpty(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_NameToText) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_NameToText(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_StringToText(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TextToString) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetTextLibrary::Conv_TextToString(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ColorToText) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ColorToText(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ObjectToText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InObj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ObjectToText(Z_Param_InObj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformToText) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_TransformToText(Z_Param_Out_InTrans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToText) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_RotatorToText(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector2dToText) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_Vector2dToText(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToText) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_VectorToText(Z_Param_InVec); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPolyglotDataToText) \
	{ \
		P_GET_STRUCT_REF(FPolyglotTextData,Z_Param_Out_PolyglotData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::PolyglotDataToText(Z_Param_Out_PolyglotData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPolyglotDataValid) \
	{ \
		P_GET_STRUCT_REF(FPolyglotTextData,Z_Param_Out_PolyglotData); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetTextLibrary::IsPolyglotDataValid(Z_Param_Out_PolyglotData,Z_Param_Out_IsValid,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringTableIdAndKeyFromText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_OutTableId); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::StringTableIdAndKeyFromText(Z_Param_Text,Z_Param_Out_OutTableId,Z_Param_Out_OutKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextFromStringTable) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextFromStringTable(Z_Param_TableId,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextIsFromStringTable) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsFromStringTable(Z_Param_Out_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFormat) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InPattern); \
		P_GET_TARRAY(FFormatArgumentData,Z_Param_InArgs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Format(Z_Param_InPattern,Z_Param_InArgs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTimespan_Timespan) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_InTimespan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimespan_Timespan(Z_Param_Out_InTimespan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTimeZoneTime_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTimeZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneTime_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTime_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_In); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTime_DateTime(Z_Param_Out_In); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTimeZoneDateTime_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTimeZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneDateTime_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsDateTime_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_In); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsDateTime_DateTime(Z_Param_Out_In); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsTimeZoneDate_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTimeZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneDate_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsDate_DateTime) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsDate_DateTime(Z_Param_Out_InDateTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsPercent_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RoundingMode); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumFractionalDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsPercent_Float(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsCurrency_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RoundingMode); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumFractionalDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrency_Float(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits,Z_Param_CurrencyCode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsCurrency_Integer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RoundingMode); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumFractionalDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrency_Integer(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits,Z_Param_CurrencyCode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsCurrencyBase) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BaseValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrencyBase(Z_Param_BaseValue,Z_Param_CurrencyCode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToText) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RoundingMode); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumFractionalDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_FloatToText(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToText) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bAlwaysSign); \
		P_GET_UBOOL(Z_Param_bUseGrouping); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinimumIntegralDigits); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumIntegralDigits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_IntToText(Z_Param_Value,Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToText) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ByteToText(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToText) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_BoolToText(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_IgnoreCase_TextText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_A); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::NotEqual_IgnoreCase_TextText(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_TextText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_A); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::NotEqual_TextText(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_IgnoreCase_TextText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_A); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::EqualEqual_IgnoreCase_TextText(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_TextText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_A); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::EqualEqual_TextText(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTextInLocalizationTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Namespace); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::FindTextInLocalizationTable(Z_Param_Namespace,Z_Param_Key,Z_Param_Out_OutText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEmptyText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::GetEmptyText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextTrimPrecedingAndTrailing) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimPrecedingAndTrailing(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextTrimTrailing) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimTrailing(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextTrimPreceding) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimPreceding(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextToUpper) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextToUpper(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextToLower) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextToLower(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextIsCultureInvariant) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsCultureInvariant(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextIsTransient) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsTransient(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextIsEmpty) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsEmpty(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_NameToText) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_NameToText(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_StringToText(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TextToString) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetTextLibrary::Conv_TextToString(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ColorToText) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ColorToText(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ObjectToText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InObj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ObjectToText(Z_Param_InObj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformToText) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_TransformToText(Z_Param_Out_InTrans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToText) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_RotatorToText(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector2dToText) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_Vector2dToText(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToText) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_VectorToText(Z_Param_InVec); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetTextLibrary(); \
	friend struct Z_Construct_UClass_UKismetTextLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetTextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetTextLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUKismetTextLibrary(); \
	friend struct Z_Construct_UClass_UKismetTextLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetTextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetTextLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetTextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetTextLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetTextLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetTextLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetTextLibrary(UKismetTextLibrary&&); \
	NO_API UKismetTextLibrary(const UKismetTextLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetTextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetTextLibrary(UKismetTextLibrary&&); \
	NO_API UKismetTextLibrary(const UKismetTextLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetTextLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetTextLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetTextLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_84_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetTextLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetTextLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h


#define FOREACH_ENUM_EFORMATARGUMENTTYPE(op) \
	op(EFormatArgumentType::Int) \
	op(EFormatArgumentType::UInt) \
	op(EFormatArgumentType::Float) \
	op(EFormatArgumentType::Double) \
	op(EFormatArgumentType::Text) \
	op(EFormatArgumentType::Gender) 
#define FOREACH_ENUM_ETEXTGENDER(op) \
	op(ETextGender::Masculine) \
	op(ETextGender::Feminine) \
	op(ETextGender::Neuter) 

enum class ETextGender : uint8;
template<> ENGINE_API UEnum* StaticEnum<ETextGender>();

#define FOREACH_ENUM_EROUNDINGMODE(op) \
	op(HalfToEven) \
	op(HalfFromZero) \
	op(HalfToZero) \
	op(FromZero) \
	op(ToZero) \
	op(ToNegativeInfinity) \
	op(ToPositiveInfinity) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

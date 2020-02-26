// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UObject;
struct FRotator;
struct FVector2D;
struct FIntVector;
struct FVector;
struct FTransform;
#ifdef ENGINE_KismetStringLibrary_generated_h
#error "KismetStringLibrary.generated.h already included, missing '#pragma once' in KismetStringLibrary.h"
#endif
#define ENGINE_KismetStringLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTimeSecondsToString) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::TimeSecondsToString(Z_Param_InSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMid) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Start); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Mid(Z_Param_SourceString,Z_Param_Start,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRightChop) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::RightChop(Z_Param_SourceString,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRight) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Right(Z_Param_SourceString,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftChop) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::LeftChop(Z_Param_SourceString,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeft) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Left(Z_Param_SourceString,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InStr); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_LeftS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_RightS); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::Split(Z_Param_SourceString,Z_Param_InStr,Z_Param_Out_LeftS,Z_Param_Out_RightS,ESearchCase::Type(Z_Param_SearchCase),ESearchDir::Type(Z_Param_SearchDir)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceInline) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchText); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplacementText); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::ReplaceInline(Z_Param_Out_SourceString,Z_Param_SearchText,Z_Param_ReplacementText,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplace) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_From); \
		P_GET_PROPERTY(UStrProperty,Z_Param_To); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Replace(Z_Param_SourceString,Z_Param_From,Z_Param_To,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Reverse(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCullArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::CullArray(Z_Param_SourceString,Z_Param_Out_InArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrimTrailing) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::TrimTrailing(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrim) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Trim(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchesWildcard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Wildcard); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::MatchesWildcard(Z_Param_SourceString,Z_Param_Wildcard,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndsWith) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSuffix); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::EndsWith(Z_Param_SourceString,Z_Param_InSuffix,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartsWith) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPrefix); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::StartsWith(Z_Param_SourceString,Z_Param_InPrefix,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNumeric) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::IsNumeric(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRightPad) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ChCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::RightPad(Z_Param_SourceString,Z_Param_ChCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftPad) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ChCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::LeftPad(Z_Param_SourceString,Z_Param_ChCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToLower) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::ToLower(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToUpper) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::ToUpper(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterArrayFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UKismetStringLibrary::GetCharacterArrayFromString(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinStringArray) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_SourceArray); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Separator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::JoinStringArray(Z_Param_Out_SourceArray,Z_Param_Separator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseIntoArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Delimiter); \
		P_GET_UBOOL(Z_Param_CullEmptyStrings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UKismetStringLibrary::ParseIntoArray(Z_Param_SourceString,Z_Param_Delimiter,Z_Param_CullEmptyStrings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterAsNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::GetCharacterAsNumber(Z_Param_SourceString,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContains) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Substring); \
		P_GET_UBOOL(Z_Param_bUseCase); \
		P_GET_UBOOL(Z_Param_bSearchFromEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::Contains(Z_Param_SearchIn,Z_Param_Substring,Z_Param_bUseCase,Z_Param_bSearchFromEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSubstring) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Substring); \
		P_GET_UBOOL(Z_Param_bUseCase); \
		P_GET_UBOOL(Z_Param_bSearchFromEnd); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::FindSubstring(Z_Param_SearchIn,Z_Param_Substring,Z_Param_bUseCase,Z_Param_bSearchFromEnd,Z_Param_StartPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubstring) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::GetSubstring(Z_Param_SourceString,Z_Param_StartIndex,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::Len(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_StriStri) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::NotEqual_StriStri(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_StrStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::NotEqual_StrStr(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_StriStri) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::EqualEqual_StriStri(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_StrStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::EqualEqual_StrStr(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConcat_StrStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Concat_StrStr(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Name) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Name(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InName,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Color(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InColor,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Object) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_OBJECT(UObject,Z_Param_InObj); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Object(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InObj,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Rotator(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InRot,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Vector2d) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FVector2D,Z_Param_InVector2d); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Vector2d(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InVector2d,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_IntVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FIntVector,Z_Param_InIntVector); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_IntVector(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InIntVector,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FVector,Z_Param_InVector); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Vector(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InVector,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_UBOOL(Z_Param_InBool); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Bool(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InBool,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Int(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InInt,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Float(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InFloat,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutConvertedColor); \
		P_GET_UBOOL_REF(Z_Param_Out_OutIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetStringLibrary::Conv_StringToColor(Z_Param_InString,Z_Param_Out_OutConvertedColor,Z_Param_Out_OutIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutConvertedRotator); \
		P_GET_UBOOL_REF(Z_Param_Out_OutIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetStringLibrary::Conv_StringToRotator(Z_Param_InString,Z_Param_Out_OutConvertedRotator,Z_Param_Out_OutIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToVector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutConvertedVector2D); \
		P_GET_UBOOL_REF(Z_Param_Out_OutIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetStringLibrary::Conv_StringToVector2D(Z_Param_InString,Z_Param_Out_OutConvertedVector2D,Z_Param_Out_OutIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutConvertedVector); \
		P_GET_UBOOL_REF(Z_Param_Out_OutIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetStringLibrary::Conv_StringToVector(Z_Param_InString,Z_Param_Out_OutConvertedVector,Z_Param_Out_OutIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetStringLibrary::Conv_StringToFloat(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::Conv_StringToInt(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UKismetStringLibrary::Conv_StringToName(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_NameToString) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_NameToString(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ColorToString) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_ColorToString(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ObjectToString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InObj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_ObjectToString(Z_Param_InObj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformToString) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_TransformToString(Z_Param_Out_InTrans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToString) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_RotatorToString(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector2dToString) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_Vector2dToString(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntVectorToString) \
	{ \
		P_GET_STRUCT(FIntVector,Z_Param_InIntVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_IntVectorToString(Z_Param_InIntVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToString) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_VectorToString(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToString) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_BoolToString(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_ByteToString(Z_Param_InByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToString) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_IntToString(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToString) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_FloatToString(Z_Param_InFloat); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimeSecondsToString) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::TimeSecondsToString(Z_Param_InSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMid) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Start); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Mid(Z_Param_SourceString,Z_Param_Start,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRightChop) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::RightChop(Z_Param_SourceString,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRight) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Right(Z_Param_SourceString,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftChop) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::LeftChop(Z_Param_SourceString,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeft) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Left(Z_Param_SourceString,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InStr); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_LeftS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_RightS); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::Split(Z_Param_SourceString,Z_Param_InStr,Z_Param_Out_LeftS,Z_Param_Out_RightS,ESearchCase::Type(Z_Param_SearchCase),ESearchDir::Type(Z_Param_SearchDir)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceInline) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchText); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplacementText); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::ReplaceInline(Z_Param_Out_SourceString,Z_Param_SearchText,Z_Param_ReplacementText,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplace) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_From); \
		P_GET_PROPERTY(UStrProperty,Z_Param_To); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Replace(Z_Param_SourceString,Z_Param_From,Z_Param_To,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Reverse(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCullArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::CullArray(Z_Param_SourceString,Z_Param_Out_InArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrimTrailing) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::TrimTrailing(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrim) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Trim(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchesWildcard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Wildcard); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::MatchesWildcard(Z_Param_SourceString,Z_Param_Wildcard,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndsWith) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSuffix); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::EndsWith(Z_Param_SourceString,Z_Param_InSuffix,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartsWith) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPrefix); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::StartsWith(Z_Param_SourceString,Z_Param_InPrefix,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNumeric) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::IsNumeric(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRightPad) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ChCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::RightPad(Z_Param_SourceString,Z_Param_ChCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftPad) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ChCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::LeftPad(Z_Param_SourceString,Z_Param_ChCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToLower) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::ToLower(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToUpper) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::ToUpper(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterArrayFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UKismetStringLibrary::GetCharacterArrayFromString(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinStringArray) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_SourceArray); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Separator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::JoinStringArray(Z_Param_Out_SourceArray,Z_Param_Separator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseIntoArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Delimiter); \
		P_GET_UBOOL(Z_Param_CullEmptyStrings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UKismetStringLibrary::ParseIntoArray(Z_Param_SourceString,Z_Param_Delimiter,Z_Param_CullEmptyStrings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterAsNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::GetCharacterAsNumber(Z_Param_SourceString,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContains) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Substring); \
		P_GET_UBOOL(Z_Param_bUseCase); \
		P_GET_UBOOL(Z_Param_bSearchFromEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::Contains(Z_Param_SearchIn,Z_Param_Substring,Z_Param_bUseCase,Z_Param_bSearchFromEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSubstring) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Substring); \
		P_GET_UBOOL(Z_Param_bUseCase); \
		P_GET_UBOOL(Z_Param_bSearchFromEnd); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::FindSubstring(Z_Param_SearchIn,Z_Param_Substring,Z_Param_bUseCase,Z_Param_bSearchFromEnd,Z_Param_StartPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubstring) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::GetSubstring(Z_Param_SourceString,Z_Param_StartIndex,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::Len(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_StriStri) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::NotEqual_StriStri(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_StrStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::NotEqual_StrStr(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_StriStri) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::EqualEqual_StriStri(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_StrStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringLibrary::EqualEqual_StrStr(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConcat_StrStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Concat_StrStr(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Name) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Name(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InName,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Color(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InColor,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Object) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_OBJECT(UObject,Z_Param_InObj); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Object(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InObj,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Rotator(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InRot,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Vector2d) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FVector2D,Z_Param_InVector2d); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Vector2d(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InVector2d,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_IntVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FIntVector,Z_Param_InIntVector); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_IntVector(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InIntVector,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_STRUCT(FVector,Z_Param_InVector); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Vector(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InVector,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_UBOOL(Z_Param_InBool); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Bool(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InBool,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Int(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InInt,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildString_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppendTo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Suffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::BuildString_Float(Z_Param_AppendTo,Z_Param_Prefix,Z_Param_InFloat,Z_Param_Suffix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutConvertedColor); \
		P_GET_UBOOL_REF(Z_Param_Out_OutIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetStringLibrary::Conv_StringToColor(Z_Param_InString,Z_Param_Out_OutConvertedColor,Z_Param_Out_OutIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutConvertedRotator); \
		P_GET_UBOOL_REF(Z_Param_Out_OutIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetStringLibrary::Conv_StringToRotator(Z_Param_InString,Z_Param_Out_OutConvertedRotator,Z_Param_Out_OutIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToVector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutConvertedVector2D); \
		P_GET_UBOOL_REF(Z_Param_Out_OutIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetStringLibrary::Conv_StringToVector2D(Z_Param_InString,Z_Param_Out_OutConvertedVector2D,Z_Param_Out_OutIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutConvertedVector); \
		P_GET_UBOOL_REF(Z_Param_Out_OutIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetStringLibrary::Conv_StringToVector(Z_Param_InString,Z_Param_Out_OutConvertedVector,Z_Param_Out_OutIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetStringLibrary::Conv_StringToFloat(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetStringLibrary::Conv_StringToInt(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UKismetStringLibrary::Conv_StringToName(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_NameToString) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_NameToString(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ColorToString) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_ColorToString(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ObjectToString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InObj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_ObjectToString(Z_Param_InObj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformToString) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_TransformToString(Z_Param_Out_InTrans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToString) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_RotatorToString(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector2dToString) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_Vector2dToString(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntVectorToString) \
	{ \
		P_GET_STRUCT(FIntVector,Z_Param_InIntVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_IntVectorToString(Z_Param_InIntVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToString) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_VectorToString(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToString) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_BoolToString(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_ByteToString(Z_Param_InByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToString) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_IntToString(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToString) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringLibrary::Conv_FloatToString(Z_Param_InFloat); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetStringLibrary(); \
	friend struct Z_Construct_UClass_UKismetStringLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetStringLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetStringLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUKismetStringLibrary(); \
	friend struct Z_Construct_UClass_UKismetStringLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetStringLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetStringLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetStringLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetStringLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetStringLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetStringLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetStringLibrary(UKismetStringLibrary&&); \
	NO_API UKismetStringLibrary(const UKismetStringLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetStringLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetStringLibrary(UKismetStringLibrary&&); \
	NO_API UKismetStringLibrary(const UKismetStringLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetStringLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetStringLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetStringLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetStringLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetStringLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

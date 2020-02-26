// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
struct FVector2D;
class AActor;
struct FVector;
class UMaterialInterface;
struct FLinearColor;
class UTexture;
class UFont;
struct FColor;
#ifdef ENGINE_HUD_generated_h
#error "HUD.generated.h already included, missing '#pragma once' in HUD.h"
#endif
#define ENGINE_HUD_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_RPC_WRAPPERS \
	void RemoveDebugText_Implementation(AActor* SrcActor, bool bLeaveDurationText); \
	void RemoveAllDebugStrings_Implementation(); \
	void AddDebugText_Implementation(const FString& DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow); \
 \
	DECLARE_FUNCTION(execPreviousDebugTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousDebugTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextDebugTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextDebugTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddHitBox) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_UBOOL(Z_Param_bConsumesInput); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddHitBox(Z_Param_Position,Z_Param_Size,Z_Param_InName,Z_Param_bConsumesInput,Z_Param_Priority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorsInSelectionRectangle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_FirstPoint); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SecondPoint); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_GET_UBOOL(Z_Param_bIncludeNonCollidingComponents); \
		P_GET_UBOOL(Z_Param_bActorMustBeFullyEnclosed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorsInSelectionRectangle(Z_Param_ClassFilter,Z_Param_Out_FirstPoint,Z_Param_Out_SecondPoint,Z_Param_Out_OutActors,Z_Param_bIncludeNonCollidingComponents,Z_Param_bActorMustBeFullyEnclosed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeproject) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Deproject(Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Out_WorldPosition,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProject) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Project(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMaterialTriangle) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_STRUCT(FVector2D,Z_Param_V0_Pos); \
		P_GET_STRUCT(FVector2D,Z_Param_V1_Pos); \
		P_GET_STRUCT(FVector2D,Z_Param_V2_Pos); \
		P_GET_STRUCT(FVector2D,Z_Param_V0_UV); \
		P_GET_STRUCT(FVector2D,Z_Param_V1_UV); \
		P_GET_STRUCT(FVector2D,Z_Param_V2_UV); \
		P_GET_STRUCT(FLinearColor,Z_Param_V0_Color); \
		P_GET_STRUCT(FLinearColor,Z_Param_V1_Color); \
		P_GET_STRUCT(FLinearColor,Z_Param_V2_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawMaterialTriangle(Z_Param_Material,Z_Param_V0_Pos,Z_Param_V1_Pos,Z_Param_V2_Pos,Z_Param_V0_UV,Z_Param_V1_UV,Z_Param_V2_UV,Z_Param_V0_Color,Z_Param_V1_Color,Z_Param_V2_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMaterialSimple) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenW); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenH); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawMaterialSimple(Z_Param_Material,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_Scale,Z_Param_bScalePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenW); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenH); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaterialU); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaterialV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaterialUWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaterialVHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_RotPivot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawMaterial(Z_Param_Material,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_MaterialU,Z_Param_MaterialV,Z_Param_MaterialUWidth,Z_Param_MaterialVHeight,Z_Param_Scale,Z_Param_bScalePosition,Z_Param_Rotation,Z_Param_RotPivot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawTextureSimple) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Texture); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawTextureSimple(Z_Param_Texture,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Scale,Z_Param_bScalePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Texture); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenW); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenH); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TextureU); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TextureV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TextureUWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TextureVHeight); \
		P_GET_STRUCT(FLinearColor,Z_Param_TintColor); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BlendMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_RotPivot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawTexture(Z_Param_Texture,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_TextureU,Z_Param_TextureV,Z_Param_TextureUWidth,Z_Param_TextureVHeight,Z_Param_TintColor,EBlendMode(Z_Param_BlendMode),Z_Param_Scale,Z_Param_bScalePosition,Z_Param_Rotation,Z_Param_RotPivot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawRect) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_RectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenW); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenH); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawRect(Z_Param_RectColor,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawLine) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndScreenY); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawLine(Z_Param_StartScreenX,Z_Param_StartScreenY,Z_Param_EndScreenX,Z_Param_EndScreenY,Z_Param_LineColor,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawText(Z_Param_Text,Z_Param_TextColor,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Font,Z_Param_Scale,Z_Param_bScalePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextSize) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHeight); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTextSize(Z_Param_Text,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight,Z_Param_Font,Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveDebugText) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SrcActor); \
		P_GET_UBOOL(Z_Param_bLeaveDurationText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveDebugText_Implementation(Z_Param_SrcActor,Z_Param_bLeaveDurationText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllDebugStrings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllDebugStrings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDebugText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DebugText); \
		P_GET_OBJECT(AActor,Z_Param_SrcActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_STRUCT(FVector,Z_Param_DesiredOffset); \
		P_GET_STRUCT(FColor,Z_Param_TextColor); \
		P_GET_UBOOL(Z_Param_bSkipOverwriteCheck); \
		P_GET_UBOOL(Z_Param_bAbsoluteLocation); \
		P_GET_UBOOL(Z_Param_bKeepAttachedToActor); \
		P_GET_OBJECT(UFont,Z_Param_InFont); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FontScale); \
		P_GET_UBOOL(Z_Param_bDrawShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDebugText_Implementation(Z_Param_DebugText,Z_Param_SrcActor,Z_Param_Duration,Z_Param_Offset,Z_Param_DesiredOffset,Z_Param_TextColor,Z_Param_bSkipOverwriteCheck,Z_Param_bAbsoluteLocation,Z_Param_bKeepAttachedToActor,Z_Param_InFont,Z_Param_FontScale,Z_Param_bDrawShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowDebugForReticleTargetToggle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DesiredClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowDebugForReticleTargetToggle(Z_Param_DesiredClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowDebugToggleSubCategory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowDebugToggleSubCategory(Z_Param_Category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowDebug) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_DebugType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowDebug(Z_Param_DebugType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowHUD(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	void RemoveDebugText_Implementation(AActor* SrcActor, bool bLeaveDurationText); \
	void RemoveAllDebugStrings_Implementation(); \
	void AddDebugText_Implementation(const FString& DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow); \
 \
	DECLARE_FUNCTION(execPreviousDebugTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousDebugTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextDebugTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextDebugTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddHitBox) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_UBOOL(Z_Param_bConsumesInput); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddHitBox(Z_Param_Position,Z_Param_Size,Z_Param_InName,Z_Param_bConsumesInput,Z_Param_Priority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorsInSelectionRectangle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_FirstPoint); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SecondPoint); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_GET_UBOOL(Z_Param_bIncludeNonCollidingComponents); \
		P_GET_UBOOL(Z_Param_bActorMustBeFullyEnclosed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorsInSelectionRectangle(Z_Param_ClassFilter,Z_Param_Out_FirstPoint,Z_Param_Out_SecondPoint,Z_Param_Out_OutActors,Z_Param_bIncludeNonCollidingComponents,Z_Param_bActorMustBeFullyEnclosed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeproject) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Deproject(Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Out_WorldPosition,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProject) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Project(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMaterialTriangle) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_STRUCT(FVector2D,Z_Param_V0_Pos); \
		P_GET_STRUCT(FVector2D,Z_Param_V1_Pos); \
		P_GET_STRUCT(FVector2D,Z_Param_V2_Pos); \
		P_GET_STRUCT(FVector2D,Z_Param_V0_UV); \
		P_GET_STRUCT(FVector2D,Z_Param_V1_UV); \
		P_GET_STRUCT(FVector2D,Z_Param_V2_UV); \
		P_GET_STRUCT(FLinearColor,Z_Param_V0_Color); \
		P_GET_STRUCT(FLinearColor,Z_Param_V1_Color); \
		P_GET_STRUCT(FLinearColor,Z_Param_V2_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawMaterialTriangle(Z_Param_Material,Z_Param_V0_Pos,Z_Param_V1_Pos,Z_Param_V2_Pos,Z_Param_V0_UV,Z_Param_V1_UV,Z_Param_V2_UV,Z_Param_V0_Color,Z_Param_V1_Color,Z_Param_V2_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMaterialSimple) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenW); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenH); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawMaterialSimple(Z_Param_Material,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_Scale,Z_Param_bScalePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenW); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenH); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaterialU); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaterialV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaterialUWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaterialVHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_RotPivot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawMaterial(Z_Param_Material,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_MaterialU,Z_Param_MaterialV,Z_Param_MaterialUWidth,Z_Param_MaterialVHeight,Z_Param_Scale,Z_Param_bScalePosition,Z_Param_Rotation,Z_Param_RotPivot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawTextureSimple) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Texture); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawTextureSimple(Z_Param_Texture,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Scale,Z_Param_bScalePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Texture); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenW); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenH); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TextureU); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TextureV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TextureUWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TextureVHeight); \
		P_GET_STRUCT(FLinearColor,Z_Param_TintColor); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BlendMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_RotPivot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawTexture(Z_Param_Texture,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_TextureU,Z_Param_TextureV,Z_Param_TextureUWidth,Z_Param_TextureVHeight,Z_Param_TintColor,EBlendMode(Z_Param_BlendMode),Z_Param_Scale,Z_Param_bScalePosition,Z_Param_Rotation,Z_Param_RotPivot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawRect) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_RectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenW); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenH); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawRect(Z_Param_RectColor,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawLine) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartScreenY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndScreenY); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawLine(Z_Param_StartScreenX,Z_Param_StartScreenY,Z_Param_EndScreenX,Z_Param_EndScreenY,Z_Param_LineColor,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bScalePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawText(Z_Param_Text,Z_Param_TextColor,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Font,Z_Param_Scale,Z_Param_bScalePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextSize) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHeight); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTextSize(Z_Param_Text,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight,Z_Param_Font,Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveDebugText) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SrcActor); \
		P_GET_UBOOL(Z_Param_bLeaveDurationText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveDebugText_Implementation(Z_Param_SrcActor,Z_Param_bLeaveDurationText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllDebugStrings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllDebugStrings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDebugText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DebugText); \
		P_GET_OBJECT(AActor,Z_Param_SrcActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_STRUCT(FVector,Z_Param_DesiredOffset); \
		P_GET_STRUCT(FColor,Z_Param_TextColor); \
		P_GET_UBOOL(Z_Param_bSkipOverwriteCheck); \
		P_GET_UBOOL(Z_Param_bAbsoluteLocation); \
		P_GET_UBOOL(Z_Param_bKeepAttachedToActor); \
		P_GET_OBJECT(UFont,Z_Param_InFont); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FontScale); \
		P_GET_UBOOL(Z_Param_bDrawShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDebugText_Implementation(Z_Param_DebugText,Z_Param_SrcActor,Z_Param_Duration,Z_Param_Offset,Z_Param_DesiredOffset,Z_Param_TextColor,Z_Param_bSkipOverwriteCheck,Z_Param_bAbsoluteLocation,Z_Param_bKeepAttachedToActor,Z_Param_InFont,Z_Param_FontScale,Z_Param_bDrawShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowDebugForReticleTargetToggle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DesiredClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowDebugForReticleTargetToggle(Z_Param_DesiredClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowDebugToggleSubCategory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowDebugToggleSubCategory(Z_Param_Category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowDebug) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_DebugType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowDebug(Z_Param_DebugType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowHUD(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_EVENT_PARMS \
	struct HUD_eventAddDebugText_Parms \
	{ \
		FString DebugText; \
		AActor* SrcActor; \
		float Duration; \
		FVector Offset; \
		FVector DesiredOffset; \
		FColor TextColor; \
		bool bSkipOverwriteCheck; \
		bool bAbsoluteLocation; \
		bool bKeepAttachedToActor; \
		UFont* InFont; \
		float FontScale; \
		bool bDrawShadow; \
	}; \
	struct HUD_eventReceiveDrawHUD_Parms \
	{ \
		int32 SizeX; \
		int32 SizeY; \
	}; \
	struct HUD_eventReceiveHitBoxBeginCursorOver_Parms \
	{ \
		FName BoxName; \
	}; \
	struct HUD_eventReceiveHitBoxClick_Parms \
	{ \
		FName BoxName; \
	}; \
	struct HUD_eventReceiveHitBoxEndCursorOver_Parms \
	{ \
		FName BoxName; \
	}; \
	struct HUD_eventReceiveHitBoxRelease_Parms \
	{ \
		FName BoxName; \
	}; \
	struct HUD_eventRemoveDebugText_Parms \
	{ \
		AActor* SrcActor; \
		bool bLeaveDurationText; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUD(); \
	friend struct Z_Construct_UClass_AHUD_Statics; \
public: \
	DECLARE_CLASS(AHUD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AHUD) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAHUD(); \
	friend struct Z_Construct_UClass_AHUD_Statics; \
public: \
	DECLARE_CLASS(AHUD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AHUD) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD(AHUD&&); \
	NO_API AHUD(const AHUD&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD(AHUD&&); \
	NO_API AHUD(const AHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Canvas() { return STRUCT_OFFSET(AHUD, Canvas); } \
	FORCEINLINE static uint32 __PPO__DebugCanvas() { return STRUCT_OFFSET(AHUD, DebugCanvas); } \
	FORCEINLINE static uint32 __PPO__DebugTextList() { return STRUCT_OFFSET(AHUD, DebugTextList); } \
	FORCEINLINE static uint32 __PPO__ShowDebugTargetDesiredClass() { return STRUCT_OFFSET(AHUD, ShowDebugTargetDesiredClass); } \
	FORCEINLINE static uint32 __PPO__ShowDebugTargetActor() { return STRUCT_OFFSET(AHUD, ShowDebugTargetActor); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_35_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HUD."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSkelMeshSkinWeightInfo;
class UObject;
struct FDrawToRenderTargetContext;
class UTextureRenderTarget2D;
class UCanvas;
struct FVector2D;
class UTexture2D;
struct FLinearColor;
struct FColor;
class UMaterialInterface;
#ifdef ENGINE_KismetRenderingLibrary_generated_h
#error "KismetRenderingLibrary.generated.h already included, missing '#pragma once' in KismetRenderingLibrary.h"
#endif
#define ENGINE_KismetRenderingLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDrawToRenderTargetContext>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBreakSkinWeightInfo) \
	{ \
		P_GET_STRUCT(FSkelMeshSkinWeightInfo,Z_Param_InWeight); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Bone0); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Weight0); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Bone1); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Weight1); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Bone2); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Weight2); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Bone3); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Weight3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::BreakSkinWeightInfo(Z_Param_InWeight,Z_Param_Out_Bone0,Z_Param_Out_Weight0,Z_Param_Out_Bone1,Z_Param_Out_Weight1,Z_Param_Out_Bone2,Z_Param_Out_Weight2,Z_Param_Out_Bone3,Z_Param_Out_Weight3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeSkinWeightInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bone0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Weight0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bone1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Weight1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bone2); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Weight2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bone3); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Weight3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSkelMeshSkinWeightInfo*)Z_Param__Result=UKismetRenderingLibrary::MakeSkinWeightInfo(Z_Param_Bone0,Z_Param_Weight0,Z_Param_Bone1,Z_Param_Weight1,Z_Param_Bone2,Z_Param_Weight2,Z_Param_Bone3,Z_Param_Weight3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndDrawCanvasToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FDrawToRenderTargetContext,Z_Param_Out_Context); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(Z_Param_WorldContextObject,Z_Param_Out_Context); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginDrawCanvasToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_OBJECT_REF(UCanvas,Z_Param_Out_Canvas); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Size); \
		P_GET_STRUCT_REF(FDrawToRenderTargetContext,Z_Param_Out_Context); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Out_Canvas,Z_Param_Out_Size,Z_Param_Out_Context); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportBufferAsTexture2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::ImportBufferAsTexture2D(Z_Param_WorldContextObject,Z_Param_Out_Buffer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportFileAsTexture2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::ImportFileAsTexture2D(Z_Param_WorldContextObject,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportTexture2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ExportTexture2D(Z_Param_WorldContextObject,Z_Param_Texture,Z_Param_FilePath,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRenderTargetRawUV) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_U); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRawUV(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_U,Z_Param_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRenderTargetRawPixel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRawPixel(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRenderTargetUV) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_U); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetUV(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_U,Z_Param_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRenderTargetPixel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetPixel(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ExportRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_FilePath,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2DEditorOnly) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget); \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly(Z_Param_WorldContextObject,Z_Param_RenderTarget,Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenderTargetCreateStaticTexture2DEditorOnly) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressionSettings); \
		P_GET_PROPERTY(UByteProperty,Z_Param_MipSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(Z_Param_RenderTarget,Z_Param_Name,TextureCompressionSettings(Z_Param_CompressionSettings),TextureMipGenSettings(Z_Param_MipSettings)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMaterialToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseRenderTarget2D) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ReleaseRenderTarget2D(Z_Param_TextureRenderTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRenderTarget2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Format); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=UKismetRenderingLibrary::CreateRenderTarget2D(Z_Param_WorldContextObject,Z_Param_Width,Z_Param_Height,ETextureRenderTargetFormat(Z_Param_Format)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearRenderTarget2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ClearRenderTarget2D(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_ClearColor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBreakSkinWeightInfo) \
	{ \
		P_GET_STRUCT(FSkelMeshSkinWeightInfo,Z_Param_InWeight); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Bone0); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Weight0); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Bone1); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Weight1); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Bone2); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Weight2); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Bone3); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Weight3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::BreakSkinWeightInfo(Z_Param_InWeight,Z_Param_Out_Bone0,Z_Param_Out_Weight0,Z_Param_Out_Bone1,Z_Param_Out_Weight1,Z_Param_Out_Bone2,Z_Param_Out_Weight2,Z_Param_Out_Bone3,Z_Param_Out_Weight3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeSkinWeightInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bone0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Weight0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bone1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Weight1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bone2); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Weight2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bone3); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Weight3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSkelMeshSkinWeightInfo*)Z_Param__Result=UKismetRenderingLibrary::MakeSkinWeightInfo(Z_Param_Bone0,Z_Param_Weight0,Z_Param_Bone1,Z_Param_Weight1,Z_Param_Bone2,Z_Param_Weight2,Z_Param_Bone3,Z_Param_Weight3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndDrawCanvasToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FDrawToRenderTargetContext,Z_Param_Out_Context); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(Z_Param_WorldContextObject,Z_Param_Out_Context); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginDrawCanvasToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_OBJECT_REF(UCanvas,Z_Param_Out_Canvas); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Size); \
		P_GET_STRUCT_REF(FDrawToRenderTargetContext,Z_Param_Out_Context); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Out_Canvas,Z_Param_Out_Size,Z_Param_Out_Context); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportBufferAsTexture2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::ImportBufferAsTexture2D(Z_Param_WorldContextObject,Z_Param_Out_Buffer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportFileAsTexture2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::ImportFileAsTexture2D(Z_Param_WorldContextObject,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportTexture2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ExportTexture2D(Z_Param_WorldContextObject,Z_Param_Texture,Z_Param_FilePath,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRenderTargetRawUV) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_U); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRawUV(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_U,Z_Param_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRenderTargetRawPixel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRawPixel(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRenderTargetUV) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_U); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetUV(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_U,Z_Param_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRenderTargetPixel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetPixel(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ExportRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_FilePath,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2DEditorOnly) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget); \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly(Z_Param_WorldContextObject,Z_Param_RenderTarget,Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenderTargetCreateStaticTexture2DEditorOnly) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressionSettings); \
		P_GET_PROPERTY(UByteProperty,Z_Param_MipSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(Z_Param_RenderTarget,Z_Param_Name,TextureCompressionSettings(Z_Param_CompressionSettings),TextureMipGenSettings(Z_Param_MipSettings)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMaterialToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseRenderTarget2D) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ReleaseRenderTarget2D(Z_Param_TextureRenderTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRenderTarget2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Format); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=UKismetRenderingLibrary::CreateRenderTarget2D(Z_Param_WorldContextObject,Z_Param_Width,Z_Param_Height,ETextureRenderTargetFormat(Z_Param_Format)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearRenderTarget2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetRenderingLibrary::ClearRenderTarget2D(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_ClearColor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetRenderingLibrary(); \
	friend struct Z_Construct_UClass_UKismetRenderingLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetRenderingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetRenderingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUKismetRenderingLibrary(); \
	friend struct Z_Construct_UClass_UKismetRenderingLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetRenderingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetRenderingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetRenderingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetRenderingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetRenderingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetRenderingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetRenderingLibrary(UKismetRenderingLibrary&&); \
	ENGINE_API UKismetRenderingLibrary(const UKismetRenderingLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetRenderingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetRenderingLibrary(UKismetRenderingLibrary&&); \
	ENGINE_API UKismetRenderingLibrary(const UKismetRenderingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetRenderingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetRenderingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetRenderingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_34_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetRenderingLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetRenderingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

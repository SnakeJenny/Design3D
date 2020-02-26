// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UObject;
class UTextureRenderTarget2D;
struct FSimpleUniformStruct;
struct FLinearColor;
class UTexture;
#ifdef MYPLUGIN_SimplePixelShader_generated_h
#error "SimplePixelShader.generated.h already included, missing '#pragma once' in SimplePixelShader.h"
#endif
#define MYPLUGIN_SimplePixelShader_generated_h

#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics; \
	MYPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MYPLUGIN_API UScriptStruct* StaticStruct<struct FSimpleUniformStruct>();

#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateTexture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextureName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplePixelShaderBlueprintLibrary::CreateTexture(Z_Param_TextureName,Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextureWriting) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_TextureToBeWrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplePixelShaderBlueprintLibrary::TextureWriting(Z_Param_TextureToBeWrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseComputeShader) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_STRUCT(FSimpleUniformStruct,Z_Param_UniformStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplePixelShaderBlueprintLibrary::UseComputeShader(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_UniformStruct); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMyShaderRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_STRUCT(FLinearColor,Z_Param_MyColor); \
		P_GET_OBJECT(UTexture,Z_Param_MyTexture); \
		P_GET_STRUCT(FSimpleUniformStruct,Z_Param_UniformStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplePixelShaderBlueprintLibrary::DrawMyShaderRenderTarget(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_MyColor,Z_Param_MyTexture,Z_Param_UniformStruct); \
		P_NATIVE_END; \
	}


#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTexture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextureName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplePixelShaderBlueprintLibrary::CreateTexture(Z_Param_TextureName,Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextureWriting) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_TextureToBeWrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplePixelShaderBlueprintLibrary::TextureWriting(Z_Param_TextureToBeWrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseComputeShader) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_STRUCT(FSimpleUniformStruct,Z_Param_UniformStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplePixelShaderBlueprintLibrary::UseComputeShader(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_UniformStruct); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMyShaderRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_STRUCT(FLinearColor,Z_Param_MyColor); \
		P_GET_OBJECT(UTexture,Z_Param_MyTexture); \
		P_GET_STRUCT(FSimpleUniformStruct,Z_Param_UniformStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplePixelShaderBlueprintLibrary::DrawMyShaderRenderTarget(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_MyColor,Z_Param_MyTexture,Z_Param_UniformStruct); \
		P_NATIVE_END; \
	}


#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimplePixelShaderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USimplePixelShaderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyPlugin"), MYPLUGIN_API) \
	DECLARE_SERIALIZER(USimplePixelShaderBlueprintLibrary)


#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUSimplePixelShaderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USimplePixelShaderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyPlugin"), MYPLUGIN_API) \
	DECLARE_SERIALIZER(USimplePixelShaderBlueprintLibrary)


#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPLUGIN_API USimplePixelShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimplePixelShaderBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPLUGIN_API, USimplePixelShaderBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimplePixelShaderBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPLUGIN_API USimplePixelShaderBlueprintLibrary(USimplePixelShaderBlueprintLibrary&&); \
	MYPLUGIN_API USimplePixelShaderBlueprintLibrary(const USimplePixelShaderBlueprintLibrary&); \
public:


#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPLUGIN_API USimplePixelShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPLUGIN_API USimplePixelShaderBlueprintLibrary(USimplePixelShaderBlueprintLibrary&&); \
	MYPLUGIN_API USimplePixelShaderBlueprintLibrary(const USimplePixelShaderBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPLUGIN_API, USimplePixelShaderBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimplePixelShaderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimplePixelShaderBlueprintLibrary)


#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_PRIVATE_PROPERTY_OFFSET
#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_35_PROLOG
#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_PRIVATE_PROPERTY_OFFSET \
	Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_RPC_WRAPPERS \
	Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_INCLASS \
	Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_PRIVATE_PROPERTY_OFFSET \
	Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_INCLASS_NO_PURE_DECLS \
	Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SimplePixelShaderBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPLUGIN_API UClass* StaticClass<class USimplePixelShaderBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Design3D_Plugins_MyPlugin_Source_MyPlugin_Public_SimplePixelShader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

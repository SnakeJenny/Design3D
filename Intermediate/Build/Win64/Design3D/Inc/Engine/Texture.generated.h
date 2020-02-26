// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Texture_generated_h
#error "Texture.generated.h already included, missing '#pragma once' in Texture.h"
#endif
#define ENGINE_Texture_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_308_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTexturePlatformData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTexturePlatformData>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSource_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSource>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTexture(); \
	friend struct Z_Construct_UClass_UTexture_Statics; \
public: \
	DECLARE_CLASS(UTexture, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture) \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTexture*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_INCLASS \
private: \
	static void StaticRegisterNativesUTexture(); \
	friend struct Z_Construct_UClass_UTexture_Statics; \
public: \
	DECLARE_CLASS(UTexture, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture) \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTexture*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture(UTexture&&); \
	ENGINE_API UTexture(const UTexture&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture(UTexture&&); \
	ENGINE_API UTexture(const UTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture)


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LightingGuid() { return STRUCT_OFFSET(UTexture, LightingGuid); } \
	FORCEINLINE static uint32 __PPO__CachedCombinedLODBias() { return STRUCT_OFFSET(UTexture, CachedCombinedLODBias); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(UTexture, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_370_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_373_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Texture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Texture_h


#define FOREACH_ENUM_ETEXTURECOMPRESSIONQUALITY(op) \
	op(TCQ_Default) \
	op(TCQ_Lowest) \
	op(TCQ_Low) \
	op(TCQ_Medium) \
	op(TCQ_High) \
	op(TCQ_Highest) 
#define FOREACH_ENUM_ETEXTURESOURCEFORMAT(op) \
	op(TSF_Invalid) \
	op(TSF_G8) \
	op(TSF_BGRA8) \
	op(TSF_BGRE8) \
	op(TSF_RGBA16) \
	op(TSF_RGBA16F) \
	op(TSF_RGBA8) \
	op(TSF_RGBE8) 
#define FOREACH_ENUM_ETEXTURESOURCEARTTYPE(op) \
	op(TSAT_Uncompressed) \
	op(TSAT_PNGCompressed) \
	op(TSAT_DDSFile) 
#define FOREACH_ENUM_ETEXTUREMIPCOUNT(op) \
	op(TMC_ResidentMips) \
	op(TMC_AllMips) \
	op(TMC_AllMipsBiased) 
#define FOREACH_ENUM_ECOMPOSITETEXTUREMODE(op) \
	op(CTM_Disabled) \
	op(CTM_NormalRoughnessToRed) \
	op(CTM_NormalRoughnessToGreen) \
	op(CTM_NormalRoughnessToBlue) \
	op(CTM_NormalRoughnessToAlpha) 
#define FOREACH_ENUM_TEXTUREADDRESS(op) \
	op(TA_Wrap) \
	op(TA_Clamp) \
	op(TA_Mirror) 
#define FOREACH_ENUM_TEXTUREFILTER(op) \
	op(TF_Nearest) \
	op(TF_Bilinear) \
	op(TF_Trilinear) \
	op(TF_Default) 
#define FOREACH_ENUM_TEXTURECOMPRESSIONSETTINGS(op) \
	op(TC_Default) \
	op(TC_Normalmap) \
	op(TC_Masks) \
	op(TC_Grayscale) \
	op(TC_Displacementmap) \
	op(TC_VectorDisplacementmap) \
	op(TC_HDR) \
	op(TC_EditorIcon) \
	op(TC_Alpha) \
	op(TC_DistanceFieldFont) \
	op(TC_HDR_Compressed) \
	op(TC_BC7) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

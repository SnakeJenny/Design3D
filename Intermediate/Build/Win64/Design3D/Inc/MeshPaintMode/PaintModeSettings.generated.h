// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHPAINTMODE_PaintModeSettings_generated_h
#error "PaintModeSettings.generated.h already included, missing '#pragma once' in PaintModeSettings.h"
#endif
#define MESHPAINTMODE_PaintModeSettings_generated_h

#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTexturePaintSettings_Statics; \
	MESHPAINTMODE_API static class UScriptStruct* StaticStruct();


template<> MESHPAINTMODE_API UScriptStruct* StaticStruct<struct FTexturePaintSettings>();

#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintSettings_Statics; \
	MESHPAINTMODE_API static class UScriptStruct* StaticStruct();


template<> MESHPAINTMODE_API UScriptStruct* StaticStruct<struct FVertexPaintSettings>();

#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_RPC_WRAPPERS
#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaintModeSettings(); \
	friend struct Z_Construct_UClass_UPaintModeSettings_Statics; \
public: \
	DECLARE_CLASS(UPaintModeSettings, UMeshPaintSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshPaintMode"), NO_API) \
	DECLARE_SERIALIZER(UPaintModeSettings)


#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUPaintModeSettings(); \
	friend struct Z_Construct_UClass_UPaintModeSettings_Statics; \
public: \
	DECLARE_CLASS(UPaintModeSettings, UMeshPaintSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshPaintMode"), NO_API) \
	DECLARE_SERIALIZER(UPaintModeSettings)


#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaintModeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaintModeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaintModeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaintModeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaintModeSettings(UPaintModeSettings&&); \
	NO_API UPaintModeSettings(const UPaintModeSettings&); \
public:


#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaintModeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaintModeSettings(UPaintModeSettings&&); \
	NO_API UPaintModeSettings(const UPaintModeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaintModeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaintModeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaintModeSettings)


#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_170_PROLOG
#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_RPC_WRAPPERS \
	Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_INCLASS \
	Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h_173_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaintModeSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHPAINTMODE_API UClass* StaticClass<class UPaintModeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_MeshPaintMode_Private_PaintModeSettings_h


#define FOREACH_ENUM_EPAINTMODE(op) \
	op(EPaintMode::Vertices) \
	op(EPaintMode::Textures) 

enum class EPaintMode : uint8;
template<> MESHPAINTMODE_API UEnum* StaticEnum<EPaintMode>();

#define FOREACH_ENUM_ETEXTUREPAINTINDEX(op) \
	op(ETexturePaintIndex::TextureOne) \
	op(ETexturePaintIndex::TextureTwo) \
	op(ETexturePaintIndex::TextureThree) \
	op(ETexturePaintIndex::TextureFour) \
	op(ETexturePaintIndex::TextureFive) 

enum class ETexturePaintIndex : uint8;
template<> MESHPAINTMODE_API UEnum* StaticEnum<ETexturePaintIndex>();

#define FOREACH_ENUM_ETEXTUREWEIGHTTYPES(op) \
	op(ETextureWeightTypes::AlphaLerp) \
	op(ETextureWeightTypes::RGB) \
	op(ETextureWeightTypes::ARGB) \
	op(ETextureWeightTypes::OneMinusARGB) 

enum class ETextureWeightTypes : uint8;
template<> MESHPAINTMODE_API UEnum* StaticEnum<ETextureWeightTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

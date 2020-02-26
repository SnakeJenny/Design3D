// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEEDITOR_LandscapeEditorObject_generated_h
#error "LandscapeEditorObject.generated.h already included, missing '#pragma once' in LandscapeEditorObject.h"
#endif
#define LANDSCAPEEDITOR_LandscapeEditorObject_generated_h

#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<struct FLandscapePatternBrushWorldSpaceSettings>();

#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FLandscapeImportLayerInfo Super;


template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<struct FLandscapeImportLayer>();

#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGizmoImportLayer_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<struct FGizmoImportLayer>();

#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_RPC_WRAPPERS
#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditorObject(); \
	friend struct Z_Construct_UClass_ULandscapeEditorObject_Statics; \
public: \
	DECLARE_CLASS(ULandscapeEditorObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapeEditor"), LANDSCAPEEDITOR_API) \
	DECLARE_SERIALIZER(ULandscapeEditorObject)


#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeEditorObject(); \
	friend struct Z_Construct_UClass_ULandscapeEditorObject_Statics; \
public: \
	DECLARE_CLASS(ULandscapeEditorObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapeEditor"), LANDSCAPEEDITOR_API) \
	DECLARE_SERIALIZER(ULandscapeEditorObject)


#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEEDITOR_API ULandscapeEditorObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditorObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEEDITOR_API, ULandscapeEditorObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditorObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPEEDITOR_API ULandscapeEditorObject(ULandscapeEditorObject&&); \
	LANDSCAPEEDITOR_API ULandscapeEditorObject(const ULandscapeEditorObject&); \
public:


#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEEDITOR_API ULandscapeEditorObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPEEDITOR_API ULandscapeEditorObject(ULandscapeEditorObject&&); \
	LANDSCAPEEDITOR_API ULandscapeEditorObject(const ULandscapeEditorObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEEDITOR_API, ULandscapeEditorObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditorObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditorObject)


#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImportLandscape_Data() { return STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Data); }


#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_240_PROLOG
#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_RPC_WRAPPERS \
	Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_INCLASS \
	Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_243_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeEditorObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEEDITOR_API UClass* StaticClass<class ULandscapeEditorObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h


#define FOREACH_ENUM_ELANDSCAPEIMPORTLAYERERROR(op) \
	op(ELandscapeImportLayerError::None) \
	op(ELandscapeImportLayerError::MissingLayerInfo) \
	op(ELandscapeImportLayerError::FileNotFound) \
	op(ELandscapeImportLayerError::FileSizeMismatch) \
	op(ELandscapeImportLayerError::CorruptFile) \
	op(ELandscapeImportLayerError::ColorPng) 

enum class ELandscapeImportLayerError : uint8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportLayerError>();

#define FOREACH_ENUM_ELANDSCAPEIMPORTHEIGHTMAPERROR(op) \
	op(ELandscapeImportHeightmapError::None) \
	op(ELandscapeImportHeightmapError::FileNotFound) \
	op(ELandscapeImportHeightmapError::InvalidSize) \
	op(ELandscapeImportHeightmapError::CorruptFile) \
	op(ELandscapeImportHeightmapError::ColorPng) \
	op(ELandscapeImportHeightmapError::LowBitDepth) 

enum class ELandscapeImportHeightmapError;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportHeightmapError>();

#define FOREACH_ENUM_ELANDSCAPEMIRROROPERATION(op) \
	op(ELandscapeMirrorOperation::MinusXToPlusX) \
	op(ELandscapeMirrorOperation::PlusXToMinusX) \
	op(ELandscapeMirrorOperation::MinusYToPlusY) \
	op(ELandscapeMirrorOperation::PlusYToMinusY) \
	op(ELandscapeMirrorOperation::RotateMinusXToPlusX) \
	op(ELandscapeMirrorOperation::RotatePlusXToMinusX) \
	op(ELandscapeMirrorOperation::RotateMinusYToPlusY) \
	op(ELandscapeMirrorOperation::RotatePlusYToMinusY) 

enum class ELandscapeMirrorOperation : uint8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeMirrorOperation>();

#define FOREACH_ENUM_ECOLORCHANNEL(op) \
	op(EColorChannel::Red) \
	op(EColorChannel::Green) \
	op(EColorChannel::Blue) \
	op(EColorChannel::Alpha) 
#define FOREACH_ENUM_ELANDSCAPECONVERTMODE(op) \
	op(ELandscapeConvertMode::Invalid) \
	op(ELandscapeConvertMode::Expand) \
	op(ELandscapeConvertMode::Clip) \
	op(ELandscapeConvertMode::Resample) 

enum class ELandscapeConvertMode : int8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeConvertMode>();

#define FOREACH_ENUM_ELANDSCAPETOOLPASTEMODE(op) \
	op(ELandscapeToolPasteMode::Invalid) \
	op(ELandscapeToolPasteMode::Both) \
	op(ELandscapeToolPasteMode::Raise) \
	op(ELandscapeToolPasteMode::Lower) 

enum class ELandscapeToolPasteMode : int8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolPasteMode>();

#define FOREACH_ENUM_ELANDSCAPETOOLNOISEMODE(op) \
	op(ELandscapeToolNoiseMode::Invalid) \
	op(ELandscapeToolNoiseMode::Both) \
	op(ELandscapeToolNoiseMode::Add) \
	op(ELandscapeToolNoiseMode::Sub) 

enum class ELandscapeToolNoiseMode : int8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolNoiseMode>();

#define FOREACH_ENUM_ELANDSCAPETOOLHYDROEROSIONMODE(op) \
	op(ELandscapeToolHydroErosionMode::Invalid) \
	op(ELandscapeToolHydroErosionMode::Both) \
	op(ELandscapeToolHydroErosionMode::Positive) 

enum class ELandscapeToolHydroErosionMode : int8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolHydroErosionMode>();

#define FOREACH_ENUM_ELANDSCAPETOOLEROSIONMODE(op) \
	op(ELandscapeToolErosionMode::Invalid) \
	op(ELandscapeToolErosionMode::Both) \
	op(ELandscapeToolErosionMode::Raise) \
	op(ELandscapeToolErosionMode::Lower) 

enum class ELandscapeToolErosionMode : int8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolErosionMode>();

#define FOREACH_ENUM_ELANDSCAPETOOLFLATTENMODE(op) \
	op(ELandscapeToolFlattenMode::Invalid) \
	op(ELandscapeToolFlattenMode::Both) \
	op(ELandscapeToolFlattenMode::Raise) \
	op(ELandscapeToolFlattenMode::Lower) \
	op(ELandscapeToolFlattenMode::Terrace) 

enum class ELandscapeToolFlattenMode : int8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolFlattenMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

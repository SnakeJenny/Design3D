// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FLinearColor;
class UTexture;
class USplineComponent;
class ULandscapeLayerInfoObject;
class UMaterialInterface;
#ifdef LANDSCAPE_LandscapeProxy_generated_h
#error "LandscapeProxy.generated.h already included, missing '#pragma once' in LandscapeProxy.h"
#endif
#define LANDSCAPE_LandscapeProxy_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_405_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProceduralLayerData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FProceduralLayerData>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_388_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FRenderDataPerHeightmap>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_340_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeProxyMaterialOverride>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeImportLayerInfo>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayerStruct>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeEditorLayerSettings>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeWeightmapUsage>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLandscapeMaterialScalarParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLandscapeMaterialScalarParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLandscapeMaterialVectorParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLandscapeMaterialVectorParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLandscapeMaterialTextureParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLandscapeMaterialTextureParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEditorApplySpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_InSplineComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartSideFalloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndSideFalloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartRoll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndRoll); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisions); \
		P_GET_UBOOL(Z_Param_bRaiseHeights); \
		P_GET_UBOOL(Z_Param_bLowerHeights); \
		P_GET_OBJECT(ULandscapeLayerInfoObject,Z_Param_PaintLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorApplySpline(Z_Param_InSplineComponent,Z_Param_StartWidth,Z_Param_EndWidth,Z_Param_StartSideFalloff,Z_Param_EndSideFalloff,Z_Param_StartRoll,Z_Param_EndRoll,Z_Param_NumSubdivisions,Z_Param_bRaiseHeights,Z_Param_bLowerHeights,Z_Param_PaintLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEditorSetLandscapeMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewLandscapeMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorSetLandscapeMaterial(Z_Param_NewLandscapeMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeTessellationComponentScreenSizeFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InUseTessellationComponentScreenSizeFalloff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeTessellationComponentScreenSizeFalloff(Z_Param_InUseTessellationComponentScreenSizeFalloff); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeUseTessellationComponentScreenSizeFalloff) \
	{ \
		P_GET_UBOOL(Z_Param_InComponentScreenSizeToUseSubSections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeUseTessellationComponentScreenSizeFalloff(Z_Param_InComponentScreenSizeToUseSubSections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeComponentScreenSizeToUseSubSections) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InComponentScreenSizeToUseSubSections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeComponentScreenSizeToUseSubSections(Z_Param_InComponentScreenSizeToUseSubSections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeTessellationComponentScreenSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTessellationComponentScreenSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeTessellationComponentScreenSize(Z_Param_InTessellationComponentScreenSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLODDistanceFactor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLODDistanceFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeLODDistanceFactor(Z_Param_InLODDistanceFactor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLandscapeMaterialScalarParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLandscapeMaterialScalarParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLandscapeMaterialVectorParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLandscapeMaterialVectorParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLandscapeMaterialTextureParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLandscapeMaterialTextureParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEditorApplySpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_InSplineComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartSideFalloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndSideFalloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartRoll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndRoll); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisions); \
		P_GET_UBOOL(Z_Param_bRaiseHeights); \
		P_GET_UBOOL(Z_Param_bLowerHeights); \
		P_GET_OBJECT(ULandscapeLayerInfoObject,Z_Param_PaintLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorApplySpline(Z_Param_InSplineComponent,Z_Param_StartWidth,Z_Param_EndWidth,Z_Param_StartSideFalloff,Z_Param_EndSideFalloff,Z_Param_StartRoll,Z_Param_EndRoll,Z_Param_NumSubdivisions,Z_Param_bRaiseHeights,Z_Param_bLowerHeights,Z_Param_PaintLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEditorSetLandscapeMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewLandscapeMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorSetLandscapeMaterial(Z_Param_NewLandscapeMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeTessellationComponentScreenSizeFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InUseTessellationComponentScreenSizeFalloff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeTessellationComponentScreenSizeFalloff(Z_Param_InUseTessellationComponentScreenSizeFalloff); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeUseTessellationComponentScreenSizeFalloff) \
	{ \
		P_GET_UBOOL(Z_Param_InComponentScreenSizeToUseSubSections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeUseTessellationComponentScreenSizeFalloff(Z_Param_InComponentScreenSizeToUseSubSections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeComponentScreenSizeToUseSubSections) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InComponentScreenSizeToUseSubSections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeComponentScreenSizeToUseSubSections(Z_Param_InComponentScreenSizeToUseSubSections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeTessellationComponentScreenSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTessellationComponentScreenSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeTessellationComponentScreenSize(Z_Param_InTessellationComponentScreenSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLODDistanceFactor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLODDistanceFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeLODDistanceFactor(Z_Param_InLODDistanceFactor); \
		P_NATIVE_END; \
	}


#if WITH_EDITOR
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLandscapeExportWeightmapToRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InLayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LandscapeExportWeightmapToRenderTarget(Z_Param_InRenderTarget,Z_Param_InLayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLandscapeImportWeightmapFromRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InLayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LandscapeImportWeightmapFromRenderTarget(Z_Param_InRenderTarget,Z_Param_InLayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLandscapeExportHeightmapToRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_UBOOL(Z_Param_InExportHeightIntoRGChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LandscapeExportHeightmapToRenderTarget(Z_Param_InRenderTarget,Z_Param_InExportHeightIntoRGChannel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLandscapeImportHeightmapFromRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_UBOOL(Z_Param_InImportHeightFromRGChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LandscapeImportHeightmapFromRenderTarget(Z_Param_InRenderTarget,Z_Param_InImportHeightFromRGChannel); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLandscapeExportWeightmapToRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InLayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LandscapeExportWeightmapToRenderTarget(Z_Param_InRenderTarget,Z_Param_InLayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLandscapeImportWeightmapFromRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InLayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LandscapeImportWeightmapFromRenderTarget(Z_Param_InRenderTarget,Z_Param_InLayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLandscapeExportHeightmapToRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_UBOOL(Z_Param_InExportHeightIntoRGChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LandscapeExportHeightmapToRenderTarget(Z_Param_InRenderTarget,Z_Param_InExportHeightIntoRGChannel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLandscapeImportHeightmapFromRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_UBOOL(Z_Param_InImportHeightFromRGChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LandscapeImportHeightmapFromRenderTarget(Z_Param_InRenderTarget,Z_Param_InImportHeightFromRGChannel); \
		P_NATIVE_END; \
	}


#else
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALandscapeProxy, LANDSCAPE_API)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend struct Z_Construct_UClass_ALandscapeProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeProxy, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend struct Z_Construct_UClass_ALandscapeProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeProxy, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeProxy(ALandscapeProxy&&); \
	LANDSCAPE_API ALandscapeProxy(const ALandscapeProxy&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeProxy(ALandscapeProxy&&); \
	LANDSCAPE_API ALandscapeProxy(const ALandscapeProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LandscapeGuid() { return STRUCT_OFFSET(ALandscapeProxy, LandscapeGuid); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_416_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h


#define FOREACH_ENUM_ELANDSCAPELODFALLOFF(op) \
	op(ELandscapeLODFalloff::Linear) \
	op(ELandscapeLODFalloff::SquareRoot) 
#define FOREACH_ENUM_ELANDSCAPELAYERDISPLAYMODE(op) \
	op(ELandscapeLayerDisplayMode::Default) \
	op(ELandscapeLayerDisplayMode::Alphabetical) \
	op(ELandscapeLayerDisplayMode::UserSpecific) 

enum class ELandscapeLayerDisplayMode : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerDisplayMode>();

#define FOREACH_ENUM_ELANDSCAPELAYERPAINTINGRESTRICTION(op) \
	op(ELandscapeLayerPaintingRestriction::None) \
	op(ELandscapeLayerPaintingRestriction::UseMaxLayers) \
	op(ELandscapeLayerPaintingRestriction::ExistingOnly) \
	op(ELandscapeLayerPaintingRestriction::UseComponentWhitelist) 

enum class ELandscapeLayerPaintingRestriction : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerPaintingRestriction>();

#define FOREACH_ENUM_ELANDSCAPEIMPORTALPHAMAPTYPE(op) \
	op(ELandscapeImportAlphamapType::Additive) \
	op(ELandscapeImportAlphamapType::Layered) 

enum class ELandscapeImportAlphamapType : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeImportAlphamapType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

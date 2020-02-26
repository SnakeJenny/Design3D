// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHPAINTER_ClothPaintSettings_generated_h
#error "ClothPaintSettings.generated.h already included, missing '#pragma once' in ClothPaintSettings.h"
#endif
#define CLOTHPAINTER_ClothPaintSettings_generated_h

#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_RPC_WRAPPERS
#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothPainterSettings(); \
	friend struct Z_Construct_UClass_UClothPainterSettings_Statics; \
public: \
	DECLARE_CLASS(UClothPainterSettings, UMeshPaintSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClothPainter"), NO_API) \
	DECLARE_SERIALIZER(UClothPainterSettings)


#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUClothPainterSettings(); \
	friend struct Z_Construct_UClass_UClothPainterSettings_Statics; \
public: \
	DECLARE_CLASS(UClothPainterSettings, UMeshPaintSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClothPainter"), NO_API) \
	DECLARE_SERIALIZER(UClothPainterSettings)


#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothPainterSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothPainterSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothPainterSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothPainterSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothPainterSettings(UClothPainterSettings&&); \
	NO_API UClothPainterSettings(const UClothPainterSettings&); \
public:


#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothPainterSettings(UClothPainterSettings&&); \
	NO_API UClothPainterSettings(const UClothPainterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothPainterSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothPainterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClothPainterSettings)


#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ViewMin() { return STRUCT_OFFSET(UClothPainterSettings, ViewMin); } \
	FORCEINLINE static uint32 __PPO__ViewMax() { return STRUCT_OFFSET(UClothPainterSettings, ViewMax); }


#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_26_PROLOG
#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_RPC_WRAPPERS \
	Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_INCLASS \
	Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHPAINTER_API UClass* StaticClass<class UClothPainterSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h


#define FOREACH_ENUM_EPAINTABLECLOTHPROPERTY(op) \
	op(EPaintableClothProperty::MaxDistances) \
	op(EPaintableClothProperty::BackstopDistances) \
	op(EPaintableClothProperty::BackstopRadius) 

enum class EPaintableClothProperty;
template<> CLOTHPAINTER_API UEnum* StaticEnum<EPaintableClothProperty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

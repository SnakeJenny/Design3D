// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHPAINT_MeshPaintSettings_generated_h
#error "MeshPaintSettings.generated.h already included, missing '#pragma once' in MeshPaintSettings.h"
#endif
#define MESHPAINT_MeshPaintSettings_generated_h

#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_RPC_WRAPPERS
#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaintBrushSettings(); \
	friend struct Z_Construct_UClass_UPaintBrushSettings_Statics; \
public: \
	DECLARE_CLASS(UPaintBrushSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshPaint"), NO_API) \
	DECLARE_SERIALIZER(UPaintBrushSettings)


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUPaintBrushSettings(); \
	friend struct Z_Construct_UClass_UPaintBrushSettings_Statics; \
public: \
	DECLARE_CLASS(UPaintBrushSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshPaint"), NO_API) \
	DECLARE_SERIALIZER(UPaintBrushSettings)


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaintBrushSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaintBrushSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaintBrushSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaintBrushSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaintBrushSettings(UPaintBrushSettings&&); \
	NO_API UPaintBrushSettings(const UPaintBrushSettings&); \
public:


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaintBrushSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaintBrushSettings(UPaintBrushSettings&&); \
	NO_API UPaintBrushSettings(const UPaintBrushSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaintBrushSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaintBrushSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaintBrushSettings)


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BrushRadius() { return STRUCT_OFFSET(UPaintBrushSettings, BrushRadius); }


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_32_PROLOG
#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_RPC_WRAPPERS \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_INCLASS \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaintBrushSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHPAINT_API UClass* StaticClass<class UPaintBrushSettings>();

#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_RPC_WRAPPERS
#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshPaintSettings(); \
	friend struct Z_Construct_UClass_UMeshPaintSettings_Statics; \
public: \
	DECLARE_CLASS(UMeshPaintSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshPaint"), NO_API) \
	DECLARE_SERIALIZER(UMeshPaintSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUMeshPaintSettings(); \
	friend struct Z_Construct_UClass_UMeshPaintSettings_Statics; \
public: \
	DECLARE_CLASS(UMeshPaintSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshPaint"), NO_API) \
	DECLARE_SERIALIZER(UMeshPaintSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshPaintSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshPaintSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshPaintSettings(UMeshPaintSettings&&); \
	NO_API UMeshPaintSettings(const UMeshPaintSettings&); \
public:


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshPaintSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshPaintSettings(UMeshPaintSettings&&); \
	NO_API UMeshPaintSettings(const UMeshPaintSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshPaintSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintSettings)


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_75_PROLOG
#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_RPC_WRAPPERS \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_INCLASS \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHPAINT_API UClass* StaticClass<class UMeshPaintSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h


#define FOREACH_ENUM_EMESHPAINTCOLORVIEWMODE(op) \
	op(EMeshPaintColorViewMode::Normal) \
	op(EMeshPaintColorViewMode::RGB) \
	op(EMeshPaintColorViewMode::Alpha) \
	op(EMeshPaintColorViewMode::Red) \
	op(EMeshPaintColorViewMode::Green) \
	op(EMeshPaintColorViewMode::Blue) 

enum class EMeshPaintColorViewMode : uint8;
template<> MESHPAINT_API UEnum* StaticEnum<EMeshPaintColorViewMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

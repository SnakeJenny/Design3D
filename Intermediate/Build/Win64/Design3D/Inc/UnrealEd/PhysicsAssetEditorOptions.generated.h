// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PhysicsAssetEditorOptions_generated_h
#error "PhysicsAssetEditorOptions.generated.h already included, missing '#pragma once' in PhysicsAssetEditorOptions.h"
#endif
#define UNREALED_PhysicsAssetEditorOptions_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorOptions(); \
	friend struct Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAssetEditorOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorOptions(); \
	friend struct Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAssetEditorOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetEditorOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsAssetEditorOptions(UPhysicsAssetEditorOptions&&); \
	NO_API UPhysicsAssetEditorOptions(const UPhysicsAssetEditorOptions&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsAssetEditorOptions(UPhysicsAssetEditorOptions&&); \
	NO_API UPhysicsAssetEditorOptions(const UPhysicsAssetEditorOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetEditorOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorOptions)


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_28_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsAssetEditorOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPhysicsAssetEditorOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h


#define FOREACH_ENUM_EPHYSICSASSETEDITORCONSTRAINTVIEWMODE(op) \
	op(EPhysicsAssetEditorConstraintViewMode::None) \
	op(EPhysicsAssetEditorConstraintViewMode::AllPositions) \
	op(EPhysicsAssetEditorConstraintViewMode::AllLimits) 

enum class EPhysicsAssetEditorConstraintViewMode : uint8;
template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorConstraintViewMode>();

#define FOREACH_ENUM_EPHYSICSASSETEDITORRENDERMODE(op) \
	op(EPhysicsAssetEditorRenderMode::Solid) \
	op(EPhysicsAssetEditorRenderMode::Wireframe) \
	op(EPhysicsAssetEditorRenderMode::None) 

enum class EPhysicsAssetEditorRenderMode : uint8;
template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorRenderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

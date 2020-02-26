// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_HierarchicalLOD_generated_h
#error "HierarchicalLOD.generated.h already included, missing '#pragma once' in HierarchicalLOD.h"
#endif
#define UNREALED_HierarchicalLOD_generated_h

#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchicalLODSettings(); \
	friend struct Z_Construct_UClass_UHierarchicalLODSettings_Statics; \
public: \
	DECLARE_CLASS(UHierarchicalLODSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UHierarchicalLODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUHierarchicalLODSettings(); \
	friend struct Z_Construct_UClass_UHierarchicalLODSettings_Statics; \
public: \
	DECLARE_CLASS(UHierarchicalLODSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UHierarchicalLODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHierarchicalLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchicalLODSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalLODSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHierarchicalLODSettings(UHierarchicalLODSettings&&); \
	NO_API UHierarchicalLODSettings(const UHierarchicalLODSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHierarchicalLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHierarchicalLODSettings(UHierarchicalLODSettings&&); \
	NO_API UHierarchicalLODSettings(const UHierarchicalLODSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchicalLODSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalLODSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalLODSettings)


#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_27_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HierarchicalLODSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UHierarchicalLODSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

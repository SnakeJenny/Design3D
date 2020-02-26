// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CSVImportFactory_generated_h
#error "CSVImportFactory.generated.h already included, missing '#pragma once' in CSVImportFactory.h"
#endif
#define UNREALED_CSVImportFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCSVImportSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FCSVImportSettings>();

#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSVImportFactory(); \
	friend struct Z_Construct_UClass_UCSVImportFactory_Statics; \
public: \
	DECLARE_CLASS(UCSVImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCSVImportFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUCSVImportFactory(); \
	friend struct Z_Construct_UClass_UCSVImportFactory_Statics; \
public: \
	DECLARE_CLASS(UCSVImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCSVImportFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSVImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSVImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSVImportFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSVImportFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSVImportFactory(UCSVImportFactory&&); \
	NO_API UCSVImportFactory(const UCSVImportFactory&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSVImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSVImportFactory(UCSVImportFactory&&); \
	NO_API UCSVImportFactory(const UCSVImportFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSVImportFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSVImportFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSVImportFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AutomatedImportSettings() { return STRUCT_OFFSET(UCSVImportFactory, AutomatedImportSettings); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_52_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CSVImportFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCSVImportFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h


#define FOREACH_ENUM_ECSVIMPORTTYPE(op) \
	op(ECSVImportType::ECSV_DataTable) \
	op(ECSVImportType::ECSV_CurveTable) \
	op(ECSVImportType::ECSV_CurveFloat) \
	op(ECSVImportType::ECSV_CurveVector) \
	op(ECSVImportType::ECSV_CurveLinearColor) 

enum class ECSVImportType : uint8;
template<> UNREALED_API UEnum* StaticEnum<ECSVImportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ImportAssetsCommandlet_generated_h
#error "ImportAssetsCommandlet.generated.h already included, missing '#pragma once' in ImportAssetsCommandlet.h"
#endif
#define UNREALED_ImportAssetsCommandlet_generated_h

#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportAssetsCommandlet(); \
	friend struct Z_Construct_UClass_UImportAssetsCommandlet_Statics; \
public: \
	DECLARE_CLASS(UImportAssetsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UImportAssetsCommandlet)


#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUImportAssetsCommandlet(); \
	friend struct Z_Construct_UClass_UImportAssetsCommandlet_Statics; \
public: \
	DECLARE_CLASS(UImportAssetsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UImportAssetsCommandlet)


#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportAssetsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportAssetsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportAssetsCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportAssetsCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportAssetsCommandlet(UImportAssetsCommandlet&&); \
	NO_API UImportAssetsCommandlet(const UImportAssetsCommandlet&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportAssetsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportAssetsCommandlet(UImportAssetsCommandlet&&); \
	NO_API UImportAssetsCommandlet(const UImportAssetsCommandlet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportAssetsCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportAssetsCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportAssetsCommandlet)


#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GlobalImportData() { return STRUCT_OFFSET(UImportAssetsCommandlet, GlobalImportData); } \
	FORCEINLINE static uint32 __PPO__ImportDataList() { return STRUCT_OFFSET(UImportAssetsCommandlet, ImportDataList); }


#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_13_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ImportAssetsCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UImportAssetsCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

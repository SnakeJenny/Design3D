// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
enum class EMaterialSearchLocation : uint8;
#ifdef UNREALED_MaterialImportHelpers_generated_h
#error "MaterialImportHelpers.generated.h already included, missing '#pragma once' in MaterialImportHelpers.h"
#endif
#define UNREALED_MaterialImportHelpers_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindExistingMaterial) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BasePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MaterialFullName); \
		P_GET_UBOOL(Z_Param_bRecursivePaths); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutError); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UMaterialImportHelpers::FindExistingMaterial(Z_Param_BasePath,Z_Param_MaterialFullName,Z_Param_bRecursivePaths,Z_Param_Out_OutError); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindExistingMaterialFromSearchLocation) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MaterialFullName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BasePackagePath); \
		P_GET_ENUM(EMaterialSearchLocation,Z_Param_SearchLocation); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutError); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UMaterialImportHelpers::FindExistingMaterialFromSearchLocation(Z_Param_MaterialFullName,Z_Param_BasePackagePath,EMaterialSearchLocation(Z_Param_SearchLocation),Z_Param_Out_OutError); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindExistingMaterial) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BasePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MaterialFullName); \
		P_GET_UBOOL(Z_Param_bRecursivePaths); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutError); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UMaterialImportHelpers::FindExistingMaterial(Z_Param_BasePath,Z_Param_MaterialFullName,Z_Param_bRecursivePaths,Z_Param_Out_OutError); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindExistingMaterialFromSearchLocation) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MaterialFullName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BasePackagePath); \
		P_GET_ENUM(EMaterialSearchLocation,Z_Param_SearchLocation); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutError); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UMaterialImportHelpers::FindExistingMaterialFromSearchLocation(Z_Param_MaterialFullName,Z_Param_BasePackagePath,EMaterialSearchLocation(Z_Param_SearchLocation),Z_Param_Out_OutError); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialImportHelpers(); \
	friend struct Z_Construct_UClass_UMaterialImportHelpers_Statics; \
public: \
	DECLARE_CLASS(UMaterialImportHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMaterialImportHelpers)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialImportHelpers(); \
	friend struct Z_Construct_UClass_UMaterialImportHelpers_Statics; \
public: \
	DECLARE_CLASS(UMaterialImportHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMaterialImportHelpers)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialImportHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialImportHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialImportHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialImportHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialImportHelpers(UMaterialImportHelpers&&); \
	NO_API UMaterialImportHelpers(const UMaterialImportHelpers&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialImportHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialImportHelpers(UMaterialImportHelpers&&); \
	NO_API UMaterialImportHelpers(const UMaterialImportHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialImportHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialImportHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialImportHelpers)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_26_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialImportHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h


#define FOREACH_ENUM_EMATERIALSEARCHLOCATION(op) \
	op(EMaterialSearchLocation::Local) \
	op(EMaterialSearchLocation::UnderParent) \
	op(EMaterialSearchLocation::UnderRoot) \
	op(EMaterialSearchLocation::AllAssets) 

enum class EMaterialSearchLocation : uint8;
template<> UNREALED_API UEnum* StaticEnum<EMaterialSearchLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

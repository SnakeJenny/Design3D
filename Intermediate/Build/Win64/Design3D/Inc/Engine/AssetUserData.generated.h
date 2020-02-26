// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetUserData_generated_h
#error "AssetUserData.generated.h already included, missing '#pragma once' in AssetUserData.h"
#endif
#define ENGINE_AssetUserData_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetUserData(); \
	friend struct Z_Construct_UClass_UAssetUserData_Statics; \
public: \
	DECLARE_CLASS(UAssetUserData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetUserData)


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAssetUserData(); \
	friend struct Z_Construct_UClass_UAssetUserData_Statics; \
public: \
	DECLARE_CLASS(UAssetUserData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetUserData)


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetUserData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetUserData(UAssetUserData&&); \
	NO_API UAssetUserData(const UAssetUserData&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetUserData(UAssetUserData&&); \
	NO_API UAssetUserData(const UAssetUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetUserData)


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AssetUserData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetUserData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

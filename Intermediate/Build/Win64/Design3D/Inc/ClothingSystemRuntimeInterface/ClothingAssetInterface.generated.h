// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingAssetInterface_generated_h
#error "ClothingAssetInterface.generated.h already included, missing '#pragma once' in ClothingAssetInterface.h"
#endif
#define CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingAssetInterface_generated_h

#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingAssetBase(); \
	friend struct Z_Construct_UClass_UClothingAssetBase_Statics; \
public: \
	DECLARE_CLASS(UClothingAssetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingAssetBase)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUClothingAssetBase(); \
	friend struct Z_Construct_UClass_UClothingAssetBase_Statics; \
public: \
	DECLARE_CLASS(UClothingAssetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingAssetBase)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingAssetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingAssetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingAssetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingAssetBase(UClothingAssetBase&&); \
	NO_API UClothingAssetBase(const UClothingAssetBase&); \
public:


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingAssetBase(UClothingAssetBase&&); \
	NO_API UClothingAssetBase(const UClothingAssetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingAssetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingAssetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingAssetBase)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssetGuid() { return STRUCT_OFFSET(UClothingAssetBase, AssetGuid); }


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_13_PROLOG
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_INCLASS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<class UClothingAssetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

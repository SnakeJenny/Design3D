// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETREGISTRY_AssetRegistry_generated_h
#error "AssetRegistry.generated.h already included, missing '#pragma once' in AssetRegistry.h"
#endif
#define ASSETREGISTRY_AssetRegistry_generated_h

#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAssetRegistryImpl, NO_API)


#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetRegistryImpl(); \
	friend struct Z_Construct_UClass_UAssetRegistryImpl_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryImpl, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAssetRegistryImpl) \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAssetRegistryImpl*>(this); }


#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAssetRegistryImpl(); \
	friend struct Z_Construct_UClass_UAssetRegistryImpl_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryImpl, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAssetRegistryImpl) \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAssetRegistryImpl*>(this); }


#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryImpl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryImpl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryImpl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetRegistryImpl(UAssetRegistryImpl&&); \
	NO_API UAssetRegistryImpl(const UAssetRegistryImpl&); \
public:


#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetRegistryImpl(UAssetRegistryImpl&&); \
	NO_API UAssetRegistryImpl(const UAssetRegistryImpl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryImpl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryImpl)


#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_24_PROLOG
#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_INCLASS \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETREGISTRY_API UClass* StaticClass<class UAssetRegistryImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

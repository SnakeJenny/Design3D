// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETTOOLS_AssetTools_generated_h
#error "AssetTools.generated.h already included, missing '#pragma once' in AssetTools.h"
#endif
#define ASSETTOOLS_AssetTools_generated_h

#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_RPC_WRAPPERS
#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetToolsImpl(); \
	friend struct Z_Construct_UClass_UAssetToolsImpl_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsImpl, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UAssetToolsImpl*>(this); }


#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUAssetToolsImpl(); \
	friend struct Z_Construct_UClass_UAssetToolsImpl_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsImpl, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UAssetToolsImpl*>(this); }


#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetToolsImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsImpl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsImpl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsImpl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetToolsImpl(UAssetToolsImpl&&); \
	NO_API UAssetToolsImpl(const UAssetToolsImpl&); \
public:


#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetToolsImpl(UAssetToolsImpl&&); \
	NO_API UAssetToolsImpl(const UAssetToolsImpl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsImpl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsImpl)


#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_51_PROLOG
#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_RPC_WRAPPERS \
	Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_INCLASS \
	Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_AssetTools_Private_AssetTools_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTOOLS_API UClass* StaticClass<class UAssetToolsImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_AssetTools_Private_AssetTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

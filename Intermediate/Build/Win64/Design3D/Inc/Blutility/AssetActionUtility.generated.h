// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef BLUTILITY_AssetActionUtility_generated_h
#error "AssetActionUtility.generated.h already included, missing '#pragma once' in AssetActionUtility.h"
#endif
#define BLUTILITY_AssetActionUtility_generated_h

#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_EVENT_PARMS \
	struct AssetActionUtility_eventGetSupportedClass_Parms \
	{ \
		UClass* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AssetActionUtility_eventGetSupportedClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_CALLBACK_WRAPPERS
#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetActionUtility(); \
	friend struct Z_Construct_UClass_UAssetActionUtility_Statics; \
public: \
	DECLARE_CLASS(UAssetActionUtility, UGlobalEditorUtilityBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAssetActionUtility)


#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAssetActionUtility(); \
	friend struct Z_Construct_UClass_UAssetActionUtility_Statics; \
public: \
	DECLARE_CLASS(UAssetActionUtility, UGlobalEditorUtilityBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAssetActionUtility)


#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetActionUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetActionUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetActionUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetActionUtility(UAssetActionUtility&&); \
	NO_API UAssetActionUtility(const UAssetActionUtility&); \
public:


#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetActionUtility(UAssetActionUtility&&); \
	NO_API UAssetActionUtility(const UAssetActionUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetActionUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetActionUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetActionUtility)


#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_13_PROLOG \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_EVENT_PARMS


#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_INCLASS \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAssetActionUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

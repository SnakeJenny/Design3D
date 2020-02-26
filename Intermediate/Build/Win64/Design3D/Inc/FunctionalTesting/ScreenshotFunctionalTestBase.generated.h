// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FUNCTIONALTESTING_ScreenshotFunctionalTestBase_generated_h
#error "ScreenshotFunctionalTestBase.generated.h already included, missing '#pragma once' in ScreenshotFunctionalTestBase.h"
#endif
#define FUNCTIONALTESTING_ScreenshotFunctionalTestBase_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_RPC_WRAPPERS
#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AScreenshotFunctionalTestBase, NO_API)


#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScreenshotFunctionalTestBase(); \
	friend struct Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics; \
public: \
	DECLARE_CLASS(AScreenshotFunctionalTestBase, AFunctionalTest, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AScreenshotFunctionalTestBase) \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_ARCHIVESERIALIZER


#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAScreenshotFunctionalTestBase(); \
	friend struct Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics; \
public: \
	DECLARE_CLASS(AScreenshotFunctionalTestBase, AFunctionalTest, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AScreenshotFunctionalTestBase) \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_ARCHIVESERIALIZER


#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScreenshotFunctionalTestBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScreenshotFunctionalTestBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScreenshotFunctionalTestBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScreenshotFunctionalTestBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScreenshotFunctionalTestBase(AScreenshotFunctionalTestBase&&); \
	NO_API AScreenshotFunctionalTestBase(const AScreenshotFunctionalTestBase&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScreenshotFunctionalTestBase(AScreenshotFunctionalTestBase&&); \
	NO_API AScreenshotFunctionalTestBase(const AScreenshotFunctionalTestBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScreenshotFunctionalTestBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScreenshotFunctionalTestBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScreenshotFunctionalTestBase)


#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Notes() { return STRUCT_OFFSET(AScreenshotFunctionalTestBase, Notes); } \
	FORCEINLINE static uint32 __PPO__ScreenshotCamera() { return STRUCT_OFFSET(AScreenshotFunctionalTestBase, ScreenshotCamera); } \
	FORCEINLINE static uint32 __PPO__ScreenshotOptions() { return STRUCT_OFFSET(AScreenshotFunctionalTestBase, ScreenshotOptions); }


#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_18_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AScreenshotFunctionalTestBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

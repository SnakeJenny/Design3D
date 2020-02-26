// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FUNCTIONALTESTING_FunctionalUIScreenshotTest_generated_h
#error "FunctionalUIScreenshotTest.generated.h already included, missing '#pragma once' in FunctionalUIScreenshotTest.h"
#endif
#define FUNCTIONALTESTING_FunctionalUIScreenshotTest_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_RPC_WRAPPERS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalUIScreenshotTest(); \
	friend struct Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalUIScreenshotTest, AScreenshotFunctionalTestBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(AFunctionalUIScreenshotTest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalUIScreenshotTest(); \
	friend struct Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalUIScreenshotTest, AScreenshotFunctionalTestBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(AFunctionalUIScreenshotTest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalUIScreenshotTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalUIScreenshotTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalUIScreenshotTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(AFunctionalUIScreenshotTest&&); \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(const AFunctionalUIScreenshotTest&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(AFunctionalUIScreenshotTest&&); \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(const AFunctionalUIScreenshotTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalUIScreenshotTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalUIScreenshotTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalUIScreenshotTest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WidgetClass() { return STRUCT_OFFSET(AFunctionalUIScreenshotTest, WidgetClass); } \
	FORCEINLINE static uint32 __PPO__SpawnedWidget() { return STRUCT_OFFSET(AFunctionalUIScreenshotTest, SpawnedWidget); } \
	FORCEINLINE static uint32 __PPO__WidgetLocation() { return STRUCT_OFFSET(AFunctionalUIScreenshotTest, WidgetLocation); } \
	FORCEINLINE static uint32 __PPO__ScreenshotRT() { return STRUCT_OFFSET(AFunctionalUIScreenshotTest, ScreenshotRT); }


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_25_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalUIScreenshotTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h


#define FOREACH_ENUM_EWIDGETTESTAPPEARLOCATION(op) \
	op(EWidgetTestAppearLocation::Viewport) \
	op(EWidgetTestAppearLocation::PlayerScreen) 

enum class EWidgetTestAppearLocation;
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EWidgetTestAppearLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

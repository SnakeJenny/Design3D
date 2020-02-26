// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_IAmbisonicsMixer_generated_h
#error "IAmbisonicsMixer.generated.h already included, missing '#pragma once' in IAmbisonicsMixer.h"
#endif
#define ENGINE_IAmbisonicsMixer_generated_h

#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAmbisonicsSubmixSettingsBase(); \
	friend struct Z_Construct_UClass_UAmbisonicsSubmixSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UAmbisonicsSubmixSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAmbisonicsSubmixSettingsBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAmbisonicsSubmixSettingsBase(); \
	friend struct Z_Construct_UClass_UAmbisonicsSubmixSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UAmbisonicsSubmixSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAmbisonicsSubmixSettingsBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAmbisonicsSubmixSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmbisonicsSubmixSettingsBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmbisonicsSubmixSettingsBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmbisonicsSubmixSettingsBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAmbisonicsSubmixSettingsBase(UAmbisonicsSubmixSettingsBase&&); \
	NO_API UAmbisonicsSubmixSettingsBase(const UAmbisonicsSubmixSettingsBase&); \
public:


#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAmbisonicsSubmixSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAmbisonicsSubmixSettingsBase(UAmbisonicsSubmixSettingsBase&&); \
	NO_API UAmbisonicsSubmixSettingsBase(const UAmbisonicsSubmixSettingsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmbisonicsSubmixSettingsBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmbisonicsSubmixSettingsBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmbisonicsSubmixSettingsBase)


#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAmbisonicsSubmixSettingsBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_IAmbisonicsMixer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

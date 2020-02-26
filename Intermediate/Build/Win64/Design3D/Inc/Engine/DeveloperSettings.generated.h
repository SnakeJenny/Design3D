// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeveloperSettings_generated_h
#error "DeveloperSettings.generated.h already included, missing '#pragma once' in DeveloperSettings.h"
#endif
#define ENGINE_DeveloperSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeveloperSettings(); \
	friend struct Z_Construct_UClass_UDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UDeveloperSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeveloperSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDeveloperSettings(); \
	friend struct Z_Construct_UClass_UDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UDeveloperSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeveloperSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeveloperSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeveloperSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeveloperSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeveloperSettings(UDeveloperSettings&&); \
	NO_API UDeveloperSettings(const UDeveloperSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeveloperSettings(UDeveloperSettings&&); \
	NO_API UDeveloperSettings(const UDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeveloperSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeveloperSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DeveloperSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

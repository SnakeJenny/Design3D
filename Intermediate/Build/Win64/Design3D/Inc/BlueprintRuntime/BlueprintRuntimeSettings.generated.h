// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTRUNTIME_BlueprintRuntimeSettings_generated_h
#error "BlueprintRuntimeSettings.generated.h already included, missing '#pragma once' in BlueprintRuntimeSettings.h"
#endif
#define BLUEPRINTRUNTIME_BlueprintRuntimeSettings_generated_h

#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics; \
	BLUEPRINTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTRUNTIME_API UScriptStruct* StaticStruct<struct FBlueprintWarningSettings>();

#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_RPC_WRAPPERS
#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintRuntimeSettings(); \
	friend struct Z_Construct_UClass_UBlueprintRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintRuntimeSettings(); \
	friend struct Z_Construct_UClass_UBlueprintRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintRuntimeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintRuntimeSettings(UBlueprintRuntimeSettings&&); \
	NO_API UBlueprintRuntimeSettings(const UBlueprintRuntimeSettings&); \
public:


#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintRuntimeSettings(UBlueprintRuntimeSettings&&); \
	NO_API UBlueprintRuntimeSettings(const UBlueprintRuntimeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintRuntimeSettings)


#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_38_PROLOG
#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_INCLASS \
	Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintRuntimeSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTRUNTIME_API UClass* StaticClass<class UBlueprintRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h


#define FOREACH_ENUM_EBLUEPRINTWARNINGBEHAVIOR(op) \
	op(EBlueprintWarningBehavior::Warn) \
	op(EBlueprintWarningBehavior::Error) \
	op(EBlueprintWarningBehavior::Suppress) 

enum class EBlueprintWarningBehavior : uint8;
template<> BLUEPRINTRUNTIME_API UEnum* StaticEnum<EBlueprintWarningBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

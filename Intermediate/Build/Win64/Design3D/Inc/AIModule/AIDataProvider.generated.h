// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIDataProvider_generated_h
#error "AIDataProvider.generated.h already included, missing '#pragma once' in AIDataProvider.h"
#endif
#define AIMODULE_AIDataProvider_generated_h

#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderBoolValue>();

#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderFloatValue>();

#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderIntValue>();

#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderStructValue>();

#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderTypedValue>();

#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CachedProperty() { return STRUCT_OFFSET(FAIDataProviderValue, CachedProperty); }


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderValue>();

#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIDataProvider(); \
	friend struct Z_Construct_UClass_UAIDataProvider_Statics; \
public: \
	DECLARE_CLASS(UAIDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIDataProvider)


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_INCLASS \
private: \
	static void StaticRegisterNativesUAIDataProvider(); \
	friend struct Z_Construct_UClass_UAIDataProvider_Statics; \
public: \
	DECLARE_CLASS(UAIDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIDataProvider)


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIDataProvider(UAIDataProvider&&); \
	NO_API UAIDataProvider(const UAIDataProvider&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIDataProvider(UAIDataProvider&&); \
	NO_API UAIDataProvider(const UAIDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataProvider)


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_140_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIDataProvider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

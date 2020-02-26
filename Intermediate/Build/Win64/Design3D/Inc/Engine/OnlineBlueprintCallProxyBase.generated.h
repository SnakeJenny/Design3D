// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_OnlineBlueprintCallProxyBase_generated_h
#error "OnlineBlueprintCallProxyBase.generated.h already included, missing '#pragma once' in OnlineBlueprintCallProxyBase.h"
#endif
#define ENGINE_OnlineBlueprintCallProxyBase_generated_h

#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_10_DELEGATE \
static inline void FEmptyOnlineDelegate_DelegateWrapper(const FMulticastScriptDelegate& EmptyOnlineDelegate) \
{ \
	EmptyOnlineDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Activate(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Activate(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineBlueprintCallProxyBase(); \
	friend struct Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UOnlineBlueprintCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UOnlineBlueprintCallProxyBase)


#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineBlueprintCallProxyBase(); \
	friend struct Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UOnlineBlueprintCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UOnlineBlueprintCallProxyBase)


#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineBlueprintCallProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UOnlineBlueprintCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineBlueprintCallProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(UOnlineBlueprintCallProxyBase&&); \
	ENGINE_API UOnlineBlueprintCallProxyBase(const UOnlineBlueprintCallProxyBase&); \
public:


#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(UOnlineBlueprintCallProxyBase&&); \
	ENGINE_API UOnlineBlueprintCallProxyBase(const UOnlineBlueprintCallProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UOnlineBlueprintCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineBlueprintCallProxyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineBlueprintCallProxyBase)


#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OnlineBlueprintCallProxyBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UOnlineBlueprintCallProxyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

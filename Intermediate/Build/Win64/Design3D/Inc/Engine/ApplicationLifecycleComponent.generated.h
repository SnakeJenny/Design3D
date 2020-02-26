// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETemperatureSeverityType : uint8;
#ifdef ENGINE_ApplicationLifecycleComponent_generated_h
#error "ApplicationLifecycleComponent.generated.h already included, missing '#pragma once' in ApplicationLifecycleComponent.h"
#endif
#define ENGINE_ApplicationLifecycleComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_67_DELEGATE \
struct ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms \
{ \
	TArray<FString> StartupArguments; \
}; \
static inline void FApplicationStartupArgumentsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationStartupArgumentsDelegate, TArray<FString> const& StartupArguments) \
{ \
	ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms Parms; \
	Parms.StartupArguments=StartupArguments; \
	ApplicationStartupArgumentsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_35_DELEGATE \
struct ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms \
{ \
	bool bInLowPowerMode; \
}; \
static inline void FOnLowPowerModeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLowPowerModeDelegate, bool bInLowPowerMode) \
{ \
	ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms Parms; \
	Parms.bInLowPowerMode=bInLowPowerMode ? true : false; \
	OnLowPowerModeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_34_DELEGATE \
struct ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms \
{ \
	ETemperatureSeverityType Severity; \
}; \
static inline void FOnTemperatureChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTemperatureChangeDelegate, ETemperatureSeverityType Severity) \
{ \
	ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms Parms; \
	Parms.Severity=Severity; \
	OnTemperatureChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_33_DELEGATE \
static inline void FApplicationLifetimeDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationLifetimeDelegate) \
{ \
	ApplicationLifetimeDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUApplicationLifecycleComponent(); \
	friend struct Z_Construct_UClass_UApplicationLifecycleComponent_Statics; \
public: \
	DECLARE_CLASS(UApplicationLifecycleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UApplicationLifecycleComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUApplicationLifecycleComponent(); \
	friend struct Z_Construct_UClass_UApplicationLifecycleComponent_Statics; \
public: \
	DECLARE_CLASS(UApplicationLifecycleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UApplicationLifecycleComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApplicationLifecycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApplicationLifecycleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApplicationLifecycleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApplicationLifecycleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApplicationLifecycleComponent(UApplicationLifecycleComponent&&); \
	NO_API UApplicationLifecycleComponent(const UApplicationLifecycleComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApplicationLifecycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApplicationLifecycleComponent(UApplicationLifecycleComponent&&); \
	NO_API UApplicationLifecycleComponent(const UApplicationLifecycleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApplicationLifecycleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApplicationLifecycleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApplicationLifecycleComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_28_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ApplicationLifecycleComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UApplicationLifecycleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h


#define FOREACH_ENUM_ETEMPERATURESEVERITYTYPE(op) \
	op(ETemperatureSeverityType::Unknown) \
	op(ETemperatureSeverityType::Good) \
	op(ETemperatureSeverityType::Bad) \
	op(ETemperatureSeverityType::Serious) \
	op(ETemperatureSeverityType::Critical) \
	op(ETemperatureSeverityType::NumSeverities) 

enum class ETemperatureSeverityType : uint8;
template<> ENGINE_API UEnum* StaticEnum<ETemperatureSeverityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

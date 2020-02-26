// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_UserInterfaceSettings_generated_h
#error "UserInterfaceSettings.generated.h already included, missing '#pragma once' in UserInterfaceSettings.h"
#endif
#define ENGINE_UserInterfaceSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHardwareCursorReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHardwareCursorReference>();

#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserInterfaceSettings(); \
	friend struct Z_Construct_UClass_UUserInterfaceSettings_Statics; \
public: \
	DECLARE_CLASS(UUserInterfaceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UUserInterfaceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUUserInterfaceSettings(); \
	friend struct Z_Construct_UClass_UUserInterfaceSettings_Statics; \
public: \
	DECLARE_CLASS(UUserInterfaceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UUserInterfaceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserInterfaceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserInterfaceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserInterfaceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserInterfaceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserInterfaceSettings(UUserInterfaceSettings&&); \
	NO_API UUserInterfaceSettings(const UUserInterfaceSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserInterfaceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserInterfaceSettings(UUserInterfaceSettings&&); \
	NO_API UUserInterfaceSettings(const UUserInterfaceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserInterfaceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserInterfaceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserInterfaceSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CursorClasses() { return STRUCT_OFFSET(UUserInterfaceSettings, CursorClasses); } \
	FORCEINLINE static uint32 __PPO__CustomScalingRuleClassInstance() { return STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRuleClassInstance); } \
	FORCEINLINE static uint32 __PPO__CustomScalingRule() { return STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRule); }


#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_102_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_105_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UserInterfaceSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UUserInterfaceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h


#define FOREACH_ENUM_EUISCALINGRULE(op) \
	op(EUIScalingRule::ShortestSide) \
	op(EUIScalingRule::LongestSide) \
	op(EUIScalingRule::Horizontal) \
	op(EUIScalingRule::Vertical) \
	op(EUIScalingRule::Custom) 

enum class EUIScalingRule : uint8;
template<> ENGINE_API UEnum* StaticEnum<EUIScalingRule>();

#define FOREACH_ENUM_ERENDERFOCUSRULE(op) \
	op(ERenderFocusRule::Always) \
	op(ERenderFocusRule::NonPointer) \
	op(ERenderFocusRule::NavigationOnly) \
	op(ERenderFocusRule::Never) 

enum class ERenderFocusRule : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERenderFocusRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

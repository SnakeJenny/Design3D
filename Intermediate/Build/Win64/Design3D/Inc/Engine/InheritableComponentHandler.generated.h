// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InheritableComponentHandler_generated_h
#error "InheritableComponentHandler.generated.h already included, missing '#pragma once' in InheritableComponentHandler.h"
#endif
#define ENGINE_InheritableComponentHandler_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FComponentOverrideRecord>();

#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentKey_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__OwnerClass() { return STRUCT_OFFSET(FComponentKey, OwnerClass); } \
	FORCEINLINE static uint32 __PPO__SCSVariableName() { return STRUCT_OFFSET(FComponentKey, SCSVariableName); } \
	FORCEINLINE static uint32 __PPO__AssociatedGuid() { return STRUCT_OFFSET(FComponentKey, AssociatedGuid); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FComponentKey>();

#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInheritableComponentHandler, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInheritableComponentHandler(); \
	friend struct Z_Construct_UClass_UInheritableComponentHandler_Statics; \
public: \
	DECLARE_CLASS(UInheritableComponentHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInheritableComponentHandler) \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_INCLASS \
private: \
	static void StaticRegisterNativesUInheritableComponentHandler(); \
	friend struct Z_Construct_UClass_UInheritableComponentHandler_Statics; \
public: \
	DECLARE_CLASS(UInheritableComponentHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInheritableComponentHandler) \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInheritableComponentHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInheritableComponentHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInheritableComponentHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInheritableComponentHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInheritableComponentHandler(UInheritableComponentHandler&&); \
	NO_API UInheritableComponentHandler(const UInheritableComponentHandler&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInheritableComponentHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInheritableComponentHandler(UInheritableComponentHandler&&); \
	NO_API UInheritableComponentHandler(const UInheritableComponentHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInheritableComponentHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInheritableComponentHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInheritableComponentHandler)


#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Records() { return STRUCT_OFFSET(UInheritableComponentHandler, Records); } \
	FORCEINLINE static uint32 __PPO__UnnecessaryComponents() { return STRUCT_OFFSET(UInheritableComponentHandler, UnnecessaryComponents); }


#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_91_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInheritableComponentHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

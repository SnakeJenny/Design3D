// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlatformInterfaceDelegateResult;
#ifdef ENGINE_PlatformInterfaceBase_generated_h
#error "PlatformInterfaceBase.generated.h already included, missing '#pragma once' in PlatformInterfaceBase.h"
#endif
#define ENGINE_PlatformInterfaceBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDelegateArray_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDelegateArray>();

#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPlatformInterfaceDelegateResult>();

#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPlatformInterfaceData>();

#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_99_DELEGATE \
struct _Script_Engine_eventPlatformInterfaceDelegate_Parms \
{ \
	FPlatformInterfaceDelegateResult Result; \
}; \
static inline void FPlatformInterfaceDelegate_DelegateWrapper(const FScriptDelegate& PlatformInterfaceDelegate, FPlatformInterfaceDelegateResult const& Result) \
{ \
	_Script_Engine_eventPlatformInterfaceDelegate_Parms Parms; \
	Parms.Result=Result; \
	PlatformInterfaceDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformInterfaceBase(); \
	friend struct Z_Construct_UClass_UPlatformInterfaceBase_Statics; \
public: \
	DECLARE_CLASS(UPlatformInterfaceBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformInterfaceBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformInterfaceBase(); \
	friend struct Z_Construct_UClass_UPlatformInterfaceBase_Statics; \
public: \
	DECLARE_CLASS(UPlatformInterfaceBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformInterfaceBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPlatformInterfaceBase(UPlatformInterfaceBase&&); \
	ENGINE_API UPlatformInterfaceBase(const UPlatformInterfaceBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPlatformInterfaceBase(UPlatformInterfaceBase&&); \
	ENGINE_API UPlatformInterfaceBase(const UPlatformInterfaceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_115_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlatformInterfaceBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlatformInterfaceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h


#define FOREACH_ENUM_EPLATFORMINTERFACEDATATYPE(op) \
	op(PIDT_None) \
	op(PIDT_Int) \
	op(PIDT_Float) \
	op(PIDT_String) \
	op(PIDT_Object) \
	op(PIDT_Custom) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

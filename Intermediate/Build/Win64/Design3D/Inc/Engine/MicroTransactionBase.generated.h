// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MicroTransactionBase_generated_h
#error "MicroTransactionBase.generated.h already included, missing '#pragma once' in MicroTransactionBase.h"
#endif
#define ENGINE_MicroTransactionBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPurchaseInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPurchaseInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMicroTransactionBase(); \
	friend struct Z_Construct_UClass_UMicroTransactionBase_Statics; \
public: \
	DECLARE_CLASS(UMicroTransactionBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMicroTransactionBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUMicroTransactionBase(); \
	friend struct Z_Construct_UClass_UMicroTransactionBase_Statics; \
public: \
	DECLARE_CLASS(UMicroTransactionBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMicroTransactionBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMicroTransactionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMicroTransactionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicroTransactionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicroTransactionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMicroTransactionBase(UMicroTransactionBase&&); \
	NO_API UMicroTransactionBase(const UMicroTransactionBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMicroTransactionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMicroTransactionBase(UMicroTransactionBase&&); \
	NO_API UMicroTransactionBase(const UMicroTransactionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicroTransactionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicroTransactionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMicroTransactionBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_83_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MicroTransactionBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMicroTransactionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h


#define FOREACH_ENUM_EMICROTRANSACTIONRESULT(op) \
	op(MTR_Succeeded) \
	op(MTR_Failed) \
	op(MTR_Canceled) \
	op(MTR_RestoredFromServer) 
#define FOREACH_ENUM_EMICROTRANSACTIONDELEGATE(op) \
	op(MTD_PurchaseQueryComplete) \
	op(MTD_PurchaseComplete) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Int32Binding_generated_h
#error "Int32Binding.generated.h already included, missing '#pragma once' in Int32Binding.h"
#endif
#define UMG_Int32Binding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInt32Binding(); \
	friend struct Z_Construct_UClass_UInt32Binding_Statics; \
public: \
	DECLARE_CLASS(UInt32Binding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UInt32Binding)


#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInt32Binding(); \
	friend struct Z_Construct_UClass_UInt32Binding_Statics; \
public: \
	DECLARE_CLASS(UInt32Binding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UInt32Binding)


#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInt32Binding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInt32Binding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInt32Binding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInt32Binding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInt32Binding(UInt32Binding&&); \
	NO_API UInt32Binding(const UInt32Binding&); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInt32Binding(UInt32Binding&&); \
	NO_API UInt32Binding(const UInt32Binding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInt32Binding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInt32Binding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInt32Binding)


#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_11_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UInt32Binding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameRate;
#ifdef ENGINE_SystemTimeTimecodeProvider_generated_h
#error "SystemTimeTimecodeProvider.generated.h already included, missing '#pragma once' in SystemTimeTimecodeProvider.h"
#endif
#define ENGINE_SystemTimeTimecodeProvider_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFrameRate) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameRate(Z_Param_Out_InFrameRate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFrameRate) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameRate(Z_Param_Out_InFrameRate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSystemTimeTimecodeProvider(); \
	friend struct Z_Construct_UClass_USystemTimeTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(USystemTimeTimecodeProvider, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USystemTimeTimecodeProvider)


#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSystemTimeTimecodeProvider(); \
	friend struct Z_Construct_UClass_USystemTimeTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(USystemTimeTimecodeProvider, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USystemTimeTimecodeProvider)


#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USystemTimeTimecodeProvider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USystemTimeTimecodeProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USystemTimeTimecodeProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USystemTimeTimecodeProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USystemTimeTimecodeProvider(USystemTimeTimecodeProvider&&); \
	NO_API USystemTimeTimecodeProvider(const USystemTimeTimecodeProvider&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USystemTimeTimecodeProvider(USystemTimeTimecodeProvider&&); \
	NO_API USystemTimeTimecodeProvider(const USystemTimeTimecodeProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USystemTimeTimecodeProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USystemTimeTimecodeProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USystemTimeTimecodeProvider)


#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FrameRate() { return STRUCT_OFFSET(USystemTimeTimecodeProvider, FrameRate); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USystemTimeTimecodeProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

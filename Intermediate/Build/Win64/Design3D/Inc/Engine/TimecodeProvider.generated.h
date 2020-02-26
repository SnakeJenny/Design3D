// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETimecodeProviderSynchronizationState : int32;
struct FFrameRate;
struct FTimecode;
#ifdef ENGINE_TimecodeProvider_generated_h
#error "TimecodeProvider.generated.h already included, missing '#pragma once' in TimecodeProvider.h"
#endif
#define ENGINE_TimecodeProvider_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSynchronizationState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETimecodeProviderSynchronizationState*)Z_Param__Result=P_THIS->GetSynchronizationState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimecode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimecode*)Z_Param__Result=P_THIS->GetTimecode(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSynchronizationState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETimecodeProviderSynchronizationState*)Z_Param__Result=P_THIS->GetSynchronizationState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimecode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimecode*)Z_Param__Result=P_THIS->GetTimecode(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimecodeProvider(); \
	friend struct Z_Construct_UClass_UTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(UTimecodeProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTimecodeProvider)


#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUTimecodeProvider(); \
	friend struct Z_Construct_UClass_UTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(UTimecodeProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTimecodeProvider)


#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimecodeProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimecodeProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimecodeProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimecodeProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimecodeProvider(UTimecodeProvider&&); \
	NO_API UTimecodeProvider(const UTimecodeProvider&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimecodeProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimecodeProvider(UTimecodeProvider&&); \
	NO_API UTimecodeProvider(const UTimecodeProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimecodeProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimecodeProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimecodeProvider)


#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_38_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTimecodeProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h


#define FOREACH_ENUM_ETIMECODEPROVIDERSYNCHRONIZATIONSTATE(op) \
	op(ETimecodeProviderSynchronizationState::Closed) \
	op(ETimecodeProviderSynchronizationState::Error) \
	op(ETimecodeProviderSynchronizationState::Synchronized) \
	op(ETimecodeProviderSynchronizationState::Synchronizing) 

enum class ETimecodeProviderSynchronizationState;
template<> ENGINE_API UEnum* StaticEnum<ETimecodeProviderSynchronizationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

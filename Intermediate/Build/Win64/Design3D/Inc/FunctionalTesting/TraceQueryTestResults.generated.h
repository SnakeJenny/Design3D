// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FUNCTIONALTESTING_TraceQueryTestResults_generated_h
#error "TraceQueryTestResults.generated.h already included, missing '#pragma once' in TraceQueryTestResults.h"
#endif
#define FUNCTIONALTESTING_TraceQueryTestResults_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FTraceQueryTestResultsInner>();

#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FTraceQueryTestResultsInnerMost>();

#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FTraceQueryTestNames>();

#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FTraceChannelTestBatchOptions>();

#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTraceQueryTestResults(); \
	friend struct Z_Construct_UClass_UTraceQueryTestResults_Statics; \
public: \
	DECLARE_CLASS(UTraceQueryTestResults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UTraceQueryTestResults)


#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_INCLASS \
private: \
	static void StaticRegisterNativesUTraceQueryTestResults(); \
	friend struct Z_Construct_UClass_UTraceQueryTestResults_Statics; \
public: \
	DECLARE_CLASS(UTraceQueryTestResults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UTraceQueryTestResults)


#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTraceQueryTestResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraceQueryTestResults) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTraceQueryTestResults); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceQueryTestResults); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTraceQueryTestResults(UTraceQueryTestResults&&); \
	NO_API UTraceQueryTestResults(const UTraceQueryTestResults&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTraceQueryTestResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTraceQueryTestResults(UTraceQueryTestResults&&); \
	NO_API UTraceQueryTestResults(const UTraceQueryTestResults&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTraceQueryTestResults); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceQueryTestResults); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraceQueryTestResults)


#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_153_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UTraceQueryTestResults>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

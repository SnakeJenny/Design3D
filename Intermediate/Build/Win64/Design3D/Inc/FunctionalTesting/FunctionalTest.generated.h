// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EFunctionalTestResult : uint8;
class UTraceQueryTestResults;
class UObject;
struct FVector;
struct FRotator;
struct FTransform;
struct FDateTime;
enum class EComparisonMethod : uint8;
#ifdef FUNCTIONALTESTING_FunctionalTest_generated_h
#error "FunctionalTest.generated.h already included, missing '#pragma once' in FunctionalTest.h"
#endif
#define FUNCTIONALTESTING_FunctionalTest_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_205_DELEGATE \
static inline void FFunctionalTestEventSignature_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestEventSignature) \
{ \
	FunctionalTestEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndStatsFile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndStatsFile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginStatsFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RecordName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginStatsFile(Z_Param_RecordName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerGPUTraceIfRecordFallsBelowBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerGPUTraceIfRecordFallsBelowBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCPUProfiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCPUProfiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCPUProfiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCPUProfiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCurrentRecordWithinRenderThreadBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinRenderThreadBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGameThreadBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinGameThreadBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGPUBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinGPUBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAllTestsComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAllTestsComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginTests) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginTests(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteLogFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CaptureDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CaptureExtension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteLogFile(Z_Param_CaptureDir,Z_Param_CaptureExtension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginRecording) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RecordName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InGPUBudget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRenderThreadBudget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InGameThreadBudget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginRecording(Z_Param_RecordName,Z_Param_InGPUBudget,Z_Param_InRenderThreadBudget,Z_Param_InGameThreadBudget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndRecordingBaseline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndRecordingBaseline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginRecordingBaseline) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RecordName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginRecordingBaseline(Z_Param_RecordName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSample) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sample(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndStatsFile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndStatsFile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginStatsFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RecordName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginStatsFile(Z_Param_RecordName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerGPUTraceIfRecordFallsBelowBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerGPUTraceIfRecordFallsBelowBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCPUProfiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCPUProfiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCPUProfiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCPUProfiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCurrentRecordWithinRenderThreadBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinRenderThreadBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGameThreadBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinGameThreadBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGPUBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinGPUBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAllTestsComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAllTestsComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginTests) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginTests(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteLogFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CaptureDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CaptureExtension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteLogFile(Z_Param_CaptureDir,Z_Param_CaptureExtension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginRecording) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RecordName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InGPUBudget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRenderThreadBudget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InGameThreadBudget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginRecording(Z_Param_RecordName,Z_Param_InGPUBudget,Z_Param_InRenderThreadBudget,Z_Param_InGameThreadBudget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndRecordingBaseline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndRecordingBaseline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginRecordingBaseline) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RecordName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginRecordingBaseline(Z_Param_RecordName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSample) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sample(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationPerformaceHelper(); \
	friend struct Z_Construct_UClass_UAutomationPerformaceHelper_Statics; \
public: \
	DECLARE_CLASS(UAutomationPerformaceHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationPerformaceHelper)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationPerformaceHelper(); \
	friend struct Z_Construct_UClass_UAutomationPerformaceHelper_Statics; \
public: \
	DECLARE_CLASS(UAutomationPerformaceHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationPerformaceHelper)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationPerformaceHelper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationPerformaceHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationPerformaceHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationPerformaceHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationPerformaceHelper(UAutomationPerformaceHelper&&); \
	NO_API UAutomationPerformaceHelper(const UAutomationPerformaceHelper&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationPerformaceHelper(UAutomationPerformaceHelper&&); \
	NO_API UAutomationPerformaceHelper(const UAutomationPerformaceHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationPerformaceHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationPerformaceHelper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutomationPerformaceHelper)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_94_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UAutomationPerformaceHelper>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_RPC_WRAPPERS \
	virtual bool IsReady_Implementation(); \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReady_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterAutoDestroyActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterAutoDestroyActor(Z_Param_ActorToAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRerunReason) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCurrentRerunReason(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRerun) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Reason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRerun(Z_Param_Reason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeLimit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTimeLimit); \
		P_GET_ENUM(EFunctionalTestResult,Z_Param_ResultWhenTimeRunsOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeLimit(Z_Param_NewTimeLimit,EFunctionalTestResult(Z_Param_ResultWhenTimeRunsOut)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LogMessage(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishTest) \
	{ \
		P_GET_ENUM(EFunctionalTestResult,Z_Param_TestResult); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishTest(EFunctionalTestResult(Z_Param_TestResult),Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddError) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddError(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWarning) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddWarning(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_TraceQueryResults) \
	{ \
		P_GET_OBJECT(UTraceQueryTestResults,Z_Param_Actual); \
		P_GET_OBJECT(UTraceQueryTestResults,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_TraceQueryResults(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertNotEqual_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NotExpected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_String(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_String(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertNotEqual_Vector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Actual); \
		P_GET_STRUCT(FVector,Z_Param_NotExpected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Vector(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Vector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Actual); \
		P_GET_STRUCT(FVector,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Vector(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertNotEqual_Rotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Actual); \
		P_GET_STRUCT(FRotator,Z_Param_NotExpected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Rotator(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Rotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Actual); \
		P_GET_STRUCT(FRotator,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Rotator(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertNotEqual_Transform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Actual); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NotExpected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Transform(Z_Param_Out_Actual,Z_Param_Out_NotExpected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Name) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Name(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Int(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Bool) \
	{ \
		P_GET_UBOOL(Z_Param_Actual); \
		P_GET_UBOOL(Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Bool(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Float(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Transform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Actual); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Transform(Z_Param_Out_Actual,Z_Param_Out_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertValue_DateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_Actual); \
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe); \
		P_GET_STRUCT(FDateTime,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertValue_DateTime(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertValue_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Actual); \
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertValue_Float(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertValue_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Actual); \
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertValue_Int(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertIsValid) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertIsValid(Z_Param_Object,Z_Param_Message,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertFalse) \
	{ \
		P_GET_UBOOL(Z_Param_Condition); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertFalse(Z_Param_Condition,Z_Param_Message,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertTrue) \
	{ \
		P_GET_UBOOL(Z_Param_Condition); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertTrue(Z_Param_Condition,Z_Param_Message,Z_Param_ContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReady_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterAutoDestroyActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterAutoDestroyActor(Z_Param_ActorToAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRerunReason) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCurrentRerunReason(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRerun) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Reason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRerun(Z_Param_Reason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeLimit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTimeLimit); \
		P_GET_ENUM(EFunctionalTestResult,Z_Param_ResultWhenTimeRunsOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeLimit(Z_Param_NewTimeLimit,EFunctionalTestResult(Z_Param_ResultWhenTimeRunsOut)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LogMessage(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishTest) \
	{ \
		P_GET_ENUM(EFunctionalTestResult,Z_Param_TestResult); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishTest(EFunctionalTestResult(Z_Param_TestResult),Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddError) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddError(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWarning) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddWarning(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_TraceQueryResults) \
	{ \
		P_GET_OBJECT(UTraceQueryTestResults,Z_Param_Actual); \
		P_GET_OBJECT(UTraceQueryTestResults,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_TraceQueryResults(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertNotEqual_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NotExpected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_String(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_String(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertNotEqual_Vector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Actual); \
		P_GET_STRUCT(FVector,Z_Param_NotExpected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Vector(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Vector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Actual); \
		P_GET_STRUCT(FVector,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Vector(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertNotEqual_Rotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Actual); \
		P_GET_STRUCT(FRotator,Z_Param_NotExpected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Rotator(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Rotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Actual); \
		P_GET_STRUCT(FRotator,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Rotator(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertNotEqual_Transform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Actual); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NotExpected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Transform(Z_Param_Out_Actual,Z_Param_Out_NotExpected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Name) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Name(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Int(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Bool) \
	{ \
		P_GET_UBOOL(Z_Param_Actual); \
		P_GET_UBOOL(Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Bool(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Actual); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Float(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertEqual_Transform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Actual); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Transform(Z_Param_Out_Actual,Z_Param_Out_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertValue_DateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_Actual); \
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe); \
		P_GET_STRUCT(FDateTime,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertValue_DateTime(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertValue_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Actual); \
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertValue_Float(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertValue_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Actual); \
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Expected); \
		P_GET_PROPERTY(UStrProperty,Z_Param_What); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertValue_Int(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertIsValid) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertIsValid(Z_Param_Object,Z_Param_Message,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertFalse) \
	{ \
		P_GET_UBOOL(Z_Param_Condition); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertFalse(Z_Param_Condition,Z_Param_Message,Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssertTrue) \
	{ \
		P_GET_UBOOL(Z_Param_Condition); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AssertTrue(Z_Param_Condition,Z_Param_Message,Z_Param_ContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_EVENT_PARMS \
	struct FunctionalTest_eventDebugGatherRelevantActors_Parms \
	{ \
		TArray<AActor*> ReturnValue; \
	}; \
	struct FunctionalTest_eventIsReady_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FunctionalTest_eventIsReady_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms \
	{ \
		EFunctionalTestResult TestResult; \
		FString ReturnValue; \
	}; \
	struct FunctionalTest_eventOnWantsReRunCheck_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FunctionalTest_eventOnWantsReRunCheck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_CALLBACK_WRAPPERS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalTest(); \
	friend struct Z_Construct_UClass_AFunctionalTest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalTest, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalTest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalTest(); \
	friend struct Z_Construct_UClass_AFunctionalTest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalTest, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalTest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalTest(AFunctionalTest&&); \
	NO_API AFunctionalTest(const AFunctionalTest&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalTest(AFunctionalTest&&); \
	NO_API AFunctionalTest(const AFunctionalTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpriteComponent() { return STRUCT_OFFSET(AFunctionalTest, SpriteComponent); } \
	FORCEINLINE static uint32 __PPO__Author() { return STRUCT_OFFSET(AFunctionalTest, Author); } \
	FORCEINLINE static uint32 __PPO__Description() { return STRUCT_OFFSET(AFunctionalTest, Description); } \
	FORCEINLINE static uint32 __PPO__ObservationPoint() { return STRUCT_OFFSET(AFunctionalTest, ObservationPoint); } \
	FORCEINLINE static uint32 __PPO__RandomNumbersStream() { return STRUCT_OFFSET(AFunctionalTest, RandomNumbersStream); }


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_208_PROLOG \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_EVENT_PARMS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_CALLBACK_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_CALLBACK_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_211_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h


#define FOREACH_ENUM_EFUNCTIONALTESTRESULT(op) \
	op(EFunctionalTestResult::Default) \
	op(EFunctionalTestResult::Invalid) \
	op(EFunctionalTestResult::Error) \
	op(EFunctionalTestResult::Running) \
	op(EFunctionalTestResult::Failed) \
	op(EFunctionalTestResult::Succeeded) 

enum class EFunctionalTestResult : uint8;
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EFunctionalTestResult>();

#define FOREACH_ENUM_ECOMPARISONMETHOD(op) \
	op(EComparisonMethod::Equal_To) \
	op(EComparisonMethod::Not_Equal_To) \
	op(EComparisonMethod::Greater_Than_Or_Equal_To) \
	op(EComparisonMethod::Less_Than_Or_Equal_To) \
	op(EComparisonMethod::Greater_Than) \
	op(EComparisonMethod::Less_Than) 

enum class EComparisonMethod : uint8;
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EComparisonMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

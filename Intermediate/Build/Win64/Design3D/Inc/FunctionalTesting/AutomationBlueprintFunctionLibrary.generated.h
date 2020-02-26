// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EComparisonTolerance : uint8;
struct FAutomationScreenshotOptions;
class ACameraActor;
struct FLatentActionInfo;
#ifdef FUNCTIONALTESTING_AutomationBlueprintFunctionLibrary_generated_h
#error "AutomationBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AutomationBlueprintFunctionLibrary.h"
#endif
#define FUNCTIONALTESTING_AutomationBlueprintFunctionLibrary_generated_h

#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScalabilityQualityToLow) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToLow(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalabilityQualityToEpic) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToEpic(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalabilityQualityLevelRelativeToMax) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityLevelRelativeToMax(Z_Param_WorldContextObject,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForRendering) \
	{ \
		P_GET_ENUM(EComparisonTolerance,Z_Param_Tolerance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAutomationScreenshotOptions*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForRendering(EComparisonTolerance(Z_Param_Tolerance),Z_Param_Delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForGameplay) \
	{ \
		P_GET_ENUM(EComparisonTolerance,Z_Param_Tolerance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAutomationScreenshotOptions*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForGameplay(EComparisonTolerance(Z_Param_Tolerance),Z_Param_Delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeHighResScreenshot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ResX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ResY); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_OBJECT(ACameraActor,Z_Param_Camera); \
		P_GET_UBOOL(Z_Param_bMaskEnabled); \
		P_GET_UBOOL(Z_Param_bCaptureHDR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::TakeHighResScreenshot(Z_Param_ResX,Z_Param_ResY,Z_Param_Filename,Z_Param_Camera,Z_Param_bMaskEnabled,Z_Param_bCaptureHDR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreAutomatedTestsRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::AreAutomatedTestsRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatCallCount) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatCallCount(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatExcMax) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatExcMax(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatExcAverage) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatExcAverage(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatIncMax) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatIncMax(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatIncAverage) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatIncAverage(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableStatGroup) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_GroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::DisableStatGroup(Z_Param_WorldContextObject,Z_Param_GroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableStatGroup) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_GroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::EnableStatGroup(Z_Param_WorldContextObject,Z_Param_GroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeAutomationScreenshotOfUI) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotOfUI(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Name,Z_Param_Out_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeAutomationScreenshotAtCamera) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_OBJECT(ACameraActor,Z_Param_Camera); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameOverride); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Notes); \
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Camera,Z_Param_NameOverride,Z_Param_Notes,Z_Param_Out_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeAutomationScreenshot) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Notes); \
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Name,Z_Param_Notes,Z_Param_Out_Options); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScalabilityQualityToLow) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToLow(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalabilityQualityToEpic) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToEpic(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalabilityQualityLevelRelativeToMax) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityLevelRelativeToMax(Z_Param_WorldContextObject,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForRendering) \
	{ \
		P_GET_ENUM(EComparisonTolerance,Z_Param_Tolerance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAutomationScreenshotOptions*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForRendering(EComparisonTolerance(Z_Param_Tolerance),Z_Param_Delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForGameplay) \
	{ \
		P_GET_ENUM(EComparisonTolerance,Z_Param_Tolerance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAutomationScreenshotOptions*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForGameplay(EComparisonTolerance(Z_Param_Tolerance),Z_Param_Delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeHighResScreenshot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ResX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ResY); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_OBJECT(ACameraActor,Z_Param_Camera); \
		P_GET_UBOOL(Z_Param_bMaskEnabled); \
		P_GET_UBOOL(Z_Param_bCaptureHDR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::TakeHighResScreenshot(Z_Param_ResX,Z_Param_ResY,Z_Param_Filename,Z_Param_Camera,Z_Param_bMaskEnabled,Z_Param_bCaptureHDR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreAutomatedTestsRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::AreAutomatedTestsRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatCallCount) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatCallCount(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatExcMax) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatExcMax(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatExcAverage) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatExcAverage(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatIncMax) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatIncMax(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatIncAverage) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatIncAverage(Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableStatGroup) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_GroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::DisableStatGroup(Z_Param_WorldContextObject,Z_Param_GroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableStatGroup) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_GroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::EnableStatGroup(Z_Param_WorldContextObject,Z_Param_GroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeAutomationScreenshotOfUI) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotOfUI(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Name,Z_Param_Out_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeAutomationScreenshotAtCamera) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_OBJECT(ACameraActor,Z_Param_Camera); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameOverride); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Notes); \
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Camera,Z_Param_NameOverride,Z_Param_Notes,Z_Param_Out_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeAutomationScreenshot) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Notes); \
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Name,Z_Param_Notes,Z_Param_Out_Options); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAutomationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationBlueprintFunctionLibrary)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAutomationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationBlueprintFunctionLibrary)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationBlueprintFunctionLibrary(UAutomationBlueprintFunctionLibrary&&); \
	NO_API UAutomationBlueprintFunctionLibrary(const UAutomationBlueprintFunctionLibrary&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationBlueprintFunctionLibrary(UAutomationBlueprintFunctionLibrary&&); \
	NO_API UAutomationBlueprintFunctionLibrary(const UAutomationBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationBlueprintFunctionLibrary)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_18_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AutomationBlueprintFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UAutomationBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

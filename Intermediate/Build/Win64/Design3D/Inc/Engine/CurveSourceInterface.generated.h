// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNamedCurveValue;
#ifdef ENGINE_CurveSourceInterface_generated_h
#error "CurveSourceInterface.generated.h already included, missing '#pragma once' in CurveSourceInterface.h"
#endif
#define ENGINE_CurveSourceInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedCurveValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNamedCurveValue>();

#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS \
	virtual void GetCurves_Implementation(TArray<FNamedCurveValue>& OutValues) const {}; \
	virtual float GetCurveValue_Implementation(FName CurveName) const { return 0; }; \
	virtual FName GetBindingName_Implementation() const { return NAME_None; }; \
 \
	DECLARE_FUNCTION(execGetCurves) \
	{ \
		P_GET_TARRAY_REF(FNamedCurveValue,Z_Param_Out_OutValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurves_Implementation(Z_Param_Out_OutValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurveValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurveValue_Implementation(Z_Param_CurveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBindingName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetBindingName_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetCurves_Implementation(TArray<FNamedCurveValue>& OutValues) const {}; \
	virtual float GetCurveValue_Implementation(FName CurveName) const { return 0; }; \
	virtual FName GetBindingName_Implementation() const { return NAME_None; }; \
 \
	DECLARE_FUNCTION(execGetCurves) \
	{ \
		P_GET_TARRAY_REF(FNamedCurveValue,Z_Param_Out_OutValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurves_Implementation(Z_Param_Out_OutValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurveValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurveValue_Implementation(Z_Param_CurveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBindingName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetBindingName_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_EVENT_PARMS \
	struct CurveSourceInterface_eventGetBindingName_Parms \
	{ \
		FName ReturnValue; \
	}; \
	struct CurveSourceInterface_eventGetCurves_Parms \
	{ \
		TArray<FNamedCurveValue> OutValues; \
	}; \
	struct CurveSourceInterface_eventGetCurveValue_Parms \
	{ \
		FName CurveName; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CurveSourceInterface_eventGetCurveValue_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveSourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveSourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveSourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveSourceInterface(UCurveSourceInterface&&); \
	NO_API UCurveSourceInterface(const UCurveSourceInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveSourceInterface(UCurveSourceInterface&&); \
	NO_API UCurveSourceInterface(const UCurveSourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveSourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveSourceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveSourceInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCurveSourceInterface(); \
	friend struct Z_Construct_UClass_UCurveSourceInterface_Statics; \
public: \
	DECLARE_CLASS(UCurveSourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveSourceInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICurveSourceInterface() {} \
public: \
	typedef UCurveSourceInterface UClassType; \
	typedef ICurveSourceInterface ThisClass; \
	static FName Execute_GetBindingName(const UObject* O); \
	static void Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues); \
	static float Execute_GetCurveValue(const UObject* O, FName CurveName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ICurveSourceInterface() {} \
public: \
	typedef UCurveSourceInterface UClassType; \
	typedef ICurveSourceInterface ThisClass; \
	static FName Execute_GetBindingName(const UObject* O); \
	static void Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues); \
	static float Execute_GetCurveValue(const UObject* O, FName CurveName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_11_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveSourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

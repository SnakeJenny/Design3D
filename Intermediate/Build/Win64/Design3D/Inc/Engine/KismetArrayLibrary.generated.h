// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef ENGINE_KismetArrayLibrary_generated_h
#error "KismetArrayLibrary.generated.h already included, missing '#pragma once' in KismetArrayLibrary.h"
#endif
#define ENGINE_KismetArrayLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilterArray) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_FilteredArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetArrayLibrary::FilterArray(Z_Param_Out_TargetArray,Z_Param_FilterClass,Z_Param_Out_FilteredArray); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterArray) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_FilteredArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetArrayLibrary::FilterArray(Z_Param_Out_TargetArray,Z_Param_FilterClass,Z_Param_Out_FilteredArray); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetArrayLibrary(); \
	friend struct Z_Construct_UClass_UKismetArrayLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetArrayLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetArrayLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUKismetArrayLibrary(); \
	friend struct Z_Construct_UClass_UKismetArrayLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetArrayLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetArrayLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetArrayLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetArrayLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetArrayLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetArrayLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetArrayLibrary(UKismetArrayLibrary&&); \
	NO_API UKismetArrayLibrary(const UKismetArrayLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetArrayLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetArrayLibrary(UKismetArrayLibrary&&); \
	NO_API UKismetArrayLibrary(const UKismetArrayLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetArrayLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetArrayLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetArrayLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetArrayLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetArrayLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

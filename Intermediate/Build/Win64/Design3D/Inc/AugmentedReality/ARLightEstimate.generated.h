// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef AUGMENTEDREALITY_ARLightEstimate_generated_h
#error "ARLightEstimate.generated.h already included, missing '#pragma once' in ARLightEstimate.h"
#endif
#define AUGMENTEDREALITY_ARLightEstimate_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARLightEstimate(); \
	friend struct Z_Construct_UClass_UARLightEstimate_Statics; \
public: \
	DECLARE_CLASS(UARLightEstimate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARLightEstimate)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUARLightEstimate(); \
	friend struct Z_Construct_UClass_UARLightEstimate_Statics; \
public: \
	DECLARE_CLASS(UARLightEstimate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARLightEstimate)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLightEstimate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLightEstimate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLightEstimate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLightEstimate(UARLightEstimate&&); \
	NO_API UARLightEstimate(const UARLightEstimate&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLightEstimate(UARLightEstimate&&); \
	NO_API UARLightEstimate(const UARLightEstimate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLightEstimate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLightEstimate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLightEstimate)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_8_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARLightEstimate>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmbientColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetAmbientColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmbientColorTemperatureKelvin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAmbientColorTemperatureKelvin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmbientIntensityLumens) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAmbientIntensityLumens(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmbientColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetAmbientColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmbientColorTemperatureKelvin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAmbientColorTemperatureKelvin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmbientIntensityLumens) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAmbientIntensityLumens(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARBasicLightEstimate(); \
	friend struct Z_Construct_UClass_UARBasicLightEstimate_Statics; \
public: \
	DECLARE_CLASS(UARBasicLightEstimate, UARLightEstimate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBasicLightEstimate)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUARBasicLightEstimate(); \
	friend struct Z_Construct_UClass_UARBasicLightEstimate_Statics; \
public: \
	DECLARE_CLASS(UARBasicLightEstimate, UARLightEstimate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBasicLightEstimate)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBasicLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBasicLightEstimate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBasicLightEstimate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBasicLightEstimate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBasicLightEstimate(UARBasicLightEstimate&&); \
	NO_API UARBasicLightEstimate(const UARBasicLightEstimate&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBasicLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBasicLightEstimate(UARBasicLightEstimate&&); \
	NO_API UARBasicLightEstimate(const UARBasicLightEstimate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBasicLightEstimate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBasicLightEstimate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBasicLightEstimate)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AmbientIntensityLumens() { return STRUCT_OFFSET(UARBasicLightEstimate, AmbientIntensityLumens); } \
	FORCEINLINE static uint32 __PPO__AmbientColorTemperatureKelvin() { return STRUCT_OFFSET(UARBasicLightEstimate, AmbientColorTemperatureKelvin); } \
	FORCEINLINE static uint32 __PPO__AmbientColor() { return STRUCT_OFFSET(UARBasicLightEstimate, AmbientColor); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_14_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARBasicLightEstimate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef CLOTHINGSYSTEMRUNTIME_ClothingSimulationInteractorNv_generated_h
#error "ClothingSimulationInteractorNv.generated.h already included, missing '#pragma once' in ClothingSimulationInteractorNv.h"
#endif
#define CLOTHINGSYSTEMRUNTIME_ClothingSimulationInteractorNv_generated_h

#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableGravityOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableGravityOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableGravityOverride) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableGravityOverride(Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimDriveDamperStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimDriveDamperStiffness(Z_Param_InStiffness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimDriveSpringStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimDriveSpringStiffness(Z_Param_InStiffness); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableGravityOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableGravityOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableGravityOverride) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableGravityOverride(Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimDriveDamperStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimDriveDamperStiffness(Z_Param_InStiffness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimDriveSpringStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimDriveSpringStiffness(Z_Param_InStiffness); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingSimulationInteractorNv(); \
	friend struct Z_Construct_UClass_UClothingSimulationInteractorNv_Statics; \
public: \
	DECLARE_CLASS(UClothingSimulationInteractorNv, UClothingSimulationInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(UClothingSimulationInteractorNv)


#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUClothingSimulationInteractorNv(); \
	friend struct Z_Construct_UClass_UClothingSimulationInteractorNv_Statics; \
public: \
	DECLARE_CLASS(UClothingSimulationInteractorNv, UClothingSimulationInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(UClothingSimulationInteractorNv)


#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingSimulationInteractorNv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingSimulationInteractorNv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingSimulationInteractorNv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingSimulationInteractorNv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingSimulationInteractorNv(UClothingSimulationInteractorNv&&); \
	NO_API UClothingSimulationInteractorNv(const UClothingSimulationInteractorNv&); \
public:


#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingSimulationInteractorNv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingSimulationInteractorNv(UClothingSimulationInteractorNv&&); \
	NO_API UClothingSimulationInteractorNv(const UClothingSimulationInteractorNv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingSimulationInteractorNv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingSimulationInteractorNv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingSimulationInteractorNv)


#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_15_PROLOG
#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_INCLASS \
	Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIME_API UClass* StaticClass<class UClothingSimulationInteractorNv>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ClothingSystemRuntime_Public_ClothingSimulationInteractorNv_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

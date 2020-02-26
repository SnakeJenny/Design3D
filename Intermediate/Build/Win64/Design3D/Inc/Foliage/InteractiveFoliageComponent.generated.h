// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_InteractiveFoliageComponent_generated_h
#error "InteractiveFoliageComponent.generated.h already included, missing '#pragma once' in InteractiveFoliageComponent.h"
#endif
#define FOLIAGE_InteractiveFoliageComponent_generated_h

#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveFoliageComponent(); \
	friend struct Z_Construct_UClass_UInteractiveFoliageComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractiveFoliageComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveFoliageComponent)


#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveFoliageComponent(); \
	friend struct Z_Construct_UClass_UInteractiveFoliageComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractiveFoliageComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveFoliageComponent)


#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveFoliageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveFoliageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveFoliageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveFoliageComponent(UInteractiveFoliageComponent&&); \
	NO_API UInteractiveFoliageComponent(const UInteractiveFoliageComponent&); \
public:


#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveFoliageComponent(UInteractiveFoliageComponent&&); \
	NO_API UInteractiveFoliageComponent(const UInteractiveFoliageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveFoliageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveFoliageComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveFoliageComponent)


#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_13_PROLOG
#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_INCLASS \
	Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InteractiveFoliageComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UInteractiveFoliageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

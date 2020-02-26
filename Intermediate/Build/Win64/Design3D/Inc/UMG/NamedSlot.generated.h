// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_NamedSlot_generated_h
#error "NamedSlot.generated.h already included, missing '#pragma once' in NamedSlot.h"
#endif
#define UMG_NamedSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNamedSlot(); \
	friend struct Z_Construct_UClass_UNamedSlot_Statics; \
public: \
	DECLARE_CLASS(UNamedSlot, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UNamedSlot)


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNamedSlot(); \
	friend struct Z_Construct_UClass_UNamedSlot_Statics; \
public: \
	DECLARE_CLASS(UNamedSlot, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UNamedSlot)


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNamedSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNamedSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNamedSlot(UNamedSlot&&); \
	NO_API UNamedSlot(const UNamedSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNamedSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNamedSlot(UNamedSlot&&); \
	NO_API UNamedSlot(const UNamedSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNamedSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedSlot)


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_17_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NamedSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UNamedSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

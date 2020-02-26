// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavArea;
#ifdef NAVIGATIONSYSTEM_NavModifierVolume_generated_h
#error "NavModifierVolume.generated.h already included, missing '#pragma once' in NavModifierVolume.h"
#endif
#define NAVIGATIONSYSTEM_NavModifierVolume_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAreaClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewAreaClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAreaClass(Z_Param_NewAreaClass); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAreaClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewAreaClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAreaClass(Z_Param_NewAreaClass); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavModifierVolume(); \
	friend struct Z_Construct_UClass_ANavModifierVolume_Statics; \
public: \
	DECLARE_CLASS(ANavModifierVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavModifierVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ANavModifierVolume*>(this); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_INCLASS \
private: \
	static void StaticRegisterNativesANavModifierVolume(); \
	friend struct Z_Construct_UClass_ANavModifierVolume_Statics; \
public: \
	DECLARE_CLASS(ANavModifierVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavModifierVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ANavModifierVolume*>(this); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavModifierVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavModifierVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavModifierVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavModifierVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavModifierVolume(ANavModifierVolume&&); \
	NO_API ANavModifierVolume(const ANavModifierVolume&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavModifierVolume(ANavModifierVolume&&); \
	NO_API ANavModifierVolume(const ANavModifierVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavModifierVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavModifierVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavModifierVolume)


#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AreaClass() { return STRUCT_OFFSET(ANavModifierVolume, AreaClass); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_18_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavModifierVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

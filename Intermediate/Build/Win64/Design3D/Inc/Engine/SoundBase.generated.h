// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundBase_generated_h
#error "SoundBase.generated.h already included, missing '#pragma once' in SoundBase.h"
#endif
#define ENGINE_SoundBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundBase, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundBase(); \
	friend struct Z_Construct_UClass_USoundBase_Statics; \
public: \
	DECLARE_CLASS(USoundBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundBase) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSoundBase(); \
	friend struct Z_Construct_UClass_USoundBase_Statics; \
public: \
	DECLARE_CLASS(USoundBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundBase) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundBase(USoundBase&&); \
	NO_API USoundBase(const USoundBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundBase(USoundBase&&); \
	NO_API USoundBase(const USoundBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundBase)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SoundClassObject() { return STRUCT_OFFSET(USoundBase, SoundClassObject); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_30_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

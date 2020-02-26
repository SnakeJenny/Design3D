// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundSourceBus_generated_h
#error "SoundSourceBus.generated.h already included, missing '#pragma once' in SoundSourceBus.h"
#endif
#define ENGINE_SoundSourceBus_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSourceBus(); \
	friend struct Z_Construct_UClass_USoundSourceBus_Statics; \
public: \
	DECLARE_CLASS(USoundSourceBus, USoundWave, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSourceBus)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSourceBus(); \
	friend struct Z_Construct_UClass_USoundSourceBus_Statics; \
public: \
	DECLARE_CLASS(USoundSourceBus, USoundWave, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSourceBus)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSourceBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSourceBus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSourceBus(USoundSourceBus&&); \
	NO_API USoundSourceBus(const USoundSourceBus&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSourceBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSourceBus(USoundSourceBus&&); \
	NO_API USoundSourceBus(const USoundSourceBus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSourceBus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBus)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSourceBus."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSourceBus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h


#define FOREACH_ENUM_ESOURCEBUSCHANNELS(op) \
	op(ESourceBusChannels::Mono) \
	op(ESourceBusChannels::Stereo) 

enum class ESourceBusChannels : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESourceBusChannels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

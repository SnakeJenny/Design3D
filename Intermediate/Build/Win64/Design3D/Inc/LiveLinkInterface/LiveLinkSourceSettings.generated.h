// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkSourceSettings_generated_h
#error "LiveLinkSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkSourceSettings.h"
#endif
#define LIVELINKINTERFACE_LiveLinkSourceSettings_generated_h

#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkInterpolationSettings>();

#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkTimeSynchronizationSettings>();

#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_RPC_WRAPPERS
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkSourceSettings, NO_API)


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSourceSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkSourceSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkSourceSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkSourceSettings) \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_ARCHIVESERIALIZER


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkSourceSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkSourceSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkSourceSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkSourceSettings) \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_ARCHIVESERIALIZER


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkSourceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSourceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkSourceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSourceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkSourceSettings(ULiveLinkSourceSettings&&); \
	NO_API ULiveLinkSourceSettings(const ULiveLinkSourceSettings&); \
public:


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkSourceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkSourceSettings(ULiveLinkSourceSettings&&); \
	NO_API ULiveLinkSourceSettings(const ULiveLinkSourceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkSourceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSourceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSourceSettings)


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_74_PROLOG
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_RPC_WRAPPERS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_INCLASS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_78_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkSourceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h


#define FOREACH_ENUM_ELIVELINKSOURCEMODE(op) \
	op(ELiveLinkSourceMode::Default) \
	op(ELiveLinkSourceMode::Interpolated) \
	op(ELiveLinkSourceMode::TimeSynchronized) 

enum class ELiveLinkSourceMode : uint8;
template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkSourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

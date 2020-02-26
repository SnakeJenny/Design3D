// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ControlChannel_generated_h
#error "ControlChannel.generated.h already included, missing '#pragma once' in ControlChannel.h"
#endif
#define ENGINE_ControlChannel_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlChannel(); \
	friend struct Z_Construct_UClass_UControlChannel_Statics; \
public: \
	DECLARE_CLASS(UControlChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UControlChannel)


#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUControlChannel(); \
	friend struct Z_Construct_UClass_UControlChannel_Statics; \
public: \
	DECLARE_CLASS(UControlChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UControlChannel)


#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlChannel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlChannel(UControlChannel&&); \
	NO_API UControlChannel(const UControlChannel&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlChannel(UControlChannel&&); \
	NO_API UControlChannel(const UControlChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlChannel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlChannel)


#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_41_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ControlChannel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UControlChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

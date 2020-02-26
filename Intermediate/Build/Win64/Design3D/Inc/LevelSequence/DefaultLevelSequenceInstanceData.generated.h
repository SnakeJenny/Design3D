// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSEQUENCE_DefaultLevelSequenceInstanceData_generated_h
#error "DefaultLevelSequenceInstanceData.generated.h already included, missing '#pragma once' in DefaultLevelSequenceInstanceData.h"
#endif
#define LEVELSEQUENCE_DefaultLevelSequenceInstanceData_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultLevelSequenceInstanceData(); \
	friend struct Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics; \
public: \
	DECLARE_CLASS(UDefaultLevelSequenceInstanceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(UDefaultLevelSequenceInstanceData) \
	virtual UObject* _getUObject() const override { return const_cast<UDefaultLevelSequenceInstanceData*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDefaultLevelSequenceInstanceData(); \
	friend struct Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics; \
public: \
	DECLARE_CLASS(UDefaultLevelSequenceInstanceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(UDefaultLevelSequenceInstanceData) \
	virtual UObject* _getUObject() const override { return const_cast<UDefaultLevelSequenceInstanceData*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultLevelSequenceInstanceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultLevelSequenceInstanceData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultLevelSequenceInstanceData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultLevelSequenceInstanceData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultLevelSequenceInstanceData(UDefaultLevelSequenceInstanceData&&); \
	NO_API UDefaultLevelSequenceInstanceData(const UDefaultLevelSequenceInstanceData&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultLevelSequenceInstanceData(UDefaultLevelSequenceInstanceData&&); \
	NO_API UDefaultLevelSequenceInstanceData(const UDefaultLevelSequenceInstanceData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultLevelSequenceInstanceData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultLevelSequenceInstanceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultLevelSequenceInstanceData)


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_13_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class UDefaultLevelSequenceInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

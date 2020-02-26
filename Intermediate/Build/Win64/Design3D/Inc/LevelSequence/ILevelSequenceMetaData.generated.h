// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSEQUENCE_ILevelSequenceMetaData_generated_h
#error "ILevelSequenceMetaData.generated.h already included, missing '#pragma once' in ILevelSequenceMetaData.h"
#endif
#define LEVELSEQUENCE_ILevelSequenceMetaData_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_RPC_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceMetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceMetaData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceMetaData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceMetaData(ULevelSequenceMetaData&&); \
	NO_API ULevelSequenceMetaData(const ULevelSequenceMetaData&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceMetaData(ULevelSequenceMetaData&&); \
	NO_API ULevelSequenceMetaData(const ULevelSequenceMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceMetaData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceMetaData)


#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULevelSequenceMetaData(); \
	friend struct Z_Construct_UClass_ULevelSequenceMetaData_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceMetaData, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceMetaData)


#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILevelSequenceMetaData() {} \
public: \
	typedef ULevelSequenceMetaData UClassType; \
	typedef ILevelSequenceMetaData ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ILevelSequenceMetaData() {} \
public: \
	typedef ULevelSequenceMetaData UClassType; \
	typedef ILevelSequenceMetaData ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_8_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequenceMetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

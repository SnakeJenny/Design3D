// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_AssetUserData_generated_h
#error "Interface_AssetUserData.generated.h already included, missing '#pragma once' in Interface_AssetUserData.h"
#endif
#define ENGINE_Interface_AssetUserData_generated_h

#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_AssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_AssetUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_AssetUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_AssetUserData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_AssetUserData(UInterface_AssetUserData&&); \
	ENGINE_API UInterface_AssetUserData(const UInterface_AssetUserData&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_AssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_AssetUserData(UInterface_AssetUserData&&); \
	ENGINE_API UInterface_AssetUserData(const UInterface_AssetUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_AssetUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_AssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_AssetUserData)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_AssetUserData(); \
	friend struct Z_Construct_UClass_UInterface_AssetUserData_Statics; \
public: \
	DECLARE_CLASS(UInterface_AssetUserData, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterface_AssetUserData)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_AssetUserData() {} \
public: \
	typedef UInterface_AssetUserData UClassType; \
	typedef IInterface_AssetUserData ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_AssetUserData() {} \
public: \
	typedef UInterface_AssetUserData UClassType; \
	typedef IInterface_AssetUserData ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterface_AssetUserData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DestructibleInterface_generated_h
#error "DestructibleInterface.generated.h already included, missing '#pragma once' in DestructibleInterface.h"
#endif
#define ENGINE_DestructibleInterface_generated_h

#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDestructibleInterface(UDestructibleInterface&&); \
	NO_API UDestructibleInterface(const UDestructibleInterface&); \
public:


#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDestructibleInterface(UDestructibleInterface&&); \
	NO_API UDestructibleInterface(const UDestructibleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleInterface)


#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDestructibleInterface(); \
	friend struct Z_Construct_UClass_UDestructibleInterface_Statics; \
public: \
	DECLARE_CLASS(UDestructibleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDestructibleInterface)


#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDestructibleInterface() {} \
public: \
	typedef UDestructibleInterface UClassType; \
	typedef IDestructibleInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IDestructibleInterface() {} \
public: \
	typedef UDestructibleInterface UClassType; \
	typedef IDestructibleInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_7_PROLOG
#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDestructibleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_DestructibleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

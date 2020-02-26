// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_CollisionDataProvider_generated_h
#error "Interface_CollisionDataProvider.generated.h already included, missing '#pragma once' in Interface_CollisionDataProvider.h"
#endif
#define ENGINE_Interface_CollisionDataProvider_generated_h

#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_CollisionDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_CollisionDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_CollisionDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_CollisionDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_CollisionDataProvider(UInterface_CollisionDataProvider&&); \
	ENGINE_API UInterface_CollisionDataProvider(const UInterface_CollisionDataProvider&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_CollisionDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_CollisionDataProvider(UInterface_CollisionDataProvider&&); \
	ENGINE_API UInterface_CollisionDataProvider(const UInterface_CollisionDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_CollisionDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_CollisionDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_CollisionDataProvider)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_CollisionDataProvider(); \
	friend struct Z_Construct_UClass_UInterface_CollisionDataProvider_Statics; \
public: \
	DECLARE_CLASS(UInterface_CollisionDataProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterface_CollisionDataProvider)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_CollisionDataProvider() {} \
public: \
	typedef UInterface_CollisionDataProvider UClassType; \
	typedef IInterface_CollisionDataProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_CollisionDataProvider() {} \
public: \
	typedef UInterface_CollisionDataProvider UClassType; \
	typedef IInterface_CollisionDataProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_70_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterface_CollisionDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

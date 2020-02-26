// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_PreviewMeshProvider_generated_h
#error "Interface_PreviewMeshProvider.generated.h already included, missing '#pragma once' in Interface_PreviewMeshProvider.h"
#endif
#define ENGINE_Interface_PreviewMeshProvider_generated_h

#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterface_PreviewMeshProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PreviewMeshProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterface_PreviewMeshProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PreviewMeshProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterface_PreviewMeshProvider(UInterface_PreviewMeshProvider&&); \
	NO_API UInterface_PreviewMeshProvider(const UInterface_PreviewMeshProvider&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterface_PreviewMeshProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterface_PreviewMeshProvider(UInterface_PreviewMeshProvider&&); \
	NO_API UInterface_PreviewMeshProvider(const UInterface_PreviewMeshProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterface_PreviewMeshProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PreviewMeshProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PreviewMeshProvider)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_PreviewMeshProvider(); \
	friend struct Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics; \
public: \
	DECLARE_CLASS(UInterface_PreviewMeshProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInterface_PreviewMeshProvider)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_PreviewMeshProvider() {} \
public: \
	typedef UInterface_PreviewMeshProvider UClassType; \
	typedef IInterface_PreviewMeshProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_PreviewMeshProvider() {} \
public: \
	typedef UInterface_PreviewMeshProvider UClassType; \
	typedef IInterface_PreviewMeshProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterface_PreviewMeshProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

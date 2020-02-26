// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_PostProcessVolume_generated_h
#error "Interface_PostProcessVolume.generated.h already included, missing '#pragma once' in Interface_PostProcessVolume.h"
#endif
#define ENGINE_Interface_PostProcessVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_PostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PostProcessVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_PostProcessVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PostProcessVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_PostProcessVolume(UInterface_PostProcessVolume&&); \
	ENGINE_API UInterface_PostProcessVolume(const UInterface_PostProcessVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_PostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_PostProcessVolume(UInterface_PostProcessVolume&&); \
	ENGINE_API UInterface_PostProcessVolume(const UInterface_PostProcessVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_PostProcessVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PostProcessVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PostProcessVolume)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_PostProcessVolume(); \
	friend struct Z_Construct_UClass_UInterface_PostProcessVolume_Statics; \
public: \
	DECLARE_CLASS(UInterface_PostProcessVolume, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterface_PostProcessVolume)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_PostProcessVolume() {} \
public: \
	typedef UInterface_PostProcessVolume UClassType; \
	typedef IInterface_PostProcessVolume ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_PostProcessVolume() {} \
public: \
	typedef UInterface_PostProcessVolume UClassType; \
	typedef IInterface_PostProcessVolume ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_23_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterface_PostProcessVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

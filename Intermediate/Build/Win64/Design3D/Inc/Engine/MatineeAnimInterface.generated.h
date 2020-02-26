// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MatineeAnimInterface_generated_h
#error "MatineeAnimInterface.generated.h already included, missing '#pragma once' in MatineeAnimInterface.h"
#endif
#define ENGINE_MatineeAnimInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMatineeAnimInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeAnimInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMatineeAnimInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeAnimInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMatineeAnimInterface(UMatineeAnimInterface&&); \
	ENGINE_API UMatineeAnimInterface(const UMatineeAnimInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMatineeAnimInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMatineeAnimInterface(UMatineeAnimInterface&&); \
	ENGINE_API UMatineeAnimInterface(const UMatineeAnimInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMatineeAnimInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeAnimInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeAnimInterface)


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMatineeAnimInterface(); \
	friend struct Z_Construct_UClass_UMatineeAnimInterface_Statics; \
public: \
	DECLARE_CLASS(UMatineeAnimInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMatineeAnimInterface)


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMatineeAnimInterface() {} \
public: \
	typedef UMatineeAnimInterface UClassType; \
	typedef IMatineeAnimInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~IMatineeAnimInterface() {} \
public: \
	typedef UMatineeAnimInterface UClassType; \
	typedef IMatineeAnimInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMatineeAnimInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

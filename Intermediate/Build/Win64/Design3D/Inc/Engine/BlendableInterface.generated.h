// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendableInterface_generated_h
#error "BlendableInterface.generated.h already included, missing '#pragma once' in BlendableInterface.h"
#endif
#define ENGINE_BlendableInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendableInterface(UBlendableInterface&&); \
	NO_API UBlendableInterface(const UBlendableInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendableInterface(UBlendableInterface&&); \
	NO_API UBlendableInterface(const UBlendableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendableInterface)


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBlendableInterface(); \
	friend struct Z_Construct_UClass_UBlendableInterface_Statics; \
public: \
	DECLARE_CLASS(UBlendableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlendableInterface)


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBlendableInterface() {} \
public: \
	typedef UBlendableInterface UClassType; \
	typedef IBlendableInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_INCLASS_IINTERFACE \
protected: \
	virtual ~IBlendableInterface() {} \
public: \
	typedef UBlendableInterface UClassType; \
	typedef IBlendableInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_44_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlendableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h


#define FOREACH_ENUM_EBLENDABLELOCATION(op) \
	op(BL_AfterTonemapping) \
	op(BL_BeforeTonemapping) \
	op(BL_BeforeTranslucency) \
	op(BL_ReplacingTonemapper) \
	op(BL_SSRInput) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

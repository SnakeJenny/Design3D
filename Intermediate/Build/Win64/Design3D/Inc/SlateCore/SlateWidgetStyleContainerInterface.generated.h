// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateWidgetStyleContainerInterface_generated_h
#error "SlateWidgetStyleContainerInterface.generated.h already included, missing '#pragma once' in SlateWidgetStyleContainerInterface.h"
#endif
#define SLATECORE_SlateWidgetStyleContainerInterface_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateWidgetStyleContainerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateWidgetStyleContainerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateWidgetStyleContainerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateWidgetStyleContainerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateWidgetStyleContainerInterface(USlateWidgetStyleContainerInterface&&); \
	NO_API USlateWidgetStyleContainerInterface(const USlateWidgetStyleContainerInterface&); \
public:


#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateWidgetStyleContainerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateWidgetStyleContainerInterface(USlateWidgetStyleContainerInterface&&); \
	NO_API USlateWidgetStyleContainerInterface(const USlateWidgetStyleContainerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateWidgetStyleContainerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateWidgetStyleContainerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateWidgetStyleContainerInterface)


#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSlateWidgetStyleContainerInterface(); \
	friend struct Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics; \
public: \
	DECLARE_CLASS(USlateWidgetStyleContainerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlateCore"), NO_API) \
	DECLARE_SERIALIZER(USlateWidgetStyleContainerInterface)


#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISlateWidgetStyleContainerInterface() {} \
public: \
	typedef USlateWidgetStyleContainerInterface UClassType; \
	typedef ISlateWidgetStyleContainerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISlateWidgetStyleContainerInterface() {} \
public: \
	typedef USlateWidgetStyleContainerInterface UClassType; \
	typedef ISlateWidgetStyleContainerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_10_PROLOG
#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLATECORE_API UClass* StaticClass<class USlateWidgetStyleContainerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

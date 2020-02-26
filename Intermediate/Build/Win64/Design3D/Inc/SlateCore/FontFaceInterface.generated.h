// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_FontFaceInterface_generated_h
#error "FontFaceInterface.generated.h already included, missing '#pragma once' in FontFaceInterface.h"
#endif
#define SLATECORE_FontFaceInterface_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API UFontFaceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFaceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontFaceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFaceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SLATECORE_API UFontFaceInterface(UFontFaceInterface&&); \
	SLATECORE_API UFontFaceInterface(const UFontFaceInterface&); \
public:


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API UFontFaceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SLATECORE_API UFontFaceInterface(UFontFaceInterface&&); \
	SLATECORE_API UFontFaceInterface(const UFontFaceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontFaceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFaceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFaceInterface)


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFontFaceInterface(); \
	friend struct Z_Construct_UClass_UFontFaceInterface_Statics; \
public: \
	DECLARE_CLASS(UFontFaceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlateCore"), SLATECORE_API) \
	DECLARE_SERIALIZER(UFontFaceInterface)


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFontFaceInterface() {} \
public: \
	typedef UFontFaceInterface UClassType; \
	typedef IFontFaceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IFontFaceInterface() {} \
public: \
	typedef UFontFaceInterface UClassType; \
	typedef IFontFaceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_11_PROLOG
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLATECORE_API UClass* StaticClass<class UFontFaceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

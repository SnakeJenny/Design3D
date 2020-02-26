// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEEDITOR_CurveEditorKeyProxy_generated_h
#error "CurveEditorKeyProxy.generated.h already included, missing '#pragma once' in CurveEditorKeyProxy.h"
#endif
#define CURVEEDITOR_CurveEditorKeyProxy_generated_h

#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_RPC_WRAPPERS
#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveEditorKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEditorKeyProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorKeyProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorKeyProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveEditorKeyProxy(UCurveEditorKeyProxy&&); \
	NO_API UCurveEditorKeyProxy(const UCurveEditorKeyProxy&); \
public:


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveEditorKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveEditorKeyProxy(UCurveEditorKeyProxy&&); \
	NO_API UCurveEditorKeyProxy(const UCurveEditorKeyProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorKeyProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorKeyProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEditorKeyProxy)


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCurveEditorKeyProxy(); \
	friend struct Z_Construct_UClass_UCurveEditorKeyProxy_Statics; \
public: \
	DECLARE_CLASS(UCurveEditorKeyProxy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CurveEditor"), NO_API) \
	DECLARE_SERIALIZER(UCurveEditorKeyProxy)


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICurveEditorKeyProxy() {} \
public: \
	typedef UCurveEditorKeyProxy UClassType; \
	typedef ICurveEditorKeyProxy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~ICurveEditorKeyProxy() {} \
public: \
	typedef UCurveEditorKeyProxy UClassType; \
	typedef ICurveEditorKeyProxy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_9_PROLOG
#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_RPC_WRAPPERS \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURVEEDITOR_API UClass* StaticClass<class UCurveEditorKeyProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

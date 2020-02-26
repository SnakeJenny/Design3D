// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SlateTextureAtlasInterface_generated_h
#error "SlateTextureAtlasInterface.generated.h already included, missing '#pragma once' in SlateTextureAtlasInterface.h"
#endif
#define ENGINE_SlateTextureAtlasInterface_generated_h

#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateTextureAtlasInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateTextureAtlasInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateTextureAtlasInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateTextureAtlasInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateTextureAtlasInterface(USlateTextureAtlasInterface&&); \
	NO_API USlateTextureAtlasInterface(const USlateTextureAtlasInterface&); \
public:


#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateTextureAtlasInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateTextureAtlasInterface(USlateTextureAtlasInterface&&); \
	NO_API USlateTextureAtlasInterface(const USlateTextureAtlasInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateTextureAtlasInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateTextureAtlasInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateTextureAtlasInterface)


#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSlateTextureAtlasInterface(); \
	friend struct Z_Construct_UClass_USlateTextureAtlasInterface_Statics; \
public: \
	DECLARE_CLASS(USlateTextureAtlasInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USlateTextureAtlasInterface)


#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISlateTextureAtlasInterface() {} \
public: \
	typedef USlateTextureAtlasInterface UClassType; \
	typedef ISlateTextureAtlasInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_INCLASS_IINTERFACE \
protected: \
	virtual ~ISlateTextureAtlasInterface() {} \
public: \
	typedef USlateTextureAtlasInterface UClassType; \
	typedef ISlateTextureAtlasInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_54_PROLOG
#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USlateTextureAtlasInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

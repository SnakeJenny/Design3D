// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_NodeDependingOnEnumInterface_generated_h
#error "NodeDependingOnEnumInterface.generated.h already included, missing '#pragma once' in NodeDependingOnEnumInterface.h"
#endif
#define BLUEPRINTGRAPH_NodeDependingOnEnumInterface_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeDependingOnEnumInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeDependingOnEnumInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeDependingOnEnumInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeDependingOnEnumInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeDependingOnEnumInterface(UNodeDependingOnEnumInterface&&); \
	NO_API UNodeDependingOnEnumInterface(const UNodeDependingOnEnumInterface&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeDependingOnEnumInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeDependingOnEnumInterface(UNodeDependingOnEnumInterface&&); \
	NO_API UNodeDependingOnEnumInterface(const UNodeDependingOnEnumInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeDependingOnEnumInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeDependingOnEnumInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeDependingOnEnumInterface)


#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNodeDependingOnEnumInterface(); \
	friend struct Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics; \
public: \
	DECLARE_CLASS(UNodeDependingOnEnumInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UNodeDependingOnEnumInterface)


#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INodeDependingOnEnumInterface() {} \
public: \
	typedef UNodeDependingOnEnumInterface UClassType; \
	typedef INodeDependingOnEnumInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~INodeDependingOnEnumInterface() {} \
public: \
	typedef UNodeDependingOnEnumInterface UClassType; \
	typedef INodeDependingOnEnumInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_10_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UNodeDependingOnEnumInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

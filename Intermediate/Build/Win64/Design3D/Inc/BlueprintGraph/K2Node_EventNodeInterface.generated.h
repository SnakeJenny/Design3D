// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_EventNodeInterface_generated_h
#error "K2Node_EventNodeInterface.generated.h already included, missing '#pragma once' in K2Node_EventNodeInterface.h"
#endif
#define BLUEPRINTGRAPH_K2Node_EventNodeInterface_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_EventNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_EventNodeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_EventNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_EventNodeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK2Node_EventNodeInterface(UK2Node_EventNodeInterface&&); \
	NO_API UK2Node_EventNodeInterface(const UK2Node_EventNodeInterface&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_EventNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK2Node_EventNodeInterface(UK2Node_EventNodeInterface&&); \
	NO_API UK2Node_EventNodeInterface(const UK2Node_EventNodeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_EventNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_EventNodeInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_EventNodeInterface)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUK2Node_EventNodeInterface(); \
	friend struct Z_Construct_UClass_UK2Node_EventNodeInterface_Statics; \
public: \
	DECLARE_CLASS(UK2Node_EventNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_EventNodeInterface)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IK2Node_EventNodeInterface() {} \
public: \
	typedef UK2Node_EventNodeInterface UClassType; \
	typedef IK2Node_EventNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IK2Node_EventNodeInterface() {} \
public: \
	typedef UK2Node_EventNodeInterface UClassType; \
	typedef IK2Node_EventNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_12_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_EventNodeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

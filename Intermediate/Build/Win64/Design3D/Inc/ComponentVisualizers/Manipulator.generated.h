// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPONENTVISUALIZERS_Manipulator_generated_h
#error "Manipulator.generated.h already included, missing '#pragma once' in Manipulator.h"
#endif
#define COMPONENTVISUALIZERS_Manipulator_generated_h

#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManipulator(); \
	friend struct Z_Construct_UClass_AManipulator_Statics; \
public: \
	DECLARE_CLASS(AManipulator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComponentVisualizers"), NO_API) \
	DECLARE_SERIALIZER(AManipulator) \
	virtual UObject* _getUObject() const override { return const_cast<AManipulator*>(this); }


#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAManipulator(); \
	friend struct Z_Construct_UClass_AManipulator_Statics; \
public: \
	DECLARE_CLASS(AManipulator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComponentVisualizers"), NO_API) \
	DECLARE_SERIALIZER(AManipulator) \
	virtual UObject* _getUObject() const override { return const_cast<AManipulator*>(this); }


#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AManipulator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AManipulator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManipulator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManipulator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManipulator(AManipulator&&); \
	NO_API AManipulator(const AManipulator&); \
public:


#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManipulator(AManipulator&&); \
	NO_API AManipulator(const AManipulator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManipulator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManipulator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AManipulator)


#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssociatedComponent() { return STRUCT_OFFSET(AManipulator, AssociatedComponent); } \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(AManipulator, StaticMeshComponent); }


#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_11_PROLOG
#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_INCLASS \
	Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPONENTVISUALIZERS_API UClass* StaticClass<class AManipulator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

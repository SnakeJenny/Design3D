// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef BLUTILITY_ActorActionUtility_generated_h
#error "ActorActionUtility.generated.h already included, missing '#pragma once' in ActorActionUtility.h"
#endif
#define BLUTILITY_ActorActionUtility_generated_h

#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_EVENT_PARMS \
	struct ActorActionUtility_eventGetSupportedClass_Parms \
	{ \
		UClass* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ActorActionUtility_eventGetSupportedClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_CALLBACK_WRAPPERS
#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorActionUtility(); \
	friend struct Z_Construct_UClass_UActorActionUtility_Statics; \
public: \
	DECLARE_CLASS(UActorActionUtility, UGlobalEditorUtilityBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UActorActionUtility)


#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorActionUtility(); \
	friend struct Z_Construct_UClass_UActorActionUtility_Statics; \
public: \
	DECLARE_CLASS(UActorActionUtility, UGlobalEditorUtilityBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UActorActionUtility)


#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorActionUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorActionUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorActionUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorActionUtility(UActorActionUtility&&); \
	NO_API UActorActionUtility(const UActorActionUtility&); \
public:


#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorActionUtility(UActorActionUtility&&); \
	NO_API UActorActionUtility(const UActorActionUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorActionUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorActionUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorActionUtility)


#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_13_PROLOG \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_EVENT_PARMS


#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_INCLASS \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UActorActionUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAssetImportTask;
#ifdef UNREALED_Factory_generated_h
#error "Factory.generated.h already included, missing '#pragma once' in Factory.h"
#endif
#define UNREALED_Factory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_EVENT_PARMS \
	struct Factory_eventScriptFactoryCanImport_Parms \
	{ \
		FString Filename; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Factory_eventScriptFactoryCanImport_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Factory_eventScriptFactoryCreateFile_Parms \
	{ \
		UAssetImportTask* InTask; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Factory_eventScriptFactoryCreateFile_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_CALLBACK_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFactory(); \
	friend struct Z_Construct_UClass_UFactory_Statics; \
public: \
	DECLARE_CLASS(UFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFactory(); \
	friend struct Z_Construct_UClass_UFactory_Statics; \
public: \
	DECLARE_CLASS(UFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFactory(UFactory&&); \
	NO_API UFactory(const UFactory&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFactory(UFactory&&); \
	NO_API UFactory(const UFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverwriteYesOrNoToAllState() { return STRUCT_OFFSET(UFactory, OverwriteYesOrNoToAllState); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_19_PROLOG \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_EVENT_PARMS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_CALLBACK_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_CALLBACK_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Factory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

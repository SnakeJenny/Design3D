// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UFactory;
#ifdef UNREALED_ImportSubsystem_generated_h
#error "ImportSubsystem.generated.h already included, missing '#pragma once' in ImportSubsystem.h"
#endif
#define UNREALED_ImportSubsystem_generated_h

#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_80_DELEGATE \
struct ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms \
{ \
	UObject* InObject; \
	int32 InLODIndex; \
}; \
static inline void FOnAssetPostLODImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostLODImport_Dyn, UObject* InObject, int32 InLODIndex) \
{ \
	ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms Parms; \
	Parms.InObject=InObject; \
	Parms.InLODIndex=InLODIndex; \
	OnAssetPostLODImport_Dyn.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_78_DELEGATE \
struct ImportSubsystem_eventOnAssetReimport_Dyn_Parms \
{ \
	UObject* InCreatedObject; \
}; \
static inline void FOnAssetReimport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetReimport_Dyn, UObject* InCreatedObject) \
{ \
	ImportSubsystem_eventOnAssetReimport_Dyn_Parms Parms; \
	Parms.InCreatedObject=InCreatedObject; \
	OnAssetReimport_Dyn.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_76_DELEGATE \
struct ImportSubsystem_eventOnAssetPostImport_Dyn_Parms \
{ \
	UFactory* InFactory; \
	UObject* InCreatedObject; \
}; \
static inline void FOnAssetPostImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostImport_Dyn, UFactory* InFactory, UObject* InCreatedObject) \
{ \
	ImportSubsystem_eventOnAssetPostImport_Dyn_Parms Parms; \
	Parms.InFactory=InFactory; \
	Parms.InCreatedObject=InCreatedObject; \
	OnAssetPostImport_Dyn.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_74_DELEGATE \
struct ImportSubsystem_eventOnAssetPreImport_Dyn_Parms \
{ \
	UFactory* InFactory; \
	UClass* InClass; \
	UObject* InParent; \
	FName Name; \
	FString Type; \
}; \
static inline void FOnAssetPreImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPreImport_Dyn, UFactory* InFactory, UClass* InClass, UObject* InParent, FName const& Name, const FString& Type) \
{ \
	ImportSubsystem_eventOnAssetPreImport_Dyn_Parms Parms; \
	Parms.InFactory=InFactory; \
	Parms.InClass=InClass; \
	Parms.InParent=InParent; \
	Parms.Name=Name; \
	Parms.Type=Type; \
	OnAssetPreImport_Dyn.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportSubsystem(); \
	friend struct Z_Construct_UClass_UImportSubsystem_Statics; \
public: \
	DECLARE_CLASS(UImportSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UImportSubsystem)


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUImportSubsystem(); \
	friend struct Z_Construct_UClass_UImportSubsystem_Statics; \
public: \
	DECLARE_CLASS(UImportSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UImportSubsystem)


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportSubsystem(UImportSubsystem&&); \
	NO_API UImportSubsystem(const UImportSubsystem&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportSubsystem(UImportSubsystem&&); \
	NO_API UImportSubsystem(const UImportSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImportSubsystem)


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnAssetPreImport_BP() { return STRUCT_OFFSET(UImportSubsystem, OnAssetPreImport_BP); } \
	FORCEINLINE static uint32 __PPO__OnAssetPostImport_BP() { return STRUCT_OFFSET(UImportSubsystem, OnAssetPostImport_BP); } \
	FORCEINLINE static uint32 __PPO__OnAssetReimport_BP() { return STRUCT_OFFSET(UImportSubsystem, OnAssetReimport_BP); } \
	FORCEINLINE static uint32 __PPO__OnAssetPostLODImport_BP() { return STRUCT_OFFSET(UImportSubsystem, OnAssetPostLODImport_BP); }


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_30_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UImportSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

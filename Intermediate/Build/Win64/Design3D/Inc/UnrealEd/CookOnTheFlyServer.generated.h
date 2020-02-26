// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CookOnTheFlyServer_generated_h
#error "CookOnTheFlyServer.generated.h already included, missing '#pragma once' in CookOnTheFlyServer.h"
#endif
#define UNREALED_CookOnTheFlyServer_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookOnTheFlyServer(); \
	friend struct Z_Construct_UClass_UCookOnTheFlyServer_Statics; \
public: \
	DECLARE_CLASS(UCookOnTheFlyServer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCookOnTheFlyServer)


#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUCookOnTheFlyServer(); \
	friend struct Z_Construct_UClass_UCookOnTheFlyServer_Statics; \
public: \
	DECLARE_CLASS(UCookOnTheFlyServer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCookOnTheFlyServer)


#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookOnTheFlyServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookOnTheFlyServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookOnTheFlyServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookOnTheFlyServer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookOnTheFlyServer(UCookOnTheFlyServer&&); \
	NO_API UCookOnTheFlyServer(const UCookOnTheFlyServer&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookOnTheFlyServer(UCookOnTheFlyServer&&); \
	NO_API UCookOnTheFlyServer(const UCookOnTheFlyServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookOnTheFlyServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookOnTheFlyServer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookOnTheFlyServer)


#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_97_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCookOnTheFlyServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h


#define FOREACH_ENUM_ECOOKTICKFLAGS(op) \
	op(ECookTickFlags::None) \
	op(ECookTickFlags::MarkupInUsePackages) \
	op(ECookTickFlags::HideProgressDisplay) 

enum class ECookTickFlags : uint8;
template<> UNREALED_API UEnum* StaticEnum<ECookTickFlags>();

#define FOREACH_ENUM_ECOOKMODE(op) \
	op(ECookMode::CookOnTheFly) \
	op(ECookMode::CookOnTheFlyFromTheEditor) \
	op(ECookMode::CookByTheBookFromTheEditor) \
	op(ECookMode::CookByTheBook) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

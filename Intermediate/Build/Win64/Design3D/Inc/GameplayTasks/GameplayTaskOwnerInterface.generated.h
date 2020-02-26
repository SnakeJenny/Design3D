// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTASKS_GameplayTaskOwnerInterface_generated_h
#error "GameplayTaskOwnerInterface.generated.h already included, missing '#pragma once' in GameplayTaskOwnerInterface.h"
#endif
#define GAMEPLAYTASKS_GameplayTaskOwnerInterface_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTaskOwnerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTaskOwnerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTaskOwnerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(UGameplayTaskOwnerInterface&&); \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(const UGameplayTaskOwnerInterface&); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(UGameplayTaskOwnerInterface&&); \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(const UGameplayTaskOwnerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTaskOwnerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTaskOwnerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTaskOwnerInterface)


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayTaskOwnerInterface(); \
	friend struct Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplayTaskOwnerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTaskOwnerInterface)


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplayTaskOwnerInterface() {} \
public: \
	typedef UGameplayTaskOwnerInterface UClassType; \
	typedef IGameplayTaskOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameplayTaskOwnerInterface() {} \
public: \
	typedef UGameplayTaskOwnerInterface UClassType; \
	typedef IGameplayTaskOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_14_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTaskOwnerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

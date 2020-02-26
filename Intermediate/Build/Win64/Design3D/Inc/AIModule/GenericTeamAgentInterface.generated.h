// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_GenericTeamAgentInterface_generated_h
#error "GenericTeamAgentInterface.generated.h already included, missing '#pragma once' in GenericTeamAgentInterface.h"
#endif
#define AIMODULE_GenericTeamAgentInterface_generated_h

#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGenericTeamId_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TeamID() { return STRUCT_OFFSET(FGenericTeamId, TeamID); }


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FGenericTeamId>();

#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericTeamAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericTeamAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericTeamAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericTeamAgentInterface(UGenericTeamAgentInterface&&); \
	NO_API UGenericTeamAgentInterface(const UGenericTeamAgentInterface&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericTeamAgentInterface(UGenericTeamAgentInterface&&); \
	NO_API UGenericTeamAgentInterface(const UGenericTeamAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericTeamAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericTeamAgentInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericTeamAgentInterface)


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGenericTeamAgentInterface(); \
	friend struct Z_Construct_UClass_UGenericTeamAgentInterface_Statics; \
public: \
	DECLARE_CLASS(UGenericTeamAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UGenericTeamAgentInterface)


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGenericTeamAgentInterface() {} \
public: \
	typedef UGenericTeamAgentInterface UClassType; \
	typedef IGenericTeamAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_INCLASS_IINTERFACE \
protected: \
	virtual ~IGenericTeamAgentInterface() {} \
public: \
	typedef UGenericTeamAgentInterface UClassType; \
	typedef IGenericTeamAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_74_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UGenericTeamAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h


#define FOREACH_ENUM_ETEAMATTITUDE(op) \
	op(ETeamAttitude::Friendly) \
	op(ETeamAttitude::Neutral) \
	op(ETeamAttitude::Hostile) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

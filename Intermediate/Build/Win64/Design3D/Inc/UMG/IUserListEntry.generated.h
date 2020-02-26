// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UListViewBase;
#ifdef UMG_IUserListEntry_generated_h
#error "IUserListEntry.generated.h already included, missing '#pragma once' in IUserListEntry.h"
#endif
#define UMG_IUserListEntry_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningListView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UListViewBase**)Z_Param__Result=P_THIS->GetOwningListView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListItemExpanded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsListItemExpanded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListItemSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsListItemSelected(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningListView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UListViewBase**)Z_Param__Result=P_THIS->GetOwningListView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListItemExpanded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsListItemExpanded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListItemSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsListItemSelected(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNativeUserListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNativeUserListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNativeUserListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNativeUserListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNativeUserListEntry(UNativeUserListEntry&&); \
	NO_API UNativeUserListEntry(const UNativeUserListEntry&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNativeUserListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNativeUserListEntry(UNativeUserListEntry&&); \
	NO_API UNativeUserListEntry(const UNativeUserListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNativeUserListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNativeUserListEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNativeUserListEntry)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNativeUserListEntry(); \
	friend struct Z_Construct_UClass_UNativeUserListEntry_Statics; \
public: \
	DECLARE_CLASS(UNativeUserListEntry, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UNativeUserListEntry)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INativeUserListEntry() {} \
public: \
	typedef UNativeUserListEntry UClassType; \
	typedef INativeUserListEntry ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~INativeUserListEntry() {} \
public: \
	typedef UNativeUserListEntry UClassType; \
	typedef INativeUserListEntry ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_11_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UNativeUserListEntry>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_EVENT_PARMS \
	struct UserListEntry_eventBP_OnItemExpansionChanged_Parms \
	{ \
		bool bIsExpanded; \
	}; \
	struct UserListEntry_eventBP_OnItemSelectionChanged_Parms \
	{ \
		bool bIsSelected; \
	};


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntry(UUserListEntry&&); \
	NO_API UUserListEntry(const UUserListEntry&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntry(UUserListEntry&&); \
	NO_API UUserListEntry(const UUserListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntry)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUserListEntry(); \
	friend struct Z_Construct_UClass_UUserListEntry_Statics; \
public: \
	DECLARE_CLASS(UUserListEntry, UNativeUserListEntry, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserListEntry)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUserListEntry() {} \
public: \
	typedef UUserListEntry UClassType; \
	typedef IUserListEntry ThisClass; \
	static void Execute_BP_OnEntryReleased(UObject* O); \
	static void Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded); \
	static void Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_INCLASS_IINTERFACE \
protected: \
	virtual ~IUserListEntry() {} \
public: \
	typedef UUserListEntry UClassType; \
	typedef IUserListEntry ThisClass; \
	static void Execute_BP_OnEntryReleased(UObject* O); \
	static void Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded); \
	static void Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_42_PROLOG \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_EVENT_PARMS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_45_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserListEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

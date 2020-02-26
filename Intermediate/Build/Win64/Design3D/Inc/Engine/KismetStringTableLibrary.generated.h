// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_KismetStringTableLibrary_generated_h
#error "KismetStringTableLibrary.generated.h already included, missing '#pragma once' in KismetStringTableLibrary.h"
#endif
#define ENGINE_KismetStringTableLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMetaDataIdsFromStringTableEntry) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry(Z_Param_TableId,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeysFromStringTable) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UKismetStringTableLibrary::GetKeysFromStringTable(Z_Param_TableId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRegisteredStringTables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=UKismetStringTableLibrary::GetRegisteredStringTables(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableEntryMetaData) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MetaDataId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableEntryMetaData(Z_Param_TableId,Z_Param_Key,Z_Param_MetaDataId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableEntrySourceString) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableEntrySourceString(Z_Param_TableId,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableNamespace) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableNamespace(Z_Param_TableId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRegisteredTableEntry) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringTableLibrary::IsRegisteredTableEntry(Z_Param_TableId,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRegisteredTableId) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringTableLibrary::IsRegisteredTableId(Z_Param_TableId); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMetaDataIdsFromStringTableEntry) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry(Z_Param_TableId,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeysFromStringTable) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UKismetStringTableLibrary::GetKeysFromStringTable(Z_Param_TableId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRegisteredStringTables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=UKismetStringTableLibrary::GetRegisteredStringTables(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableEntryMetaData) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MetaDataId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableEntryMetaData(Z_Param_TableId,Z_Param_Key,Z_Param_MetaDataId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableEntrySourceString) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableEntrySourceString(Z_Param_TableId,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableNamespace) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableNamespace(Z_Param_TableId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRegisteredTableEntry) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringTableLibrary::IsRegisteredTableEntry(Z_Param_TableId,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRegisteredTableId) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TableId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetStringTableLibrary::IsRegisteredTableId(Z_Param_TableId); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetStringTableLibrary(); \
	friend struct Z_Construct_UClass_UKismetStringTableLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetStringTableLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetStringTableLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUKismetStringTableLibrary(); \
	friend struct Z_Construct_UClass_UKismetStringTableLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetStringTableLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetStringTableLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetStringTableLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetStringTableLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetStringTableLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetStringTableLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetStringTableLibrary(UKismetStringTableLibrary&&); \
	NO_API UKismetStringTableLibrary(const UKismetStringTableLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetStringTableLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetStringTableLibrary(UKismetStringTableLibrary&&); \
	NO_API UKismetStringTableLibrary(const UKismetStringTableLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetStringTableLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetStringTableLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetStringTableLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetStringTableLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetStringTableLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

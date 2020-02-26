// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UCurveTable;
struct FTableRowBase;
#ifdef ENGINE_DataTableFunctionLibrary_generated_h
#error "DataTableFunctionLibrary.generated.h already included, missing '#pragma once' in DataTableFunctionLibrary.h"
#endif
#define ENGINE_DataTableFunctionLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataTableColumnAsString) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UDataTableFunctionLibrary::GetDataTableColumnAsString(Z_Param_DataTable,Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDataTableRowNames) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutRowNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDataTableFunctionLibrary::GetDataTableRowNames(Z_Param_Table,Z_Param_Out_OutRowNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDataTableRowExist) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::DoesDataTableRowExist(Z_Param_Table,Z_Param_RowName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvaluateCurveTableRow) \
	{ \
		P_GET_OBJECT(UCurveTable,Z_Param_CurveTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InXY); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_OutResult); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutXY); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ContextString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDataTableFunctionLibrary::EvaluateCurveTableRow(Z_Param_CurveTable,Z_Param_RowName,Z_Param_InXY,(TEnumAsByte<EEvaluateCurveTableResult::Type>&)(Z_Param_Out_OutResult),Z_Param_Out_OutXY,Z_Param_ContextString); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataTableColumnAsString) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UDataTableFunctionLibrary::GetDataTableColumnAsString(Z_Param_DataTable,Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDataTableRowNames) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutRowNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDataTableFunctionLibrary::GetDataTableRowNames(Z_Param_Table,Z_Param_Out_OutRowNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDataTableRowExist) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::DoesDataTableRowExist(Z_Param_Table,Z_Param_RowName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvaluateCurveTableRow) \
	{ \
		P_GET_OBJECT(UCurveTable,Z_Param_CurveTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InXY); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_OutResult); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutXY); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ContextString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDataTableFunctionLibrary::EvaluateCurveTableRow(Z_Param_CurveTable,Z_Param_RowName,Z_Param_InXY,(TEnumAsByte<EEvaluateCurveTableResult::Type>&)(Z_Param_Out_OutResult),Z_Param_Out_OutXY,Z_Param_ContextString); \
		P_NATIVE_END; \
	}


#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFillDataTableFromJSONFile) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JSONFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::FillDataTableFromJSONFile(Z_Param_DataTable,Z_Param_JSONFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillDataTableFromJSONString) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JSONString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::FillDataTableFromJSONString(Z_Param_DataTable,Z_Param_JSONString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillDataTableFromCSVFile) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CSVFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::FillDataTableFromCSVFile(Z_Param_DataTable,Z_Param_CSVFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillDataTableFromCSVString) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CSVString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::FillDataTableFromCSVString(Z_Param_DataTable,Z_Param_CSVString); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFillDataTableFromJSONFile) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JSONFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::FillDataTableFromJSONFile(Z_Param_DataTable,Z_Param_JSONFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillDataTableFromJSONString) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JSONString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::FillDataTableFromJSONString(Z_Param_DataTable,Z_Param_JSONString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillDataTableFromCSVFile) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CSVFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::FillDataTableFromCSVFile(Z_Param_DataTable,Z_Param_CSVFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillDataTableFromCSVString) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CSVString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDataTableFunctionLibrary::FillDataTableFromCSVString(Z_Param_DataTable,Z_Param_CSVString); \
		P_NATIVE_END; \
	}


#else
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataTableFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDataTableFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataTableFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUDataTableFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDataTableFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataTableFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableFunctionLibrary(UDataTableFunctionLibrary&&); \
	NO_API UDataTableFunctionLibrary(const UDataTableFunctionLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableFunctionLibrary(UDataTableFunctionLibrary&&); \
	NO_API UDataTableFunctionLibrary(const UDataTableFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_30_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataTableFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataTableFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h


#define FOREACH_ENUM_EEVALUATECURVETABLERESULT(op) \
	op(EEvaluateCurveTableResult::RowFound) \
	op(EEvaluateCurveTableResult::RowNotFound) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

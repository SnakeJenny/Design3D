// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAssetExportTask;
#ifdef ENGINE_Exporter_generated_h
#error "Exporter.generated.h already included, missing '#pragma once' in Exporter.h"
#endif
#define ENGINE_Exporter_generated_h

#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunAssetExportTasks) \
	{ \
		P_GET_TARRAY_REF(UAssetExportTask*,Z_Param_Out_ExportTasks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UExporter::RunAssetExportTasks(Z_Param_Out_ExportTasks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunAssetExportTask) \
	{ \
		P_GET_OBJECT(UAssetExportTask,Z_Param_Task); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UExporter::RunAssetExportTask(Z_Param_Task); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunAssetExportTasks) \
	{ \
		P_GET_TARRAY_REF(UAssetExportTask*,Z_Param_Out_ExportTasks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UExporter::RunAssetExportTasks(Z_Param_Out_ExportTasks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunAssetExportTask) \
	{ \
		P_GET_OBJECT(UAssetExportTask,Z_Param_Task); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UExporter::RunAssetExportTask(Z_Param_Task); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_EVENT_PARMS \
	struct Exporter_eventScriptRunAssetExportTask_Parms \
	{ \
		UAssetExportTask* Task; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Exporter_eventScriptRunAssetExportTask_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UExporter, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExporter(); \
	friend struct Z_Construct_UClass_UExporter_Statics; \
public: \
	DECLARE_CLASS(UExporter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UExporter) \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUExporter(); \
	friend struct Z_Construct_UClass_UExporter_Statics; \
public: \
	DECLARE_CLASS(UExporter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UExporter) \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UExporter(UExporter&&); \
	ENGINE_API UExporter(const UExporter&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UExporter(UExporter&&); \
	ENGINE_API UExporter(const UExporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExporter)


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_21_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Exporter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UExporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

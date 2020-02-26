// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/Factory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UFunction* Z_Construct_UFunction_UFactory_ScriptFactoryCanImport();
	UNREALED_API UFunction* Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile();
	UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FName NAME_UFactory_ScriptFactoryCanImport = FName(TEXT("ScriptFactoryCanImport"));
	bool UFactory::ScriptFactoryCanImport(const FString& Filename)
	{
		Factory_eventScriptFactoryCanImport_Parms Parms;
		Parms.Filename=Filename;
		ProcessEvent(FindFunctionChecked(NAME_UFactory_ScriptFactoryCanImport),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFactory_ScriptFactoryCreateFile = FName(TEXT("ScriptFactoryCreateFile"));
	bool UFactory::ScriptFactoryCreateFile(UAssetImportTask* InTask)
	{
		Factory_eventScriptFactoryCreateFile_Parms Parms;
		Parms.InTask=InTask;
		ProcessEvent(FindFunctionChecked(NAME_UFactory_ScriptFactoryCreateFile),&Parms);
		return !!Parms.ReturnValue;
	}
	void UFactory::StaticRegisterNativesUFactory()
	{
	}
	struct Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Factory_eventScriptFactoryCanImport_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Factory_eventScriptFactoryCanImport_Parms), &Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Factory_eventScriptFactoryCanImport_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Whether the specified file can be imported by this factory. (Implemented in script)\n\n@return true if the file is supported, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactory, nullptr, "ScriptFactoryCanImport", sizeof(Factory_eventScriptFactoryCanImport_Parms), Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactory_ScriptFactoryCanImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Factory_eventScriptFactoryCreateFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Factory_eventScriptFactoryCreateFile_Parms), &Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_InTask = { "InTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Factory_eventScriptFactoryCreateFile_Parms, InTask), Z_Construct_UClass_UAssetImportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_InTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Import object(s) using a task via script\n\n@param InTask\n@return True if script implements" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactory, nullptr, "ScriptFactoryCreateFile", sizeof(Factory_eventScriptFactoryCreateFile_Parms), Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFactory_NoRegister()
	{
		return UFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverwriteYesOrNoToAllState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverwriteYesOrNoToAllState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomatedImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutomatedImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImportPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bText_MetaData[];
#endif
		static void NewProp_bText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorImport_MetaData[];
#endif
		static void NewProp_bEditorImport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorImport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditAfterNew_MetaData[];
#endif
		static void NewProp_bEditAfterNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditAfterNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Formats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Formats;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Formats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ContextClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SupportedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateNew_MetaData[];
#endif
		static void NewProp_bCreateNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateNew;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactory_ScriptFactoryCanImport, "ScriptFactoryCanImport" }, // 1633479147
		{ &Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile, "ScriptFactoryCreateFile" }, // 3057051899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/Factory.h" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Base class for all factories\nAn object responsible for creating and importing new objects." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "For interactive object imports, this value indicates whether the user wants\nobjects to be automatically overwritten (See EAppReturnType), or -1 if the\nuser should be prompted." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState = { "OverwriteYesOrNoToAllState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactory, OverwriteYesOrNoToAllState), METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Task for importing file via script interfaces" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask = { "AssetImportTask", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactory, AssetImportTask), Z_Construct_UClass_UAssetImportTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Data for how to import files via the automated command line importing interface" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData = { "AutomatedImportData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactory, AutomatedImportData), Z_Construct_UClass_UAutomatedAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Determines the order in which factories are tried when importing or reimporting an object.\n      Factories with higher priority values will go first. Factories with negative priorities will be excluded." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority = { "ImportPriority", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactory, ImportPriority), METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_bText_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "true if the factory imports objects from text." },
	};
#endif
	void Z_Construct_UClass_UFactory_Statics::NewProp_bText_SetBit(void* Obj)
	{
		((UFactory*)Obj)->bText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_bText = { "bText", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFactory), &Z_Construct_UClass_UFactory_Statics::NewProp_bText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_bText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_bText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "true if the factory imports objects from files." },
	};
#endif
	void Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_SetBit(void* Obj)
	{
		((UFactory*)Obj)->bEditorImport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport = { "bEditorImport", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFactory), &Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "true if the associated editor should be opened after creating a new object." },
	};
#endif
	void Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_SetBit(void* Obj)
	{
		((UFactory*)Obj)->bEditAfterNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew = { "bEditAfterNew", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFactory), &Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_Formats_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "List of formats supported by the factory. Each entry is of the form \"ext;Description\" where ext is the file extension." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_Formats = { "Formats", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactory, Formats), METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_Formats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_Formats_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_Formats_Inner = { "Formats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Class of the context object used to help create the object." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass = { "ContextClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactory, ContextClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "The class manufactured by this factory." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass = { "SupportedClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactory, SupportedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "The default value to return from CanCreateNew()" },
	};
#endif
	void Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_SetBit(void* Obj)
	{
		((UFactory*)Obj)->bCreateNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew = { "bCreateNew", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFactory), &Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_bText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_Formats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_Formats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFactory_Statics::ClassParams = {
		&UFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFactory, 1846100624);
	template<> UNREALED_API UClass* StaticClass<UFactory>()
	{
		return UFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFactory(Z_Construct_UClass_UFactory, &UFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

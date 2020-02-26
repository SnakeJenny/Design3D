// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/Subsystems/ImportSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportSubsystem() {}
// Cross Module References
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature();
	UNREALED_API UClass* Z_Construct_UClass_UImportSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALED_API UClass* Z_Construct_UClass_UImportSubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics
	{
		struct ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms
		{
			UObject* InObject;
			int32 InLODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::NewProp_InLODIndex = { "InLODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms, InLODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::NewProp_InLODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::NewProp_InObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "delegate type fired when new LOD have been imported to an asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportSubsystem, nullptr, "OnAssetPostLODImport_Dyn__DelegateSignature", sizeof(ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics
	{
		struct ImportSubsystem_eventOnAssetReimport_Dyn_Parms
		{
			UObject* InCreatedObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCreatedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::NewProp_InCreatedObject = { "InCreatedObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetReimport_Dyn_Parms, InCreatedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::NewProp_InCreatedObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "delegate type fired when new assets have been reimported. Note: InCreatedObject can be NULL if import failed. Params: UObject* InCreatedObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportSubsystem, nullptr, "OnAssetReimport_Dyn__DelegateSignature", sizeof(ImportSubsystem_eventOnAssetReimport_Dyn_Parms), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics
	{
		struct ImportSubsystem_eventOnAssetPostImport_Dyn_Parms
		{
			UFactory* InFactory;
			UObject* InCreatedObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCreatedObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFactory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::NewProp_InCreatedObject = { "InCreatedObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPostImport_Dyn_Parms, InCreatedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::NewProp_InFactory = { "InFactory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPostImport_Dyn_Parms, InFactory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::NewProp_InCreatedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::NewProp_InFactory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "delegate type fired when new assets have been (re-)imported. Note: InCreatedObject can be NULL if import failed. Params: UFactory* InFactory, UObject* InCreatedObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportSubsystem, nullptr, "OnAssetPostImport_Dyn__DelegateSignature", sizeof(ImportSubsystem_eventOnAssetPostImport_Dyn_Parms), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics
	{
		struct ImportSubsystem_eventOnAssetPreImport_Dyn_Parms
		{
			UFactory* InFactory;
			UClass* InClass;
			UObject* InParent;
			FName Name;
			FString Type;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFactory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, Type), METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, Name), METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, InParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InFactory = { "InFactory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, InFactory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InFactory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "delegate type fired when new assets are being (re-)imported. Params: UFactory* InFactory, UClass* InClass, UObject* InParent, const FName& Name, const TCHAR* Type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportSubsystem, nullptr, "OnAssetPreImport_Dyn__DelegateSignature", sizeof(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UImportSubsystem::StaticRegisterNativesUImportSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UImportSubsystem_NoRegister()
	{
		return UImportSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UImportSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetPostLODImport_BP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetPostLODImport_BP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetReimport_BP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetReimport_BP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetPostImport_BP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetPostImport_BP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetPreImport_BP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetPreImport_BP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UImportSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature, "OnAssetPostImport_Dyn__DelegateSignature" }, // 512157147
		{ &Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature, "OnAssetPostLODImport_Dyn__DelegateSignature" }, // 2267231388
		{ &Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature, "OnAssetPreImport_Dyn__DelegateSignature" }, // 3857199661
		{ &Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature, "OnAssetReimport_Dyn__DelegateSignature" }, // 2132437818
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/ImportSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "UImportSubsystem\nSubsystem for importing assets in the editor,\nContains utility functions and callbacks for hooking into importing." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP_MetaData[] = {
		{ "DisplayName", "OnAssetPostLODImport" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ScriptName", "OnAssetPostLODImport" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP = { "OnAssetPostLODImport_BP", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportSubsystem, OnAssetPostLODImport_BP), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP_MetaData[] = {
		{ "DisplayName", "OnAssetReimport" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ScriptName", "OnAssetReimport" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP = { "OnAssetReimport_BP", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportSubsystem, OnAssetReimport_BP), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP_MetaData[] = {
		{ "DisplayName", "OnAssetPostImport" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ScriptName", "OnAssetPostImport" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP = { "OnAssetPostImport_BP", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportSubsystem, OnAssetPostImport_BP), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP_MetaData[] = {
		{ "DisplayName", "OnAssetPreImport" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ScriptName", "OnAssetPreImport" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP = { "OnAssetPreImport_BP", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportSubsystem, OnAssetPreImport_BP), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImportSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImportSubsystem_Statics::ClassParams = {
		&UImportSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UImportSubsystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImportSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImportSubsystem, 3112516152);
	template<> UNREALED_API UClass* StaticClass<UImportSubsystem>()
	{
		return UImportSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportSubsystem(Z_Construct_UClass_UImportSubsystem, &UImportSubsystem::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UImportSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequence() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequence_CopyMetaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	void ULevelSequence::StaticRegisterNativesULevelSequence()
	{
		UClass* Class = ULevelSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyMetaData", &ULevelSequence::execCopyMetaData },
			{ "FindMetaDataByClass", &ULevelSequence::execFindMetaDataByClass },
			{ "FindOrAddMetaDataByClass", &ULevelSequence::execFindOrAddMetaDataByClass },
			{ "RemoveMetaDataByClass", &ULevelSequence::execRemoveMetaDataByClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics
	{
		struct LevelSequence_eventCopyMetaData_Parms
		{
			UObject* InMetaData;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventCopyMetaData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_InMetaData = { "InMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventCopyMetaData_Parms, InMetaData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_InMetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Copy the specified meta data into this level sequence, overwriting any existing meta-data of the same type\nMeta-data may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality.\n@param InMetaData - Existing Metadata Object that you wish to copy into this Level Sequence.\n@return The newly copied instance of the Metadata that now exists on this sequence." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "CopyMetaData", sizeof(LevelSequence_eventCopyMetaData_Parms), Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequence_CopyMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics
	{
		struct LevelSequence_eventFindMetaDataByClass_Parms
		{
			TSubclassOf<UObject>  InClass;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventFindMetaDataByClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventFindMetaDataByClass_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Find meta-data of a particular type for this level sequence instance.\n@param InClass - Class that you wish to find the metadata object for.\n@return An instance of this class if it already exists as metadata on this Level Sequence, otherwise null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "FindMetaDataByClass", sizeof(LevelSequence_eventFindMetaDataByClass_Parms), Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics
	{
		struct LevelSequence_eventFindOrAddMetaDataByClass_Parms
		{
			TSubclassOf<UObject>  InClass;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventFindOrAddMetaDataByClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventFindOrAddMetaDataByClass_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Find meta-data of a particular type for this level sequence instance, adding it if it doesn't already exist.\n@param InClass - Class that you wish to find or create the metadata object for.\n@return An instance of this class as metadata on this Level Sequence." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "FindOrAddMetaDataByClass", sizeof(LevelSequence_eventFindOrAddMetaDataByClass_Parms), Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics
	{
		struct LevelSequence_eventRemoveMetaDataByClass_Parms
		{
			TSubclassOf<UObject>  InClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventRemoveMetaDataByClass_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Remove meta-data of a particular type for this level sequence instance, if it exists\n@param InClass - The class type that you wish to remove the metadata for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "RemoveMetaDataByClass", sizeof(LevelSequence_eventRemoveMetaDataByClass_Parms), Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequence_NoRegister()
	{
		return ULevelSequence::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaDataObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaDataObjects_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DirectorClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectorBlueprint;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PossessedObjects;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PossessedObjects_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PossessedObjects_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequence_CopyMetaData, "CopyMetaData" }, // 2595320432
		{ &Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass, "FindMetaDataByClass" }, // 3612535834
		{ &Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass, "FindOrAddMetaDataByClass" }, // 1777458885
		{ &Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass, "RemoveMetaDataByClass" }, // 839311109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequence.h" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Movie scene animation for Actors." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Array of meta-data objects associated with this level sequence. Each pointer may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects = { "MetaDataObjects", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, MetaDataObjects), METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_Inner = { "MetaDataObjects", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "The class that is used to spawn this level sequence's director instance.\nDirector instances are allocated on-demand one per sequence during evaluation and are used by event tracks for triggering events." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass = { "DirectorClass", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, DirectorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "A pointer to the director blueprint that generates this sequence's DirectorClass." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint = { "DirectorBlueprint", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, DirectorBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Deprecated property housing old possessed object bindings" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects = { "PossessedObjects", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, PossessedObjects_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_Key_KeyProp = { "PossessedObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_ValueProp = { "PossessedObjects", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLevelSequenceObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "References to bound objects." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences = { "BindingReferences", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, BindingReferences), Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Legacy object references - should be read-only. Not deprecated because they need to still be saved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences = { "ObjectReferences", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, ObjectReferences), Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequence_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequence_Statics::ClassParams = {
		&ULevelSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequence_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequence, 3738833339);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequence>()
	{
		return ULevelSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequence(Z_Construct_UClass_ULevelSequence, &ULevelSequence::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

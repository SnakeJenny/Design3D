// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blutility/Public/EditorUtilityLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityLibrary() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityLibrary_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Blutility();
	BLUTILITY_API UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BLUTILITY_API UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet();
	BLUTILITY_API UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset();
// End Cross Module References
	void UEditorUtilityLibrary::StaticRegisterNativesUEditorUtilityLibrary()
	{
		UClass* Class = UEditorUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorReference", &UEditorUtilityLibrary::execGetActorReference },
			{ "GetSelectedAssets", &UEditorUtilityLibrary::execGetSelectedAssets },
			{ "GetSelectionBounds", &UEditorUtilityLibrary::execGetSelectionBounds },
			{ "GetSelectionSet", &UEditorUtilityLibrary::execGetSelectionSet },
			{ "RenameAsset", &UEditorUtilityLibrary::execRenameAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics
	{
		struct EditorUtilityLibrary_eventGetActorReference_Parms
		{
			FString PathToActor;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventGetActorReference_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::NewProp_PathToActor = { "PathToActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventGetActorReference_Parms, PathToActor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::NewProp_PathToActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Attempts to find the actor specified by PathToActor in the current editor world\n@param        PathToActor     The path to the actor (e.g. PersistentLevel.PlayerStart)\n@return       A reference to the actor, or none if it wasn't found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetActorReference", sizeof(EditorUtilityLibrary_eventGetActorReference_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectedAssets_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectedAssets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Gets the set of currently selected assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectedAssets", sizeof(EditorUtilityLibrary_eventGetSelectedAssets_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectionBounds_Parms
		{
			FVector Origin;
			FVector BoxExtent;
			float SphereRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectionBounds_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectionBounds_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectionBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_BoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectionBounds", sizeof(EditorUtilityLibrary_eventGetSelectionBounds_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectionSet_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectionSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectionSet", sizeof(EditorUtilityLibrary_eventGetSelectionSet_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics
	{
		struct EditorUtilityLibrary_eventRenameAsset_Parms
		{
			UObject* Asset;
			FString NewName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventRenameAsset_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUtilityLibrary_eventRenameAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Renames an asset (cannot move folders)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "RenameAsset", sizeof(EditorUtilityLibrary_eventRenameAsset_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorUtilityLibrary_NoRegister()
	{
		return UEditorUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference, "GetActorReference" }, // 3521114951
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets, "GetSelectedAssets" }, // 262465057
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds, "GetSelectionBounds" }, // 4046910441
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet, "GetSelectionSet" }, // 1085318230
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset, "RenameAsset" }, // 931299580
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Expose editor utility functions to Blutilities" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityLibrary_Statics::ClassParams = {
		&UEditorUtilityLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUtilityLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUtilityLibrary, 1223522805);
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityLibrary>()
	{
		return UEditorUtilityLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUtilityLibrary(Z_Construct_UClass_UEditorUtilityLibrary, &UEditorUtilityLibrary::StaticClass, TEXT("/Script/Blutility"), TEXT("UEditorUtilityLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

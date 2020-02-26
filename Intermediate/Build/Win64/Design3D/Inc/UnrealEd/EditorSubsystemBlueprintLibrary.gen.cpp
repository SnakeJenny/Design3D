// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/Subsystems/EditorSubsystemBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSubsystemBlueprintLibrary() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UEditorSubsystemBlueprintLibrary::StaticRegisterNativesUEditorSubsystemBlueprintLibrary()
	{
		UClass* Class = UEditorSubsystemBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditorSubsystem", &UEditorSubsystemBlueprintLibrary::execGetEditorSubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics
	{
		struct EditorSubsystemBlueprintLibrary_eventGetEditorSubsystem_Parms
		{
			TSubclassOf<UEditorSubsystem>  Class;
			UEditorSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorSubsystemBlueprintLibrary_eventGetEditorSubsystem_Parms, ReturnValue), Z_Construct_UClass_UEditorSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorSubsystemBlueprintLibrary_eventGetEditorSubsystem_Parms, Class), Z_Construct_UClass_UEditorSubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Editor Subsystems" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorSubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Local Player Subsystem from the Local Player associated with the provided context" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorSubsystemBlueprintLibrary, nullptr, "GetEditorSubsystem", sizeof(EditorSubsystemBlueprintLibrary_eventGetEditorSubsystem_Parms), Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_NoRegister()
	{
		return UEditorSubsystemBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem, "GetEditorSubsystem" }, // 2737185652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/EditorSubsystemBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorSubsystemBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSubsystemBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::ClassParams = {
		&UEditorSubsystemBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorSubsystemBlueprintLibrary, 4282254169);
	template<> UNREALED_API UClass* StaticClass<UEditorSubsystemBlueprintLibrary>()
	{
		return UEditorSubsystemBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorSubsystemBlueprintLibrary(Z_Construct_UClass_UEditorSubsystemBlueprintLibrary, &UEditorSubsystemBlueprintLibrary::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorSubsystemBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSubsystemBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

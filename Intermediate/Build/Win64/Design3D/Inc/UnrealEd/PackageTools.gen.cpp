// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/PackageTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageTools() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPackageTools_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPackageTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UFunction* Z_Construct_UFunction_UPackageTools_SanitizePackageName();
// End Cross Module References
	void UPackageTools::StaticRegisterNativesUPackageTools()
	{
		UClass* Class = UPackageTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SanitizePackageName", &UPackageTools::execSanitizePackageName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics
	{
		struct PackageTools_eventSanitizePackageName_Parms
		{
			FString InPackageName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageTools_eventSanitizePackageName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName = { "InPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageTools_eventSanitizePackageName_Parms, InPackageName), METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Package Tools" },
		{ "ModuleRelativePath", "Public/PackageTools.h" },
		{ "ToolTip", "Replaces all invalid package name characters with _" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageTools, nullptr, "SanitizePackageName", sizeof(PackageTools_eventSanitizePackageName_Parms), Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageTools_SanitizePackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPackageTools_NoRegister()
	{
		return UPackageTools::StaticClass();
	}
	struct Z_Construct_UClass_UPackageTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackageTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPackageTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPackageTools_SanitizePackageName, "SanitizePackageName" }, // 1899086553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackageTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PackageTools.h" },
		{ "ModuleRelativePath", "Public/PackageTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackageTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackageTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPackageTools_Statics::ClassParams = {
		&UPackageTools::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPackageTools_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPackageTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackageTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPackageTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPackageTools, 3424489796);
	template<> UNREALED_API UClass* StaticClass<UPackageTools>()
	{
		return UPackageTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPackageTools(Z_Construct_UClass_UPackageTools, &UPackageTools::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPackageTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

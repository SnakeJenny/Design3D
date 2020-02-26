// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/MaterialImportHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialImportHelpers() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialImportHelpers_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialImportHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UFunction* Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UNREALED_API UFunction* Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation();
// End Cross Module References
	static UEnum* EMaterialSearchLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EMaterialSearchLocation"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EMaterialSearchLocation>()
	{
		return EMaterialSearchLocation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialSearchLocation(EMaterialSearchLocation_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EMaterialSearchLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Hash() { return 2500718087U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialSearchLocation"), 0, Get_Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMaterialSearchLocation::Local", (int64)EMaterialSearchLocation::Local },
				{ "EMaterialSearchLocation::UnderParent", (int64)EMaterialSearchLocation::UnderParent },
				{ "EMaterialSearchLocation::UnderRoot", (int64)EMaterialSearchLocation::UnderRoot },
				{ "EMaterialSearchLocation::AllAssets", (int64)EMaterialSearchLocation::AllAssets },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllAssets.ToolTip", "Search for matching material in all assets folders." },
				{ "Local.ToolTip", "Search for matching material in local import folder only." },
				{ "ModuleRelativePath", "Classes/Factories/MaterialImportHelpers.h" },
				{ "UnderParent.ToolTip", "Search for matching material recursively from parent folder." },
				{ "UnderRoot.ToolTip", "Search for matching material recursively from root folder." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EMaterialSearchLocation",
				"EMaterialSearchLocation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialImportHelpers::StaticRegisterNativesUMaterialImportHelpers()
	{
		UClass* Class = UMaterialImportHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindExistingMaterial", &UMaterialImportHelpers::execFindExistingMaterial },
			{ "FindExistingMaterialFromSearchLocation", &UMaterialImportHelpers::execFindExistingMaterialFromSearchLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics
	{
		struct MaterialImportHelpers_eventFindExistingMaterial_Parms
		{
			FString BasePath;
			FString MaterialFullName;
			bool bRecursivePaths;
			FText OutError;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecursivePaths_MetaData[];
#endif
		static void NewProp_bRecursivePaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursivePaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFullName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialFullName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BasePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterial_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_SetBit(void* Obj)
	{
		((MaterialImportHelpers_eventFindExistingMaterial_Parms*)Obj)->bRecursivePaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths = { "bRecursivePaths", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialImportHelpers_eventFindExistingMaterial_Parms), &Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName = { "MaterialFullName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterial_Parms, MaterialFullName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath = { "BasePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterial_Parms, BasePath), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_OutError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Materials" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialImportHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportHelpers, nullptr, "FindExistingMaterial", sizeof(MaterialImportHelpers_eventFindExistingMaterial_Parms), Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics
	{
		struct MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms
		{
			FString MaterialFullName;
			FString BasePackagePath;
			EMaterialSearchLocation SearchLocation;
			FText OutError;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutError;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BasePackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFullName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialFullName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_SearchLocation = { "SearchLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, SearchLocation), Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_SearchLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath = { "BasePackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, BasePackagePath), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName = { "MaterialFullName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, MaterialFullName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_OutError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_SearchLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_SearchLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Materials" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialImportHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportHelpers, nullptr, "FindExistingMaterialFromSearchLocation", sizeof(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms), Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialImportHelpers_NoRegister()
	{
		return UMaterialImportHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialImportHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialImportHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialImportHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial, "FindExistingMaterial" }, // 2404874070
		{ &Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation, "FindExistingMaterialFromSearchLocation" }, // 1209517790
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/MaterialImportHelpers.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialImportHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialImportHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialImportHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialImportHelpers_Statics::ClassParams = {
		&UMaterialImportHelpers::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialImportHelpers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialImportHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialImportHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialImportHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialImportHelpers, 339334876);
	template<> UNREALED_API UClass* StaticClass<UMaterialImportHelpers>()
	{
		return UMaterialImportHelpers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialImportHelpers(Z_Construct_UClass_UMaterialImportHelpers, &UMaterialImportHelpers::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialImportHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialImportHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

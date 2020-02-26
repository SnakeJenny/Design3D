// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavModifierVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavModifierVolume() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_ANavModifierVolume_SetAreaClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
// End Cross Module References
	void ANavModifierVolume::StaticRegisterNativesANavModifierVolume()
	{
		UClass* Class = ANavModifierVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAreaClass", &ANavModifierVolume::execSetAreaClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics
	{
		struct NavModifierVolume_eventSetAreaClass_Parms
		{
			TSubclassOf<UNavArea>  NewAreaClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewAreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NewProp_NewAreaClass = { "NewAreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavModifierVolume_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NewProp_NewAreaClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_NewAreaClass", "None" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavModifierVolume, nullptr, "SetAreaClass", sizeof(NavModifierVolume_eventSetAreaClass_Parms), Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavModifierVolume_SetAreaClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister()
	{
		return ANavModifierVolume::StaticClass();
	}
	struct Z_Construct_UClass_ANavModifierVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavModifierVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavModifierVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavModifierVolume_SetAreaClass, "SetAreaClass" }, // 4229470781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "NavModifierVolume.h" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Allows applying selected AreaClass to navmesh, using Volume's shape" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavModifierVolume, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavModifierVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ANavModifierVolume, INavRelevantInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavModifierVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavModifierVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavModifierVolume_Statics::ClassParams = {
		&ANavModifierVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavModifierVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavModifierVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavModifierVolume, 230976370);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavModifierVolume>()
	{
		return ANavModifierVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavModifierVolume(Z_Construct_UClass_ANavModifierVolume, &ANavModifierVolume::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavModifierVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavModifierVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

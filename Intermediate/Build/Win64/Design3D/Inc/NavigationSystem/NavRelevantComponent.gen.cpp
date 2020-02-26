// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavRelevantComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavRelevantComponent() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
// End Cross Module References
	void UNavRelevantComponent::StaticRegisterNativesUNavRelevantComponent()
	{
		UClass* Class = UNavRelevantComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNavigationRelevancy", &UNavRelevantComponent::execSetNavigationRelevancy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics
	{
		struct NavRelevantComponent_eventSetNavigationRelevancy_Parms
		{
			bool bRelevant;
		};
		static void NewProp_bRelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelevant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NewProp_bRelevant_SetBit(void* Obj)
	{
		((NavRelevantComponent_eventSetNavigationRelevancy_Parms*)Obj)->bRelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NewProp_bRelevant = { "bRelevant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavRelevantComponent_eventSetNavigationRelevancy_Parms), &Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NewProp_bRelevant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NewProp_bRelevant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavRelevantComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavRelevantComponent, nullptr, "SetNavigationRelevancy", sizeof(NavRelevantComponent_eventSetNavigationRelevancy_Parms), Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavRelevantComponent_NoRegister()
	{
		return UNavRelevantComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavRelevantComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedNavParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedNavParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachToOwnersRoot_MetaData[];
#endif
		static void NewProp_bAttachToOwnersRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachToOwnersRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavRelevantComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavRelevantComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy, "SetNavigationRelevancy" }, // 1294932362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavRelevantComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavRelevantComponent.h" },
		{ "ModuleRelativePath", "Public/NavRelevantComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_CachedNavParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavRelevantComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_CachedNavParent = { "CachedNavParent", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavRelevantComponent, CachedNavParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_CachedNavParent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_CachedNavParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavRelevantComponent.h" },
		{ "ToolTip", "attach navigation data to entry for owner's root component (depends on its relevancy)" },
	};
#endif
	void Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot_SetBit(void* Obj)
	{
		((UNavRelevantComponent*)Obj)->bAttachToOwnersRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot = { "bAttachToOwnersRoot", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavRelevantComponent), &Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavRelevantComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_CachedNavParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavRelevantComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(UNavRelevantComponent, INavRelevantInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavRelevantComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavRelevantComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavRelevantComponent_Statics::ClassParams = {
		&UNavRelevantComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNavRelevantComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UNavRelevantComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavRelevantComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavRelevantComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavRelevantComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavRelevantComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavRelevantComponent, 3923295113);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavRelevantComponent>()
	{
		return UNavRelevantComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavRelevantComponent(Z_Construct_UClass_UNavRelevantComponent, &UNavRelevantComponent::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavRelevantComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavRelevantComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

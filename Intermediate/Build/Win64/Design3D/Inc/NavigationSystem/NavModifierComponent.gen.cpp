// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavModifierComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavModifierComponent() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavModifierComponent_SetAreaClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UNavModifierComponent::StaticRegisterNativesUNavModifierComponent()
	{
		UClass* Class = UNavModifierComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAreaClass", &UNavModifierComponent::execSetAreaClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics
	{
		struct NavModifierComponent_eventSetAreaClass_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NewProp_NewAreaClass = { "NewAreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavModifierComponent_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NewProp_NewAreaClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavModifierComponent, nullptr, "SetAreaClass", sizeof(NavModifierComponent_eventSetAreaClass_Parms), Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavModifierComponent_SetAreaClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister()
	{
		return UNavModifierComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavModifierComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeAgentHeight_MetaData[];
#endif
		static void NewProp_bIncludeAgentHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAgentHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailsafeExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FailsafeExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavModifierComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavRelevantComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavModifierComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavModifierComponent_SetAreaClass, "SetAreaClass" }, // 3727243192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavModifierComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Activation" },
		{ "IncludePath", "NavModifierComponent.h" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
		{ "ToolTip", "Setting to 'true' will result in expanding lower bounding box of the nav\n    modifier by agent's height, before applying to navmesh" },
	};
#endif
	void Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_SetBit(void* Obj)
	{
		((UNavModifierComponent*)Obj)->bIncludeAgentHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight = { "bIncludeAgentHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavModifierComponent), &Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
		{ "ToolTip", "box extent used ONLY when owning actor doesn't have collision component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent = { "FailsafeExtent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavModifierComponent, FailsafeExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavModifierComponent, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavModifierComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavModifierComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavModifierComponent_Statics::ClassParams = {
		&UNavModifierComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNavModifierComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavModifierComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavModifierComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavModifierComponent, 2842416124);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavModifierComponent>()
	{
		return UNavModifierComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavModifierComponent(Z_Construct_UClass_UNavModifierComponent, &UNavModifierComponent::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavModifierComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavModifierComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

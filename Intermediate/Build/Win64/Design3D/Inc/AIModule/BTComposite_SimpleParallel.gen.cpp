// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_SimpleParallel() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTParallelMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_SimpleParallel_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_SimpleParallel();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
// End Cross Module References
	static UEnum* EBTParallelMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTParallelMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTParallelMode"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTParallelMode::Type>()
	{
		return EBTParallelMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTParallelMode(EBTParallelMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTParallelMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTParallelMode_Hash() { return 731897905U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTParallelMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTParallelMode"), 0, Get_Z_Construct_UEnum_AIModule_EBTParallelMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTParallelMode::AbortBackground", (int64)EBTParallelMode::AbortBackground },
				{ "EBTParallelMode::WaitForBackground", (int64)EBTParallelMode::WaitForBackground },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbortBackground.DisplayName", "Immediate" },
				{ "AbortBackground.ToolTip", "When main task finishes, immediately abort background tree." },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
				{ "ToolTip", "keep in sync with DescribeFinishMode" },
				{ "WaitForBackground.DisplayName", "Delayed" },
				{ "WaitForBackground.ToolTip", "When main task finishes, wait for background tree to finish." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EBTParallelMode",
				"EBTParallelMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBTComposite_SimpleParallel::StaticRegisterNativesUBTComposite_SimpleParallel()
	{
	}
	UClass* Z_Construct_UClass_UBTComposite_SimpleParallel_NoRegister()
	{
		return UBTComposite_SimpleParallel::StaticClass();
	}
	struct Z_Construct_UClass_UBTComposite_SimpleParallel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FinishMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Composite" },
		{ "IncludePath", "BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
		{ "ToolTip", "Simple Parallel composite node.\nAllows for running two children: one which must be a single task node (with optional decorators), and the other of which can be a complete subtree." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode_MetaData[] = {
		{ "Category", "Parallel" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
		{ "ToolTip", "how background tree should be handled when main task finishes execution" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode = { "FinishMode", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTComposite_SimpleParallel, FinishMode), Z_Construct_UEnum_AIModule_EBTParallelMode, METADATA_PARAMS(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTComposite_SimpleParallel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::ClassParams = {
		&UBTComposite_SimpleParallel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTComposite_SimpleParallel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTComposite_SimpleParallel, 691387639);
	template<> AIMODULE_API UClass* StaticClass<UBTComposite_SimpleParallel>()
	{
		return UBTComposite_SimpleParallel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTComposite_SimpleParallel(Z_Construct_UClass_UBTComposite_SimpleParallel, &UBTComposite_SimpleParallel::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTComposite_SimpleParallel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_SimpleParallel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

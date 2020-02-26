// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Enum() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Enum_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Enum();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
// End Cross Module References
	void UBlackboardKeyType_Enum::StaticRegisterNativesUBlackboardKeyType_Enum()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_Enum_NoRegister()
	{
		return UBlackboardKeyType_Enum::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Enum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnumNameValid_MetaData[];
#endif
		static void NewProp_bIsEnumNameValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnumNameValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnumName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnumType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Enum" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ToolTip", "set when EnumName override is valid and active" },
	};
#endif
	void Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_SetBit(void* Obj)
	{
		((UBlackboardKeyType_Enum*)Obj)->bIsEnumNameValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid = { "bIsEnumNameValid", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlackboardKeyType_Enum), &Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ToolTip", "name of enum defined in c++ code, will take priority over asset from EnumType property" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName = { "EnumName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardKeyType_Enum, EnumName), METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType = { "EnumType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardKeyType_Enum, EnumType), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_Enum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::ClassParams = {
		&UBlackboardKeyType_Enum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType_Enum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardKeyType_Enum, 1881886726);
	template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType_Enum>()
	{
		return UBlackboardKeyType_Enum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardKeyType_Enum(Z_Construct_UClass_UBlackboardKeyType_Enum, &UBlackboardKeyType_Enum::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardKeyType_Enum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Enum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

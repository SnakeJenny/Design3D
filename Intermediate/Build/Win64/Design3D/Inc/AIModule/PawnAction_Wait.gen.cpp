// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnAction_Wait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Wait() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Wait_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Wait();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UPawnAction_Wait::StaticRegisterNativesUPawnAction_Wait()
	{
	}
	UClass* Z_Construct_UClass_UPawnAction_Wait_NoRegister()
	{
		return UPawnAction_Wait::StaticClass();
	}
	struct Z_Construct_UClass_UPawnAction_Wait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToWait;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnAction_Wait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Wait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Wait.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Wait.h" },
		{ "ToolTip", "uses system timers rather then ticking" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Wait_Statics::NewProp_TimeToWait_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Wait.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnAction_Wait_Statics::NewProp_TimeToWait = { "TimeToWait", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Wait, TimeToWait), METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Wait_Statics::NewProp_TimeToWait_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Wait_Statics::NewProp_TimeToWait_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnAction_Wait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Wait_Statics::NewProp_TimeToWait,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnAction_Wait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnAction_Wait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnAction_Wait_Statics::ClassParams = {
		&UPawnAction_Wait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPawnAction_Wait_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Wait_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Wait_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Wait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnAction_Wait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnAction_Wait_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnAction_Wait, 2041037417);
	template<> AIMODULE_API UClass* StaticClass<UPawnAction_Wait>()
	{
		return UPawnAction_Wait::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_Wait(Z_Construct_UClass_UPawnAction_Wait, &UPawnAction_Wait::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_Wait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Wait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

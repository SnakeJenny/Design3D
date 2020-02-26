// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/ReplaceActorCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplaceActorCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UReplaceActorCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UReplaceActorCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReplaceActorCommandlet::StaticRegisterNativesUReplaceActorCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UReplaceActorCommandlet_NoRegister()
	{
		return UReplaceActorCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UReplaceActorCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplaceActorCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaceActorCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ReplaceActorCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ReplaceActorCommandlet.h" },
		{ "ToolTip", "Commandlet for replacing one kind of actor with another kind of actor, copying changed properties from the most-derived common superclass" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplaceActorCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplaceActorCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplaceActorCommandlet_Statics::ClassParams = {
		&UReplaceActorCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplaceActorCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReplaceActorCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplaceActorCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplaceActorCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplaceActorCommandlet, 2068217534);
	template<> UNREALED_API UClass* StaticClass<UReplaceActorCommandlet>()
	{
		return UReplaceActorCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplaceActorCommandlet(Z_Construct_UClass_UReplaceActorCommandlet, &UReplaceActorCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UReplaceActorCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplaceActorCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

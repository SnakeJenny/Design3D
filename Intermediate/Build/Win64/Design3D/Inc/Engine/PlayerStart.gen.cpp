// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/PlayerStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStart() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void APlayerStart::StaticRegisterNativesAPlayerStart()
	{
	}
	UClass* Z_Construct_UClass_APlayerStart_NoRegister()
	{
		return APlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_APlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStartTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerStartTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "GameFramework/PlayerStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class indicates a location where a player can spawn when the game begins\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/PlayerStart/" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerStart, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag_MetaData[] = {
		{ "Category", "Object" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
		{ "ToolTip", "Used when searching for which playerstart to use." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag = { "PlayerStartTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerStart, PlayerStartTag), METADATA_PARAMS(Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerStart_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerStart_Statics::ClassParams = {
		&APlayerStart::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerStart_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlayerStart_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerStart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerStart, 1356777353);
	template<> ENGINE_API UClass* StaticClass<APlayerStart>()
	{
		return APlayerStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerStart(Z_Construct_UClass_APlayerStart, &APlayerStart::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

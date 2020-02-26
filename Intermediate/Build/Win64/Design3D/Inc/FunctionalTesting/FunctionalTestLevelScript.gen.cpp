// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/FunctionalTestLevelScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestLevelScript() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestLevelScript();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void AFunctionalTestLevelScript::StaticRegisterNativesAFunctionalTestLevelScript()
	{
	}
	UClass* Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister()
	{
		return AFunctionalTestLevelScript::StaticClass();
	}
	struct Z_Construct_UClass_AFunctionalTestLevelScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFunctionalTestLevelScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTestLevelScript_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FunctionalTestLevelScript.h" },
		{ "KismetHideOverrides", "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave" },
		{ "ModuleRelativePath", "Classes/FunctionalTestLevelScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFunctionalTestLevelScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalTestLevelScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalTestLevelScript_Statics::ClassParams = {
		&AFunctionalTestLevelScript::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFunctionalTestLevelScript_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFunctionalTestLevelScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFunctionalTestLevelScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFunctionalTestLevelScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFunctionalTestLevelScript, 2423853511);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalTestLevelScript>()
	{
		return AFunctionalTestLevelScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFunctionalTestLevelScript(Z_Construct_UClass_AFunctionalTestLevelScript, &AFunctionalTestLevelScript::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("AFunctionalTestLevelScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalTestLevelScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/GridPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPathFollowingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UGridPathFollowingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGridPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
// End Cross Module References
	void UGridPathFollowingComponent::StaticRegisterNativesUGridPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UGridPathFollowingComponent_NoRegister()
	{
		return UGridPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGridPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Navigation/GridPathFollowingComponent.h" },
		{ "ModuleRelativePath", "Classes/Navigation/GridPathFollowingComponent.h" },
		{ "ToolTip", "Path following augmented with local navigation grids\n\nKeeps track of nearby grids and use them instead of navigation path when agent is inside.\nOnce outside grid, regular path following is resumed.\n\nThis allows creating dynamic navigation obstacles with fully static navigation (e.g. static navmesh),\nas long as they are minor modifications for path. Not recommended for blocking off entire corridors.\n\nDoes not replace proper avoidance for dynamic obstacles!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/GridPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPathFollowingComponent, GridManager), Z_Construct_UClass_UNavLocalGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridPathFollowingComponent_Statics::ClassParams = {
		&UGridPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridPathFollowingComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGridPathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGridPathFollowingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGridPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridPathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridPathFollowingComponent, 537498291);
	template<> AIMODULE_API UClass* StaticClass<UGridPathFollowingComponent>()
	{
		return UGridPathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPathFollowingComponent(Z_Construct_UClass_UGridPathFollowingComponent, &UGridPathFollowingComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UGridPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

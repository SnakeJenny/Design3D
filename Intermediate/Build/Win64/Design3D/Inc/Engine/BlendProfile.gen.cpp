// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/BlendProfile.h"
#include "Engine/Classes/Animation/Skeleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendProfileBoneEntry();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FBlendProfileBoneEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendProfileBoneEntry, Z_Construct_UPackage__Script_Engine(), TEXT("BlendProfileBoneEntry"), sizeof(FBlendProfileBoneEntry), Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendProfileBoneEntry>()
{
	return FBlendProfileBoneEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendProfileBoneEntry(FBlendProfileBoneEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("BlendProfileBoneEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlendProfileBoneEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFBlendProfileBoneEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendProfileBoneEntry")),new UScriptStruct::TCppStructOps<FBlendProfileBoneEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlendProfileBoneEntry;
	struct Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "A single entry for a blend scale within a profile, mapping a bone to a blendscale" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendProfileBoneEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale = { "BlendScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendProfileBoneEntry, BlendScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendProfileBoneEntry, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendProfileBoneEntry",
		sizeof(FBlendProfileBoneEntry),
		alignof(FBlendProfileBoneEntry),
		Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendProfileBoneEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendProfileBoneEntry"), sizeof(FBlendProfileBoneEntry), Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Hash() { return 1931272391U; }
	void UBlendProfile::StaticRegisterNativesUBlendProfile()
	{
	}
	UClass* Z_Construct_UClass_UBlendProfile_NoRegister()
	{
		return UBlendProfile::StaticClass();
	}
	struct Z_Construct_UClass_UBlendProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProfileEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendProfile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/BlendProfile.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "A blend profile is a set of per-bone scales that can be used in transitions and blend lists\nto tweak the weights of specific bones. The scales are applied to the normal weight for that bone" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "List of blend scale entries" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries = { "ProfileEntries", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendProfile, ProfileEntries), METADATA_PARAMS(Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_Inner = { "ProfileEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlendProfileBoneEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "The skeleton that owns this profile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton = { "OwningSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendProfile, OwningSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlendProfile_Statics::ClassParams = {
		&UBlendProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendProfile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendProfile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlendProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlendProfile, 2650536667);
	template<> ENGINE_API UClass* StaticClass<UBlendProfile>()
	{
		return UBlendProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendProfile(Z_Construct_UClass_UBlendProfile, &UBlendProfile::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

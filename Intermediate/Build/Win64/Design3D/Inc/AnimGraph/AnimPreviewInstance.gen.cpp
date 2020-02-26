// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimPreviewInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimPreviewInstance() {}
// Cross Module References
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EMontagePreviewType();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance();
// End Cross Module References
	static UEnum* EMontagePreviewType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EMontagePreviewType, Z_Construct_UPackage__Script_AnimGraph(), TEXT("EMontagePreviewType"));
		}
		return Singleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EMontagePreviewType>()
	{
		return EMontagePreviewType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMontagePreviewType(EMontagePreviewType_StaticEnum, TEXT("/Script/AnimGraph"), TEXT("EMontagePreviewType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Hash() { return 4241645749U; }
	UEnum* Z_Construct_UEnum_AnimGraph_EMontagePreviewType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMontagePreviewType"), 0, Get_Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMPT_Normal", (int64)EMPT_Normal },
				{ "EMPT_AllSections", (int64)EMPT_AllSections },
				{ "EMPT_MAX", (int64)EMPT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EMPT_AllSections.ToolTip", "Playing all sections." },
				{ "EMPT_Normal.ToolTip", "Playing montage in usual way." },
				{ "ModuleRelativePath", "Classes/AnimPreviewInstance.h" },
				{ "ToolTip", "Enum to know how montage is being played" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
				nullptr,
				"EMontagePreviewType",
				"EMontagePreviewType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimPreviewInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy, Z_Construct_UPackage__Script_AnimGraph(), TEXT("AnimPreviewInstanceProxy"), sizeof(FAnimPreviewInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FAnimPreviewInstanceProxy>()
{
	return FAnimPreviewInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimPreviewInstanceProxy(FAnimPreviewInstanceProxy::StaticStruct, TEXT("/Script/AnimGraph"), TEXT("AnimPreviewInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraph_StaticRegisterNativesFAnimPreviewInstanceProxy
{
	FScriptStruct_AnimGraph_StaticRegisterNativesFAnimPreviewInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimPreviewInstanceProxy")),new UScriptStruct::TCppStructOps<FAnimPreviewInstanceProxy>);
	}
} ScriptStruct_AnimGraph_StaticRegisterNativesFAnimPreviewInstanceProxy;
	struct Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AnimPreviewInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPreviewInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy,
		&NewStructOps,
		"AnimPreviewInstanceProxy",
		sizeof(FAnimPreviewInstanceProxy),
		alignof(FAnimPreviewInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimPreviewInstanceProxy"), sizeof(FAnimPreviewInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Hash() { return 2189303441U; }
	void UAnimPreviewInstance::StaticRegisterNativesUAnimPreviewInstance()
	{
	}
	UClass* Z_Construct_UClass_UAnimPreviewInstance_NoRegister()
	{
		return UAnimPreviewInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimPreviewInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontagePreviewStartSectionIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MontagePreviewStartSectionIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontagePreviewType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MontagePreviewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimPreviewInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSingleNodeInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPreviewInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimPreviewInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/AnimPreviewInstance.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "This Instance only contains one AnimationAsset, and produce poses\nUsed by Preview in AnimGraph, Playing single animation in Kismet2 and etc" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimPreviewInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx = { "MontagePreviewStartSectionIdx", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimPreviewInstance, MontagePreviewStartSectionIdx), METADATA_PARAMS(Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimPreviewInstance.h" },
		{ "ToolTip", "Shared parameters for previewing blendspace or animsequence *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType = { "MontagePreviewType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimPreviewInstance, MontagePreviewType), Z_Construct_UEnum_AnimGraph_EMontagePreviewType, METADATA_PARAMS(Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimPreviewInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimPreviewInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimPreviewInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimPreviewInstance_Statics::ClassParams = {
		&UAnimPreviewInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimPreviewInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimPreviewInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimPreviewInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimPreviewInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimPreviewInstance, 259856474);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimPreviewInstance>()
	{
		return UAnimPreviewInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimPreviewInstance(Z_Construct_UClass_UAnimPreviewInstance, &UAnimPreviewInstance::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimPreviewInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimPreviewInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimPreviewInstance)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/Skeleton.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeleton() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualBone();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSlotGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigConfiguration();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameMapping();
	ENGINE_API UClass* Z_Construct_UClass_URig_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReductionSetting();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReferencePose();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToMeshLinkup();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
// End Cross Module References
	static UEnum* EBoneTranslationRetargetingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneTranslationRetargetingMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneTranslationRetargetingMode::Type>()
	{
		return EBoneTranslationRetargetingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneTranslationRetargetingMode(EBoneTranslationRetargetingMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneTranslationRetargetingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Hash() { return 1069876838U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneTranslationRetargetingMode"), 0, Get_Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoneTranslationRetargetingMode::Animation", (int64)EBoneTranslationRetargetingMode::Animation },
				{ "EBoneTranslationRetargetingMode::Skeleton", (int64)EBoneTranslationRetargetingMode::Skeleton },
				{ "EBoneTranslationRetargetingMode::AnimationScaled", (int64)EBoneTranslationRetargetingMode::AnimationScaled },
				{ "EBoneTranslationRetargetingMode::AnimationRelative", (int64)EBoneTranslationRetargetingMode::AnimationRelative },
				{ "EBoneTranslationRetargetingMode::OrientAndScale", (int64)EBoneTranslationRetargetingMode::OrientAndScale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animation.ToolTip", "Use translation from animation data." },
				{ "AnimationRelative.ToolTip", "Use Translation from animation, but also play the difference from retargeting pose as an additive." },
				{ "AnimationScaled.ToolTip", "Use Translation from animation, but scale length by Skeleton's proportions." },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "OrientAndScale.ToolTip", "Apply delta orientation and scale from ref pose" },
				{ "Skeleton.ToolTip", "Use fixed translation from Skeleton." },
				{ "ToolTip", "Bone translation retargeting mode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneTranslationRetargetingMode",
				"EBoneTranslationRetargetingMode::Type",
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
class UScriptStruct* FVirtualBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVirtualBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualBone, Z_Construct_UPackage__Script_Engine(), TEXT("VirtualBone"), sizeof(FVirtualBone), Get_Z_Construct_UScriptStruct_FVirtualBone_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualBone>()
{
	return FVirtualBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVirtualBone(FVirtualBone::StaticStruct, TEXT("/Script/Engine"), TEXT("VirtualBone"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVirtualBone
{
	FScriptStruct_Engine_StaticRegisterNativesFVirtualBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VirtualBone")),new UScriptStruct::TCppStructOps<FVirtualBone>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVirtualBone;
	struct Z_Construct_UScriptStruct_FVirtualBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VirtualBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualBone_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_VirtualBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_VirtualBoneName = { "VirtualBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualBone, VirtualBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_VirtualBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_VirtualBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_TargetBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualBone, TargetBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_TargetBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_TargetBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_SourceBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_SourceBoneName = { "SourceBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualBone, SourceBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_SourceBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_SourceBoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_VirtualBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_TargetBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_SourceBoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VirtualBone",
		sizeof(FVirtualBone),
		alignof(FVirtualBone),
		Z_Construct_UScriptStruct_FVirtualBone_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualBone_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVirtualBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VirtualBone"), sizeof(FVirtualBone), Get_Z_Construct_UScriptStruct_FVirtualBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVirtualBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVirtualBone_Hash() { return 2904061526U; }
class UScriptStruct* FAnimSlotGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSlotGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSlotGroup, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSlotGroup"), sizeof(FAnimSlotGroup), Get_Z_Construct_UScriptStruct_FAnimSlotGroup_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSlotGroup>()
{
	return FAnimSlotGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSlotGroup(FAnimSlotGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSlotGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSlotGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSlotGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSlotGroup")),new UScriptStruct::TCppStructOps<FAnimSlotGroup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSlotGroup;
	struct Z_Construct_UScriptStruct_FAnimSlotGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSlotGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames = { "SlotNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSlotGroup, SlotNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames_Inner = { "SlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSlotGroup, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_GroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimSlotGroup",
		sizeof(FAnimSlotGroup),
		alignof(FAnimSlotGroup),
		Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSlotGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSlotGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSlotGroup"), sizeof(FAnimSlotGroup), Get_Z_Construct_UScriptStruct_FAnimSlotGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSlotGroup_Hash() { return 560733957U; }
class UScriptStruct* FRigConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRigConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigConfiguration, Z_Construct_UPackage__Script_Engine(), TEXT("RigConfiguration"), sizeof(FRigConfiguration), Get_Z_Construct_UScriptStruct_FRigConfiguration_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRigConfiguration>()
{
	return FRigConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigConfiguration(FRigConfiguration::StaticStruct, TEXT("/Script/Engine"), TEXT("RigConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRigConfiguration
{
	FScriptStruct_Engine_StaticRegisterNativesFRigConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigConfiguration")),new UScriptStruct::TCppStructOps<FRigConfiguration>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRigConfiguration;
	struct Z_Construct_UScriptStruct_FRigConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMappingTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneMappingTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMappingTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_BoneMappingTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "@todo in the future we can make this to be run-time data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_BoneMappingTable = { "BoneMappingTable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigConfiguration, BoneMappingTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_BoneMappingTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_BoneMappingTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_BoneMappingTable_Inner = { "BoneMappingTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNameMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_Rig_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_Rig = { "Rig", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigConfiguration, Rig), Z_Construct_UClass_URig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_Rig_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_Rig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_BoneMappingTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_BoneMappingTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConfiguration_Statics::NewProp_Rig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RigConfiguration",
		sizeof(FRigConfiguration),
		alignof(FRigConfiguration),
		Z_Construct_UScriptStruct_FRigConfiguration_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigConfiguration_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigConfiguration"), sizeof(FRigConfiguration), Get_Z_Construct_UScriptStruct_FRigConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigConfiguration_Hash() { return 2986259869U; }
class UScriptStruct* FNameMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNameMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameMapping, Z_Construct_UPackage__Script_Engine(), TEXT("NameMapping"), sizeof(FNameMapping), Get_Z_Construct_UScriptStruct_FNameMapping_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNameMapping>()
{
	return FNameMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNameMapping(FNameMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("NameMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNameMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFNameMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NameMapping")),new UScriptStruct::TCppStructOps<FNameMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNameMapping;
	struct Z_Construct_UScriptStruct_FNameMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NodeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNameMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_BoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNameMapping, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNameMapping, NodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_NodeName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_NodeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_NodeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NameMapping",
		sizeof(FNameMapping),
		alignof(FNameMapping),
		Z_Construct_UScriptStruct_FNameMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNameMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNameMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNameMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNameMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNameMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NameMapping"), sizeof(FNameMapping), Get_Z_Construct_UScriptStruct_FNameMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNameMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNameMapping_Hash() { return 3765582330U; }
class UScriptStruct* FBoneReductionSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneReductionSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneReductionSetting, Z_Construct_UPackage__Script_Engine(), TEXT("BoneReductionSetting"), sizeof(FBoneReductionSetting), Get_Z_Construct_UScriptStruct_FBoneReductionSetting_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneReductionSetting>()
{
	return FBoneReductionSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneReductionSetting(FBoneReductionSetting::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneReductionSetting"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneReductionSetting
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneReductionSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneReductionSetting")),new UScriptStruct::TCppStructOps<FBoneReductionSetting>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneReductionSetting;
	struct Z_Construct_UScriptStruct_FBoneReductionSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BonesToRemove_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneReductionSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove = { "BonesToRemove", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneReductionSetting, BonesToRemove), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove_Inner = { "BonesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneReductionSetting",
		sizeof(FBoneReductionSetting),
		alignof(FBoneReductionSetting),
		Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneReductionSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneReductionSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneReductionSetting"), sizeof(FBoneReductionSetting), Get_Z_Construct_UScriptStruct_FBoneReductionSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneReductionSetting_Hash() { return 3113548199U; }
class UScriptStruct* FReferencePose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FReferencePose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencePose, Z_Construct_UPackage__Script_Engine(), TEXT("ReferencePose"), sizeof(FReferencePose), Get_Z_Construct_UScriptStruct_FReferencePose_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FReferencePose>()
{
	return FReferencePose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReferencePose(FReferencePose::StaticStruct, TEXT("/Script/Engine"), TEXT("ReferencePose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFReferencePose
{
	FScriptStruct_Engine_StaticRegisterNativesFReferencePose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReferencePose")),new UScriptStruct::TCppStructOps<FReferencePose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFReferencePose;
	struct Z_Construct_UScriptStruct_FReferencePose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceReferenceMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SourceReferenceMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencePose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencePose_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PoseName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencePose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReferencePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencePose>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_SourceReferenceMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_SourceReferenceMesh = { "SourceReferenceMesh", nullptr, (EPropertyFlags)0x0014000800000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReferencePose, SourceReferenceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_SourceReferenceMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_SourceReferenceMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose = { "ReferencePose", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReferencePose, ReferencePose), METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose_Inner = { "ReferencePose", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_PoseName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReferencePose, PoseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_PoseName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_PoseName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferencePose_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_SourceReferenceMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_PoseName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferencePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ReferencePose",
		sizeof(FReferencePose),
		alignof(FReferencePose),
		Z_Construct_UScriptStruct_FReferencePose_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencePose_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReferencePose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReferencePose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReferencePose"), sizeof(FReferencePose), Get_Z_Construct_UScriptStruct_FReferencePose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReferencePose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReferencePose_Hash() { return 1916362032U; }
class UScriptStruct* FBoneNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneNode, Z_Construct_UPackage__Script_Engine(), TEXT("BoneNode"), sizeof(FBoneNode), Get_Z_Construct_UScriptStruct_FBoneNode_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneNode>()
{
	return FBoneNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneNode(FBoneNode::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneNode
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneNode")),new UScriptStruct::TCppStructOps<FBoneNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneNode;
	struct Z_Construct_UScriptStruct_FBoneNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationRetargetingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationRetargetingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Each Bone node in BoneTree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_TranslationRetargetingMode_MetaData[] = {
		{ "Category", "BoneNode" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Retargeting Mode for Translation Component." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_TranslationRetargetingMode = { "TranslationRetargetingMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneNode, TranslationRetargetingMode), Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_TranslationRetargetingMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_TranslationRetargetingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Parent Index. -1 if not used. The root has 0 as its parent. Do not delete the element but set this to -1. If it is revived by other reason, fix up this link." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneNode, ParentIndex_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_ParentIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_ParentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Name of bone, this is the search criteria to match with mesh bone. This will be NAME_None if deleted." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneNode, Name_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_TranslationRetargetingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_ParentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneNode",
		sizeof(FBoneNode),
		alignof(FBoneNode),
		Z_Construct_UScriptStruct_FBoneNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneNode"), sizeof(FBoneNode), Get_Z_Construct_UScriptStruct_FBoneNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneNode_Hash() { return 266928818U; }
class UScriptStruct* FSkeletonToMeshLinkup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletonToMeshLinkup"), sizeof(FSkeletonToMeshLinkup), Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletonToMeshLinkup>()
{
	return FSkeletonToMeshLinkup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletonToMeshLinkup(FSkeletonToMeshLinkup::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletonToMeshLinkup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletonToMeshLinkup
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletonToMeshLinkup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletonToMeshLinkup")),new UScriptStruct::TCppStructOps<FSkeletonToMeshLinkup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletonToMeshLinkup;
	struct Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshToSkeletonTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshToSkeletonTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshToSkeletonTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonToMeshTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletonToMeshTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonToMeshTable_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletonToMeshLinkup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Mapping table. Size must be same as size of ref pose (not bone tree).\nNo index should be more than the number of bones in this skeletalmesh\n-1 indicates no match for this bone - will be ignored." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable = { "MeshToSkeletonTable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonToMeshLinkup, MeshToSkeletonTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable_Inner = { "MeshToSkeletonTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Mapping table. Size must be same as size of bone tree (not Mesh Ref Pose).\nNo index should be more than the number of bones in this skeleton\n-1 indicates no match for this bone - will be ignored." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable = { "SkeletonToMeshTable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonToMeshLinkup, SkeletonToMeshTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable_Inner = { "SkeletonToMeshTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletonToMeshLinkup",
		sizeof(FSkeletonToMeshLinkup),
		alignof(FSkeletonToMeshLinkup),
		Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToMeshLinkup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletonToMeshLinkup"), sizeof(FSkeletonToMeshLinkup), Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Hash() { return 3097245472U; }
	void USkeleton::StaticRegisterNativesUSkeleton()
	{
	}
	UClass* Z_Construct_UClass_USkeleton_NoRegister()
	{
		return USkeleton::StaticClass();
	}
	struct Z_Construct_UClass_USkeleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAttachedAssetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewAttachedAssetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationNotifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationNotifies;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationNotifies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RigConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RigConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalPreviewSkeletalMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AdditionalPreviewSkeletalMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendProfiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfiles_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmartNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmartNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VirtualBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefLocalPoses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RefLocalPoses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefLocalPoses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTree;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTree_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Skeleton.h" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "USkeleton : that links between mesh and animation\n        - Bone hierarchy for animations\n        - Bone/track linkup between mesh and animation\n        - Retargetting related\n        - Mirror table" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00200c8000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, AssetUserData), METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewAttachedAssetContainer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Attached assets component for this skeleton" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewAttachedAssetContainer = { "PreviewAttachedAssetContainer", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, PreviewAttachedAssetContainer), Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewAttachedAssetContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewAttachedAssetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "AnimNotifiers that has been created. Right now there is no delete step for this, but in the future we'll supply delete*" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies = { "AnimationNotifies", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, AnimationNotifies), METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies_Inner = { "AnimationNotifies", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_RigConfig_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_RigConfig = { "RigConfig", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, RigConfig), Z_Construct_UScriptStruct_FRigConfiguration, METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_RigConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_RigConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_AdditionalPreviewSkeletalMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "The additional skeletal meshes to use when previewing this skeleton" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AdditionalPreviewSkeletalMeshes = { "AdditionalPreviewSkeletalMeshes", nullptr, (EPropertyFlags)0x0044010800200000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, AdditionalPreviewSkeletalMeshes), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_AdditionalPreviewSkeletalMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_AdditionalPreviewSkeletalMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this skeleton" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800200000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewSkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "serialized slot groups and slot names." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups = { "SlotGroups", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, SlotGroups), METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups_Inner = { "SlotGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimSlotGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "List of blend profiles available in this skeleton" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles = { "BlendProfiles", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, BlendProfiles), METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "List of blend profiles available in this skeleton" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_Inner = { "BlendProfiles", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_SmartNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Container for smart name mappings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_SmartNames = { "SmartNames", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, SmartNames), Z_Construct_UScriptStruct_FSmartNameContainer, METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_SmartNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_SmartNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, Sockets), METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of this skeletons virtual bones. These are new bones are links between two existing bones\nand are baked into all the skeletons animations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones = { "VirtualBones", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, VirtualBones), METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones_Inner = { "VirtualBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVirtualBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBoneGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Guid for virtual bones.\nSeparate so that we don't have to dirty the original guid when only changing virtual bones" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBoneGuid = { "VirtualBoneGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBoneGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBoneGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Reference skeleton poses in local space" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses = { "RefLocalPoses", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, RefLocalPoses_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses_Inner = { "RefLocalPoses", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree = { "BoneTree", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeleton, BoneTree), METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree_Inner = { "BoneTree", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewAttachedAssetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_RigConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AdditionalPreviewSkeletalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewSkeletalMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_SmartNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBoneGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeleton_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USkeleton, IInterface_AssetUserData), false },
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(USkeleton, IInterface_PreviewMeshProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeleton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeleton_Statics::ClassParams = {
		&USkeleton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeleton_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeleton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeleton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeleton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeleton, 1024749093);
	template<> ENGINE_API UClass* StaticClass<USkeleton>()
	{
		return USkeleton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeleton(Z_Construct_UClass_USkeleton, &USkeleton::StaticClass, TEXT("/Script/Engine"), TEXT("USkeleton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeleton);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeleton)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

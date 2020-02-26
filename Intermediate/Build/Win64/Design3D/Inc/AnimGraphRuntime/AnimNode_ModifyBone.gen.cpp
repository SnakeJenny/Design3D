// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_ModifyBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static UEnum* EBoneModificationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EBoneModificationMode"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EBoneModificationMode>()
	{
		return EBoneModificationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneModificationMode(EBoneModificationMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EBoneModificationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Hash() { return 4121931328U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneModificationMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BMM_Ignore", (int64)BMM_Ignore },
				{ "BMM_Replace", (int64)BMM_Replace },
				{ "BMM_Additive", (int64)BMM_Additive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BMM_Additive.DisplayName", "Add to Existing" },
				{ "BMM_Additive.ToolTip", "The modifier adds to the existing translation, rotation, or scale." },
				{ "BMM_Ignore.DisplayName", "Ignore" },
				{ "BMM_Ignore.ToolTip", "The modifier ignores this channel (keeps the existing bone translation, rotation, or scale)." },
				{ "BMM_Replace.DisplayName", "Replace Existing" },
				{ "BMM_Replace.ToolTip", "The modifier replaces the existing translation, rotation, or scale." },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"EBoneModificationMode",
				"EBoneModificationMode",
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
class UScriptStruct* FAnimNode_ModifyBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyBone, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ModifyBone"), sizeof(FAnimNode_ModifyBone), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ModifyBone>()
{
	return FAnimNode_ModifyBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ModifyBone(FAnimNode_ModifyBone::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_ModifyBone"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyBone
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ModifyBone")),new UScriptStruct::TCppStructOps<FAnimNode_ModifyBone>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyBone;
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace_MetaData[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Scale in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace = { "ScaleSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, ScaleSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Rotation in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, RotationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Translation in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace = { "TranslationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, TranslationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode_MetaData[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode = { "ScaleMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, ScaleMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, RotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, TranslationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New Scale of bone to apply. This is only worldspace." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New rotation of bone to apply." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New translation of bone to apply." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ModifyBone",
		sizeof(FAnimNode_ModifyBone),
		alignof(FAnimNode_ModifyBone),
		Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ModifyBone"), sizeof(FAnimNode_ModifyBone), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Hash() { return 2816844215U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

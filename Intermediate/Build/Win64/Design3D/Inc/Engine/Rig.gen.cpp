// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/Rig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRig() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConstraintTransform();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EControlConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformBaseConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigTransformConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_URig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
// End Cross Module References
	static UEnum* EConstraintTransform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EConstraintTransform, Z_Construct_UPackage__Script_Engine(), TEXT("EConstraintTransform"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EConstraintTransform::Type>()
	{
		return EConstraintTransform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstraintTransform(EConstraintTransform_StaticEnum, TEXT("/Script/Engine"), TEXT("EConstraintTransform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EConstraintTransform_Hash() { return 2335985946U; }
	UEnum* Z_Construct_UEnum_Engine_EConstraintTransform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstraintTransform"), 0, Get_Z_Construct_UEnum_Engine_EConstraintTransform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstraintTransform::Absolute", (int64)EConstraintTransform::Absolute },
				{ "EConstraintTransform::Relative", (int64)EConstraintTransform::Relative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.ToolTip", "Absolute value." },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "Relative.ToolTip", "Apply relative transform from ref pose." },
				{ "ToolTip", "Constraint Transform Type. - currently unused" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EConstraintTransform",
				"EConstraintTransform::Type",
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
	static UEnum* EControlConstraint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EControlConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("EControlConstraint"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EControlConstraint::Type>()
	{
		return EControlConstraint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControlConstraint(EControlConstraint_StaticEnum, TEXT("/Script/Engine"), TEXT("EControlConstraint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EControlConstraint_Hash() { return 58728413U; }
	UEnum* Z_Construct_UEnum_Engine_EControlConstraint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControlConstraint"), 0, Get_Z_Construct_UEnum_Engine_EControlConstraint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EControlConstraint::Orientation", (int64)EControlConstraint::Orientation },
				{ "EControlConstraint::Translation", (int64)EControlConstraint::Translation },
				{ "EControlConstraint::MAX", (int64)EControlConstraint::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MAX.ToolTip", "Max Number." },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "Orientation.ToolTip", "Rotation constraint." },
				{ "ToolTip", "Control Constraint Type" },
				{ "Translation.ToolTip", "Translation constraint." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EControlConstraint",
				"EControlConstraint::Type",
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
class UScriptStruct* FTransformBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTransformBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformBase, Z_Construct_UPackage__Script_Engine(), TEXT("TransformBase"), sizeof(FTransformBase), Get_Z_Construct_UScriptStruct_FTransformBase_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTransformBase>()
{
	return FTransformBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformBase(FTransformBase::StaticStruct, TEXT("/Script/Engine"), TEXT("TransformBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTransformBase
{
	FScriptStruct_Engine_StaticRegisterNativesFTransformBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformBase")),new UScriptStruct::TCppStructOps<FTransformBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTransformBase;
	struct Z_Construct_UScriptStruct_FTransformBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints_MetaData[] = {
		{ "Category", "FTransformBase" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Constraints, FTransformBase), STRUCT_OFFSET(FTransformBase, Constraints), Z_Construct_UScriptStruct_FTransformBaseConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "FTransformBase" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformBase, Node), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TransformBase",
		sizeof(FTransformBase),
		alignof(FTransformBase),
		Z_Construct_UScriptStruct_FTransformBase_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformBase"), sizeof(FTransformBase), Get_Z_Construct_UScriptStruct_FTransformBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformBase_Hash() { return 3723023057U; }
class UScriptStruct* FTransformBaseConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformBaseConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("TransformBaseConstraint"), sizeof(FTransformBaseConstraint), Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTransformBaseConstraint>()
{
	return FTransformBaseConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformBaseConstraint(FTransformBaseConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("TransformBaseConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTransformBaseConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFTransformBaseConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformBaseConstraint")),new UScriptStruct::TCppStructOps<FTransformBaseConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTransformBaseConstraint;
	struct Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformConstraints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformConstraints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformConstraints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "This defines what constraint it is defined" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformBaseConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_MetaData[] = {
		{ "Category", "FTransformBaseConstraint" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "What transform type *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints = { "TransformConstraints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformBaseConstraint, TransformConstraints), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_Inner = { "TransformConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRigTransformConstraint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TransformBaseConstraint",
		sizeof(FTransformBaseConstraint),
		alignof(FTransformBaseConstraint),
		Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformBaseConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformBaseConstraint"), sizeof(FTransformBaseConstraint), Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_Hash() { return 1445174981U; }
class UScriptStruct* FRigTransformConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRigTransformConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("RigTransformConstraint"), sizeof(FRigTransformConstraint), Get_Z_Construct_UScriptStruct_FRigTransformConstraint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRigTransformConstraint>()
{
	return FRigTransformConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigTransformConstraint(FRigTransformConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("RigTransformConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRigTransformConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFRigTransformConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigTransformConstraint")),new UScriptStruct::TCppStructOps<FRigTransformConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRigTransformConstraint;
	struct Z_Construct_UScriptStruct_FRigTransformConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranformType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranformType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTransformConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "EditAnywhere, Category=\"FTransformBaseConstraint\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigTransformConstraint, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace_MetaData[] = {
		{ "Category", "FTransformBaseConstraint" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Parent space that are define *" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace = { "ParentSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigTransformConstraint, ParentSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "EditAnywhere, Category=\"FTransformBaseConstraint\"" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType = { "TranformType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigTransformConstraint, TranformType), Z_Construct_UEnum_Engine_EConstraintTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RigTransformConstraint",
		sizeof(FRigTransformConstraint),
		alignof(FRigTransformConstraint),
		Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigTransformConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigTransformConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigTransformConstraint"), sizeof(FRigTransformConstraint), Get_Z_Construct_UScriptStruct_FRigTransformConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigTransformConstraint_Hash() { return 484818115U; }
class UScriptStruct* FNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNode, Z_Construct_UPackage__Script_Engine(), TEXT("Node"), sizeof(FNode), Get_Z_Construct_UScriptStruct_FNode_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNode>()
{
	return FNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNode(FNode::StaticStruct, TEXT("/Script/Engine"), TEXT("Node"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNode
{
	FScriptStruct_Engine_StaticRegisterNativesFNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Node")),new UScriptStruct::TCppStructOps<FNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNode;
	struct Z_Construct_UScriptStruct_FNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdvanced_MetaData[];
#endif
		static void NewProp_bAdvanced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdvanced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Rig Controller for bone transform *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_MetaData[] = {
		{ "Category", "FNode" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_SetBit(void* Obj)
	{
		((FNode*)Obj)->bAdvanced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced = { "bAdvanced", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNode), &Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "FNode" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "This is Display Name where it will be used to display in Retarget Manager. This name has to be unique." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNode, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Absolute transform of the node. Hoping to use this data in the future to render" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName_MetaData[] = {
		{ "Category", "FNode" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "We save Parent Node but if the parent node is removed, it will reset to root" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNode, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FNode" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Name of the original node. We don't allow to change this. This is used for identity.*" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNode, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"Node",
		sizeof(FNode),
		alignof(FNode),
		Z_Construct_UScriptStruct_FNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Node"), sizeof(FNode), Get_Z_Construct_UScriptStruct_FNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNode_Hash() { return 3992921219U; }
	void URig::StaticRegisterNativesURig()
	{
	}
	UClass* Z_Construct_UClass_URig_NoRegister()
	{
		return URig::StaticClass();
	}
	struct Z_Construct_UClass_URig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformBases_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformBases;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformBases_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URig_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Rig.h" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "URig : that has rigging data for skeleton\n        - used for retargeting\n        - support to share different animations" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URig_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "Rig" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URig_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URig, Nodes), METADATA_PARAMS(Z_Construct_UClass_URig_Statics::NewProp_Nodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_URig_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URig_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URig_Statics::NewProp_TransformBases_MetaData[] = {
		{ "Category", "Rig" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URig_Statics::NewProp_TransformBases = { "TransformBases", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URig, TransformBases), METADATA_PARAMS(Z_Construct_UClass_URig_Statics::NewProp_TransformBases_MetaData, ARRAY_COUNT(Z_Construct_UClass_URig_Statics::NewProp_TransformBases_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URig_Statics::NewProp_TransformBases_Inner = { "TransformBases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransformBase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URig_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URig_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URig_Statics::NewProp_TransformBases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URig_Statics::NewProp_TransformBases_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URig_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister, (int32)VTABLE_OFFSET(URig, INodeMappingProviderInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URig_Statics::ClassParams = {
		&URig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URig_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_URig_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_URig_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URig, 582109430);
	template<> ENGINE_API UClass* StaticClass<URig>()
	{
		return URig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URig(Z_Construct_UClass_URig, &URig::StaticClass, TEXT("/Script/Engine"), TEXT("URig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URig)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

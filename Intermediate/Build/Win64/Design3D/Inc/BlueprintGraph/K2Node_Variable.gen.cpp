// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_Variable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Variable() {}
// Cross Module References
	BLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
// End Cross Module References
	static UEnum* ESelfContextInfo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("ESelfContextInfo"));
		}
		return Singleton;
	}
	template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ESelfContextInfo::Type>()
	{
		return ESelfContextInfo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelfContextInfo(ESelfContextInfo_StaticEnum, TEXT("/Script/BlueprintGraph"), TEXT("ESelfContextInfo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Hash() { return 4064737174U; }
	UEnum* Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelfContextInfo"), 0, Get_Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelfContextInfo::Unspecified", (int64)ESelfContextInfo::Unspecified },
				{ "ESelfContextInfo::NotSelfContext", (int64)ESelfContextInfo::NotSelfContext },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGraph,
				nullptr,
				"ESelfContextInfo",
				"ESelfContextInfo::Type",
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
	void UK2Node_Variable::StaticRegisterNativesUK2Node_Variable()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_Variable_NoRegister()
	{
		return UK2Node_Variable::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Variable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelfContext_MetaData[];
#endif
		static void NewProp_bSelfContext_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableSourceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VariableSourceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfContextInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelfContextInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariableReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Variable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Variable.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "ToolTip", "Whether or not this should be a \"self\" context" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_SetBit(void* Obj)
	{
		((UK2Node_Variable*)Obj)->bSelfContext_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext = { "bSelfContext", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Variable), &Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "ToolTip", "Name of variable" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Variable, VariableName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "ToolTip", "Class that this variable is defined in. Should be NULL if bSelfContext is true." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass = { "VariableSourceClass", nullptr, (EPropertyFlags)0x0024080020000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Variable, VariableSourceClass_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo = { "SelfContextInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Variable, SelfContextInfo), Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference_MetaData[] = {
		{ "BlueprintSearchable", "true" },
		{ "BlueprintSearchableHiddenExplicit", "true" },
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "ToolTip", "Reference to variable we want to set/get" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference = { "VariableReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Variable, VariableReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Variable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Variable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Variable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Variable_Statics::ClassParams = {
		&UK2Node_Variable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Variable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Variable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_Variable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_Variable, 1199487843);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Variable>()
	{
		return UK2Node_Variable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_Variable(Z_Construct_UClass_UK2Node_Variable, &UK2Node_Variable::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_Variable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Variable);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Variable)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

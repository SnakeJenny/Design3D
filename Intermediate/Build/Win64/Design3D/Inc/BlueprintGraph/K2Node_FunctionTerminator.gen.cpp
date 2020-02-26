// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_FunctionTerminator.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_FunctionTerminator() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionTerminator_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionTerminator();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
// End Cross Module References
	void UK2Node_FunctionTerminator::StaticRegisterNativesUK2Node_FunctionTerminator()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_FunctionTerminator_NoRegister()
	{
		return UK2Node_FunctionTerminator::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_FunctionTerminator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignatureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SignatureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignatureClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SignatureClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_EditablePinBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_FunctionTerminator.h" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionTerminator.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FunctionTerminator.h" },
		{ "ToolTip", "(DEPRECATED) Function signature name. Replaced by the 'FunctionReference' property." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName = { "SignatureName", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_FunctionTerminator, SignatureName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FunctionTerminator.h" },
		{ "ToolTip", "(DEPRECATED) Function signature class. Replaced by the 'FunctionReference' property." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass = { "SignatureClass", nullptr, (EPropertyFlags)0x0044000020000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_FunctionTerminator, SignatureClass_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FunctionTerminator.h" },
		{ "ToolTip", "Reference to the function signature." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference = { "FunctionReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_FunctionTerminator, FunctionReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_FunctionTerminator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::ClassParams = {
		&UK2Node_FunctionTerminator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_FunctionTerminator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_FunctionTerminator, 3786445549);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_FunctionTerminator>()
	{
		return UK2Node_FunctionTerminator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_FunctionTerminator(Z_Construct_UClass_UK2Node_FunctionTerminator, &UK2Node_FunctionTerminator::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_FunctionTerminator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_FunctionTerminator);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_FunctionTerminator)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

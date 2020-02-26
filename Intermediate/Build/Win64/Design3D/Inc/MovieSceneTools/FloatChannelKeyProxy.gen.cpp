// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTools/Private/Channels/FloatChannelKeyProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatChannelKeyProxy() {}
// Cross Module References
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UFloatChannelKeyProxy_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UFloatChannelKeyProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneKeyProxy_NoRegister();
// End Cross Module References
	void UFloatChannelKeyProxy::StaticRegisterNativesUFloatChannelKeyProxy()
	{
	}
	UClass* Z_Construct_UClass_UFloatChannelKeyProxy_NoRegister()
	{
		return UFloatChannelKeyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFloatChannelKeyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatChannelKeyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatChannelKeyProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Channels/FloatChannelKeyProxy.h" },
		{ "ModuleRelativePath", "Private/Channels/FloatChannelKeyProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Private/Channels/FloatChannelKeyProxy.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "User-facing value of the key, applied to the actual key on PostEditChange, and updated every tick" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatChannelKeyProxy, Value), Z_Construct_UScriptStruct_FMovieSceneFloatValue, METADATA_PARAMS(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Private/Channels/FloatChannelKeyProxy.h" },
		{ "ToolTip", "User-facing time of the key, applied to the actual key on PostEditChange, and updated every tick" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatChannelKeyProxy, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatChannelKeyProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFloatChannelKeyProxy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister, (int32)VTABLE_OFFSET(UFloatChannelKeyProxy, ICurveEditorKeyProxy), false },
			{ Z_Construct_UClass_UMovieSceneKeyProxy_NoRegister, (int32)VTABLE_OFFSET(UFloatChannelKeyProxy, IMovieSceneKeyProxy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatChannelKeyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatChannelKeyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatChannelKeyProxy_Statics::ClassParams = {
		&UFloatChannelKeyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatChannelKeyProxy_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatChannelKeyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatChannelKeyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatChannelKeyProxy, 233466632);
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UFloatChannelKeyProxy>()
	{
		return UFloatChannelKeyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatChannelKeyProxy(Z_Construct_UClass_UFloatChannelKeyProxy, &UFloatChannelKeyProxy::StaticClass, TEXT("/Script/MovieSceneTools"), TEXT("UFloatChannelKeyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatChannelKeyProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

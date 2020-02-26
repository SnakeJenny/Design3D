// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_NoExportTypes_generated_h
#error "NoExportTypes.generated.h already included, missing '#pragma once' in NoExportTypes.h"
#endif
#define COREUOBJECT_NoExportTypes_generated_h

#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_RPC_WRAPPERS
#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_EVENT_PARMS \
	struct Object_eventExecuteUbergraph_Parms \
	{ \
		int32 EntryPoint; \
	};


#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObject(); \
public: \
	DECLARE_CLASS(UObject, None, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UObject)


#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_INCLASS \
private: \
	static void StaticRegisterNativesUObject(); \
public: \
	DECLARE_CLASS(UObject, None, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UObject)


#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObject) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObject(UObject&&); \
	NO_API UObject(const UObject&); \
public:


#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObject(UObject&&); \
	NO_API UObject(const UObject&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObject)


#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1433_PROLOG \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_EVENT_PARMS


#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_RPC_WRAPPERS \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_INCLASS \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_1436_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h


#define FOREACH_ENUM_EAUTOMATIONEVENTTYPE(op) \
	op(EAutomationEventType::Info) \
	op(EAutomationEventType::Warning) \
	op(EAutomationEventType::Error) 

enum class EAutomationEventType : uint8;
template<> COREUOBJECT_API UEnum* StaticEnum<EAutomationEventType>();

#define FOREACH_ENUM_ELOCALIZEDTEXTSOURCECATEGORY(op) \
	op(ELocalizedTextSourceCategory::Game) \
	op(ELocalizedTextSourceCategory::Engine) \
	op(ELocalizedTextSourceCategory::Editor) 

enum class ELocalizedTextSourceCategory : uint8;
template<> COREUOBJECT_API UEnum* StaticEnum<ELocalizedTextSourceCategory>();

#define FOREACH_ENUM_ERANGEBOUNDTYPES(op) \
	op(ERangeBoundTypes::Exclusive) \
	op(ERangeBoundTypes::Inclusive) \
	op(ERangeBoundTypes::Open) 
#define FOREACH_ENUM_EUNIT(op) \
	op(EUnit::Micrometers) \
	op(EUnit::Millimeters) \
	op(EUnit::Centimeters) \
	op(EUnit::Meters) \
	op(EUnit::Kilometers) \
	op(EUnit::Inches) \
	op(EUnit::Feet) \
	op(EUnit::Yards) \
	op(EUnit::Miles) \
	op(EUnit::Lightyears) \
	op(EUnit::Degrees) \
	op(EUnit::Radians) \
	op(EUnit::MetersPerSecond) \
	op(EUnit::KilometersPerHour) \
	op(EUnit::MilesPerHour) \
	op(EUnit::Celsius) \
	op(EUnit::Farenheit) \
	op(EUnit::Kelvin) \
	op(EUnit::Micrograms) \
	op(EUnit::Milligrams) \
	op(EUnit::Grams) \
	op(EUnit::Kilograms) \
	op(EUnit::MetricTons) \
	op(EUnit::Ounces) \
	op(EUnit::Pounds) \
	op(EUnit::Stones) \
	op(EUnit::Newtons) \
	op(EUnit::PoundsForce) \
	op(EUnit::KilogramsForce) \
	op(EUnit::Hertz) \
	op(EUnit::Kilohertz) \
	op(EUnit::Megahertz) \
	op(EUnit::Gigahertz) \
	op(EUnit::RevolutionsPerMinute) \
	op(EUnit::Bytes) \
	op(EUnit::Kilobytes) \
	op(EUnit::Megabytes) \
	op(EUnit::Gigabytes) \
	op(EUnit::Terabytes) \
	op(EUnit::Lumens) \
	op(EUnit::Milliseconds) \
	op(EUnit::Seconds) \
	op(EUnit::Minutes) \
	op(EUnit::Hours) \
	op(EUnit::Days) \
	op(EUnit::Months) \
	op(EUnit::Years) \
	op(EUnit::Multiplier) \
	op(EUnit::Percentage) \
	op(EUnit::Unspecified) 

enum class EUnit : uint8;
template<> COREUOBJECT_API UEnum* StaticEnum<EUnit>();

#define FOREACH_ENUM_EMOUSECURSOR(op) \
	op(EMouseCursor::None) \
	op(EMouseCursor::Default) \
	op(EMouseCursor::TextEditBeam) \
	op(EMouseCursor::ResizeLeftRight) \
	op(EMouseCursor::ResizeUpDown) \
	op(EMouseCursor::ResizeSouthEast) \
	op(EMouseCursor::ResizeSouthWest) \
	op(EMouseCursor::CardinalCross) \
	op(EMouseCursor::Crosshairs) \
	op(EMouseCursor::Hand) \
	op(EMouseCursor::GrabHand) \
	op(EMouseCursor::GrabHandClosed) \
	op(EMouseCursor::SlashedCircle) \
	op(EMouseCursor::EyeDropper) 
#define FOREACH_ENUM_EPIXELFORMAT(op) \
	op(PF_Unknown) \
	op(PF_A32B32G32R32F) \
	op(PF_B8G8R8A8) \
	op(PF_G8) \
	op(PF_G16) \
	op(PF_DXT1) \
	op(PF_DXT3) \
	op(PF_DXT5) \
	op(PF_UYVY) \
	op(PF_FloatRGB) \
	op(PF_FloatRGBA) \
	op(PF_DepthStencil) \
	op(PF_ShadowDepth) \
	op(PF_R32_FLOAT) \
	op(PF_G16R16) \
	op(PF_G16R16F) \
	op(PF_G16R16F_FILTER) \
	op(PF_G32R32F) \
	op(PF_A2B10G10R10) \
	op(PF_A16B16G16R16) \
	op(PF_D24) \
	op(PF_R16F) \
	op(PF_R16F_FILTER) \
	op(PF_BC5) \
	op(PF_V8U8) \
	op(PF_A1) \
	op(PF_FloatR11G11B10) \
	op(PF_A8) \
	op(PF_R32_UINT) \
	op(PF_R32_SINT) \
	op(PF_PVRTC2) \
	op(PF_PVRTC4) \
	op(PF_R16_UINT) \
	op(PF_R16_SINT) \
	op(PF_R16G16B16A16_UINT) \
	op(PF_R16G16B16A16_SINT) \
	op(PF_R5G6B5_UNORM) \
	op(PF_R8G8B8A8) \
	op(PF_A8R8G8B8) \
	op(PF_BC4) \
	op(PF_R8G8) \
	op(PF_ATC_RGB) \
	op(PF_ATC_RGBA_E) \
	op(PF_ATC_RGBA_I) \
	op(PF_X24_G8) \
	op(PF_ETC1) \
	op(PF_ETC2_RGB) \
	op(PF_ETC2_RGBA) \
	op(PF_R32G32B32A32_UINT) \
	op(PF_R16G16_UINT) \
	op(PF_ASTC_4x4) \
	op(PF_ASTC_6x6) \
	op(PF_ASTC_8x8) \
	op(PF_ASTC_10x10) \
	op(PF_ASTC_12x12) \
	op(PF_BC6H) \
	op(PF_BC7) \
	op(PF_R8_UINT) \
	op(PF_L8) \
	op(PF_XGXR8) \
	op(PF_R8G8B8A8_UINT) \
	op(PF_R8G8B8A8_SNORM) \
	op(PF_R16G16B16A16_UNORM) \
	op(PF_R16G16B16A16_SNORM) \
	op(PF_PLATFORM_HDR_0) \
	op(PF_PLATFORM_HDR_1) \
	op(PF_PLATFORM_HDR_2) \
	op(PF_NV12) 
#define FOREACH_ENUM_EINTERPCURVEMODE(op) \
	op(CIM_Linear) \
	op(CIM_CurveAuto) \
	op(CIM_Constant) \
	op(CIM_CurveUser) \
	op(CIM_CurveBreak) \
	op(CIM_CurveAutoClamped) 
#define FOREACH_ENUM_EAXIS(op) \
	op(EAxis::None) \
	op(EAxis::X) \
	op(EAxis::Y) \
	op(EAxis::Z) 
#define FOREACH_ENUM_ELOGTIMES(op) \
	op(ELogTimes::None) \
	op(ELogTimes::UTC) \
	op(ELogTimes::SinceGStartTime) \
	op(ELogTimes::Local) 
#define FOREACH_ENUM_ESEARCHDIR(op) \
	op(ESearchDir::FromStart) \
	op(ESearchDir::FromEnd) 
#define FOREACH_ENUM_ESEARCHCASE(op) \
	op(ESearchCase::CaseSensitive) \
	op(ESearchCase::IgnoreCase) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

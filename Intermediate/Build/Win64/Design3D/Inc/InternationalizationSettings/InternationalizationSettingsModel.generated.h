// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERNATIONALIZATIONSETTINGS_InternationalizationSettingsModel_generated_h
#error "InternationalizationSettingsModel.generated.h already included, missing '#pragma once' in InternationalizationSettingsModel.h"
#endif
#define INTERNATIONALIZATIONSETTINGS_InternationalizationSettingsModel_generated_h

#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_RPC_WRAPPERS
#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInternationalizationSettingsModel(); \
	friend struct Z_Construct_UClass_UInternationalizationSettingsModel_Statics; \
public: \
	DECLARE_CLASS(UInternationalizationSettingsModel, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InternationalizationSettings"), NO_API) \
	DECLARE_SERIALIZER(UInternationalizationSettingsModel) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUInternationalizationSettingsModel(); \
	friend struct Z_Construct_UClass_UInternationalizationSettingsModel_Statics; \
public: \
	DECLARE_CLASS(UInternationalizationSettingsModel, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InternationalizationSettings"), NO_API) \
	DECLARE_SERIALIZER(UInternationalizationSettingsModel) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInternationalizationSettingsModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInternationalizationSettingsModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInternationalizationSettingsModel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInternationalizationSettingsModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInternationalizationSettingsModel(UInternationalizationSettingsModel&&); \
	NO_API UInternationalizationSettingsModel(const UInternationalizationSettingsModel&); \
public:


#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInternationalizationSettingsModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInternationalizationSettingsModel(UInternationalizationSettingsModel&&); \
	NO_API UInternationalizationSettingsModel(const UInternationalizationSettingsModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInternationalizationSettingsModel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInternationalizationSettingsModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInternationalizationSettingsModel)


#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_119_PROLOG
#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_RPC_WRAPPERS \
	Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_INCLASS \
	Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_123_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InternationalizationSettingsModel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERNATIONALIZATIONSETTINGS_API UClass* StaticClass<class UInternationalizationSettingsModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h


#define FOREACH_ENUM_ETIMEZONESETTING(op) \
	op(ETimezoneSetting::InternationalDateLineWest) \
	op(ETimezoneSetting::CoordinatedUniversalTimeNeg11) \
	op(ETimezoneSetting::Samoa) \
	op(ETimezoneSetting::Hawaii) \
	op(ETimezoneSetting::Alaska) \
	op(ETimezoneSetting::PacificTime_USCAN) \
	op(ETimezoneSetting::BajaCalifornia) \
	op(ETimezoneSetting::MountainTime_USCAN) \
	op(ETimezoneSetting::Chihuahua_LaPaz_Mazatlan) \
	op(ETimezoneSetting::Arizona) \
	op(ETimezoneSetting::Saskatchewan) \
	op(ETimezoneSetting::CentralAmerica) \
	op(ETimezoneSetting::CentralTime_USCAN) \
	op(ETimezoneSetting::Guadalajara_MexicoCity_Monterrey) \
	op(ETimezoneSetting::EasternTime_USCAN) \
	op(ETimezoneSetting::Bogota_Lima_Quito) \
	op(ETimezoneSetting::Indiana_US) \
	op(ETimezoneSetting::Caracas) \
	op(ETimezoneSetting::AtlanticTime_Canada) \
	op(ETimezoneSetting::Cuiaba) \
	op(ETimezoneSetting::Santiago) \
	op(ETimezoneSetting::Georgetown_LaPaz_Manaus_SanJuan) \
	op(ETimezoneSetting::Asuncion) \
	op(ETimezoneSetting::Newfoundland) \
	op(ETimezoneSetting::Brasilia) \
	op(ETimezoneSetting::Greenland) \
	op(ETimezoneSetting::Montevideo) \
	op(ETimezoneSetting::Cayenne_Fortaleza) \
	op(ETimezoneSetting::BuenosAires) \
	op(ETimezoneSetting::MidAtlantic) \
	op(ETimezoneSetting::CoordinatedUniversalTimeNeg02) \
	op(ETimezoneSetting::Azores) \
	op(ETimezoneSetting::CaboVerdeIs) \
	op(ETimezoneSetting::Dublin_Edinburgh_Lisbon_London) \
	op(ETimezoneSetting::Monrovia_Reykjavik) \
	op(ETimezoneSetting::Casablanca) \
	op(ETimezoneSetting::UTC) \
	op(ETimezoneSetting::Belgrade_Bratislava_Budapest_Ljubljana_Prague) \
	op(ETimezoneSetting::Sarajevo_Skopje_Warsaw_Zagreb) \
	op(ETimezoneSetting::Brussels_Copenhagen_Madrid_Paris) \
	op(ETimezoneSetting::WestCentralAfrica) \
	op(ETimezoneSetting::Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna) \
	op(ETimezoneSetting::Windhoek) \
	op(ETimezoneSetting::Minsk) \
	op(ETimezoneSetting::Cairo) \
	op(ETimezoneSetting::Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius) \
	op(ETimezoneSetting::Athens_Bucharest) \
	op(ETimezoneSetting::Jerusalem) \
	op(ETimezoneSetting::Amman) \
	op(ETimezoneSetting::Beirut) \
	op(ETimezoneSetting::Harare_Pretoria) \
	op(ETimezoneSetting::Damascus) \
	op(ETimezoneSetting::Istanbul) \
	op(ETimezoneSetting::Kuwait_Riyadh) \
	op(ETimezoneSetting::Baghdad) \
	op(ETimezoneSetting::Nairobi) \
	op(ETimezoneSetting::Kaliningrad) \
	op(ETimezoneSetting::Tehran) \
	op(ETimezoneSetting::Moscow_StPetersburg_Volgograd) \
	op(ETimezoneSetting::AbuDhabi_Muscat) \
	op(ETimezoneSetting::Baku) \
	op(ETimezoneSetting::Yerevan) \
	op(ETimezoneSetting::Tbilisi) \
	op(ETimezoneSetting::PortLouis) \
	op(ETimezoneSetting::Kabul) \
	op(ETimezoneSetting::Tashkent) \
	op(ETimezoneSetting::Islamabad_Karachi) \
	op(ETimezoneSetting::Chennai_Kolkata_Mumbai_NewDelhi) \
	op(ETimezoneSetting::SriJayawardenepura) \
	op(ETimezoneSetting::Kathmandu) \
	op(ETimezoneSetting::Ekaterinburg) \
	op(ETimezoneSetting::Astana) \
	op(ETimezoneSetting::Dhaka) \
	op(ETimezoneSetting::Yangon_Rangoon) \
	op(ETimezoneSetting::Novosibirsk) \
	op(ETimezoneSetting::Bangkok_Hanoi_Jakarta) \
	op(ETimezoneSetting::Krasnoyarsk) \
	op(ETimezoneSetting::Beijing_Chongqing_HongKong_Urumqi) \
	op(ETimezoneSetting::KualaLumpur_Singapore) \
	op(ETimezoneSetting::Taipei) \
	op(ETimezoneSetting::Perth) \
	op(ETimezoneSetting::Ulaanbaatar) \
	op(ETimezoneSetting::Irkutsk) \
	op(ETimezoneSetting::Seoul) \
	op(ETimezoneSetting::Osaka_Sapporo_Tokyo) \
	op(ETimezoneSetting::Darwin) \
	op(ETimezoneSetting::Adelaide) \
	op(ETimezoneSetting::Yakutsk) \
	op(ETimezoneSetting::Canberra_Melbourne_Sydney) \
	op(ETimezoneSetting::Brisbane) \
	op(ETimezoneSetting::Hobart) \
	op(ETimezoneSetting::Guam_PortMoresby) \
	op(ETimezoneSetting::Vladivostok) \
	op(ETimezoneSetting::SolomonIs_NewCaledonia) \
	op(ETimezoneSetting::Magadan) \
	op(ETimezoneSetting::Fiji) \
	op(ETimezoneSetting::Auckland_Wellington) \
	op(ETimezoneSetting::CoordinatedUniversalTime12) \
	op(ETimezoneSetting::Nukualofa) \
	op(ETimezoneSetting::LocalTime) 

enum class ETimezoneSetting : uint8;
template<> INTERNATIONALIZATIONSETTINGS_API UEnum* StaticEnum<ETimezoneSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

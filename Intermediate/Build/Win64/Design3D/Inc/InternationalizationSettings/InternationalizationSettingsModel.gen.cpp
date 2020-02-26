// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InternationalizationSettings/Classes/InternationalizationSettingsModel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternationalizationSettingsModel() {}
// Cross Module References
	INTERNATIONALIZATIONSETTINGS_API UEnum* Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting();
	UPackage* Z_Construct_UPackage__Script_InternationalizationSettings();
	INTERNATIONALIZATIONSETTINGS_API UClass* Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister();
	INTERNATIONALIZATIONSETTINGS_API UClass* Z_Construct_UClass_UInternationalizationSettingsModel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ETimezoneSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting, Z_Construct_UPackage__Script_InternationalizationSettings(), TEXT("ETimezoneSetting"));
		}
		return Singleton;
	}
	template<> INTERNATIONALIZATIONSETTINGS_API UEnum* StaticEnum<ETimezoneSetting>()
	{
		return ETimezoneSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimezoneSetting(ETimezoneSetting_StaticEnum, TEXT("/Script/InternationalizationSettings"), TEXT("ETimezoneSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Hash() { return 2323983487U; }
	UEnum* Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InternationalizationSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimezoneSetting"), 0, Get_Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimezoneSetting::InternationalDateLineWest", (int64)ETimezoneSetting::InternationalDateLineWest },
				{ "ETimezoneSetting::CoordinatedUniversalTimeNeg11", (int64)ETimezoneSetting::CoordinatedUniversalTimeNeg11 },
				{ "ETimezoneSetting::Samoa", (int64)ETimezoneSetting::Samoa },
				{ "ETimezoneSetting::Hawaii", (int64)ETimezoneSetting::Hawaii },
				{ "ETimezoneSetting::Alaska", (int64)ETimezoneSetting::Alaska },
				{ "ETimezoneSetting::PacificTime_USCAN", (int64)ETimezoneSetting::PacificTime_USCAN },
				{ "ETimezoneSetting::BajaCalifornia", (int64)ETimezoneSetting::BajaCalifornia },
				{ "ETimezoneSetting::MountainTime_USCAN", (int64)ETimezoneSetting::MountainTime_USCAN },
				{ "ETimezoneSetting::Chihuahua_LaPaz_Mazatlan", (int64)ETimezoneSetting::Chihuahua_LaPaz_Mazatlan },
				{ "ETimezoneSetting::Arizona", (int64)ETimezoneSetting::Arizona },
				{ "ETimezoneSetting::Saskatchewan", (int64)ETimezoneSetting::Saskatchewan },
				{ "ETimezoneSetting::CentralAmerica", (int64)ETimezoneSetting::CentralAmerica },
				{ "ETimezoneSetting::CentralTime_USCAN", (int64)ETimezoneSetting::CentralTime_USCAN },
				{ "ETimezoneSetting::Guadalajara_MexicoCity_Monterrey", (int64)ETimezoneSetting::Guadalajara_MexicoCity_Monterrey },
				{ "ETimezoneSetting::EasternTime_USCAN", (int64)ETimezoneSetting::EasternTime_USCAN },
				{ "ETimezoneSetting::Bogota_Lima_Quito", (int64)ETimezoneSetting::Bogota_Lima_Quito },
				{ "ETimezoneSetting::Indiana_US", (int64)ETimezoneSetting::Indiana_US },
				{ "ETimezoneSetting::Caracas", (int64)ETimezoneSetting::Caracas },
				{ "ETimezoneSetting::AtlanticTime_Canada", (int64)ETimezoneSetting::AtlanticTime_Canada },
				{ "ETimezoneSetting::Cuiaba", (int64)ETimezoneSetting::Cuiaba },
				{ "ETimezoneSetting::Santiago", (int64)ETimezoneSetting::Santiago },
				{ "ETimezoneSetting::Georgetown_LaPaz_Manaus_SanJuan", (int64)ETimezoneSetting::Georgetown_LaPaz_Manaus_SanJuan },
				{ "ETimezoneSetting::Asuncion", (int64)ETimezoneSetting::Asuncion },
				{ "ETimezoneSetting::Newfoundland", (int64)ETimezoneSetting::Newfoundland },
				{ "ETimezoneSetting::Brasilia", (int64)ETimezoneSetting::Brasilia },
				{ "ETimezoneSetting::Greenland", (int64)ETimezoneSetting::Greenland },
				{ "ETimezoneSetting::Montevideo", (int64)ETimezoneSetting::Montevideo },
				{ "ETimezoneSetting::Cayenne_Fortaleza", (int64)ETimezoneSetting::Cayenne_Fortaleza },
				{ "ETimezoneSetting::BuenosAires", (int64)ETimezoneSetting::BuenosAires },
				{ "ETimezoneSetting::MidAtlantic", (int64)ETimezoneSetting::MidAtlantic },
				{ "ETimezoneSetting::CoordinatedUniversalTimeNeg02", (int64)ETimezoneSetting::CoordinatedUniversalTimeNeg02 },
				{ "ETimezoneSetting::Azores", (int64)ETimezoneSetting::Azores },
				{ "ETimezoneSetting::CaboVerdeIs", (int64)ETimezoneSetting::CaboVerdeIs },
				{ "ETimezoneSetting::Dublin_Edinburgh_Lisbon_London", (int64)ETimezoneSetting::Dublin_Edinburgh_Lisbon_London },
				{ "ETimezoneSetting::Monrovia_Reykjavik", (int64)ETimezoneSetting::Monrovia_Reykjavik },
				{ "ETimezoneSetting::Casablanca", (int64)ETimezoneSetting::Casablanca },
				{ "ETimezoneSetting::UTC", (int64)ETimezoneSetting::UTC },
				{ "ETimezoneSetting::Belgrade_Bratislava_Budapest_Ljubljana_Prague", (int64)ETimezoneSetting::Belgrade_Bratislava_Budapest_Ljubljana_Prague },
				{ "ETimezoneSetting::Sarajevo_Skopje_Warsaw_Zagreb", (int64)ETimezoneSetting::Sarajevo_Skopje_Warsaw_Zagreb },
				{ "ETimezoneSetting::Brussels_Copenhagen_Madrid_Paris", (int64)ETimezoneSetting::Brussels_Copenhagen_Madrid_Paris },
				{ "ETimezoneSetting::WestCentralAfrica", (int64)ETimezoneSetting::WestCentralAfrica },
				{ "ETimezoneSetting::Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna", (int64)ETimezoneSetting::Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna },
				{ "ETimezoneSetting::Windhoek", (int64)ETimezoneSetting::Windhoek },
				{ "ETimezoneSetting::Minsk", (int64)ETimezoneSetting::Minsk },
				{ "ETimezoneSetting::Cairo", (int64)ETimezoneSetting::Cairo },
				{ "ETimezoneSetting::Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius", (int64)ETimezoneSetting::Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius },
				{ "ETimezoneSetting::Athens_Bucharest", (int64)ETimezoneSetting::Athens_Bucharest },
				{ "ETimezoneSetting::Jerusalem", (int64)ETimezoneSetting::Jerusalem },
				{ "ETimezoneSetting::Amman", (int64)ETimezoneSetting::Amman },
				{ "ETimezoneSetting::Beirut", (int64)ETimezoneSetting::Beirut },
				{ "ETimezoneSetting::Harare_Pretoria", (int64)ETimezoneSetting::Harare_Pretoria },
				{ "ETimezoneSetting::Damascus", (int64)ETimezoneSetting::Damascus },
				{ "ETimezoneSetting::Istanbul", (int64)ETimezoneSetting::Istanbul },
				{ "ETimezoneSetting::Kuwait_Riyadh", (int64)ETimezoneSetting::Kuwait_Riyadh },
				{ "ETimezoneSetting::Baghdad", (int64)ETimezoneSetting::Baghdad },
				{ "ETimezoneSetting::Nairobi", (int64)ETimezoneSetting::Nairobi },
				{ "ETimezoneSetting::Kaliningrad", (int64)ETimezoneSetting::Kaliningrad },
				{ "ETimezoneSetting::Tehran", (int64)ETimezoneSetting::Tehran },
				{ "ETimezoneSetting::Moscow_StPetersburg_Volgograd", (int64)ETimezoneSetting::Moscow_StPetersburg_Volgograd },
				{ "ETimezoneSetting::AbuDhabi_Muscat", (int64)ETimezoneSetting::AbuDhabi_Muscat },
				{ "ETimezoneSetting::Baku", (int64)ETimezoneSetting::Baku },
				{ "ETimezoneSetting::Yerevan", (int64)ETimezoneSetting::Yerevan },
				{ "ETimezoneSetting::Tbilisi", (int64)ETimezoneSetting::Tbilisi },
				{ "ETimezoneSetting::PortLouis", (int64)ETimezoneSetting::PortLouis },
				{ "ETimezoneSetting::Kabul", (int64)ETimezoneSetting::Kabul },
				{ "ETimezoneSetting::Tashkent", (int64)ETimezoneSetting::Tashkent },
				{ "ETimezoneSetting::Islamabad_Karachi", (int64)ETimezoneSetting::Islamabad_Karachi },
				{ "ETimezoneSetting::Chennai_Kolkata_Mumbai_NewDelhi", (int64)ETimezoneSetting::Chennai_Kolkata_Mumbai_NewDelhi },
				{ "ETimezoneSetting::SriJayawardenepura", (int64)ETimezoneSetting::SriJayawardenepura },
				{ "ETimezoneSetting::Kathmandu", (int64)ETimezoneSetting::Kathmandu },
				{ "ETimezoneSetting::Ekaterinburg", (int64)ETimezoneSetting::Ekaterinburg },
				{ "ETimezoneSetting::Astana", (int64)ETimezoneSetting::Astana },
				{ "ETimezoneSetting::Dhaka", (int64)ETimezoneSetting::Dhaka },
				{ "ETimezoneSetting::Yangon_Rangoon", (int64)ETimezoneSetting::Yangon_Rangoon },
				{ "ETimezoneSetting::Novosibirsk", (int64)ETimezoneSetting::Novosibirsk },
				{ "ETimezoneSetting::Bangkok_Hanoi_Jakarta", (int64)ETimezoneSetting::Bangkok_Hanoi_Jakarta },
				{ "ETimezoneSetting::Krasnoyarsk", (int64)ETimezoneSetting::Krasnoyarsk },
				{ "ETimezoneSetting::Beijing_Chongqing_HongKong_Urumqi", (int64)ETimezoneSetting::Beijing_Chongqing_HongKong_Urumqi },
				{ "ETimezoneSetting::KualaLumpur_Singapore", (int64)ETimezoneSetting::KualaLumpur_Singapore },
				{ "ETimezoneSetting::Taipei", (int64)ETimezoneSetting::Taipei },
				{ "ETimezoneSetting::Perth", (int64)ETimezoneSetting::Perth },
				{ "ETimezoneSetting::Ulaanbaatar", (int64)ETimezoneSetting::Ulaanbaatar },
				{ "ETimezoneSetting::Irkutsk", (int64)ETimezoneSetting::Irkutsk },
				{ "ETimezoneSetting::Seoul", (int64)ETimezoneSetting::Seoul },
				{ "ETimezoneSetting::Osaka_Sapporo_Tokyo", (int64)ETimezoneSetting::Osaka_Sapporo_Tokyo },
				{ "ETimezoneSetting::Darwin", (int64)ETimezoneSetting::Darwin },
				{ "ETimezoneSetting::Adelaide", (int64)ETimezoneSetting::Adelaide },
				{ "ETimezoneSetting::Yakutsk", (int64)ETimezoneSetting::Yakutsk },
				{ "ETimezoneSetting::Canberra_Melbourne_Sydney", (int64)ETimezoneSetting::Canberra_Melbourne_Sydney },
				{ "ETimezoneSetting::Brisbane", (int64)ETimezoneSetting::Brisbane },
				{ "ETimezoneSetting::Hobart", (int64)ETimezoneSetting::Hobart },
				{ "ETimezoneSetting::Guam_PortMoresby", (int64)ETimezoneSetting::Guam_PortMoresby },
				{ "ETimezoneSetting::Vladivostok", (int64)ETimezoneSetting::Vladivostok },
				{ "ETimezoneSetting::SolomonIs_NewCaledonia", (int64)ETimezoneSetting::SolomonIs_NewCaledonia },
				{ "ETimezoneSetting::Magadan", (int64)ETimezoneSetting::Magadan },
				{ "ETimezoneSetting::Fiji", (int64)ETimezoneSetting::Fiji },
				{ "ETimezoneSetting::Auckland_Wellington", (int64)ETimezoneSetting::Auckland_Wellington },
				{ "ETimezoneSetting::CoordinatedUniversalTime12", (int64)ETimezoneSetting::CoordinatedUniversalTime12 },
				{ "ETimezoneSetting::Nukualofa", (int64)ETimezoneSetting::Nukualofa },
				{ "ETimezoneSetting::LocalTime", (int64)ETimezoneSetting::LocalTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbuDhabi_Muscat.DisplayName", "(UTC+04:00) Abu Dhabi, Muscat" },
				{ "Adelaide.DisplayName", "(UTC+09:30) Adelaide" },
				{ "Alaska.DisplayName", "(UTC-09:00) Alaska" },
				{ "Amman.DisplayName", "(UTC+02:00) Amman" },
				{ "Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna.DisplayName", "(UTC+01:00) Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna" },
				{ "Arizona.DisplayName", "(UTC-07:00) Arizona" },
				{ "Astana.DisplayName", "(UTC+06:00) Astana" },
				{ "Asuncion.DisplayName", "(UTC-04:00) Asuncion" },
				{ "Athens_Bucharest.DisplayName", "(UTC+02:00) Athens, Bucharest" },
				{ "AtlanticTime_Canada.DisplayName", "(UTC-04:00) Atlantic Time (Canada)" },
				{ "Auckland_Wellington.DisplayName", "(UTC+12:00) Auckland, Wellington" },
				{ "Azores.DisplayName", "(UTC-01:00) Azores" },
				{ "Baghdad.DisplayName", "(UTC+03:00) Baghdad" },
				{ "BajaCalifornia.DisplayName", "(UTC-08:00) Baja California" },
				{ "Baku.DisplayName", "(UTC+04:00) Baku" },
				{ "Bangkok_Hanoi_Jakarta.DisplayName", "(UTC+07:00) Bangkok, Hanoi, Jakarta" },
				{ "Beijing_Chongqing_HongKong_Urumqi.DisplayName", "(UTC+08:00) Beijing, Chongqing, Hong Kong, Urumqi" },
				{ "Beirut.DisplayName", "(UTC+02:00) Beirut" },
				{ "Belgrade_Bratislava_Budapest_Ljubljana_Prague.DisplayName", "(UTC+01:00) Belgrade, Bratislava, Budapest, Ljubljana, Prague" },
				{ "Bogota_Lima_Quito.DisplayName", "(UTC-05:00) Bogota, Lima, Quito" },
				{ "Brasilia.DisplayName", "(UTC-03:00) Brasilia" },
				{ "Brisbane.DisplayName", "(UTC+10:00) Brisbane" },
				{ "Brussels_Copenhagen_Madrid_Paris.DisplayName", "(UTC+01:00) Brussels, Copenhagen, Madrid, Paris" },
				{ "BuenosAires.DisplayName", "(UTC-03:00) Buenos Aires" },
				{ "CaboVerdeIs.DisplayName", "(UTC-01:00) Cabo Verde Is." },
				{ "Cairo.DisplayName", "(UTC+02:00) Cairo" },
				{ "Canberra_Melbourne_Sydney.DisplayName", "(UTC+10:00) Canberra, Melbourne, Sydney" },
				{ "Caracas.DisplayName", "(UTC-04:30) Caracas" },
				{ "Casablanca.DisplayName", "(UTC) Casablanca" },
				{ "Cayenne_Fortaleza.DisplayName", "(UTC-03:00) Cayenne, Fortaleza" },
				{ "CentralAmerica.DisplayName", "(UTC-06:00) Central America" },
				{ "CentralTime_USCAN.DisplayName", "(UTC-06:00) Central Time (US and Canada)" },
				{ "Chennai_Kolkata_Mumbai_NewDelhi.DisplayName", "(UTC+05:30) Chennai, Kolkata, Mumbai, New Delhi" },
				{ "Chihuahua_LaPaz_Mazatlan.DisplayName", "(UTC-07:00) Chihuahua, La Paz, Mazatlan" },
				{ "CoordinatedUniversalTime12.DisplayName", "(UTC+12:00) Coordinated Universal Time +12" },
				{ "CoordinatedUniversalTimeNeg02.DisplayName", "(UTC-02:00) Coordinated Universal Time -02" },
				{ "CoordinatedUniversalTimeNeg11.DisplayName", "(UTC-11:00) Coordinated Universal Time -11" },
				{ "Cuiaba.DisplayName", "(UTC-04:00) Cuiaba" },
				{ "Damascus.DisplayName", "(UTC+02:00) Damascus" },
				{ "Darwin.DisplayName", "(UTC+09:30) Darwin" },
				{ "Dhaka.DisplayName", "(UTC+06:00) Dhaka" },
				{ "Dublin_Edinburgh_Lisbon_London.DisplayName", "(UTC) Dublin, Edinburgh, Lisbon, London" },
				{ "EasternTime_USCAN.DisplayName", "(UTC-05:00) Eastern Time (US and Canada)" },
				{ "Ekaterinburg.DisplayName", "(UTC+06:00) Ekaterinburg" },
				{ "Fiji.DisplayName", "(UTC+12:00) Fiji" },
				{ "Georgetown_LaPaz_Manaus_SanJuan.DisplayName", "(UTC-04:00) Georgetown, La Paz, Manaus, San Juan" },
				{ "Greenland.DisplayName", "(UTC-03:00) Greenland" },
				{ "Guadalajara_MexicoCity_Monterrey.DisplayName", "(UTC-06:00) Guadalajara, Mexico City, Monterrey" },
				{ "Guam_PortMoresby.DisplayName", "(UTC+10:00) Guam, Port Moresby" },
				{ "Harare_Pretoria.DisplayName", "(UTC+02:00) Harare, Pretoria" },
				{ "Hawaii.DisplayName", "(UTC-10:00) Hawaii" },
				{ "Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius.DisplayName", "(UTC+02:00) Helsinki, Kyiv, Riga, Sofia, Tallinn, Vilnius" },
				{ "Hobart.DisplayName", "(UTC+10:00) Hobart" },
				{ "Indiana_US.DisplayName", "(UTC-05:00) Indiana (East)" },
				{ "InternationalDateLineWest.DisplayName", "(UTC-12:00) International Date Line West" },
				{ "Irkutsk.DisplayName", "(UTC+09:00) Irkutsk" },
				{ "Islamabad_Karachi.DisplayName", "(UTC+05:00) Islamabad, Karachi" },
				{ "Istanbul.DisplayName", "(UTC+02:00) Istanbul" },
				{ "Jerusalem.DisplayName", "(UTC+02:00) Jerusalem" },
				{ "Kabul.DisplayName", "(UTC+04:30) Kabul" },
				{ "Kaliningrad.DisplayName", "(UTC+03:00) Kaliningrad" },
				{ "Kathmandu.DisplayName", "(UTC+05:45) Kathmandu" },
				{ "Krasnoyarsk.DisplayName", "(UTC+08:00) Krasnoyarsk" },
				{ "KualaLumpur_Singapore.DisplayName", "(UTC+08:00) Kuala Lumpur, Singapore" },
				{ "Kuwait_Riyadh.DisplayName", "(UTC+03:00) Kuwait, Riyadh" },
				{ "Magadan.DisplayName", "(UTC+12:00) Magadan" },
				{ "MidAtlantic.DisplayName", "(UTC-02:00) Mid-Atlantic" },
				{ "Minsk.DisplayName", "(UTC+02:00) Minsk" },
				{ "ModuleRelativePath", "Classes/InternationalizationSettingsModel.h" },
				{ "Monrovia_Reykjavik.DisplayName", "(UTC) Monrovia, Reykjavik" },
				{ "Montevideo.DisplayName", "(UTC-03:00) Montevideo" },
				{ "Moscow_StPetersburg_Volgograd.DisplayName", "(UTC+04:00) Moscow, St. Petersburg, Volgograd" },
				{ "MountainTime_USCAN.DisplayName", "(UTC-07:00) Mountain Time (US and Canada)" },
				{ "Nairobi.DisplayName", "(UTC+03:00) Nairobi" },
				{ "Newfoundland.DisplayName", "(UTC-03:30) Newfoundland" },
				{ "Novosibirsk.DisplayName", "(UTC+07:00) Novosibirsk" },
				{ "Nukualofa.DisplayName", "(UTC+13:00) Nuku'alofa" },
				{ "Osaka_Sapporo_Tokyo.DisplayName", "(UTC+09:00) Osaka, Sapporo, Tokyo" },
				{ "PacificTime_USCAN.DisplayName", "(UTC-08:00) Pacific Time (US and Canada)" },
				{ "Perth.DisplayName", "(UTC+08:00) Perth" },
				{ "PortLouis.DisplayName", "(UTC+04:00) Port Louis" },
				{ "Samoa.DisplayName", "(UTC-11:00) Samoa" },
				{ "Santiago.DisplayName", "(UTC-04:00) Santiago" },
				{ "Sarajevo_Skopje_Warsaw_Zagreb.DisplayName", "(UTC+01:00) Sarajevo, Skopje, Warsaw, Zagreb" },
				{ "Saskatchewan.DisplayName", "(UTC-06:00) Saskatchewan" },
				{ "Seoul.DisplayName", "(UTC+09:00) Seoul" },
				{ "SolomonIs_NewCaledonia.DisplayName", "(UTC+11:00) Solomon Is., New Caledonia" },
				{ "SriJayawardenepura.DisplayName", "(UTC+05:30) Sri Jayawardenepura" },
				{ "Taipei.DisplayName", "(UTC+08:00) Taipei" },
				{ "Tashkent.DisplayName", "(UTC+05:00) Tashkent" },
				{ "Tbilisi.DisplayName", "(UTC+04:00) Tbilisi" },
				{ "Tehran.DisplayName", "(UTC+03:30) Tehran" },
				{ "Ulaanbaatar.DisplayName", "(UTC+08:00) Ulaanbaatar" },
				{ "UTC.DisplayName", "(UTC) Coordinated Universal Time" },
				{ "Vladivostok.DisplayName", "(UTC+11:00) Vladivostok" },
				{ "WestCentralAfrica.DisplayName", "(UTC+01:00) West Central Africa" },
				{ "Windhoek.DisplayName", "(UTC+01:00) Windhoek" },
				{ "Yakutsk.DisplayName", "(UTC+10:00) Yakutsk" },
				{ "Yangon_Rangoon.DisplayName", "(UTC+06:30) Yangon (Rangoon)" },
				{ "Yerevan.DisplayName", "(UTC+04:00) Yerevan" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InternationalizationSettings,
				nullptr,
				"ETimezoneSetting",
				"ETimezoneSetting",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInternationalizationSettingsModel::StaticRegisterNativesUInternationalizationSettingsModel()
	{
	}
	UClass* Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister()
	{
		return UInternationalizationSettingsModel::StaticClass();
	}
	struct Z_Construct_UClass_UInternationalizationSettingsModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTimezone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisplayTimezone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayTimezone_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInternationalizationSettingsModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InternationalizationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationSettingsModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InternationalizationSettingsModel.h" },
		{ "ModuleRelativePath", "Classes/InternationalizationSettingsModel.h" },
		{ "ToolTip", "Implements loading and saving of internationalization settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/InternationalizationSettingsModel.h" },
		{ "ToolTip", "Timezone to use for display purposes in FDateTime" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone = { "DisplayTimezone", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInternationalizationSettingsModel, DisplayTimezone), Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInternationalizationSettingsModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInternationalizationSettingsModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInternationalizationSettingsModel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInternationalizationSettingsModel_Statics::ClassParams = {
		&UInternationalizationSettingsModel::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInternationalizationSettingsModel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInternationalizationSettingsModel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInternationalizationSettingsModel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInternationalizationSettingsModel, 706983293);
	template<> INTERNATIONALIZATIONSETTINGS_API UClass* StaticClass<UInternationalizationSettingsModel>()
	{
		return UInternationalizationSettingsModel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInternationalizationSettingsModel(Z_Construct_UClass_UInternationalizationSettingsModel, &UInternationalizationSettingsModel::StaticClass, TEXT("/Script/InternationalizationSettings"), TEXT("UInternationalizationSettingsModel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInternationalizationSettingsModel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTrackPlugin/Public/DTrackLiveLinkSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTrackLiveLinkSourceSettings() {}
// Cross Module References
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackLiveLinkSourceSettings();
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackLiveLinkSourceSettings_NoRegister();
	DTRACKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDTrackServerSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	UPackage* Z_Construct_UPackage__Script_DTrackPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DTrackServerSettings;
class UScriptStruct* FDTrackServerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DTrackServerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DTrackServerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTrackServerSettings, Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("DTrackServerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DTrackServerSettings.OuterSingleton;
}
template<> DTRACKPLUGIN_API UScriptStruct* StaticStruct<FDTrackServerSettings>()
{
	return FDTrackServerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDTrackServerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_dtrack_server_port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_dtrack_server_port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_dtrack_server_ip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_m_dtrack_server_ip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTrackServerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_port_MetaData[] = {
		{ "Category", "Server Settings" },
		{ "DisplayName", "DTrack Data Port" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkSourceSettings.h" },
		{ "ToolTip", "Port your server sends data to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_port = { "m_dtrack_server_port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackServerSettings, m_dtrack_server_port), METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_ip_MetaData[] = {
		{ "Category", "Server Settings" },
		{ "DisplayName", "DTrack Server IP" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkSourceSettings.h" },
		{ "ToolTip", "IP of DTrack server host for starting measurement" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_ip = { "m_dtrack_server_ip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackServerSettings, m_dtrack_server_ip), METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_ip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewProp_m_dtrack_server_ip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
		nullptr,
		&NewStructOps,
		"DTrackServerSettings",
		sizeof(FDTrackServerSettings),
		alignof(FDTrackServerSettings),
		Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDTrackServerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DTrackServerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DTrackServerSettings.InnerSingleton, Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DTrackServerSettings.InnerSingleton;
	}
	void UDTrackLiveLinkSourceSettings::StaticRegisterNativesUDTrackLiveLinkSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTrackLiveLinkSourceSettings);
	UClass* Z_Construct_UClass_UDTrackLiveLinkSourceSettings_NoRegister()
	{
		return UDTrackLiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_server_settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_server_settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DTrackLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::NewProp_m_server_settings_MetaData[] = {
		{ "Category", "DTrack settings" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::NewProp_m_server_settings = { "m_server_settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDTrackLiveLinkSourceSettings, m_server_settings), Z_Construct_UScriptStruct_FDTrackServerSettings, METADATA_PARAMS(Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::NewProp_m_server_settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::NewProp_m_server_settings_MetaData)) }; // 726780043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::NewProp_m_server_settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTrackLiveLinkSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::ClassParams = {
		&UDTrackLiveLinkSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDTrackLiveLinkSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UDTrackLiveLinkSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTrackLiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_UDTrackLiveLinkSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDTrackLiveLinkSourceSettings.OuterSingleton;
	}
	template<> DTRACKPLUGIN_API UClass* StaticClass<UDTrackLiveLinkSourceSettings>()
	{
		return UDTrackLiveLinkSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDTrackLiveLinkSourceSettings);
	UDTrackLiveLinkSourceSettings::~UDTrackLiveLinkSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkSourceSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkSourceSettings_h_Statics::ScriptStructInfo[] = {
		{ FDTrackServerSettings::StaticStruct, Z_Construct_UScriptStruct_FDTrackServerSettings_Statics::NewStructOps, TEXT("DTrackServerSettings"), &Z_Registration_Info_UScriptStruct_DTrackServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTrackServerSettings), 726780043U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDTrackLiveLinkSourceSettings, UDTrackLiveLinkSourceSettings::StaticClass, TEXT("UDTrackLiveLinkSourceSettings"), &Z_Registration_Info_UClass_UDTrackLiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTrackLiveLinkSourceSettings), 3658123183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkSourceSettings_h_2755679904(TEXT("/Script/DTrackPlugin"),
		Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkSourceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkSourceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkSourceSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTrackPlugin/Public/DTrackLiveLinkRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTrackLiveLinkRole() {}
// Cross Module References
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackFlystickInputRole();
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackFlystickInputRole_NoRegister();
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackHandRole();
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackHandRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
	UPackage* Z_Construct_UPackage__Script_DTrackPlugin();
// End Cross Module References
	void UDTrackFlystickInputRole::StaticRegisterNativesUDTrackFlystickInputRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTrackFlystickInputRole);
	UClass* Z_Construct_UClass_UDTrackFlystickInputRole_NoRegister()
	{
		return UDTrackFlystickInputRole::StaticClass();
	}
	struct Z_Construct_UClass_UDTrackFlystickInputRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDTrackFlystickInputRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackFlystickInputRole_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTrackFlystickInputRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Role associated for DTrack flystick. No special data, just a role to distinguish it for input control\n */" },
#endif
		{ "DisplayName", "DTrack Flystick Role" },
		{ "IncludePath", "DTrackLiveLinkRole.h" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkRole.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Role associated for DTrack flystick. No special data, just a role to distinguish it for input control" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDTrackFlystickInputRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTrackFlystickInputRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTrackFlystickInputRole_Statics::ClassParams = {
		&UDTrackFlystickInputRole::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackFlystickInputRole_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTrackFlystickInputRole_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDTrackFlystickInputRole()
	{
		if (!Z_Registration_Info_UClass_UDTrackFlystickInputRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTrackFlystickInputRole.OuterSingleton, Z_Construct_UClass_UDTrackFlystickInputRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDTrackFlystickInputRole.OuterSingleton;
	}
	template<> DTRACKPLUGIN_API UClass* StaticClass<UDTrackFlystickInputRole>()
	{
		return UDTrackFlystickInputRole::StaticClass();
	}
	UDTrackFlystickInputRole::UDTrackFlystickInputRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDTrackFlystickInputRole);
	UDTrackFlystickInputRole::~UDTrackFlystickInputRole() {}
	void UDTrackHandRole::StaticRegisterNativesUDTrackHandRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTrackHandRole);
	UClass* Z_Construct_UClass_UDTrackHandRole_NoRegister()
	{
		return UDTrackHandRole::StaticClass();
	}
	struct Z_Construct_UClass_UDTrackHandRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDTrackHandRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkAnimationRole,
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackHandRole_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTrackHandRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Role associated for DTrack Hand tracking.\n */" },
#endif
		{ "DisplayName", "DTrack Hand Role" },
		{ "IncludePath", "DTrackLiveLinkRole.h" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkRole.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Role associated for DTrack Hand tracking." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDTrackHandRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTrackHandRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTrackHandRole_Statics::ClassParams = {
		&UDTrackHandRole::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackHandRole_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTrackHandRole_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDTrackHandRole()
	{
		if (!Z_Registration_Info_UClass_UDTrackHandRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTrackHandRole.OuterSingleton, Z_Construct_UClass_UDTrackHandRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDTrackHandRole.OuterSingleton;
	}
	template<> DTRACKPLUGIN_API UClass* StaticClass<UDTrackHandRole>()
	{
		return UDTrackHandRole::StaticClass();
	}
	UDTrackHandRole::UDTrackHandRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDTrackHandRole);
	UDTrackHandRole::~UDTrackHandRole() {}
	struct Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDTrackFlystickInputRole, UDTrackFlystickInputRole::StaticClass, TEXT("UDTrackFlystickInputRole"), &Z_Registration_Info_UClass_UDTrackFlystickInputRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTrackFlystickInputRole), 861499416U) },
		{ Z_Construct_UClass_UDTrackHandRole, UDTrackHandRole::StaticClass, TEXT("UDTrackHandRole"), &Z_Registration_Info_UClass_UDTrackHandRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTrackHandRole), 3830710183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRole_h_3221219112(TEXT("/Script/DTrackPlugin"),
		Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

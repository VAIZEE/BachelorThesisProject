// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTrackPlugin/Private/DTrackLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTrackLiveLinkSourceFactory() {}
// Cross Module References
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackLiveLinkSourceFactory();
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackLiveLinkSourceFactory_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_DTrackPlugin();
// End Cross Module References
	void UDTrackLiveLinkSourceFactory::StaticRegisterNativesUDTrackLiveLinkSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTrackLiveLinkSourceFactory);
	UClass* Z_Construct_UClass_UDTrackLiveLinkSourceFactory_NoRegister()
	{
		return UDTrackLiveLinkSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DTrackLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/DTrackLiveLinkSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTrackLiveLinkSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics::ClassParams = {
		&UDTrackLiveLinkSourceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDTrackLiveLinkSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UDTrackLiveLinkSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTrackLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UDTrackLiveLinkSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDTrackLiveLinkSourceFactory.OuterSingleton;
	}
	template<> DTRACKPLUGIN_API UClass* StaticClass<UDTrackLiveLinkSourceFactory>()
	{
		return UDTrackLiveLinkSourceFactory::StaticClass();
	}
	UDTrackLiveLinkSourceFactory::UDTrackLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDTrackLiveLinkSourceFactory);
	UDTrackLiveLinkSourceFactory::~UDTrackLiveLinkSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Private_DTrackLiveLinkSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Private_DTrackLiveLinkSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDTrackLiveLinkSourceFactory, UDTrackLiveLinkSourceFactory::StaticClass, TEXT("UDTrackLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UDTrackLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTrackLiveLinkSourceFactory), 717030742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Private_DTrackLiveLinkSourceFactory_h_1943187000(TEXT("/Script/DTrackPlugin"),
		Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Private_DTrackLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Private_DTrackLiveLinkSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

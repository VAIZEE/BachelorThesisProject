// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTrackPlugin/Public/DTrackLiveLinkRetargetAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTrackLiveLinkRetargetAsset() {}
// Cross Module References
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackLiveLinkRetargetAsset();
	DTRACKPLUGIN_API UClass* Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_NoRegister();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	UPackage* Z_Construct_UPackage__Script_DTrackPlugin();
// End Cross Module References
	void UDTrackLiveLinkRetargetAsset::StaticRegisterNativesUDTrackLiveLinkRetargetAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTrackLiveLinkRetargetAsset);
	UClass* Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_NoRegister()
	{
		return UDTrackLiveLinkRetargetAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotationOnly_MetaData[];
#endif
		static void NewProp_bRotationOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationOnly;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneNameMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * DTrack LiveLink remapping asset\n */" },
		{ "IncludePath", "DTrackLiveLinkRetargetAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkRetargetAsset.h" },
		{ "ToolTip", "DTrack LiveLink remapping asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_bRotationOnly_MetaData[] = {
		{ "Category", "DTrack Retargeting Asset" },
		{ "DisplayName", "Use Rotation Only" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Set this to move every bone to the positions of its representation in the reference skeleton. Results in no gaps between bones. Fingers might overlap." },
	};
#endif
	void Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_bRotationOnly_SetBit(void* Obj)
	{
		((UDTrackLiveLinkRetargetAsset*)Obj)->bRotationOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_bRotationOnly = { "bRotationOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDTrackLiveLinkRetargetAsset), &Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_bRotationOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_bRotationOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_bRotationOnly_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap_ValueProp = { "BoneNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap_Key_KeyProp = { "BoneNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap_MetaData[] = {
		{ "Category", "DTrack Retargeting Asset" },
		{ "Comment", "/**\n\x09* Used to remap skeletons bone names if they are different. (Left = bones to remap; Right = Correct bone name)\n\x09*/" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Used to remap skeletons bone names if they are different. (Left = bones to remap; Right = Correct bone name)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap = { "BoneNameMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDTrackLiveLinkRetargetAsset, BoneNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_bRotationOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::NewProp_BoneNameMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTrackLiveLinkRetargetAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::ClassParams = {
		&UDTrackLiveLinkRetargetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDTrackLiveLinkRetargetAsset()
	{
		if (!Z_Registration_Info_UClass_UDTrackLiveLinkRetargetAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTrackLiveLinkRetargetAsset.OuterSingleton, Z_Construct_UClass_UDTrackLiveLinkRetargetAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDTrackLiveLinkRetargetAsset.OuterSingleton;
	}
	template<> DTRACKPLUGIN_API UClass* StaticClass<UDTrackLiveLinkRetargetAsset>()
	{
		return UDTrackLiveLinkRetargetAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDTrackLiveLinkRetargetAsset);
	UDTrackLiveLinkRetargetAsset::~UDTrackLiveLinkRetargetAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRetargetAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRetargetAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDTrackLiveLinkRetargetAsset, UDTrackLiveLinkRetargetAsset::StaticClass, TEXT("UDTrackLiveLinkRetargetAsset"), &Z_Registration_Info_UClass_UDTrackLiveLinkRetargetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTrackLiveLinkRetargetAsset), 1241317504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRetargetAsset_h_3672862840(TEXT("/Script/DTrackPlugin"),
		Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRetargetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkRetargetAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

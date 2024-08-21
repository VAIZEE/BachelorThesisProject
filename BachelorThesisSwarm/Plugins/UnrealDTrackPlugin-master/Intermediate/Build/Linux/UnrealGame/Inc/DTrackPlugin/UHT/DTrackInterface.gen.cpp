// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTrackPlugin/Public/DTrackInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTrackInterface() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DTRACKPLUGIN_API UEnum* Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType();
	DTRACKPLUGIN_API UEnum* Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType();
	DTRACKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDTrackFinger();
	UPackage* Z_Construct_UPackage__Script_DTrackPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDTrackCoordinateSystemType;
	static UEnum* EDTrackCoordinateSystemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDTrackCoordinateSystemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDTrackCoordinateSystemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType, (UObject*)Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("EDTrackCoordinateSystemType"));
		}
		return Z_Registration_Info_UEnum_EDTrackCoordinateSystemType.OuterSingleton;
	}
	template<> DTRACKPLUGIN_API UEnum* StaticEnum<EDTrackCoordinateSystemType>()
	{
		return EDTrackCoordinateSystemType_StaticEnum();
	}
	struct Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics::Enumerators[] = {
		{ "EDTrackCoordinateSystemType::CST_Normal", (int64)EDTrackCoordinateSystemType::CST_Normal },
		{ "EDTrackCoordinateSystemType::CST_Powerwall", (int64)EDTrackCoordinateSystemType::CST_Powerwall },
		{ "EDTrackCoordinateSystemType::CST_Unreal_Adapted", (int64)EDTrackCoordinateSystemType::CST_Unreal_Adapted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DTrack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * This represents different room calibration default settings as \n * set in the DTrack system. Choose the one that corresponds with your setup\n * and transformations will be translated into Unreal's standard coordinate \n * system\n */" },
#endif
		{ "CST_Normal.Comment", "/// The normal setting. Right handed, Z is up and Y is front \n" },
		{ "CST_Normal.DisplayName", "DTrack Normal" },
		{ "CST_Normal.Name", "EDTrackCoordinateSystemType::CST_Normal" },
		{ "CST_Normal.ToolTip", "The normal setting. Right handed, Z is up and Y is front" },
		{ "CST_Powerwall.Comment", "/// Powerwall default setting with Y as up\n" },
		{ "CST_Powerwall.DisplayName", "DTrack Powerwall" },
		{ "CST_Powerwall.Name", "EDTrackCoordinateSystemType::CST_Powerwall" },
		{ "CST_Powerwall.ToolTip", "Powerwall default setting with Y as up" },
		{ "CST_Unreal_Adapted.Comment", "/// Right handed with Z as up and X as front\n" },
		{ "CST_Unreal_Adapted.DisplayName", "DTrack Unreal Adapted" },
		{ "CST_Unreal_Adapted.Name", "EDTrackCoordinateSystemType::CST_Unreal_Adapted" },
		{ "CST_Unreal_Adapted.ToolTip", "Right handed with Z as up and X as front" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This represents different room calibration default settings as\nset in the DTrack system. Choose the one that corresponds with your setup\nand transformations will be translated into Unreal's standard coordinate\nsystem" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DTrackPlugin,
		nullptr,
		"EDTrackCoordinateSystemType",
		"EDTrackCoordinateSystemType",
		Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType()
	{
		if (!Z_Registration_Info_UEnum_EDTrackCoordinateSystemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDTrackCoordinateSystemType.InnerSingleton, Z_Construct_UEnum_DTrackPlugin_EDTrackCoordinateSystemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDTrackCoordinateSystemType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDTrackFingerType;
	static UEnum* EDTrackFingerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDTrackFingerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDTrackFingerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType, (UObject*)Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("EDTrackFingerType"));
		}
		return Z_Registration_Info_UEnum_EDTrackFingerType.OuterSingleton;
	}
	template<> DTRACKPLUGIN_API UEnum* StaticEnum<EDTrackFingerType>()
	{
		return EDTrackFingerType_StaticEnum();
	}
	struct Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics::Enumerators[] = {
		{ "EDTrackFingerType::FT_Thumb", (int64)EDTrackFingerType::FT_Thumb },
		{ "EDTrackFingerType::FT_Index", (int64)EDTrackFingerType::FT_Index },
		{ "EDTrackFingerType::FT_Middle", (int64)EDTrackFingerType::FT_Middle },
		{ "EDTrackFingerType::FT_Ring", (int64)EDTrackFingerType::FT_Ring },
		{ "EDTrackFingerType::FT_Pinky", (int64)EDTrackFingerType::FT_Pinky },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FT_Index.DisplayName", "Index" },
		{ "FT_Index.Name", "EDTrackFingerType::FT_Index" },
		{ "FT_Middle.DisplayName", "Middle" },
		{ "FT_Middle.Name", "EDTrackFingerType::FT_Middle" },
		{ "FT_Pinky.DisplayName", "Pinky" },
		{ "FT_Pinky.Name", "EDTrackFingerType::FT_Pinky" },
		{ "FT_Ring.DisplayName", "Ring" },
		{ "FT_Ring.Name", "EDTrackFingerType::FT_Ring" },
		{ "FT_Thumb.DisplayName", "Thumb" },
		{ "FT_Thumb.Name", "EDTrackFingerType::FT_Thumb" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DTrackPlugin,
		nullptr,
		"EDTrackFingerType",
		"EDTrackFingerType",
		Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType()
	{
		if (!Z_Registration_Info_UEnum_EDTrackFingerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDTrackFingerType.InnerSingleton, Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDTrackFingerType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DTrackFinger;
class UScriptStruct* FDTrackFinger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DTrackFinger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DTrackFinger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTrackFinger, (UObject*)Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("DTrackFinger"));
	}
	return Z_Registration_Info_UScriptStruct_DTrackFinger.OuterSingleton;
}
template<> DTRACKPLUGIN_API UScriptStruct* StaticStruct<FDTrackFinger>()
{
	return FDTrackFinger::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDTrackFinger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_tip_transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_tip_transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_outer_phalanx_transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_outer_phalanx_transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_middle_phalanx_transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_middle_phalanx_transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_inner_phalanx_transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_inner_phalanx_transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_tip_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_tip_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_inner_phalanx_length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_inner_phalanx_length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_middle_phalanx_length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_middle_phalanx_length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_outer_phalanx_length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_outer_phalanx_length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_inner_middle_phalanx_angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_inner_middle_phalanx_angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_middle_outer_phalanx_angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_middle_outer_phalanx_angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This represents one tracked finger data\n */" },
#endif
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This represents one tracked finger data" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTrackFinger>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_transform_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//All transforms in world space\n" },
#endif
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All transforms in world space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_transform = { "m_tip_transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_tip_transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_transform_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_transform_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_transform = { "m_outer_phalanx_transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_outer_phalanx_transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_transform_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_transform_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_transform = { "m_middle_phalanx_transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_middle_phalanx_transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_transform_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_transform_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_transform = { "m_inner_phalanx_transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_inner_phalanx_transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_transform_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_radius_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Radius Of Tip" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_radius = { "m_tip_radius", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_tip_radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_radius_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_length_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Inner Phalanx Length" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_length = { "m_inner_phalanx_length", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_inner_phalanx_length), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_length_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_length_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_length_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Middle Phalanx Length" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_length = { "m_middle_phalanx_length", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_middle_phalanx_length), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_length_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_length_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_length_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Outer Phalanx Length" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_length = { "m_outer_phalanx_length", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_outer_phalanx_length), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_length_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_length_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_middle_phalanx_angle_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Inner Middle Phalanx Angle" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_middle_phalanx_angle = { "m_inner_middle_phalanx_angle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_inner_middle_phalanx_angle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_middle_phalanx_angle_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_middle_phalanx_angle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_outer_phalanx_angle_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Middle Outer Phalanx Angle" },
		{ "ModuleRelativePath", "Public/DTrackInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_outer_phalanx_angle = { "m_middle_outer_phalanx_angle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTrackFinger, m_middle_outer_phalanx_angle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_outer_phalanx_angle_MetaData), Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_outer_phalanx_angle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTrackFinger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_tip_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_phalanx_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_phalanx_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_outer_phalanx_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_inner_middle_phalanx_angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewProp_m_middle_outer_phalanx_angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTrackFinger_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
		nullptr,
		&NewStructOps,
		"DTrackFinger",
		Z_Construct_UScriptStruct_FDTrackFinger_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::PropPointers),
		sizeof(FDTrackFinger),
		alignof(FDTrackFinger),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDTrackFinger_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFinger_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDTrackFinger()
	{
		if (!Z_Registration_Info_UScriptStruct_DTrackFinger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DTrackFinger.InnerSingleton, Z_Construct_UScriptStruct_FDTrackFinger_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DTrackFinger.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackInterface_h_Statics::EnumInfo[] = {
		{ EDTrackCoordinateSystemType_StaticEnum, TEXT("EDTrackCoordinateSystemType"), &Z_Registration_Info_UEnum_EDTrackCoordinateSystemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3974059437U) },
		{ EDTrackFingerType_StaticEnum, TEXT("EDTrackFingerType"), &Z_Registration_Info_UEnum_EDTrackFingerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1707468403U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackInterface_h_Statics::ScriptStructInfo[] = {
		{ FDTrackFinger::StaticStruct, Z_Construct_UScriptStruct_FDTrackFinger_Statics::NewStructOps, TEXT("DTrackFinger"), &Z_Registration_Info_UScriptStruct_DTrackFinger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTrackFinger), 4177316295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackInterface_h_3211082865(TEXT("/Script/DTrackPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cgt104878_Desktop_BUILDCOPY_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

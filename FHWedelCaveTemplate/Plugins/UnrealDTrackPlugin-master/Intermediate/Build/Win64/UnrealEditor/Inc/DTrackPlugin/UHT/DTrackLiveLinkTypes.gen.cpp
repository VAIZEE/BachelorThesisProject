// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTrackPlugin/Public/DTrackLiveLinkTypes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTrackLiveLinkTypes() {}
// Cross Module References
	DTRACKPLUGIN_API UEnum* Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType();
	DTRACKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData();
	DTRACKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData();
	DTRACKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData();
	DTRACKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDTrackHandBlueprintData();
	DTRACKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDTrackHandStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData();
	UPackage* Z_Construct_UPackage__Script_DTrackPlugin();
// End Cross Module References

static_assert(std::is_polymorphic<FDTrackFlystickInputStaticData>() == std::is_polymorphic<FLiveLinkBaseStaticData>(), "USTRUCT FDTrackFlystickInputStaticData cannot be polymorphic unless super FLiveLinkBaseStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DTrackFlystickInputStaticData;
class UScriptStruct* FDTrackFlystickInputStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DTrackFlystickInputStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DTrackFlystickInputStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData, Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("DTrackFlystickInputStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_DTrackFlystickInputStaticData.OuterSingleton;
}
template<> DTRACKPLUGIN_API UScriptStruct* StaticStruct<FDTrackFlystickInputStaticData>()
{
	return FDTrackFlystickInputStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_flystick_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_flystick_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_button_count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_button_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_joystick_count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_joystick_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for inputs of flystick tracking data.\n */" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Static data for inputs of flystick tracking data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTrackFlystickInputStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_flystick_id_MetaData[] = {
		{ "Category", "Flystick" },
		{ "Comment", "// id of this flystick\n" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "id of this flystick" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_flystick_id = { "m_flystick_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackFlystickInputStaticData, m_flystick_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_flystick_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_flystick_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_button_count_MetaData[] = {
		{ "Category", "Flystick" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_button_count = { "m_button_count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackFlystickInputStaticData, m_button_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_button_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_button_count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_joystick_count_MetaData[] = {
		{ "Category", "Flystick" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_joystick_count = { "m_joystick_count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackFlystickInputStaticData, m_joystick_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_joystick_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_joystick_count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_flystick_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_button_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewProp_m_joystick_count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
		Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,
		&NewStructOps,
		"DTrackFlystickInputStaticData",
		sizeof(FDTrackFlystickInputStaticData),
		alignof(FDTrackFlystickInputStaticData),
		Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_DTrackFlystickInputStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DTrackFlystickInputStaticData.InnerSingleton, Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DTrackFlystickInputStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDTrackFlystickInputFrameData>() == std::is_polymorphic<FLiveLinkBaseFrameData>(), "USTRUCT FDTrackFlystickInputFrameData cannot be polymorphic unless super FLiveLinkBaseFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DTrackFlystickInputFrameData;
class UScriptStruct* FDTrackFlystickInputFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DTrackFlystickInputFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DTrackFlystickInputFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData, Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("DTrackFlystickInputFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_DTrackFlystickInputFrameData.OuterSingleton;
}
template<> DTRACKPLUGIN_API UScriptStruct* StaticStruct<FDTrackFlystickInputFrameData>()
{
	return FDTrackFlystickInputFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_button_state_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_button_state_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_button_state;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_joystick_state_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_joystick_state_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_joystick_state;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Frame data for inputs of flystick tracking data.\n */" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Frame data for inputs of flystick tracking data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTrackFlystickInputFrameData>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_button_state_Inner = { "m_button_state", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_button_state_MetaData[] = {
		{ "Category", "Flystick" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_button_state = { "m_button_state", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackFlystickInputFrameData, m_button_state), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_button_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_button_state_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_joystick_state_Inner = { "m_joystick_state", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_joystick_state_MetaData[] = {
		{ "Category", "Flystick" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_joystick_state = { "m_joystick_state", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackFlystickInputFrameData, m_joystick_state), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_joystick_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_joystick_state_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_button_state_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_button_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_joystick_state_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewProp_m_joystick_state,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
		Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
		&NewStructOps,
		"DTrackFlystickInputFrameData",
		sizeof(FDTrackFlystickInputFrameData),
		alignof(FDTrackFlystickInputFrameData),
		Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_DTrackFlystickInputFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DTrackFlystickInputFrameData.InnerSingleton, Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DTrackFlystickInputFrameData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDTrackFlystickInputBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FDTrackFlystickInputBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DTrackFlystickInputBlueprintData;
class UScriptStruct* FDTrackFlystickInputBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DTrackFlystickInputBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DTrackFlystickInputBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData, Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("DTrackFlystickInputBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_DTrackFlystickInputBlueprintData.OuterSingleton;
}
template<> DTRACKPLUGIN_API UScriptStruct* StaticStruct<FDTrackFlystickInputBlueprintData>()
{
	return FDTrackFlystickInputBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_static_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_static_data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_frame_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_frame_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle flystick data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Facility structure to handle flystick data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTrackFlystickInputBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_static_data_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_static_data = { "m_static_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackFlystickInputBlueprintData, m_static_data), Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_static_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_static_data_MetaData)) }; // 4049614658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_frame_data_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_frame_data = { "m_frame_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackFlystickInputBlueprintData, m_frame_data), Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_frame_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_frame_data_MetaData)) }; // 1949028972
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_static_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewProp_m_frame_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"DTrackFlystickInputBlueprintData",
		sizeof(FDTrackFlystickInputBlueprintData),
		alignof(FDTrackFlystickInputBlueprintData),
		Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_DTrackFlystickInputBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DTrackFlystickInputBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DTrackFlystickInputBlueprintData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDTrackHandStaticData>() == std::is_polymorphic<FLiveLinkSkeletonStaticData>(), "USTRUCT FDTrackHandStaticData cannot be polymorphic unless super FLiveLinkSkeletonStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DTrackHandStaticData;
class UScriptStruct* FDTrackHandStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DTrackHandStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DTrackHandStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTrackHandStaticData, Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("DTrackHandStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_DTrackHandStaticData.OuterSingleton;
}
template<> DTRACKPLUGIN_API UScriptStruct* StaticStruct<FDTrackHandStaticData>()
{
	return FDTrackHandStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_is_right_hand_MetaData[];
#endif
		static void NewProp_m_is_right_hand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_is_right_hand;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_fingers_type_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_fingers_type_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fingers_type_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_fingers_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for hand tracking data.\n */" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Static data for hand tracking data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTrackHandStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_is_right_hand_MetaData[] = {
		{ "Category", "Hands" },
		{ "Comment", "// Number of tracked fingers\n" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Number of tracked fingers" },
	};
#endif
	void Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_is_right_hand_SetBit(void* Obj)
	{
		((FDTrackHandStaticData*)Obj)->m_is_right_hand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_is_right_hand = { "m_is_right_hand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDTrackHandStaticData), &Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_is_right_hand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_is_right_hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_is_right_hand_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type_Inner = { "m_fingers_type", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_DTrackPlugin_EDTrackFingerType, METADATA_PARAMS(nullptr, 0) }; // 4272736271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type_MetaData[] = {
		{ "Category", "Fingers" },
		{ "Comment", "// Tracked finger types\n" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Tracked finger types" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type = { "m_fingers_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackHandStaticData, m_fingers_type), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type_MetaData)) }; // 4272736271
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_is_right_hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewProp_m_fingers_type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
		Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData,
		&NewStructOps,
		"DTrackHandStaticData",
		sizeof(FDTrackHandStaticData),
		alignof(FDTrackHandStaticData),
		Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDTrackHandStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_DTrackHandStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DTrackHandStaticData.InnerSingleton, Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DTrackHandStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDTrackHandBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FDTrackHandBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DTrackHandBlueprintData;
class UScriptStruct* FDTrackHandBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DTrackHandBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DTrackHandBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTrackHandBlueprintData, Z_Construct_UPackage__Script_DTrackPlugin(), TEXT("DTrackHandBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_DTrackHandBlueprintData.OuterSingleton;
}
template<> DTRACKPLUGIN_API UScriptStruct* StaticStruct<FDTrackHandBlueprintData>()
{
	return FDTrackHandBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_static_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_static_data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_frame_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_frame_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle hand data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Facility structure to handle hand data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTrackHandBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_static_data_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_static_data = { "m_static_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackHandBlueprintData, m_static_data), Z_Construct_UScriptStruct_FDTrackHandStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_static_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_static_data_MetaData)) }; // 378143794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_frame_data_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/DTrackLiveLinkTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_frame_data = { "m_frame_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDTrackHandBlueprintData, m_frame_data), Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_frame_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_frame_data_MetaData)) }; // 574786297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_static_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewProp_m_frame_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DTrackPlugin,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"DTrackHandBlueprintData",
		sizeof(FDTrackHandBlueprintData),
		alignof(FDTrackHandBlueprintData),
		Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDTrackHandBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_DTrackHandBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DTrackHandBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DTrackHandBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkTypes_h_Statics::ScriptStructInfo[] = {
		{ FDTrackFlystickInputStaticData::StaticStruct, Z_Construct_UScriptStruct_FDTrackFlystickInputStaticData_Statics::NewStructOps, TEXT("DTrackFlystickInputStaticData"), &Z_Registration_Info_UScriptStruct_DTrackFlystickInputStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTrackFlystickInputStaticData), 4049614658U) },
		{ FDTrackFlystickInputFrameData::StaticStruct, Z_Construct_UScriptStruct_FDTrackFlystickInputFrameData_Statics::NewStructOps, TEXT("DTrackFlystickInputFrameData"), &Z_Registration_Info_UScriptStruct_DTrackFlystickInputFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTrackFlystickInputFrameData), 1949028972U) },
		{ FDTrackFlystickInputBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FDTrackFlystickInputBlueprintData_Statics::NewStructOps, TEXT("DTrackFlystickInputBlueprintData"), &Z_Registration_Info_UScriptStruct_DTrackFlystickInputBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTrackFlystickInputBlueprintData), 363513329U) },
		{ FDTrackHandStaticData::StaticStruct, Z_Construct_UScriptStruct_FDTrackHandStaticData_Statics::NewStructOps, TEXT("DTrackHandStaticData"), &Z_Registration_Info_UScriptStruct_DTrackHandStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTrackHandStaticData), 378143794U) },
		{ FDTrackHandBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FDTrackHandBlueprintData_Statics::NewStructOps, TEXT("DTrackHandBlueprintData"), &Z_Registration_Info_UScriptStruct_DTrackHandBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTrackHandBlueprintData), 643882259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkTypes_h_3349186826(TEXT("/Script/DTrackPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_flara_OneDrive_Dokumente_GitHubProjects_BachelorThesisProject_FHWedelCaveTemplate_Plugins_UnrealDTrackPlugin_master_Source_DTrackPlugin_Public_DTrackLiveLinkTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

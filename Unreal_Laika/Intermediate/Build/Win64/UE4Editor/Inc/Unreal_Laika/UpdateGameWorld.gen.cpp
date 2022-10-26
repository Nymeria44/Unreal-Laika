// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Laika/UpdateGameWorld.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateGameWorld() {}
// Cross Module References
	UNREAL_LAIKA_API UScriptStruct* Z_Construct_UScriptStruct_FStarInfoStruct();
	UPackage* Z_Construct_UPackage__Script_Unreal_Laika();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREAL_LAIKA_API UClass* Z_Construct_UClass_AUpdateGameWorld_NoRegister();
	UNREAL_LAIKA_API UClass* Z_Construct_UClass_AUpdateGameWorld();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FStarInfoStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREAL_LAIKA_API uint32 Get_Z_Construct_UScriptStruct_FStarInfoStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStarInfoStruct, Z_Construct_UPackage__Script_Unreal_Laika(), TEXT("StarInfoStruct"), sizeof(FStarInfoStruct), Get_Z_Construct_UScriptStruct_FStarInfoStruct_Hash());
	}
	return Singleton;
}
template<> UNREAL_LAIKA_API UScriptStruct* StaticStruct<FStarInfoStruct>()
{
	return FStarInfoStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStarInfoStruct(FStarInfoStruct::StaticStruct, TEXT("/Script/Unreal_Laika"), TEXT("StarInfoStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Unreal_Laika_StaticRegisterNativesFStarInfoStruct
{
	FScriptStruct_Unreal_Laika_StaticRegisterNativesFStarInfoStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StarInfoStruct")),new UScriptStruct::TCppStructOps<FStarInfoStruct>);
	}
} ScriptStruct_Unreal_Laika_StaticRegisterNativesFStarInfoStruct;
	struct Z_Construct_UScriptStruct_FStarInfoStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColourVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColourVec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarHRType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StarHRType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarSpectralTypeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StarSpectralTypeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarSpectralTypeLetter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StarSpectralTypeLetter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompPrimary_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompPrimary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_comp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ci_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ci;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Spect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Luminosity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Luminosity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProperName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProperName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/********************************************************************************\n* DATA STRUCTURE USED IN DATATABLE\n********************************************************************************/" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "DATA STRUCTURE USED IN DATATABLE" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStarInfoStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ColourVec_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//R,G,B of the star\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "R,G,B of the star" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ColourVec = { "ColourVec", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, ColourVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ColourVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ColourVec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//Radius of the star\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Radius of the star" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//Tempature of the star\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Tempature of the star" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, Temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//Mass of the star\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Mass of the star" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarHRType_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//WHAT IS THIS\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "WHAT IS THIS" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarHRType = { "StarHRType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, StarHRType), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarHRType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarHRType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeNumber_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//WHAT IS THIS\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "WHAT IS THIS" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeNumber = { "StarSpectralTypeNumber", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, StarSpectralTypeNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeLetter_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//WHAT IS THIS\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "WHAT IS THIS" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeLetter = { "StarSpectralTypeLetter", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, StarSpectralTypeLetter), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeLetter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeLetter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_AbsMag_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//Absolute Magnitude (Fixed Brightness)\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Absolute Magnitude (Fixed Brightness)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_AbsMag = { "AbsMag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, AbsMag), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_AbsMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_AbsMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosZ_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosZ = { "PosZ", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, PosZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosY_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, PosY), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosX_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//Position within the galaxy (sun is 0,0,0)\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Position within the galaxy (sun is 0,0,0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, PosX), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_CompPrimary_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//Are there multiple stars within the system?\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Are there multiple stars within the system?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_CompPrimary = { "CompPrimary", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, CompPrimary), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_CompPrimary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_CompPrimary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_comp_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//What star number is it within the system?\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "What star number is it within the system?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_comp = { "comp", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, comp), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_comp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ci_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//WHAT IS THIS\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "WHAT IS THIS" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ci = { "ci", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, ci), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ci_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ci_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Spect_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//Spectral type of the star\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Spectral type of the star" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Spect = { "Spect", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, Spect), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Spect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Spect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Luminosity_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//Lumonoisty of the star\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Lumonoisty of the star" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Luminosity = { "Luminosity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, Luminosity), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Luminosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Luminosity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ProperName_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//English name\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "English name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ProperName = { "ProperName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, ProperName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ProperName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ProperName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "StarInfoStruct" },
		{ "Comment", "//ID number of the star\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "ID number of the star" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStarInfoStruct, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStarInfoStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ColourVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Temperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarHRType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_StarSpectralTypeLetter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_AbsMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_PosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_CompPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_comp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ci,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Spect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_Luminosity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ProperName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarInfoStruct_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStarInfoStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Laika,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StarInfoStruct",
		sizeof(FStarInfoStruct),
		alignof(FStarInfoStruct),
		Z_Construct_UScriptStruct_FStarInfoStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarInfoStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStarInfoStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStarInfoStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Unreal_Laika();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StarInfoStruct"), sizeof(FStarInfoStruct), Get_Z_Construct_UScriptStruct_FStarInfoStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStarInfoStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStarInfoStruct_Hash() { return 371416416U; }
	void AUpdateGameWorld::StaticRegisterNativesAUpdateGameWorld()
	{
	}
	UClass* Z_Construct_UClass_AUpdateGameWorld_NoRegister()
	{
		return AUpdateGameWorld::StaticClass();
	}
	struct Z_Construct_UClass_AUpdateGameWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StarDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpdateGameWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Laika,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpdateGameWorld_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UpdateGameWorld.h" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpdateGameWorld_Statics::NewProp_StarDataTable_MetaData[] = {
		{ "Category", "Datatable" },
		{ "Comment", "//Creating Datatable definition\n" },
		{ "ModuleRelativePath", "UpdateGameWorld.h" },
		{ "ToolTip", "Creating Datatable definition" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUpdateGameWorld_Statics::NewProp_StarDataTable = { "StarDataTable", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpdateGameWorld, StarDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUpdateGameWorld_Statics::NewProp_StarDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpdateGameWorld_Statics::NewProp_StarDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUpdateGameWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpdateGameWorld_Statics::NewProp_StarDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpdateGameWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpdateGameWorld>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpdateGameWorld_Statics::ClassParams = {
		&AUpdateGameWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUpdateGameWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUpdateGameWorld_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUpdateGameWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpdateGameWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpdateGameWorld()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpdateGameWorld_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpdateGameWorld, 2165424837);
	template<> UNREAL_LAIKA_API UClass* StaticClass<AUpdateGameWorld>()
	{
		return AUpdateGameWorld::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpdateGameWorld(Z_Construct_UClass_AUpdateGameWorld, &AUpdateGameWorld::StaticClass, TEXT("/Script/Unreal_Laika"), TEXT("AUpdateGameWorld"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpdateGameWorld);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

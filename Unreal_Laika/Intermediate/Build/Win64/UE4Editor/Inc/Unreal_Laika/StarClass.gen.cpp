// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Laika/StarClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarClass() {}
// Cross Module References
	UNREAL_LAIKA_API UClass* Z_Construct_UClass_AStarClass_NoRegister();
	UNREAL_LAIKA_API UClass* Z_Construct_UClass_AStarClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Unreal_Laika();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AStarClass::StaticRegisterNativesAStarClass()
	{
	}
	UClass* Z_Construct_UClass_AStarClass_NoRegister()
	{
		return AStarClass::StaticClass();
	}
	struct Z_Construct_UClass_AStarClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PosZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_posY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_posY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_posX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_posX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_comp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_comp_primary_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_comp_primary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_temp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_temp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_properName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_properName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HD_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StarMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Laika,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StarClass.h" },
		{ "ModuleRelativePath", "StarClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_PosZ_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "ModuleRelativePath", "StarClass.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_PosZ = { "PosZ", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, PosZ), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_PosZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_PosZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_posY_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "ModuleRelativePath", "StarClass.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_posY = { "posY", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, posY), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_posY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_posY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_posX_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "Comment", "//Position within the galaxy (sun is 0,0,0)\n" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "Position within the galaxy (sun is 0,0,0)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_posX = { "posX", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, posX), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_posX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_posX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_comp_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "Comment", "// What star number is it within the system?\n" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "What star number is it within the system?" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_comp = { "comp", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, comp), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_comp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_comp_primary_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "Comment", "//Are there multiple stars within the system?\n" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "Are there multiple stars within the system?" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_comp_primary = { "comp_primary", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, comp_primary), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_comp_primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_comp_primary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_spect_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "Comment", "//spectral type of the star\n" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "spectral type of the star" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_spect = { "spect", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, spect), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_spect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_spect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_temp_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "Comment", "//tempature of the star\n" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "tempature of the star" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_temp = { "temp", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, temp), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_temp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_temp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_lum_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "Comment", "//lumonoisty of the star\n" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "lumonoisty of the star" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_lum = { "lum", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, lum), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_lum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_lum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_properName_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "Comment", "//english name\n" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "english name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_properName = { "properName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, properName), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_properName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_properName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_HD_MetaData[] = {
		{ "Category", "Characteristic" },
		{ "Comment", "/********************************************************************************\n\x09* PROPERTIES OF THE STAR\n\x09********************************************************************************///ID number of the star\n" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "PROPERTIES OF THE STAR\n******************************************************************************//ID number of the star" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_HD = { "HD", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, HD), METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_HD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_HD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarClass_Statics::NewProp_StarMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Declaring Star Mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StarClass.h" },
		{ "ToolTip", "Declaring Star Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStarClass_Statics::NewProp_StarMesh = { "StarMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarClass, StarMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::NewProp_StarMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::NewProp_StarMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_PosZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_posY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_posX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_comp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_comp_primary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_spect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_temp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_lum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_properName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_HD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarClass_Statics::NewProp_StarMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarClass_Statics::ClassParams = {
		&AStarClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStarClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStarClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarClass, 3048934370);
	template<> UNREAL_LAIKA_API UClass* StaticClass<AStarClass>()
	{
		return AStarClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarClass(Z_Construct_UClass_AStarClass, &AStarClass::StaticClass, TEXT("/Script/Unreal_Laika"), TEXT("AStarClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

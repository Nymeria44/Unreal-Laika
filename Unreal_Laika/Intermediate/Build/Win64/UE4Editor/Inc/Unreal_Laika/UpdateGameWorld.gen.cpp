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
	UNREAL_LAIKA_API UClass* Z_Construct_UClass_AUpdateGameWorld_NoRegister();
	UNREAL_LAIKA_API UClass* Z_Construct_UClass_AUpdateGameWorld();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Unreal_Laika();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
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

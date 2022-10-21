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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpdateGameWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpdateGameWorld>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpdateGameWorld_Statics::ClassParams = {
		&AUpdateGameWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AUpdateGameWorld, 3277708387);
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

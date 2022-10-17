// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Laika/UnrealLaikaGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealLaikaGameState() {}
// Cross Module References
	UNREAL_LAIKA_API UClass* Z_Construct_UClass_AUnrealLaikaGameState_NoRegister();
	UNREAL_LAIKA_API UClass* Z_Construct_UClass_AUnrealLaikaGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Unreal_Laika();
// End Cross Module References
	void AUnrealLaikaGameState::StaticRegisterNativesAUnrealLaikaGameState()
	{
	}
	UClass* Z_Construct_UClass_AUnrealLaikaGameState_NoRegister()
	{
		return AUnrealLaikaGameState::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealLaikaGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealLaikaGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Laika,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLaikaGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealLaikaGameState.h" },
		{ "ModuleRelativePath", "UnrealLaikaGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealLaikaGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealLaikaGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealLaikaGameState_Statics::ClassParams = {
		&AUnrealLaikaGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealLaikaGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealLaikaGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealLaikaGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealLaikaGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealLaikaGameState, 215740364);
	template<> UNREAL_LAIKA_API UClass* StaticClass<AUnrealLaikaGameState>()
	{
		return AUnrealLaikaGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealLaikaGameState(Z_Construct_UClass_AUnrealLaikaGameState, &AUnrealLaikaGameState::StaticClass, TEXT("/Script/Unreal_Laika"), TEXT("AUnrealLaikaGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealLaikaGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

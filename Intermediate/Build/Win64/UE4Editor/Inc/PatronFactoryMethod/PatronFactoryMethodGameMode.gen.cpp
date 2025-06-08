// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronFactoryMethod/PatronFactoryMethodGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatronFactoryMethodGameMode() {}
// Cross Module References
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_APatronFactoryMethodGameMode_NoRegister();
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_APatronFactoryMethodGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PatronFactoryMethod();
// End Cross Module References
	void APatronFactoryMethodGameMode::StaticRegisterNativesAPatronFactoryMethodGameMode()
	{
	}
	UClass* Z_Construct_UClass_APatronFactoryMethodGameMode_NoRegister()
	{
		return APatronFactoryMethodGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APatronFactoryMethodGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatronFactoryMethodGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PatronFactoryMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatronFactoryMethodGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PatronFactoryMethodGameMode.h" },
		{ "ModuleRelativePath", "PatronFactoryMethodGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatronFactoryMethodGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatronFactoryMethodGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatronFactoryMethodGameMode_Statics::ClassParams = {
		&APatronFactoryMethodGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APatronFactoryMethodGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatronFactoryMethodGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatronFactoryMethodGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatronFactoryMethodGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatronFactoryMethodGameMode, 697910034);
	template<> PATRONFACTORYMETHOD_API UClass* StaticClass<APatronFactoryMethodGameMode>()
	{
		return APatronFactoryMethodGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatronFactoryMethodGameMode(Z_Construct_UClass_APatronFactoryMethodGameMode, &APatronFactoryMethodGameMode::StaticClass, TEXT("/Script/PatronFactoryMethod"), TEXT("APatronFactoryMethodGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatronFactoryMethodGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

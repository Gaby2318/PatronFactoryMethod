// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronFactoryMethod/Enemigos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigos() {}
// Cross Module References
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_AEnemigos_NoRegister();
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_AEnemigos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PatronFactoryMethod();
// End Cross Module References
	void AEnemigos::StaticRegisterNativesAEnemigos()
	{
	}
	UClass* Z_Construct_UClass_AEnemigos_NoRegister()
	{
		return AEnemigos::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatronFactoryMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigos.h" },
		{ "ModuleRelativePath", "Enemigos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigos_Statics::ClassParams = {
		&AEnemigos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigos, 2723327285);
	template<> PATRONFACTORYMETHOD_API UClass* StaticClass<AEnemigos>()
	{
		return AEnemigos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigos(Z_Construct_UClass_AEnemigos, &AEnemigos::StaticClass, TEXT("/Script/PatronFactoryMethod"), TEXT("AEnemigos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronFactoryMethod/Bloques.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloques() {}
// Cross Module References
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_ABloques_NoRegister();
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_ABloques();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PatronFactoryMethod();
// End Cross Module References
	void ABloques::StaticRegisterNativesABloques()
	{
	}
	UClass* Z_Construct_UClass_ABloques_NoRegister()
	{
		return ABloques::StaticClass();
	}
	struct Z_Construct_UClass_ABloques_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloques_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatronFactoryMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloques_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bloques.h" },
		{ "ModuleRelativePath", "Bloques.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloques_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloques>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloques_Statics::ClassParams = {
		&ABloques::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloques_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloques_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloques()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloques_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloques, 2294823235);
	template<> PATRONFACTORYMETHOD_API UClass* StaticClass<ABloques>()
	{
		return ABloques::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloques(Z_Construct_UClass_ABloques, &ABloques::StaticClass, TEXT("/Script/PatronFactoryMethod"), TEXT("ABloques"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloques);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

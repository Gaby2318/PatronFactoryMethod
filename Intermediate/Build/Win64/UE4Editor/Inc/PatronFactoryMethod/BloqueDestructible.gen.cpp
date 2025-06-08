// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronFactoryMethod/BloqueDestructible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueDestructible() {}
// Cross Module References
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_ABloqueDestructible_NoRegister();
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_ABloqueDestructible();
	PATRONFACTORYMETHOD_API UClass* Z_Construct_UClass_ABloques();
	UPackage* Z_Construct_UPackage__Script_PatronFactoryMethod();
// End Cross Module References
	void ABloqueDestructible::StaticRegisterNativesABloqueDestructible()
	{
	}
	UClass* Z_Construct_UClass_ABloqueDestructible_NoRegister()
	{
		return ABloqueDestructible::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueDestructible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueDestructible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloques,
		(UObject* (*)())Z_Construct_UPackage__Script_PatronFactoryMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueDestructible_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueDestructible.h" },
		{ "ModuleRelativePath", "BloqueDestructible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueDestructible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueDestructible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueDestructible_Statics::ClassParams = {
		&ABloqueDestructible::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueDestructible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDestructible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueDestructible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueDestructible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueDestructible, 3127829019);
	template<> PATRONFACTORYMETHOD_API UClass* StaticClass<ABloqueDestructible>()
	{
		return ABloqueDestructible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueDestructible(Z_Construct_UClass_ABloqueDestructible, &ABloqueDestructible::StaticClass, TEXT("/Script/PatronFactoryMethod"), TEXT("ABloqueDestructible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueDestructible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

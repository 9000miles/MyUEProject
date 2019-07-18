// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUEProject_421/MyUEProject_421GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUEProject_421GameMode() {}
// Cross Module References
	MYUEPROJECT_421_API UClass* Z_Construct_UClass_AMyUEProject_421GameMode_NoRegister();
	MYUEPROJECT_421_API UClass* Z_Construct_UClass_AMyUEProject_421GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyUEProject_421();
// End Cross Module References
	void AMyUEProject_421GameMode::StaticRegisterNativesAMyUEProject_421GameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyUEProject_421GameMode_NoRegister()
	{
		return AMyUEProject_421GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyUEProject_421GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyUEProject_421GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUEProject_421,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyUEProject_421GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyUEProject_421GameMode.h" },
		{ "ModuleRelativePath", "MyUEProject_421GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyUEProject_421GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyUEProject_421GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyUEProject_421GameMode_Statics::ClassParams = {
		&AMyUEProject_421GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMyUEProject_421GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyUEProject_421GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyUEProject_421GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyUEProject_421GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyUEProject_421GameMode, 2496106998);
	template<> MYUEPROJECT_421_API UClass* StaticClass<AMyUEProject_421GameMode>()
	{
		return AMyUEProject_421GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyUEProject_421GameMode(Z_Construct_UClass_AMyUEProject_421GameMode, &AMyUEProject_421GameMode::StaticClass, TEXT("/Script/MyUEProject_421"), TEXT("AMyUEProject_421GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyUEProject_421GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

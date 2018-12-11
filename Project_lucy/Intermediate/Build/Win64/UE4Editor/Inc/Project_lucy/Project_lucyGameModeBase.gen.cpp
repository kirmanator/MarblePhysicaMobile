// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Project_lucyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_lucyGameModeBase() {}
// Cross Module References
	PROJECT_LUCY_API UClass* Z_Construct_UClass_AProject_lucyGameModeBase_NoRegister();
	PROJECT_LUCY_API UClass* Z_Construct_UClass_AProject_lucyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_lucy();
// End Cross Module References
	void AProject_lucyGameModeBase::StaticRegisterNativesAProject_lucyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProject_lucyGameModeBase_NoRegister()
	{
		return AProject_lucyGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AProject_lucyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Project_lucy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Project_lucyGameModeBase.h" },
				{ "ModuleRelativePath", "Project_lucyGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProject_lucyGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProject_lucyGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_lucyGameModeBase, 4248153340);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_lucyGameModeBase(Z_Construct_UClass_AProject_lucyGameModeBase, &AProject_lucyGameModeBase::StaticClass, TEXT("/Script/Project_lucy"), TEXT("AProject_lucyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_lucyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

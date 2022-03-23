// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCVModule/OpenCVModuleGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVModuleGameModeBase() {}
// Cross Module References
	OPENCVMODULE_API UClass* Z_Construct_UClass_AOpenCVModuleGameModeBase_NoRegister();
	OPENCVMODULE_API UClass* Z_Construct_UClass_AOpenCVModuleGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OpenCVModule();
// End Cross Module References
	void AOpenCVModuleGameModeBase::StaticRegisterNativesAOpenCVModuleGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOpenCVModuleGameModeBase_NoRegister()
	{
		return AOpenCVModuleGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOpenCVModuleGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenCVModuleGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVModuleGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OpenCVModuleGameModeBase.h" },
		{ "ModuleRelativePath", "OpenCVModuleGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenCVModuleGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenCVModuleGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOpenCVModuleGameModeBase_Statics::ClassParams = {
		&AOpenCVModuleGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOpenCVModuleGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVModuleGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenCVModuleGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOpenCVModuleGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOpenCVModuleGameModeBase, 2195933485);
	template<> OPENCVMODULE_API UClass* StaticClass<AOpenCVModuleGameModeBase>()
	{
		return AOpenCVModuleGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenCVModuleGameModeBase(Z_Construct_UClass_AOpenCVModuleGameModeBase, &AOpenCVModuleGameModeBase::StaticClass, TEXT("/Script/OpenCVModule"), TEXT("AOpenCVModuleGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenCVModuleGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "battletank/battletankGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebattletankGameModeBase() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_AbattletankGameModeBase_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_AbattletankGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_battletank();
// End Cross Module References
	void AbattletankGameModeBase::StaticRegisterNativesAbattletankGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AbattletankGameModeBase);
	UClass* Z_Construct_UClass_AbattletankGameModeBase_NoRegister()
	{
		return AbattletankGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AbattletankGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbattletankGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_battletank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbattletankGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "battletankGameModeBase.h" },
		{ "ModuleRelativePath", "battletankGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbattletankGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbattletankGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AbattletankGameModeBase_Statics::ClassParams = {
		&AbattletankGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AbattletankGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbattletankGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbattletankGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AbattletankGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AbattletankGameModeBase.OuterSingleton, Z_Construct_UClass_AbattletankGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AbattletankGameModeBase.OuterSingleton;
	}
	template<> BATTLETANK_API UClass* StaticClass<AbattletankGameModeBase>()
	{
		return AbattletankGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbattletankGameModeBase);
	struct Z_CompiledInDeferFile_FID_battletank_Source_battletank_battletankGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_battletank_Source_battletank_battletankGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AbattletankGameModeBase, AbattletankGameModeBase::StaticClass, TEXT("AbattletankGameModeBase"), &Z_Registration_Info_UClass_AbattletankGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AbattletankGameModeBase), 2368156235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_battletank_Source_battletank_battletankGameModeBase_h_4088106815(TEXT("/Script/battletank"),
		Z_CompiledInDeferFile_FID_battletank_Source_battletank_battletankGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_battletank_Source_battletank_battletankGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

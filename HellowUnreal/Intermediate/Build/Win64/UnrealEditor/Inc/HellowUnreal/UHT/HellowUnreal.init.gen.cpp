// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHellowUnreal_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HellowUnreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HellowUnreal()
	{
		if (!Z_Registration_Info_UPackage__Script_HellowUnreal.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HellowUnreal",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC61B2A08,
				0x2DF60544,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HellowUnreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HellowUnreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HellowUnreal(Z_Construct_UPackage__Script_HellowUnreal, TEXT("/Script/HellowUnreal"), Z_Registration_Info_UPackage__Script_HellowUnreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC61B2A08, 0x2DF60544));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

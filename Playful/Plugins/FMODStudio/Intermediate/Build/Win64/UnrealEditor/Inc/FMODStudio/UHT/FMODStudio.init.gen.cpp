// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODStudio_init() {}
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnSoundStopped__DelegateSignature();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FMODStudio;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FMODStudio()
	{
		if (!Z_Registration_Info_UPackage__Script_FMODStudio.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FMODStudio_OnSoundStopped__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FMODStudio",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
<<<<<<< Updated upstream
				0xEEC85B83,
				0x8FEFC51E,
=======
				0x78034745,
				0x1B8AD7D2,
>>>>>>> Stashed changes
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FMODStudio.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FMODStudio.OuterSingleton;
	}
<<<<<<< Updated upstream
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FMODStudio(Z_Construct_UPackage__Script_FMODStudio, TEXT("/Script/FMODStudio"), Z_Registration_Info_UPackage__Script_FMODStudio, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEEC85B83, 0x8FEFC51E));
=======
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FMODStudio(Z_Construct_UPackage__Script_FMODStudio, TEXT("/Script/FMODStudio"), Z_Registration_Info_UPackage__Script_FMODStudio, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x78034745, 0x1B8AD7D2));
>>>>>>> Stashed changes
PRAGMA_ENABLE_DEPRECATION_WARNINGS

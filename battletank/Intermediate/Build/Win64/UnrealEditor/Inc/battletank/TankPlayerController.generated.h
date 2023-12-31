// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_TankPlayerController_generated_h
#error "TankPlayerController.generated.h already included, missing '#pragma once' in TankPlayerController.h"
#endif
#define BATTLETANK_TankPlayerController_generated_h

#define FID_battletank_Source_battletank_TankPlayerController_h_14_SPARSE_DATA
#define FID_battletank_Source_battletank_TankPlayerController_h_14_RPC_WRAPPERS
#define FID_battletank_Source_battletank_TankPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_battletank_Source_battletank_TankPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPlayerController(); \
	friend struct Z_Construct_UClass_ATankPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATankPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/battletank"), NO_API) \
	DECLARE_SERIALIZER(ATankPlayerController)


#define FID_battletank_Source_battletank_TankPlayerController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATankPlayerController(); \
	friend struct Z_Construct_UClass_ATankPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATankPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/battletank"), NO_API) \
	DECLARE_SERIALIZER(ATankPlayerController)


#define FID_battletank_Source_battletank_TankPlayerController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPlayerController(ATankPlayerController&&); \
	NO_API ATankPlayerController(const ATankPlayerController&); \
public:


#define FID_battletank_Source_battletank_TankPlayerController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPlayerController(ATankPlayerController&&); \
	NO_API ATankPlayerController(const ATankPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPlayerController)


#define FID_battletank_Source_battletank_TankPlayerController_h_11_PROLOG
#define FID_battletank_Source_battletank_TankPlayerController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_battletank_Source_battletank_TankPlayerController_h_14_SPARSE_DATA \
	FID_battletank_Source_battletank_TankPlayerController_h_14_RPC_WRAPPERS \
	FID_battletank_Source_battletank_TankPlayerController_h_14_INCLASS \
	FID_battletank_Source_battletank_TankPlayerController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_battletank_Source_battletank_TankPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_battletank_Source_battletank_TankPlayerController_h_14_SPARSE_DATA \
	FID_battletank_Source_battletank_TankPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_battletank_Source_battletank_TankPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_battletank_Source_battletank_TankPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class ATankPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_battletank_Source_battletank_TankPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

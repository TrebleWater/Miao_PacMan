// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPACMAN_PacManHUD_generated_h
#error "PacManHUD.generated.h already included, missing '#pragma once' in PacManHUD.h"
#endif
#define MYPACMAN_PacManHUD_generated_h

#define Test_Source_MyPacMan_Public_PacManHUD_h_15_RPC_WRAPPERS
#define Test_Source_MyPacMan_Public_PacManHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Source_MyPacMan_Public_PacManHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacManHUD(); \
	friend MYPACMAN_API class UClass* Z_Construct_UClass_APacManHUD(); \
public: \
	DECLARE_CLASS(APacManHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/MyPacMan"), NO_API) \
	DECLARE_SERIALIZER(APacManHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test_Source_MyPacMan_Public_PacManHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPacManHUD(); \
	friend MYPACMAN_API class UClass* Z_Construct_UClass_APacManHUD(); \
public: \
	DECLARE_CLASS(APacManHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/MyPacMan"), NO_API) \
	DECLARE_SERIALIZER(APacManHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test_Source_MyPacMan_Public_PacManHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManHUD(APacManHUD&&); \
	NO_API APacManHUD(const APacManHUD&); \
public:


#define Test_Source_MyPacMan_Public_PacManHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManHUD(APacManHUD&&); \
	NO_API APacManHUD(const APacManHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManHUD)


#define Test_Source_MyPacMan_Public_PacManHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define Test_Source_MyPacMan_Public_PacManHUD_h_12_PROLOG
#define Test_Source_MyPacMan_Public_PacManHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_MyPacMan_Public_PacManHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Test_Source_MyPacMan_Public_PacManHUD_h_15_RPC_WRAPPERS \
	Test_Source_MyPacMan_Public_PacManHUD_h_15_INCLASS \
	Test_Source_MyPacMan_Public_PacManHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_MyPacMan_Public_PacManHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_MyPacMan_Public_PacManHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Test_Source_MyPacMan_Public_PacManHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_MyPacMan_Public_PacManHUD_h_15_INCLASS_NO_PURE_DECLS \
	Test_Source_MyPacMan_Public_PacManHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_MyPacMan_Public_PacManHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

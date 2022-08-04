// Copyright Epic Games, Inc. All Rights Reserved.

#include "VrCore.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FVrCoreModule"

void FVrCoreModule::StartupModule()
{
}

void FVrCoreModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FVrCoreModule, VrCore)

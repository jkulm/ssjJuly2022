// Copyright 2022 owoDra

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCustomUserSettingsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

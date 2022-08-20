// Copyright 2022 owoDra

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "Engine/Engine.h"
#include "CustomGameUserSettings.generated.h"

//=======================================
// Custom Game User Settings Class
//=======================================
UCLASS(config = GameUserSettings, configdonotcheckdefaults, Blueprintable, BlueprintType)
class CUSTOMUSERSETTINGS_API UCustomGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
	
public:

	//======================================
	// Custom Game User Settings Overrides
	//======================================

	// Override SetToDefaults Function
	virtual void SetToDefaults() override;

	// Override ApplySettings Function
	virtual void ApplySettings(bool bCheckForCommandLineOverrides) override;

	// Override ValidateSettings Functions
	virtual void ValidateSettings() override;

	//======================================
	// Custom Game User Settings Functions
	//======================================

	// Get CustomGameUserSettings Instance
	UFUNCTION(BlueprintCallable, Category = Settings)
		static UCustomGameUserSettings* GetCustomGameUserSettings();

	// Set CustomGameUserSettings to Default Values
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Settings)
		void SetCustomSettingsToDefaults();

	// Applies Custom User Settings
	// You can add tasks for applying the settings
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Settings)
		void ApplyCustomSettings();

	// Validate Custom Settings
	// You can add tasks to validate custom settings
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Settings)
		void ValidateCustomSettings();

};

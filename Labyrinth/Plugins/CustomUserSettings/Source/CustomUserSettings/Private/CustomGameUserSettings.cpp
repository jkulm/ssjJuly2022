// Copyright 2022 owoDra

#include "CustomGameUserSettings.h"

//===========================================
// Custom Game User Settings Overrides
//===========================================

// Override SetToDefaults Function
void UCustomGameUserSettings::SetToDefaults()
{
	Super::SetToDefaults();

	SetCustomSettingsToDefaults();
}

// Override ApplySettings Function
void UCustomGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides)
{
	ApplyCustomSettings();

	Super::ApplySettings(bCheckForCommandLineOverrides);
}

// Override ValidateSettings Functions
void UCustomGameUserSettings::ValidateSettings()
{
	Super::ValidateSettings();

	ValidateCustomSettings();
}

//===========================================
// Custom Game User Settings Functions
//===========================================

// Get CustomGameUserSettings Instance
UCustomGameUserSettings* UCustomGameUserSettings::GetCustomGameUserSettings()
{
	return Cast<UCustomGameUserSettings>(GEngine->GameUserSettings);
}

// Set CustomGameUserSettings to Default Values
void UCustomGameUserSettings::SetCustomSettingsToDefaults_Implementation()
{
	// Add tasks from a blueprint
}

// Applies Custom User Settings
// You can add tasks for applying the settings
void UCustomGameUserSettings::ApplyCustomSettings_Implementation()
{
	// Add tasks from a blueprint
}

// Validate Custom Settings
// You can add tasks to validate custom settings
void UCustomGameUserSettings::ValidateCustomSettings_Implementation()
{
	// Add tasks from a blueprint
}
#include "FortPlayerInput.h"

UFortPlayerInput::UFortPlayerInput() {
    this->DebugExecBindings.AddDefaulted(30);
    this->InvertedAxis.AddDefaulted(2);
    this->CampaignDefaultKBMPresetName = TEXT("ConfigKBM_Campaign");
    this->AthenaDefaultKBMPresetName = TEXT("ConfigKBM_Athena");
    this->CampaignKBMResetToDefaultPresetNames.AddDefaulted(2);
    this->AthenaKBMResetToDefaultPresetNames.AddDefaulted(2);
    this->DefaultGamepadPresetName = TEXT("ConfigG");
    this->DefaultGamepadPresetNameAthena = TEXT("ConfigG_Athena");
    this->DefaultGamepadPresetNameAthenaMobile = TEXT("ConfigG_Athena");
    this->CustomGamepadPresetNameAthena = TEXT("ConfigCustom_Athena");
    this->FortPlayerInputSettingsNames.AddDefaulted(16);
    this->TouchLookAccelerationMultiplier = 0.00f;
    this->TouchBuildingMultiplier = 1.00f;
    this->TouchEditModeMultiplier = 1.00f;
    this->MotionYawAxis = EFortMotionYawAxis::Roll;
    this->TargetingMultiplier = 1.00f;
    this->ScopedMultiplier = 1.00f;
    this->GamepadTargetingMultiplier = 0.65f;
    this->GamepadScopedMultiplier = 0.65f;
    this->GamepadBuildingMultiplier = 1.00f;
    this->GamepadEditModeMultiplier = 1.00f;
    this->bInvertedPitchForMotion = false;
    this->bInvertedYawMobile = false;
    this->MotionTargetingMultiplier = 0.00f;
    this->MotionScopedMultiplier = 0.00f;
    this->MotionHarvestingToolMultiplier = 0.00f;
    this->GyroV2Sensitivity = 2.00f;
    this->GyroV2DetachedYawAxis = EFortMotionYawAxis::Yaw;
    this->GyroV2AttachedYawAxis = EFortMotionYawAxis::Roll;
    this->GyroV2ActiveMode = EGyroActiveMode::ADSOrFiring;
    this->bGyroV2LookStickDisables = false;
    this->bGyroV2AimAssist = true;
    this->GyroV2AccelMultiplier = 2.00f;
    this->GyroV2AccelMinThreshold = 0.00f;
    this->GyroV2AccelMaxThreshold = 75.00f;
    this->GyroV2AccelerationMode = EGyroAcceleration::Off;
    this->GyroV2VerticalMultiplier = 1.00f;
    this->GyroV2DeadZone = 0.00f;
    this->GyroV2Smoothing = 0.00f;
    this->GyroV2Tightening = 0.00f;
    this->GyroV2ButtonX = EGyroButtonResponse::Disable;
    this->GyroV2ButtonY = EGyroButtonResponse::Disable;
    this->GyroV2TrackballDecay = 2.00f;
    this->GyroV2ButtonHoldTime = 0.20f;
    this->bGyroV2DisabledWhileDriving = false;
    this->bFlickStickEnabled = false;
    this->FlickTime = 0.10f;
    this->FlickSmoothingThreshold = 180.00f;
    this->FlickDeadZone = 0.90f;
    this->GamepadMoveStickDeadZone = 0.24f;
    this->GamepadLookStickDeadZone = 0.27f;
    this->DesiredKBMPlayerInputSettings = NULL;
    this->DesiredGamepadPlayerInputSettings = NULL;
    this->InputActionTypeFriendlyNames.AddDefaulted(4);
    this->InputActionGroupContexts.AddDefaulted(467);
    this->InputActionGroupExemptFromAllModesCheck.AddDefaulted(45);
}

void UFortPlayerInput::HandleDesiredKBMInputSettingsReloadConfig(UFortPlayerInputSettings* KBMSettings) {
}

void UFortPlayerInput::HandleDesiredGamepadInputSettingsReloadConfig(UFortPlayerInputSettings* GamepadSettings) {
}



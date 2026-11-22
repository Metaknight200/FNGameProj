#include "FortReplayMovableSpotLightPilotController.h"

AFortReplayMovableSpotLightPilotController::AFortReplayMovableSpotLightPilotController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    const FProperty* p_bIsLocalPlayerController = GetClass()->FindPropertyByName("bIsLocalPlayerController");
    (*p_bIsLocalPlayerController->ContainerPtrToValuePtr<bool>(this)) = true;
    this->bMovingAllLights = false;
    this->bColorSelectMode = false;
    this->Hue = 0.00f;
    this->Saturation = 0.00f;
    this->Value = 0.00f;
    this->ColorInputX = 0.00f;
    this->ColorInputY = 0.00f;
    this->LightColorSelectComponent = NULL;
    this->PendingCurrentSpotLight = NULL;
    this->OriginalControllerRef = NULL;
    this->OriginalPlayer = NULL;
    this->TimeAccumulator = 0.00f;
    this->InitialMaxSpeed = 0.00f;
    this->InitialAccel = 0.00f;
    this->InitialDecel = 0.00f;
}

void AFortReplayMovableSpotLightPilotController::ToggleLockReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::SpawnReplaySpotLightEx(float X, float Y, float Z, float Yaw, float Pitch, int32 R, int32 G, int32 B, float InnerAngle, float OuterAngle, float Intensity, float Radius, float Temp) {
}

void AFortReplayMovableSpotLightPilotController::SpawnReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::SetSpotLightGroupMoveLockByNumber(uint32 Number, bool bLocked) {
}

void AFortReplayMovableSpotLightPilotController::SelectSpotLightByNumber(uint32 Number) {
}

void AFortReplayMovableSpotLightPilotController::SelectPrevSpotLight() {
}

void AFortReplayMovableSpotLightPilotController::SelectNextSpotLight() {
}

void AFortReplayMovableSpotLightPilotController::ReAimReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::PilotReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::LockAllReplaySpotLights() {
}

void AFortReplayMovableSpotLightPilotController::GamepadLightColorSelectY(float Amt) {
}

void AFortReplayMovableSpotLightPilotController::GamepadLightColorSelectX(float Amt) {
}

void AFortReplayMovableSpotLightPilotController::DuplicateReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::DestroyReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::DestroyAllReplaySpotLights() {
}



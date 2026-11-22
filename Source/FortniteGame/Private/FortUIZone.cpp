#include "FortUIZone.h"

AFortUIZone::AFortUIZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowOverlays = true;
    this->DebugDisplay.AddDefaulted(1);
    this->IntensityGraph = NULL;
    this->PIDValuesGraph = NULL;
    this->PIDContributionsGraph = NULL;
    this->UtilitiesGraph = NULL;
    this->CurrentContextualReticleIconType = FCR_None;
}

void AFortUIZone::ToggleTargetInfoSensing() {
}

void AFortUIZone::ToggleTargetInfoPaths() {
}

void AFortUIZone::ToggleTargetInfoLock(bool bTraceComplex) {
}

void AFortUIZone::ToggleTargetInfoAI() {
}

void AFortUIZone::ToggleTargetInfo() {
}

FName AFortUIZone::GetCurrentCursorModeAction() {
    return NAME_None;
}

void AFortUIZone::CloseFullScreenMap() {
}



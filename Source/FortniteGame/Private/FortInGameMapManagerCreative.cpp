#include "FortInGameMapManagerCreative.h"
#include "EMapCaptureMethod.h"

AFortInGameMapManagerCreative::AFortInGameMapManagerCreative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapCaptureMethod = EMapCaptureMethod::LiveCapture;
    this->HeatmapEnabledMapMaterial = NULL;
    this->HeatmapDisabledMapMaterial = NULL;
    this->CreativeMapMaterial = NULL;
}

void AFortInGameMapManagerCreative::SetCurrentVolume(AFortVolume* InVolume) {
}

void AFortInGameMapManagerCreative::OnPlayModeChanged(AFortMinigame* Minigame, bool bIsInPlayMode) {
}



#include "FortHUDEquipProgressBase.h"

UFortHUDEquipProgressBase::UFortHUDEquipProgressBase() {
    this->Image_ProgressBar = NULL;
    this->Text_TimeRemaining = NULL;
    this->ProgressBarMaterialParamName = TEXT("Percent");
}




void UFortHUDEquipProgressBase::HandleUIGameplayCueEvent(FName CueName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters) {
}

void UFortHUDEquipProgressBase::HandleReplayScrubComplete() {
}

void UFortHUDEquipProgressBase::HandleFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}



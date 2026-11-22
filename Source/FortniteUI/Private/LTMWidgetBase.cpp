#include "LTMWidgetBase.h"

ULTMWidgetBase::ULTMWidgetBase() {
    this->MutatorClassToWaitFor = NULL;
    this->CachedGameplayMutator = NULL;
}

void ULTMWidgetBase::SetPlayerPortrait(AFortPlayerStateAthena* Player, UFortLazyImage* PortraitImage) const {
}




void ULTMWidgetBase::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

void ULTMWidgetBase::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}




uint8 ULTMWidgetBase::GetViewingTeam() const {
    return 0;
}

AFortPlayerStateAthena* ULTMWidgetBase::GetViewingPlayerState() const {
    return NULL;
}



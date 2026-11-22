#include "AthenaSpectatorNameplateLayerBase.h"

UAthenaSpectatorNameplateLayerBase::UAthenaSpectatorNameplateLayerBase() {
    this->NameplateWidgetClass = NULL;
    this->Canvas_NameplateIndicators = NULL;
}

void UAthenaSpectatorNameplateLayerBase::OnTeamColorVisibleChanged(bool bVisible) {
}

void UAthenaSpectatorNameplateLayerBase::OnPlayerDataAdded(UAthenaRemotePlayerViewData* InPlayerData) {
}

void UAthenaSpectatorNameplateLayerBase::OnArrowTeamColorVisibleChanged(bool bVisible) {
}



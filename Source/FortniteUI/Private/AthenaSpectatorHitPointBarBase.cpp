#include "AthenaSpectatorHitPointBarBase.h"

UAthenaSpectatorHitPointBarBase::UAthenaSpectatorHitPointBarBase() {
    this->BarType = EHealthBarType::Health;
    this->LastToCurrentUpdateRate = 1.50f;
    this->bIsDBNO = false;
}

void UAthenaSpectatorHitPointBarBase::SetPlayerData(UAthenaRemotePlayerViewData* InPlayerData) {
}

void UAthenaSpectatorHitPointBarBase::OnValueHealed(UAthenaRemotePlayerViewData* InPlayerData, float InValue, float InValueMax) {
}

void UAthenaSpectatorHitPointBarBase::OnValueDamaged(UAthenaRemotePlayerViewData* InPlayerData, float InValue, float InValueMax) {
}

void UAthenaSpectatorHitPointBarBase::OnEliminatedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsEliminated) {
}


void UAthenaSpectatorHitPointBarBase::OnDBNOStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDBNO) {
}






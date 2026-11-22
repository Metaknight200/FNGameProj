#include "AthenaSpectatorNameplateBase.h"

UAthenaSpectatorNameplateBase::UAthenaSpectatorNameplateBase() {
    this->DistanceToCameraOffsetScale = 0.05f;
    this->MinZOffset = 125.00f;
    this->MaxZOffset = 450.00f;
    this->bOverrideNameplateScaleToMax = false;
    this->CurrentDistanceState = EAthenaSpectatorNameplateDistanceState::Near;
    this->CurrentDetailState = EAthenaSpectatorNameplateDetailState::High;
}








void UAthenaSpectatorNameplateBase::OnPlayerPawnChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortPlayerPawn* InPlayerPawn) {
}







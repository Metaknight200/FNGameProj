#include "SyncedMontageParams.h"

FSyncedMontageParams::FSyncedMontageParams() {
    this->SyncedMontage = NULL;
    this->MontageTarget = EMontageSyncTargetType::Pet;
    this->PartType = EFortCustomPartType::Head;
    this->MontageStopBlendTime = 0.00f;
    this->bSyncMontage = false;
}


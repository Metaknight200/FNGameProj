#include "DeathInfo.h"

FDeathInfo::FDeathInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->DeathLocation = FVector::ZeroVector;
    this->FinisherOrDowner = NULL;
    this->Downer = NULL;
    this->bDBNO = false;
    this->DeathCause = EDeathCause::OutsideSafeZone;
    this->DeathClassSlot = 0;
    this->Distance = 0.00f;
    this->bInitialized = false;
}


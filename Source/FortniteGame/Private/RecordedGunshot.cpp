#include "RecordedGunshot.h"

FRecordedGunshot::FRecordedGunshot() {
    // Initialize reflected value fields omitted by the dump.
    this->WorldLocation = FVector::ZeroVector;
    this->Weapon = NULL;
    this->InstigatingFortPawn = NULL;
    this->Strength = 0.00f;
    this->Time = 0.00f;
}


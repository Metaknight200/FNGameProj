#include "PawnDamageData.h"

FPawnDamageData::FPawnDamageData() {
    // Initialize reflected value fields omitted by the dump.
    this->HitLocation = FVector::ZeroVector;
    this->Momentum = FVector::ZeroVector;
    this->DamagedActor = NULL;
    this->Damage = 0.00f;
    this->InstigatedBy = NULL;
    this->DamageCauser = NULL;
    this->HitComponent = NULL;
}


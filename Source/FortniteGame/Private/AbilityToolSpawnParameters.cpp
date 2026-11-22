#include "AbilityToolSpawnParameters.h"

FAbilityToolSpawnParameters::FAbilityToolSpawnParameters() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->Rotation = FRotator::ZeroRotator;
    this->SpawnClass = NULL;
    this->AttachedToActor = NULL;
}


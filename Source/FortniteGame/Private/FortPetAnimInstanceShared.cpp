#include "FortPetAnimInstanceShared.h"

UFortPetAnimInstanceShared::UFortPetAnimInstanceShared() {
    this->bUpdateAllPawnProperties = false;
    this->DeltaTime = 0.00f;
    this->bAreActiveFlagChangesPending = false;
    this->OwnerFortPawn = NULL;
    this->OwnerPet = NULL;
    this->bIsOnGround = false;
    this->bIsFrontEndPreview = false;
    this->bLobbySkyDive_IsDiving = false;
}



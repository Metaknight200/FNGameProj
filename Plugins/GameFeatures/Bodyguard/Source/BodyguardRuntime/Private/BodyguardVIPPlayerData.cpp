#include "BodyguardVIPPlayerData.h"

FBodyguardVIPPlayerData::FBodyguardVIPPlayerData() {
    this->PlayerState = NULL;
    this->CurrentHealth = 0.00f;
    this->MaxHealth = 0.00f;
    this->bIsDBNO = false;
    this->bIsBeingRevived = false;
    this->bAllowItemPickup = false;
    this->bIsDead = false;
}


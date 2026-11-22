#include "VendettaPlayerHuntedStatus.h"

FVendettaPlayerHuntedStatus::FVendettaPlayerHuntedStatus() {
    this->PlayerState = NULL;
    this->HuntedStatusReplicated = EVendettaHuntedStatus::NotHunted;
    this->MasterHunterHuntedStatusReplicated = EVendettaHuntedStatus::NotHunted;
    this->HuntedStatusLocal = EVendettaHuntedStatus::NotHunted;
    this->MasterHunterHuntedStatusLocal = EVendettaHuntedStatus::NotHunted;
}


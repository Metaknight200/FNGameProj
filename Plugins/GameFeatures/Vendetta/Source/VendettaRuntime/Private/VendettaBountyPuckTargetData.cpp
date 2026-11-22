#include "VendettaBountyPuckTargetData.h"

FVendettaBountyPuckTargetData::FVendettaBountyPuckTargetData() {
    this->TargetPlayerState = NULL;
    this->OwnerPlayerState = NULL;
    this->BonusReward = 0;
    this->Rarity = EFortRarity::Common;
    this->BountyPuckWeaponComponent = NULL;
}


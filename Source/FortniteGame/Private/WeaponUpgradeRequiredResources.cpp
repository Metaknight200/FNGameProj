#include "WeaponUpgradeRequiredResources.h"

UWeaponUpgradeRequiredResources::UWeaponUpgradeRequiredResources() {
    this->RequiredWood = -1;
    this->RequiredMetal = -1;
    this->RequiredBrick = -1;
    this->Direction = EFortWeaponUpgradeDirection::NotSet;
}



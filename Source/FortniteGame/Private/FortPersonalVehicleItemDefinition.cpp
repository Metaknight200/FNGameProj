#include "FortPersonalVehicleItemDefinition.h"
#include "EFortItemType.h"

UFortPersonalVehicleItemDefinition::UFortPersonalVehicleItemDefinition() {
    this->ItemType = EFortItemType::PersonalVehicle;
    this->bAllowMultipleStacks = false;
    this->MountTime = 0.00f;
    this->AnimClass = NULL;
}



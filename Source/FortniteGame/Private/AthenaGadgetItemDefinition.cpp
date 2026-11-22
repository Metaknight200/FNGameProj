#include "AthenaGadgetItemDefinition.h"
#include "EFortItemType.h"

UAthenaGadgetItemDefinition::UAthenaGadgetItemDefinition() {
    this->ItemType = EFortItemType::AthenaGadget;
    this->bNeverPersisted = true;
    this->bAllowMultipleStacks = false;
    this->bIsPickupASpecialActor = true;
    this->bCanBeDroppedWhenEquipmentChangeIsBlocked = false;
    this->bAllowedFuelGadgetUI = true;
    this->bShowCooldownUI = false;
    this->bShowShortDescriptionInPickupDisplay = false;
    this->bDisplayPlayerNameForInventoryActor = false;
    this->bDisplayHealthForInventoryActor = false;
    this->bDisplayShieldForInventoryActor = false;
    this->ContextOverrideWidget = NULL;
}



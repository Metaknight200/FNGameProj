#include "FortWorldItemDefinition.h"

UFortWorldItemDefinition::UFortWorldItemDefinition() {
    this->bInventorySizeLimited = true;
    this->DropBehavior = EWorldItemDropBehavior::DropAsPickup;
    this->bIgnoreRespawningForDroppingAsPickup = false;
    this->bCanAutoEquipByClass = true;
    this->bPersistInInventoryWhenFinalStackEmpty = false;
    this->bSupportsQuickbarFocus = true;
    this->bSupportsQuickbarFocusForGamepadOnly = false;
    this->bShouldActivateWhenFocused = true;
    this->bForceFocusWhenAdded = false;
    this->bForceIntoOverflow = false;
    this->bForceStayInOverflow = false;
    this->bDropCurrentItemOnOverflow = true;
    this->bShouldShowItemToast = true;
    this->bShowDirectionalArrowWhenFarOff = true;
    this->bCanBeDropped = true;
    this->bCanBeReplacedByPickup = true;
    this->bItemCanBeStolen = false;
    this->bCanBeDepositedInStorageVault = true;
    this->bItemHasDurability = false;
    this->bAllowedToBeLockedInInventory = false;
    this->bOverridePickupMeshTransform = false;
    this->bAlwaysCountForCollectionQuest = false;
    this->bDropOnDeath = false;
    this->bDropOnLogout = false;
    this->bDropOnDBNO = false;
    this->bDoesNotNeedSourceSchematic = false;
    this->bUsesGoverningTags = false;
    this->DropCount = -1;
    this->MiniMapViewableDistance = 8000.00f;
    this->bIsPickupASpecialActor = false;
    this->DisassembleDurabilityDegradeMinLootPercent = 0.20f;
    this->DisassembleDurabilityDegradeMaxLootPercent = 0.80f;
    this->PreferredQuickbarSlot = -1;
    this->MinLevel = 0;
    this->MaxLevel = 0;
    this->NumberOfSlotsToTake = 1;
}

float UFortWorldItemDefinition::GetMaxDurability(int32 ItemLevel) const {
    return 0.0f;
}

int32 UFortWorldItemDefinition::GetInitialAmmo(const int32 ItemLevel) const {
    return 0;
}

float UFortWorldItemDefinition::GetDPSAtLevel(int32 ItemLevel) const {
    return 0.0f;
}

float UFortWorldItemDefinition::GetDamageAtLevel(int32 ItemLevel) const {
    return 0.0f;
}

UFortWorldItemDefinition* UFortWorldItemDefinition::GetAmmoWorldItemDefinition_BP() const {
    return NULL;
}

bool UFortWorldItemDefinition::CanBeDisassembled() const {
    return false;
}



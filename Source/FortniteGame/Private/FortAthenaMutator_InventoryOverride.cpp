#include "FortAthenaMutator_InventoryOverride.h"

AFortAthenaMutator_InventoryOverride::AFortAthenaMutator_InventoryOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->bWantsAutoTDMActivation = true;
    this->DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
    this->TrapDropOverride = EAthenaLootDropOverride::NoOverride;
    this->WeaponDropOverride = EAthenaLootDropOverride::NoOverride;
    this->MaterialDropOverride = EAthenaLootDropOverride::NoOverride;
    this->GadgetDropOverride = EAthenaLootDropOverride::NoOverride;
    this->ConsumableDropOverride = EAthenaLootDropOverride::NoOverride;
    this->AmmoDropOverride = EAthenaLootDropOverride::NoOverride;
    this->InventoryUpdateOverride = EAthenaInventorySpawnOverride::NoOverride;
    this->InventoryLoadoutIndex = -1;
    this->InventoryAutoEquipSlot = -1;
    this->bForceInventoryAutoEquip = false;
}



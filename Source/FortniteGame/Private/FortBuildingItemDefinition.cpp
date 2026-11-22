#include "FortBuildingItemDefinition.h"
#include "EFortItemType.h"

UFortBuildingItemDefinition::UFortBuildingItemDefinition() {
    this->ItemType = EFortItemType::BuildingPiece;
    this->bInventorySizeLimited = false;
    this->bShouldShowItemToast = false;
    this->bCanBeDropped = false;
    this->bItemHasDurability = false;
    this->bValidForLastEquipped = false;
}



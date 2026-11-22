#include "FortVehicleItemDefinition.h"
#include "EFortItemType.h"

UFortVehicleItemDefinition::UFortVehicleItemDefinition() {
    this->ItemType = EFortItemType::Vehicle;
    this->bNeverPersisted = true;
    this->WrapPreviewSectionMask = 0;
    this->bUseInWrapPreviewList = false;
}



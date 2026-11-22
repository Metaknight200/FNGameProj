#include "FortEditToolItemDefinition.h"
#include "EFortItemType.h"

UFortEditToolItemDefinition::UFortEditToolItemDefinition() {
    this->ItemType = EFortItemType::EditTool;
    this->bInventorySizeLimited = false;
    this->bValidForLastEquipped = false;
}



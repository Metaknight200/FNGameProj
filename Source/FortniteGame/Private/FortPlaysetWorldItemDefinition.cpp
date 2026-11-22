#include "FortPlaysetWorldItemDefinition.h"
#include "EFortItemType.h"

UFortPlaysetWorldItemDefinition::UFortPlaysetWorldItemDefinition() {
    this->ItemType = EFortItemType::CreativePlayset;
    this->bInventorySizeLimited = false;
    this->bCanBeDropped = false;
}



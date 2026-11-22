#include "FortCreativeUserPrefabItemDefinition.h"
#include "EFortItemType.h"

UFortCreativeUserPrefabItemDefinition::UFortCreativeUserPrefabItemDefinition() {
    this->ItemType = EFortItemType::CreativeUserPrefab;
    this->bInventorySizeLimited = false;
    this->bCanBeDropped = false;
}



#include "FortCreativeTagsManager.h"

UFortCreativeTagsManager::UFortCreativeTagsManager() {
    this->CreativeTagsTable = NULL;
    this->CreativeTagCategoriesTable = NULL;
}

TArray<FText> UFortCreativeTagsManager::GetCreativeTagsForItem(UFortItemDefinition* ItemDefinition) {
    return TArray<FText>();
}



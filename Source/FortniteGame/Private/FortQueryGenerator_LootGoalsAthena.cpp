#include "FortQueryGenerator_LootGoalsAthena.h"
#include "FortQueryItemType_Goal.h"

UFortQueryGenerator_LootGoalsAthena::UFortQueryGenerator_LootGoalsAthena() {
    this->ItemType = UFortQueryItemType_Goal::StaticClass();
    this->AssignmentSettings = NULL;
    this->SearchCenter = NULL;
    this->bAvailableLootOnly = true;
}



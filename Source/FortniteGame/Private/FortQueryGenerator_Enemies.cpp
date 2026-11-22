#include "FortQueryGenerator_Enemies.h"
#include "FortQueryItemType_Goal.h"

UFortQueryGenerator_Enemies::UFortQueryGenerator_Enemies() {
    this->ItemType = UFortQueryItemType_Goal::StaticClass();
    this->bPerceivedEnemiesOnly = false;
    this->bSleepCapableAIUsePerceivedEnemiesOnly = true;
    this->bIgnoreDBNOPawns = true;
    this->bIgnoreSleepingAIs = false;
    this->bAddEnemiesFromAbilityRange = false;
}



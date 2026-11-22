#include "FortAthenaAISpawnerDataComponent_AIBotBehavior.h"

UFortAthenaAISpawnerDataComponent_AIBotBehavior::UFortAthenaAISpawnerDataComponent_AIBotBehavior() {
    this->bCanUseFallbackPatrolAround = true;
    this->bAllowReviveSquadmates = true;
    this->bAllowReviveSameFactionNPCs = false;
    this->bUseReviveToken = false;
    this->MaxDistanceToRevive = 0.00f;
}



#include "FortAthenaAIBotLootingDigestedSkillSet.h"

UFortAthenaAIBotLootingDigestedSkillSet::UFortAthenaAIBotLootingDigestedSkillSet() {
    this->ThresholdDistanceToSwitchLootItem = 0.25f;
    this->ThresholdDistanceSquaredToRescanForBetterLoot = 500.00f;
    this->ThresholdTimeToRescanForBetterLoot = 2.00f;
    this->LootStateEvaluationRadiusSq = 1500.00f;
    this->MinLootDurationPerPOI = 30.00f;
    this->MaxLootDurationPerPOI = 120.00f;
    this->LootPickupInteractionTime = 0.30f;
    this->LootPickupInteractionDeviationTime = 0.10f;
    this->Distance2DScore = -1.00f;
    this->HeightScore = -1000.00f;
    this->ThreatMaxScore = -1000.00f;
    this->PrioritizeWeaponScore = 3000.00f;
    this->PoiSelectionDistanceScore = -1.00f;
    this->PoiSelectionBotPresenceScore = 0.00f;
}



#include "FortEncounterSettings.h"

FFortEncounterSettings::FFortEncounterSettings() {
    this->bRiftsDestroyPlayerBuiltBuildings = false;
    this->bValidateIfPlayerIsAtSpawnLocation = false;
    this->bMustFindSpawnPoints = false;
    this->bStopIfCantFindSpawnPoint = false;
    this->bIgnoreCollisionWhenSpawningAI = false;
    this->bTrackCombatParticipation = false;
    this->bDisplayThreatVisuals = false;
    this->bCanDespawnExpiredPawns = false;
    this->BurstSpawnThreatVisualsEndDelayOverride = 0.00f;
    this->NumRiftsToUseOverride = 0;
    this->bUseEQSQueryToFindAISpawnLocations = false;
    this->bRelevantForTotalAICap = false;
    this->bEnableRecreateRift = false;
    this->bRespawnRiftWhenRiftDead = false;
    this->bRandomiseQueryRiftLocations = false;
    this->bOverrideEqsFallback = false;
    this->PreSpawnRequeryTime = 0.00f;
    this->SpawnAIIntervalTime = 0.00f;
    this->SpawnRiftIntervalTime = 0.00f;
    this->bSpawnFirstRiftNoDelay = false;
    this->RiftSelectionQuery = NULL;
    this->RiftSlotsEQSQueryOverride = NULL;
    this->RiftClassOverride = NULL;
    this->EncounterGroupID = 0;
    this->ZoneIndex = 0;
    this->DifficultyIndex = 0;
    this->AIDespawnDistanceOverride = 0.00f;
}


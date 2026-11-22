#include "FortAthenaMutator_Bots.h"
#include "Templates/SubclassOf.h"

AFortAthenaMutator_Bots::AFortAthenaMutator_Bots(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBotHostileToHumanPlayersOnly = true;
    this->CacheBotData = NULL;
    this->bSpawnInAir = false;
    this->MaxAroundBotDistanceToSearchPOIToLand = 25000.00f;
    this->CacheCompositeCurveTable = NULL;
    this->CacheCompositeDataTable = NULL;
}

AFortPlayerPawnAthena* AFortAthenaMutator_Bots::SpawnBot(TSubclassOf<AFortPlayerPawnAthena> BotPawnClass, const AActor* InSpawnLocator, const FVector InSpawnLocation, const FRotator InSpawnRotation, const bool bSnapToGround) {
    return NULL;
}

void AFortAthenaMutator_Bots::OnSafeZoneUpdated() {
}



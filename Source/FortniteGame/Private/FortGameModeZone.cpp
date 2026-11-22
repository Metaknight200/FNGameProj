#include "FortGameModeZone.h"
#include "FortGameStateZone.h"
#include "FortPlayerControllerZone.h"
#include "FortPlayerStateZone.h"
#include "FortVisibilityManager.h"
#include "Templates/SubclassOf.h"

AFortGameModeZone::AFortGameModeZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateZone::StaticClass();
    this->PlayerControllerClass = AFortPlayerControllerZone::StaticClass();
    this->PlayerStateClass = AFortPlayerStateZone::StaticClass();
    this->bStartPlayersAsSpectators = true;
    this->GameModeSessionString = TEXT("FORTPVE");
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->bSpawnAllStuff = false;
    this->bDisableAI = false;
    this->bInitBeaconAtInitGame = true;
    this->OverrideAIDirectorIndex = 0;
    this->ActiveSpawnPad = NULL;
    this->bDisableVoiceChat = false;
    this->AIDirector = NULL;
    this->AIGoalManager = NULL;
    this->EndOfZoneRemainTime = 150;
    this->TaggedActorsManager = NULL;
    this->BuildingOctreeManager = NULL;
    this->bUseAllSocketsInSpawnPad = false;
    this->bAllowSpectateAfterDeath = false;
    this->bForceSpectateAfterDeathRegardlessOfRespawnTime = false;
    this->SpectateAfterDeath_DelayRepeating = 2.00f;
    this->VisibilityManagerClass = AFortVisibilityManager::StaticClass();
    this->bCriticalMissionEligible = true;
    this->XboxSubsystemNames.AddDefaulted(2);
    this->PetManager = NULL;
    this->bAllowEnemyAIWorldItemLootDrops = true;
    this->bAllowEnemyAIItemCacheLootDrops = true;
    this->bAllowContainerItemCacheLootDrops = true;
    this->bTrustXboxPlatformId = false;
    this->AssociatedSubGame = ESubGame::Campaign;
    this->bTryToSpawnWithinStormShield = false;
    this->bSupportOneHitBuildingActorRecycling = false;
    this->bOneHitResourcesGoToOwner = true;
    this->StormWindInactiveMagnitudeScalar = 1.00f;
    this->StormWindActiveMagnitudeScalar = 1.00f;
    this->bEnableLongRangeAutoPickup = false;
    this->LongRangeAutoPickupInterval = 0.50f;
    this->LongRangeAutoPickupRadius = 400.00f;
}

void AFortGameModeZone::SetZoneLootNamedWeightsMapOverride(const TMap<FName, float>& NewOverrideMap) {
}

void AFortGameModeZone::SetSpawnWithinStormShield(bool bSpawnInStormShield) {
}

void AFortGameModeZone::SetPlayerStartLocationOverrides(TArray<FVector> InPlayerStarts, AFortMission* InMission) {
}

void AFortGameModeZone::SetJoinability(bool bMatchJoinable) {
}

void AFortGameModeZone::SetEnemyAIItemCacheLootDrops(bool bValue) {
}

void AFortGameModeZone::SetActiveSpawnPad(ABuildingSMActor* InActiveSpawnPad) {
}

void AFortGameModeZone::ReplicateHealthAndShield() {
}

void AFortGameModeZone::OnMorningReached() {
}

void AFortGameModeZone::OnEveningReached() {
}

bool AFortGameModeZone::IsSpectatingAllowedAfterDeath_Implementation() const {
    return false;
}

bool AFortGameModeZone::IsGameReadyToSelectLoot() const {
    return false;
}

TSubclassOf<UGameplayEffect> AFortGameModeZone::GetTeammateReviveGameplayEffectOverride_Implementation() {
    return NULL;
}

AFortPlayerStartupController* AFortGameModeZone::GetPlayerStartupController() {
    return NULL;
}

void AFortGameModeZone::ClearPlayerStartLocationOverrides() {
}



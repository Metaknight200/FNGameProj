#include "FortAthenaLivingWorldManager.h"
#include "Net/UnrealNetwork.h"

UFortAthenaLivingWorldManager::UFortAthenaLivingWorldManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedGameState = NULL;
    this->CachedWorld = NULL;
    this->CachedConfig = NULL;
    this->CachedSeasonalEventManager = NULL;
    this->EQSHelper = NULL;
}

bool UFortAthenaLivingWorldManager::TrySpawnEvent(FDataTableRowHandle EventEntry, const FTransform SpawnLocation) {
    return false;
}

UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::StartEncounter(const TSoftObjectPtr<UFortAthenaLivingWorldEncounter> EncounterType, const TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders) {
    return NULL;
}

void UFortAthenaLivingWorldManager::RequestEventGeneration() {
}

int32 UFortAthenaLivingWorldManager::QueryEventBudget(FDataTableRowHandle EventEntry, const AActor* SpawnLocation) const {
    return 0;
}

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(AActor* DestroyedActor) {
}

void UFortAthenaLivingWorldManager::OnRep_ActorClassToPreloadOnClient() {
}

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(AFortAthenaPatrolPath* PatrolPath) {
}

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(AActor* PointProvider) {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging() {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents() {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap() {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(AActor* PointProvider) {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int32 ProviderIndex) {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents() {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush() {
}

void UFortAthenaLivingWorldManager::EndEncounter(UFortAthenaLivingWorldEncounterInstance* EncounterInstance) {
}

void UFortAthenaLivingWorldManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaLivingWorldManager, ActorClassToPreloadOnClient);
}



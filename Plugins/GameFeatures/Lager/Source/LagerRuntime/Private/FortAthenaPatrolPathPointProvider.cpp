#include "FortAthenaPatrolPathPointProvider.h"
#include "Components/SceneComponent.h"

AFortAthenaPatrolPathPointProvider::AFortAthenaPatrolPathPointProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->AssociatedPatrolPath = NULL;
    this->bStartEnabled = false;
    this->bSpawnOnPatrolPath = true;
    this->CachedGameState = NULL;
}

void AFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void AFortAthenaPatrolPathPointProvider::EnablePointProvider() {
}

void AFortAthenaPatrolPathPointProvider::DisablePointProvider() {
}



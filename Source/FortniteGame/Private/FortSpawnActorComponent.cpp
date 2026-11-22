#include "FortSpawnActorComponent.h"

UFortSpawnActorComponent::UFortSpawnActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ActorToSpawnClass = NULL;
    this->bAttachSpawnedActorToOwner = true;
}

void UFortSpawnActorComponent::OnPlaylistDataLoaded(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags) {
}



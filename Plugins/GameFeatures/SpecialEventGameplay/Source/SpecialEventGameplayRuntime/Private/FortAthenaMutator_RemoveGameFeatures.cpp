#include "FortAthenaMutator_RemoveGameFeatures.h"

AFortAthenaMutator_RemoveGameFeatures::AFortAthenaMutator_RemoveGameFeatures(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_RemoveGameFeatures::OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags) {
}



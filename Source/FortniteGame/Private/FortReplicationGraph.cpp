#include "FortReplicationGraph.h"

UFortReplicationGraph::UFortReplicationGraph() {
    this->RootGridNode = NULL;
    this->AlwaysRelevantNode = NULL;
    this->LiveSpectatorRelevancyNode = NULL;
    this->PlayerStateLimiterNode = NULL;
    this->ReplayPlayerStateLimiterNode = NULL;
}

void UFortReplicationGraph::OnVehicleDestroyed(AActor* DestroyedVehicle) {
}

void UFortReplicationGraph::OnHighFrequencyPawnDestroyed(AActor* Pawn) {
}

void UFortReplicationGraph::OnGameStatePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}



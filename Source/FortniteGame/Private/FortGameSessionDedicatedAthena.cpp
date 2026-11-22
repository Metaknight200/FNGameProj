#include "FortGameSessionDedicatedAthena.h"

AFortGameSessionDedicatedAthena::AFortGameSessionDedicatedAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDownloadEventsAfterHotfixCheck = true;
    this->ReconnectToMMSDelay = 10.00f;
    this->MaxReconnectToMMSDelay = 300.00f;
    this->MMSVersionCompatability = TEXT("*");
    this->MMSTicketURLServer = TEXT("/api/game/v2/matchmakingservice/ticket/session/`id");
    this->MMSPingInterval = 30.00f;
    this->QueryUserMode = 1;
    this->bAutoConnectToMMS = true;
    this->bEnableMMSBackfill = true;
    this->bDisableBackfillDuringGracefulShutdown = true;
    this->PostBackfillAssignmentUpdateDelay = 1.00f;
    this->bEnableWaitingForMatchAssignmentTimeout = true;
    this->WaitingForMatchAssignmentRestartDelay = 2700.00f;
    this->FullMeshRetryDelay = 10.00f;
    this->MeshNetworkGCTimerRate = 120.00f;
}

void AFortGameSessionDedicatedAthena::HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void AFortGameSessionDedicatedAthena::HandleExitingSpawningStartup() {
}

void AFortGameSessionDedicatedAthena::HandleAllPlaylistLevelsVisible() {
}



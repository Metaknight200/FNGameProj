#include "FortAsyncAction_TeleportAndWaitForLevelStreaming.h"

UFortAsyncAction_TeleportAndWaitForLevelStreaming::UFortAsyncAction_TeleportAndWaitForLevelStreaming() {
    this->PlayerPawn = NULL;
    this->bIgnoreCollision = false;
    this->bIgnoreSupplementalKillVolumeSweep = false;
}

void UFortAsyncAction_TeleportAndWaitForLevelStreaming::OnLevelStreamingComplete() {
}

UFortAsyncAction_TeleportAndWaitForLevelStreaming* UFortAsyncAction_TeleportAndWaitForLevelStreaming::CreateTeleportAndWaitForLevelStreaming(AFortPlayerPawn* InPlayerPawn, const FVector& InTeleportLocation, const FRotator& InTeleportRotation, const bool NewBIgnoreCollision, const bool NewBIgnoreSupplementalKillVolumeSweep) {
    return NULL;
}



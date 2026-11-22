#include "FortBotTeleportInfo.h"

FFortBotTeleportInfo::FFortBotTeleportInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->RotationFrom = FRotator::ZeroRotator;
    this->RotationTo = FRotator::ZeroRotator;
    this->TeleportFrom = FVector::ZeroVector;
    this->TeleportTo = FVector::ZeroVector;
    this->bTeleportSuccess = false;
    this->TeleportReason = ETeleportReason::AgentNotOnNavmesh;
}


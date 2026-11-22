#include "MinigamePlayer.h"

FMinigamePlayer::FMinigamePlayer() {
    // Initialize reflected value fields omitted by the dump.
    this->LocationBeforeMinigameStarted = FVector::ZeroVector;
    this->RotationBeforeMinigameStarted = FRotator::ZeroRotator;
    this->bHasValidResetData = false;
    this->ClassSlotIndex = 0;
    this->LastClassSwitchTime = 0.00f;
    this->TeamBeforeMinigameStarted = 0;
    this->bIsLocationBeforeGameStartedBlocked = false;
    this->bWasSkydivingBeforeMinigameStarted = false;
    this->bWasFlyingBeforeMinigameStarted = false;
    this->bIsTeleportingOrRespawningForGameplay = false;
    this->bIsLocalPlayer = false;
    this->bPreparingForRespawn = false;
    this->ClaimedPlayerStart = NULL;
    this->bIsWaitingForPersistence = false;
}


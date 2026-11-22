#include "FortAthenaBTTask_BotAmbushPlayer.h"

UFortAthenaBTTask_BotAmbushPlayer::UFortAthenaBTTask_BotAmbushPlayer() {
    this->NodeName = TEXT("Crucible Bot Ambush Player");
    this->FacingPrecision = 10.00f;
    this->WeaponCooldown = 1.50f;
    this->bClearBlackboardOnFinished = false;
}



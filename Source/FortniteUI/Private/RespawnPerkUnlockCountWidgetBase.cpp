#include "RespawnPerkUnlockCountWidgetBase.h"

URespawnPerkUnlockCountWidgetBase::URespawnPerkUnlockCountWidgetBase() {
    this->CachedMutator = NULL;
    this->TextBlock_RequiredKills = NULL;
}

void URespawnPerkUnlockCountWidgetBase::UpdateScore() {
}


void URespawnPerkUnlockCountWidgetBase::HandleRequiredKillsForPerkUnlockChanged(int32 KillCount) {
}



#include "IntelState.h"

FIntelState::FIntelState() {
    this->bInRange = false;
    this->TimeRemaining = 0.00f;
    this->ServerEndTime = 0.00f;
    this->ServerGroundTimerEnd = 0.00f;
    this->IntelState = EIntelStateEnum::None;
    this->WinningTeam = 0;
    this->AttackingTeam = 0;
    this->DefendingTeam = 0;
}


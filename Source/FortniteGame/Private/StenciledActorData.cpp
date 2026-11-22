#include "StenciledActorData.h"

FStenciledActorData::FStenciledActorData() {
    this->Duration = 0.00f;
    this->StepTime = 0.00f;
    this->ShareActorWith = EShareActorWith::None;
    this->ShareActorWithMask = 0;
    this->DisplayTeamOverride = 0;
    this->Sound = NULL;
    this->FriendlyStencilIndex = 0;
    this->EnemyStencilIndex = 0;
}


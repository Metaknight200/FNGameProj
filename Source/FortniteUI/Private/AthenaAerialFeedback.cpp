#include "AthenaAerialFeedback.h"

UAthenaAerialFeedback::UAthenaAerialFeedback() {
    this->AirbagItemDefinition = NULL;
    this->KeyBind = NULL;
    this->Text_Feedback = NULL;
}

void UAthenaAerialFeedback::HandleSkydiveLeaderChanged(bool bEnabled, bool bLocal, AFortPlayerState* LeaderPlayerState) {
}

void UAthenaAerialFeedback::HandleKeybindsChanged() {
}

void UAthenaAerialFeedback::HandleBalloonMovementChanged(bool bUsingBalloonMovement) {
}




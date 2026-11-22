#include "EventCinematicPlaybackAction.h"
#include "EFortScriptedActionEnvironment.h"

AEventCinematicPlaybackAction::AEventCinematicPlaybackAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionEnvironment = EFortScriptedActionEnvironment::FrontEnd;
    this->Quest = NULL;
    this->Player = NULL;
}

void AEventCinematicPlaybackAction::HandleVideoEnded() {
}



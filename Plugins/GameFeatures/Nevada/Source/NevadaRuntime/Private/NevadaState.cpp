#include "NevadaState.h"

FNevadaState::FNevadaState() {
    this->CurrentStatus = ENevadaFlightStates::FLIGHT;
    this->LivesRemaining = 0;
    this->bHijackingActive = false;
    this->bPilotBubbleCollisionEnabled = false;
    this->CurrentBatteryCharge = 0.00f;
    this->bCannonEnabled = false;
    this->bTractorBeamEnabled = false;
}


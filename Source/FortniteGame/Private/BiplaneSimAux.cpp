#include "BiplaneSimAux.h"

FBiplaneSimAux::FBiplaneSimAux() {
    this->bIsEngineOn = false;
    this->bIsFlying = false;
    this->bAutoStartEngineInAir = false;
    this->bEngineStartIsBeingHeld = false;
    this->PitchAlphaNoPilot = 0.00f;
    this->TurnAlphaNoPilot = 0.00f;
    this->RollAlphaNoPilot = 0.00f;
    this->AileronRollAlphaStart = 0.00f;
    this->bHadPassengers = false;
    this->NoPassengerStallTimerStart = 0.00f;
    this->StuckTimerStart = 0.00f;
    this->bRollRight = false;
    this->bRollLeft = false;
    this->AileronRollDoubleClickTimerStart = 0.00f;
    this->VehicleFuelPercent = 0.00f;
    this->bIsStallingFromAltitude = false;
}


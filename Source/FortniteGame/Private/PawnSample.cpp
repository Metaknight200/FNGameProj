#include "PawnSample.h"

FPawnSample::FPawnSample() {
    // Initialize reflected value fields omitted by the dump.
    this->Rotation = FRotator::ZeroRotator;
    this->Health = 0.00f;
    this->Shield = 0.00f;
    this->bIsJumpingOrFalling = false;
    this->bIsInVehicle = false;
    this->bIsParachuteOpen = false;
    this->bIsDBNO = false;
    this->bIsDead = false;
    this->bIsSwimming = false;
    this->POITag = 0;
}


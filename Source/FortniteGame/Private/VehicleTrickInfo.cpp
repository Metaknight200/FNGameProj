#include "VehicleTrickInfo.h"

FVehicleTrickInfo::FVehicleTrickInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->FlatForwardVectorAtLaunch = FVector::ZeroVector;
    this->ForwardVectorAtLaunch = FVector::ZeroVector;
    this->LocationAtLaunch = FVector::ZeroVector;
    this->PrevForwardVec = FVector::ZeroVector;
    this->PrevRightVec = FVector::ZeroVector;
    this->PrevUpVec = FVector::ZeroVector;
    this->UpVectorAtLaunch = FVector::ZeroVector;
    this->LastOnGroundTime = 0.00f;
    this->mCreditDisabledTime = 0.00f;
    this->TrickScore = 0;
    this->TrickAxisCount = 0;
    this->AirControlsAlpha = 0.00f;
    this->AirDistance = 0.00f;
    this->AirDistanceSqrd = 0.00f;
    this->AirTime = 0.00f;
    this->AirHeight = 0.00f;
    this->TimeAtLaunch = 0.00f;
    this->PeterPanCount = 0;
    this->StoopingSquirrelCount = 0;
    this->bDidPeterPan = false;
    this->bDidStoopingSquirrel = false;
    this->bInAirTrick = false;
    this->bCreditTrick = false;
    this->bTrickDeactivated = false;
    this->bStuckLanding = false;
    this->bDoingRotationTrick = false;
}


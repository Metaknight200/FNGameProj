#include "FortNevadaVehicleAnimInstance.h"

UFortNevadaVehicleAnimInstance::UFortNevadaVehicleAnimInstance() {
    this->NevadaVehicle = NULL;
    this->bTractorBeam_IsAttached = false;
    this->bTractorBeam_IsCharging = false;
    this->bTractorBeam_IsActive = false;
    this->bTractorBeam_IsInactive = false;
    this->bTractorBeam_IsOn = false;
    this->bTractorBeam_HasTarget = false;
    this->bTractorBeam_ShouldApplyCustomAO = false;
    this->TractorBeam_LookAtPitch = 0.00f;
    this->TractorBeam_LookAtYaw = 0.00f;
    this->LeanLeftRight = 0.00f;
    this->LeanForwardBackward = 0.00f;
    this->LeanValue = 0.00f;
    this->PreviousLeanValue = 0.00f;
    this->VelocityZValue = 0.00f;
    this->LeanDelta = 0.00f;
    this->bTurnAgain = false;
    this->bHadDriver = false;
    this->bJustGotDriver = false;
    this->bJustLostDriver = false;
    this->bWasBoosting = false;
    this->bIsBoosting = false;
    this->PreviousBoostCount = 0;
    this->BoostCount = 0;
    this->bIsBoostingAgain = false;
    this->bIsMoving = false;
    this->WingsPlayRate = 0.00f;
    this->TractorBeamAlpha = 0.00f;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->bIsFiringCannon = false;
    this->DistanceFromGround = 0.00f;
    this->DistanceFromGroundLeft = 0.00f;
    this->DistanceFromGroundRight = 0.00f;
    this->bIsLanding = false;
    this->bHasLanded = false;
    this->LandingAlpha = 0.00f;
    this->bNotLandingMode = false;
    this->bHadBattery = false;
    this->bOutOfBattery = false;
    this->bJustGotBattery = false;
    this->bLaunchToDepart = false;
    this->bLaunchToIdle = false;
    this->bIsPartsLanding = false;
    this->TractorBeamSocketName = TEXT("Nevada_Tractor_BeamSocket");
    this->TractorBeamAimCurveName = TEXT("TractorBeamAim");
    this->NevadaVehicleInterruptName = TEXT("Interrupt");
    this->LandingTraceRightName = TEXT("LandingTraceRight");
    this->LandingTraceLeftName = TEXT("LandingTraceLeft");
    this->MaxLeanDeltaInterruptMagnitude = 20.00f;
    this->MinForwardSpeedToBeMoving = 10.00f;
    this->MinForwardSpeedToPlayWings = 20.00f;
    this->MinWingsPlayRate = 1.00f;
    this->MaxWingsPlayRate = 10.00f;
    this->WingsPlayRateInterpSpeed = 3.00f;
    this->LandingGearTraceLength = 2000.00f;
}



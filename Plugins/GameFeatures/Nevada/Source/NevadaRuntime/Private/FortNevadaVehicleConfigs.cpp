#include "FortNevadaVehicleConfigs.h"

UFortNevadaVehicleConfigs::UFortNevadaVehicleConfigs() {
    this->DebaseLaunchspeed = 500.00f;
    this->MaxHeight = 51200.00f;
    this->MinHeight = 512.00f;
    this->OnEnterPitchAlpha = 0.10f;
    this->FallDamageHeightBuffer = 1024.00f;
    this->TurningForce = 200.00f;
    this->ThrustRotationAlpha = 0.25f;
    this->PitchDrag = 1.00f;
    this->YawDrag = 1.00f;
    this->RollDrag = 1.00f;
    this->BoostThrustDuration = 1.00f;
    this->BoostDragDuration = 1.00f;
    this->NumBoostCharges = 3;
    this->BoostChargeDuration = 3.00f;
    this->BoostChargeDelay = 1.00f;
    this->BoostDragFinishSpeed = 1.00f;
    this->TractorBeamRadius = 1.00f;
    this->TractorBeamWithTargetRadius = 750.00f;
    this->TractorBeamShutdownTime = 0.50f;
    this->TractorBeamBreakForceMagnitude = 50000.00f;
    this->VictimPitchDrag = 125.00f;
    this->VictimYawDrag = 250.00f;
    this->VictimRollDrag = 75.00f;
    this->NumReboots = 3;
    this->MaxCrashingTime = 10.00f;
    this->MaxCrashingScrapingTime = 2.00f;
    this->MaxCrashingTimeSpentNotMoving = 2.00f;
    this->SpeedThresholdForCrashed = 2.00f;
    this->LandingTraceRange = 10000.00f;
    this->DesiredLandingDistance = 512.00f;
    this->LandingDelay_Max = 2.00f;
    this->LandingDelay_Min = 0.10f;
    this->HeightForMinLandingDelay = 100.00f;
    this->HeightForMaxLandingDelay = 1024.00f;
    this->LandingPitchAlphaMax = -0.20f;
    this->LandingPitchAlphaMin = -0.00f;
    this->DriverSeatRotationAnimBlendSpeed = 2.00f;
    this->CrashingDesiredUpLerpFactor = 0.50f;
    this->CrashedLinearDrag = 1.00f;
    this->LandedDragCoef = 20.00f;
    this->LandedDragCoef2 = 0.00f;
    this->LandedMaxDragSpeed = 100.00f;
    this->CrashedAngularDragMultiplier = 1.00f;
    this->BoostFOV = 90.00f;
    this->ExtraTraceInteractRange = 250.00f;
    this->AntiGravityMult = 1.00f;
    this->InitialLiftDuration = 0.25f;
}



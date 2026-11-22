#include "FortVehicleConfigs.h"

UFortVehicleConfigs::UFortVehicleConfigs() {
    this->NumWheelsTouchingGroundForWheelsOnGround = 3;
    this->TimeToIdleBrake = 0.20f;
    this->ChangeDirBrakeDelta = 3.00f;
    this->VehicleSleepCounter = 1.00f;
    this->VehicleMinSecondsBetweenUpdates = 0.07f;
    this->VehicleMinFOV = 80.00f;
    this->VehicleMaxFOV = 100.00f;
    this->VehicleMinFOVSpeed = 30.00f;
    this->VehicleMaxFOVSpeed = 120.00f;
    this->VehicleFOVInterpSpeed = 6.25f;
    this->InteractDistanceScalar = 1.00f;
    this->MinFallDamageHeight = 1200.00f;
    this->MaxFallDamageHeight = 6400.00f;
    this->MinFallDamage = 15.00f;
    this->MaxFallDamage = 600.00f;
    this->PlayerFallDamageMultiplier = 1.00f;
    this->VehicleEjectCooldown = 0.10f;
    this->CameraSpaceForwardDistanceOverride = 0.00f;
    this->PlayerToSocketSweepRadius = 30.00f;
    this->VehicleGravity = -1200.00f;
    this->PlayerGravityMultiplier = 1.00f;
    this->PassengerDamageOnDestruction = 0.00f;
    this->MinFallDamageNormalScale = 0.50f;
    this->DriverExitLaunchScalar = 1.00f;
    this->DriverExitLaunchUpScalar = 1.00f;
    this->DriverExitInAirLaunchScalar = 0.30f;
    this->DriverExitInAirLaunchUpScalar = 800.00f;
    this->PassengerExitLaunchScalar = 1.00f;
    this->PassengerExitLaunchUpScalar = 800.00f;
    this->PassengerExitInAirLaunchScalar = 1.00f;
    this->PassengerExitInAirLaunchUpScalar = 800.00f;
    this->bCanDoTricks = true;
    this->bShouldDriverHaveReticle = false;
    this->bSupportsWraps = true;
    this->ExitVehicleCoolDown = 0.00f;
    this->bShouldProtectFromFireDamage = true;
    this->bInheritScale = false;
    this->HoldToExitTime = 0.00f;
    this->ForceExitZOffset = 0.00f;
    this->bBlockBuilding = false;
    this->bPreferDriverSeatWhenEmpty = true;
    this->FireDamagePerSecond = 1.00f;
    this->FireDamageTickRate = 0.10f;
    this->bCanBeOnFire = false;
    this->LeakFuelProjectileTemplate = NULL;
}



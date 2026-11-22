#include "FortMeatballVehicleConfigs.h"

UFortMeatballVehicleConfigs::UFortMeatballVehicleConfigs() {
    this->WaterSteerRollFactor = 1.00f;
    this->InnerTurnPontoonOffsetMultiplier = 1.00f;
    this->OuterTurnPontoonOffsetMultiplier = 3.00f;
    this->MinForwardSpeedToBankOnTurn = 10.00f;
    this->BoostMinPushForce = 0.00f;
    this->BoostTopSpeedForceMultiplier = 1.50f;
    this->BoostTopSpeedMultiplier = 1.50f;
    this->MaxPontoonOffsetPerSecond = 300.00f;
    this->LandTopSpeedMultiplier = 1.00f;
    this->LandPushForceMultiplier = 1.00f;
    this->MinPushPontoonsForWaterDriving = 0;
    this->MaxWaterPitchAngle = 30.00f;
    this->MinForwardSpeedToPitch = 5.00f;
    this->MinForwardSpeedForMaxPitch = 20.00f;
    this->MaxForwardSpeedForMaxPitch = 30.00f;
    this->MaxFowrardSpeedPitchFactor = 0.30f;
    this->BoostMaxForwardSpeedPitchFactor = 0.80f;
    this->FrontLateralFrictionFactor = 1.00f;
    this->RearLateralFrictionFactor = 0.50f;
    this->LandFrontLateralFrictionFactor = 1.00f;
    this->LandRearLateralFrictionFactor = 1.00f;
    this->SeatOffsetScaleX = 20.00f;
    this->SeatOffsetScaleY = 5.00f;
    this->SeatYawAngleMax = 10.00f;
    this->SeatPitchAngleMax = 10.00f;
    this->BoostSteeringMultiplier = 0.50f;
    this->BoostSteeringMultiplierRampTime = 0.70f;
    this->LandSteeringMultiplier = 0.20f;
    this->LandMinSpeedSteeringAngle = 180.00f;
    this->LandMaxSpeedSteeringAngle = 25.00f;
    this->DragCoefficientNoAccel = 15.00f;
    this->DragCoefficient2NoAccel = 0.00f;
    this->MinSteerAlphaForWaterFriction = 0.05f;
    this->TurnInPlaceYawStiff = 20.00f;
    this->TurnInPlaceYawDamp = 10.00f;
    this->MaxSteerRollAngle = 45.00f;
    this->MaxTurnInPlaceYawAngle = 90.00f;
    this->UprightSpringSteerStrength = 10.00f;
    this->TurnInPlaceYawStrength = 3.00f;
    this->MaxSpeedForTurnInPlaceKmH = 5.00f;
    this->BlendOutExtraSpeedTurnInPlaceKmH = 5.00f;
    this->MaxPitchForCameraInPlaceSteer = 75.00f;
    this->SpringLengthMutliplierWater = 2.00f;
}



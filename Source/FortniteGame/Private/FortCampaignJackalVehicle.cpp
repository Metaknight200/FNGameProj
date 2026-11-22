#include "FortCampaignJackalVehicle.h"

AFortCampaignJackalVehicle::AFortCampaignJackalVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoostTimers.AddDefaulted(1);
    this->bVehicleLeftAnalogStrafing = true;
    this->VehicleLeftAnalogStrafingMultiplier = 45.00f;
    this->MinSpeedToWallRun = 10.00f;
    this->AggroRangeOverride = 2048.00f;
}

void AFortCampaignJackalVehicle::HandleOnPlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}



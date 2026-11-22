#include "FortAthenaSKPushCannon.h"
#include "Net/UnrealNetwork.h"

AFortAthenaSKPushCannon::AFortAthenaSKPushCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VTDMode = 1;
    this->MovementParam = 0.00f;
    this->BatteryParam = 0.00f;
    this->RumbleIntensity = 0.00f;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->bPlayerTorquingRepped = false;
    this->bPlayerTorquing = false;
    this->CannonBoneIdx = -1;
    this->PushCannonNoSleepPhysicsMaterial = NULL;
    this->PushCannonPhysicsMaterial = NULL;
}


void AFortAthenaSKPushCannon::ServerSetPassengerTorquing_Implementation(bool bSetTo) {
}
bool AFortAthenaSKPushCannon::ServerSetPassengerTorquing_Validate(bool bSetTo) {
    return true;
}





void AFortAthenaSKPushCannon::MultiCastPushCannonLaunchedPlayer_Implementation() {
}

FRotator AFortAthenaSKPushCannon::GetCurrentWorldAimOrientationCorrected() const {
    return FRotator{};
}

void AFortAthenaSKPushCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaSKPushCannon, bPlayerTorquingRepped);
}



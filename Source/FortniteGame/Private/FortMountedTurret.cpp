#include "FortMountedTurret.h"
#include "Net/UnrealNetwork.h"

AFortMountedTurret::AFortMountedTurret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamIndex = 0;
    this->bConstrainVerticalRotationOnly = true;
    this->PedalScaler = 0.00f;
    this->MovementParam = 0.00f;
    this->BatteryParam = 0.00f;
    this->RumbleIntensity = 0.00f;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->LocalPlayerPawn = NULL;
    this->FortMountedTurretConfigsClass = NULL;
    this->FortMountedTurretConfigs = NULL;
}

void AFortMountedTurret::SetOverheating(bool bInIsOverheating) {
}

void AFortMountedTurret::SetManned(bool bInIsManned) {
}

void AFortMountedTurret::OnRep_TeamIndex(uint8 OldVal) {
}


void AFortMountedTurret::NativeUpdateOverheatCosmetics(const AFortPlayerPawn* InDriverPawn, float InReplicateOverheatOf20, FRotator& OutTurretRotation) {
}

float AFortMountedTurret::NativeCurrentOverheatScalar(float InReplicateOverheatOf20) const {
    return 0.0f;
}

bool AFortMountedTurret::IsLocalPlayerRiding() const {
    return false;
}

void AFortMountedTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMountedTurret, TeamIndex);
}



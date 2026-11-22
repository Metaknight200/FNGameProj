#include "FortVehicleSeatWeaponComponent.h"
#include "Net/UnrealNetwork.h"

UFortVehicleSeatWeaponComponent::UFortVehicleSeatWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveSeatIdx = -1;
    this->CachedWeapon = NULL;
    this->CachedWeaponDef = NULL;
    this->CachedOverheatMax = 0.00f;
    this->CachedOverheatValue = 0.00f;
    this->OverheatValueRepped = 0.00f;
    this->bWeaponEquipped = false;
    this->bUseVehicleOrientationForShootingCone = false;
    this->bControlledByMultipleSeats = false;
    this->ActorBase = NULL;
    this->bReadyToSleep = true;
    this->ShotsFired = 0;
    this->bWeaponOverheatDataHasBeenCached = false;
    this->bSaveAndRestoreWeaponData = false;
    this->WeaponSklMeshComponent = NULL;
    this->AttachmentAngleOffsetYaw = 0.00f;
    this->bIsStandaloneComponent = false;
}

void UFortVehicleSeatWeaponComponent::OnRep_ShotsFired() {
}

void UFortVehicleSeatWeaponComponent::OnRep_OverheatValueRepped() {
}


AActor* UFortVehicleSeatWeaponComponent::GetVehicle() const {
    return NULL;
}

float UFortVehicleSeatWeaponComponent::GetOverheatScaler() {
    return 0.0f;
}

float UFortVehicleSeatWeaponComponent::GetOverheatingMaxValue() const {
    return 0.0f;
}

float UFortVehicleSeatWeaponComponent::GetCurrentOverheatValue() {
    return 0.0f;
}

void UFortVehicleSeatWeaponComponent::EquipVehicleWeapon(AFortPawn* FortPawn, FWeaponSeatDefinition& WeaponSeatDefinition, int32 ItemLevel) {
}

void UFortVehicleSeatWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, OverheatValueRepped);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, bWeaponEquipped);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, ActorBase);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, ShotsFired);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, bWeaponOverheatDataHasBeenCached);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, CachedWeaponOverheatData);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, CachedWeaponState);
}



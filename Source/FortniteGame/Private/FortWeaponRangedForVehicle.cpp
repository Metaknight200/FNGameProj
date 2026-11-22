#include "FortWeaponRangedForVehicle.h"
#include "Net/UnrealNetwork.h"

AFortWeaponRangedForVehicle::AFortWeaponRangedForVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceAcceptingDecals.AddDefaulted(5);
    this->CachedWeaponMeshCompOnVehicle = NULL;
}

void AFortWeaponRangedForVehicle::OnRep_MountedWeaponInfoRepped() {
}


void AFortWeaponRangedForVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRangedForVehicle, MountedWeaponInfoRepped);
}



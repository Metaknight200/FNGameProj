#include "FortWeaponRangedDualForVehicle.h"
#include "Net/UnrealNetwork.h"

AFortWeaponRangedDualForVehicle::AFortWeaponRangedDualForVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceAcceptingDecals.AddDefaulted(5);
}

void AFortWeaponRangedDualForVehicle::OnRep_MountedWeaponInfoRepped() {
}


void AFortWeaponRangedDualForVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRangedDualForVehicle, MountedWeaponInfoRepped);
}



#include "FortWeaponFxComponent_ChargeAimLocation.h"
#include "Net/UnrealNetwork.h"

UFortWeaponFxComponent_ChargeAimLocation::UFortWeaponFxComponent_ChargeAimLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AimSmoothingSpeed = 0.00f;
}

void UFortWeaponFxComponent_ChargeAimLocation::SetReplicatedAimOffset(FVector AimOffset) {
}

void UFortWeaponFxComponent_ChargeAimLocation::GetCachedDamageStartAndAim(FVector& OutDamageStartLocation, FVector& OutAimDirection) const {
}

void UFortWeaponFxComponent_ChargeAimLocation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortWeaponFxComponent_ChargeAimLocation, ReplicatedAimOffset);
}



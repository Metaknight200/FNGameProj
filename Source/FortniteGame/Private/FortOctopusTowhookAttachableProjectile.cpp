#include "FortOctopusTowhookAttachableProjectile.h"
#include "Net/UnrealNetwork.h"

AFortOctopusTowhookAttachableProjectile::AFortOctopusTowhookAttachableProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RopeAttachSocketName = TEXT("RopeAttach");
    this->CollisionProfileNameOverride = TEXT("FortProjectileHitAllPawns");
    this->OwningVehicle = NULL;
}

FVector AFortOctopusTowhookAttachableProjectile::GetRopeAttachLocation() const {
    return FVector{};
}

void AFortOctopusTowhookAttachableProjectile::DestroyProjectile() {
}

void AFortOctopusTowhookAttachableProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortOctopusTowhookAttachableProjectile, OwningVehicle);
}



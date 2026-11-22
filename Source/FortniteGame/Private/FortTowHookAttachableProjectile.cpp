#include "FortTowHookAttachableProjectile.h"
#include "Net/UnrealNetwork.h"

AFortTowHookAttachableProjectile::AFortTowHookAttachableProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RopeAttachSocketName = TEXT("RopeAttach");
    this->CollisionProfileNameOverride = TEXT("FortProjectileHitAllPawns");
    this->OwningTowHook = NULL;
}

FVector AFortTowHookAttachableProjectile::GetRopeAttachLocation() const {
    return FVector{};
}

void AFortTowHookAttachableProjectile::DestroyProjectile() {
}

void AFortTowHookAttachableProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTowHookAttachableProjectile, OwningTowHook);
}



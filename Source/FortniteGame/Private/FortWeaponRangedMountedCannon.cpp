#include "FortWeaponRangedMountedCannon.h"

AFortWeaponRangedMountedCannon::AFortWeaponRangedMountedCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceAcceptingDecals.AddDefaulted(5);
}

void AFortWeaponRangedMountedCannon::ServerFireActorInCannon_Implementation(const FVector LaunchDir) {
}
bool AFortWeaponRangedMountedCannon::ServerFireActorInCannon_Validate(const FVector LaunchDir) {
    return true;
}



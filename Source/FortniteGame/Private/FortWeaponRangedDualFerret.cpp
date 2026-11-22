#include "FortWeaponRangedDualFerret.h"

AFortWeaponRangedDualFerret::AFortWeaponRangedDualFerret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceAcceptingDecals.AddDefaulted(5);
}

AFortAthenaFerretVehicle* AFortWeaponRangedDualFerret::GetCachedFerretVehicle() {
    return NULL;
}



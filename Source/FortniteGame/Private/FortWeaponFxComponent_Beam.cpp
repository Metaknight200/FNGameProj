#include "FortWeaponFxComponent_Beam.h"

UFortWeaponFxComponent_Beam::UFortWeaponFxComponent_Beam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachBeamToMuzzle = true;
    this->bUseBeamSmoothing = true;
    this->bSpawnImpactFXAtInterpedBeamEndpoints = true;
    this->ImpactFxPerSecond = 15.00f;
}



#include "FortTrapGrenadeProjectile.h"
#include "Net/UnrealNetwork.h"

AFortTrapGrenadeProjectile::AFortTrapGrenadeProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileDecoTool = NULL;
    this->ProjectileDecoHelper = NULL;
    this->TrapDefinition = NULL;
}

void AFortTrapGrenadeProjectile::OnRep_DecoTool() {
}

void AFortTrapGrenadeProjectile::InitializeProjectileDecoHelperAndTool() {
}

UFortContextTrapItemDefinition* AFortTrapGrenadeProjectile::GetTrapDefinition() {
    return TrapDefinition;
}

void AFortTrapGrenadeProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTrapGrenadeProjectile, ProjectileDecoTool);
}



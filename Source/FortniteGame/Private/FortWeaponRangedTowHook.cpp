#include "FortWeaponRangedTowHook.h"
#include "Net/UnrealNetwork.h"

AFortWeaponRangedTowHook::AFortWeaponRangedTowHook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceAcceptingDecals.AddDefaulted(5);
    this->TowHook = NULL;
}

void AFortWeaponRangedTowHook::OnRep_TowHook() {
}

void AFortWeaponRangedTowHook::DetachActorsFromTowHook() {
}

void AFortWeaponRangedTowHook::AttachToTowHook(AActor* ActorToAttach) {
}


void AFortWeaponRangedTowHook::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRangedTowHook, TowHook);
}



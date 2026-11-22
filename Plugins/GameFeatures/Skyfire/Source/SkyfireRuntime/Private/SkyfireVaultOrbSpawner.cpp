#include "SkyfireVaultOrbSpawner.h"
#include "Net/UnrealNetwork.h"

ASkyfireVaultOrbSpawner::ASkyfireVaultOrbSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->VaultOrbClass = NULL;
    this->MaximumPlayersAllowedInMothership = 0;
    this->CachedSkyfireMutator = NULL;
    this->bHasSpawnedInitialOrbs = false;
}

void ASkyfireVaultOrbSpawner::SpawnInitialOrbs() {
}

void ASkyfireVaultOrbSpawner::PerformOrbSpawnCheck() {
}

void ASkyfireVaultOrbSpawner::OnSkyfirePhaseChanged(const ESkyfirePhase NewPhase) {
}

void ASkyfireVaultOrbSpawner::OnRep_HasSpawnedInitialOrbs() {
}

void ASkyfireVaultOrbSpawner::OnOrbPickedUp(const AActor* Orb) {
}

void ASkyfireVaultOrbSpawner::HandleMutatorAttachedToGamestate(AFortGameplayMutator* AttachedMutator) {
}



void ASkyfireVaultOrbSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASkyfireVaultOrbSpawner, bHasSpawnedInitialOrbs);
}



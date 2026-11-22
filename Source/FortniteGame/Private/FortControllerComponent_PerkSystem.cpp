#include "FortControllerComponent_PerkSystem.h"
#include "Net/UnrealNetwork.h"

UFortControllerComponent_PerkSystem::UFortControllerComponent_PerkSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ServerTimeToRelease = -1.00f;
    this->RerollCount = 1;
    this->PerkSelection.AddDefaulted(3);
}

void UFortControllerComponent_PerkSystem::OnRep_SpyTechArray() {
}

void UFortControllerComponent_PerkSystem::OnRep_ServerTimeToRelease() {
}

void UFortControllerComponent_PerkSystem::OnRep_RerollCount() {
}

void UFortControllerComponent_PerkSystem::OnRep_PerkSelection() {
}

void UFortControllerComponent_PerkSystem::OnRep_MutatorData() {
}

void UFortControllerComponent_PerkSystem::OnRep_AllSelectedPerks() {
}

void UFortControllerComponent_PerkSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_PerkSystem, ServerTimeToRelease);
    DOREPLIFETIME(UFortControllerComponent_PerkSystem, RerollCount);
    DOREPLIFETIME(UFortControllerComponent_PerkSystem, AllSelectedPerks);
    DOREPLIFETIME(UFortControllerComponent_PerkSystem, PerkSelection);
    DOREPLIFETIME(UFortControllerComponent_PerkSystem, SpyTechArray);
    DOREPLIFETIME(UFortControllerComponent_PerkSystem, MutatorData);
    DOREPLIFETIME(UFortControllerComponent_PerkSystem, CachedFactionTag);
}



#include "FortAthenaMutator_LootChoice.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_LootChoice::AFortAthenaMutator_LootChoice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->LootSelection = ECustomLootSelection::Default;
    this->bUsingExperimentalTables = true;
}

void AFortAthenaMutator_LootChoice::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_LootChoice, LootSelection);
    DOREPLIFETIME(AFortAthenaMutator_LootChoice, bUsingExperimentalTables);
}



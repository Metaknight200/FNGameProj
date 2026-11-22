#include "FortAthenaMutator_AllowSpectateOtherTeams.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_AllowSpectateOtherTeams::AFortAthenaMutator_AllowSpectateOtherTeams(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameState = true;
    this->bAllowSpectateOtherTeams = true;
}

void AFortAthenaMutator_AllowSpectateOtherTeams::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AllowSpectateOtherTeams, bAllowSpectateOtherTeams);
}



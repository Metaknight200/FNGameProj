#include "FortAthenaMutator_MarkerUtilities.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_MarkerUtilities::AFortAthenaMutator_MarkerUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->StencilName = TEXT("RedOverlayID");
}

void AFortAthenaMutator_MarkerUtilities::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MarkerUtilities, ReplicatedTeamPlacements);
}



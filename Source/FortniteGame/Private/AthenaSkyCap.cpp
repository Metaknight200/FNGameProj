#include "AthenaSkyCap.h"
#include "Net/UnrealNetwork.h"

AAthenaSkyCap::AAthenaSkyCap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SkyCapState = ESkyCapState::Hidden;
}


void AAthenaSkyCap::OnStopMovement(const FHitResult& ImpactResult, float Time) {
}

void AAthenaSkyCap::OnRep_SkyCapState() {
}

void AAthenaSkyCap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaSkyCap, SkyCapState);
}



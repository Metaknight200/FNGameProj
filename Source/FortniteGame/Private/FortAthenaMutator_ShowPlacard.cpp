#include "FortAthenaMutator_ShowPlacard.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_ShowPlacard::AFortAthenaMutator_ShowPlacard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameState = true;
    this->ShowPlacardPhase = EShowPlacardPhase::None;
    this->WaitBeforeInitialFadeOutDuration = 0.50f;
    this->FadeDuration = 0.50f;
    this->ShowPlacardDuration = 11.00f;
    this->ServerWaitsOnBlackScreenDuration = 0.50f;
}

void AFortAthenaMutator_ShowPlacard::OnRep_ShowPlacardPhase() {
}

void AFortAthenaMutator_ShowPlacard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_ShowPlacard, ShowPlacardPhase);
}



#include "FortAthenaMutator_CustomStormMovement.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_CustomStormMovement::AFortAthenaMutator_CustomStormMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->PhaseProgressCurve = NULL;
    this->SafeZoneRouteIndex = -1;
}

void AFortAthenaMutator_CustomStormMovement::OnRep_SafeZoneRouteIndex() {
}

FSafeZoneRoute AFortAthenaMutator_CustomStormMovement::GetSafeZoneRoute(const FString& ContextString) const {
    return FSafeZoneRoute{};
}

void AFortAthenaMutator_CustomStormMovement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_CustomStormMovement, SafeZoneRoutes);
    DOREPLIFETIME(AFortAthenaMutator_CustomStormMovement, SafeZoneRouteIndex);
}



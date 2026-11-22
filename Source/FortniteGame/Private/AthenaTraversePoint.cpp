#include "AthenaTraversePoint.h"
#include "Net/UnrealNetwork.h"

AAthenaTraversePoint::AAthenaTraversePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldTeleportToGround = true;
    this->CurrentState = ETraversePointState::None;
}

void AAthenaTraversePoint::OnRep_CurrentState() {
}

void AAthenaTraversePoint::OnNewState_TouchedByPlayer_Server() {
}


void AAthenaTraversePoint::OnNewState_Hidden_Server() {
}


void AAthenaTraversePoint::OnNewState_Finished_Server() {
}


void AAthenaTraversePoint::OnNewState_Active_Server() {
}


void AAthenaTraversePoint::OnImpactedByPlayer(AActor* PlayerActor) {
}

void AAthenaTraversePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaTraversePoint, CurrentState);
}



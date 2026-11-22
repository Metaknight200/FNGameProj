#include "FortAthenaMutator_Chrome.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Chrome::AFortAthenaMutator_Chrome(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraversePointClass = NULL;
    this->FuelSettingGE = NULL;
    this->TeleportMutator = NULL;
    this->FinishTraversePoint = NULL;
    this->bRaceStarted = false;
}

void AFortAthenaMutator_Chrome::OnTraversePointTouched(AAthenaTraversePoint* PointActor, AFortPlayerStateAthena* TouchingPlayer) {
}

void AFortAthenaMutator_Chrome::OnRep_RaceStarted() {
}

void AFortAthenaMutator_Chrome::OnRep_FinishTraversePoint() {
}

void AFortAthenaMutator_Chrome::HandleTeleportComplete() {
}

void AFortAthenaMutator_Chrome::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Chrome, FinishTraversePoint);
    DOREPLIFETIME(AFortAthenaMutator_Chrome, bRaceStarted);
}


